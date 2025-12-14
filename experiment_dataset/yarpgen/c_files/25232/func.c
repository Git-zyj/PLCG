/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25232
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~((+(((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
        var_16 = (((((!(arr_1 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((unsigned int) var_13)))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned short) min(((signed char)35), (((/* implicit */signed char) arr_1 [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) arr_7 [(unsigned short)10]))))))) > (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))))))));
                arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) 2097151U)) + (-8437461894427460979LL)));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15724019207910714274ULL)));
            }
        } 
    } 
}

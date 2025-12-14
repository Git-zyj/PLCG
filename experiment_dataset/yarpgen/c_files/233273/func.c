/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233273
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
    var_13 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) (unsigned short)34922)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))) : (var_3))) + (var_1))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), (arr_3 [(signed char)11])))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34943))) : (arr_2 [i_0]))))));
                var_14 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)30593)) : (((/* implicit */int) (_Bool)1)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_9))))) <= (arr_9 [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_4 [i_2] [8U]))))));
        arr_10 [i_2] = ((/* implicit */signed char) arr_9 [i_2]);
    }
    var_16 &= max((((/* implicit */unsigned int) var_0)), (min((((var_3) >> (((((/* implicit */int) (unsigned char)255)) - (228))))), (((/* implicit */unsigned int) ((signed char) var_11))))));
}

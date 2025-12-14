/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20650
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) max((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)44190))))) || (((/* implicit */_Bool) ((2775480987447068173LL) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)24669)), (((unsigned int) max((var_2), (((/* implicit */short) (unsigned char)127)))))));
                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (+(((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 2])) & (((12ULL) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775798LL))) + (39LL))))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (unsigned char)89);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42978
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 6; i_0 += 3) 
    {
        arr_2 [i_0 - 4] [i_0] = ((/* implicit */unsigned char) var_1);
        arr_3 [5U] [i_0 + 4] = ((/* implicit */_Bool) var_5);
        var_13 = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 3; i_1 < 17; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((min((var_9), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-16700))))))), (((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_2])))))));
            var_15 = ((/* implicit */unsigned short) arr_8 [i_1] [i_1]);
            var_16 = ((/* implicit */long long int) arr_7 [i_1 - 3] [i_2] [i_2]);
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_4 [i_1] [i_2]))));
        }
        var_18 = ((/* implicit */long long int) arr_8 [i_1] [i_1]);
        var_19 ^= 1825361159;
        var_20 = ((/* implicit */signed char) var_3);
    }
    var_21 |= ((/* implicit */int) 3324512756U);
}

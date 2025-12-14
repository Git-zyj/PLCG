/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227164
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
    var_14 ^= ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((int) var_11)) <= (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) <= ((-(((/* implicit */int) arr_0 [(signed char)2] [(signed char)9]))))))))))));
                var_16 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) (short)-256)) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) <= (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_2 [i_1]))));
                var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) max((arr_1 [i_1 - 2] [i_1 + 2]), (((/* implicit */short) (signed char)(-127 - 1)))))) : ((+(((/* implicit */int) (unsigned char)2))))));
                var_19 *= ((/* implicit */short) ((((((/* implicit */int) arr_4 [(short)4] [(short)4])) <= (((/* implicit */int) arr_4 [i_0] [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_10)))))));
}

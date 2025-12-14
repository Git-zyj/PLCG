/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3505
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
    var_15 = max((((/* implicit */unsigned int) -1)), (836974341U));
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (((unsigned int) 1642360688U)))) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (short)-32755);
                arr_7 [i_0] [i_1 + 1] [(unsigned char)3] = ((/* implicit */signed char) arr_4 [i_0] [i_1 + 1]);
                arr_8 [i_0] = (!(((/* implicit */_Bool) var_14)));
                var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)1]))) ^ ((-(max((3457992955U), (836974340U))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (((-((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))))) >= (((((/* implicit */int) var_3)) << (((var_10) - (1579184331U)))))));
}

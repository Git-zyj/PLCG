/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (1 ? ((var_6 << (((var_10 + 126) - 46)))) : var_6);
                var_18 = 3971;
                var_19 &= ((var_3 * ((var_16 ? (((arr_2 [6]) ? var_0 : (arr_2 [13]))) : ((((var_1 || (arr_2 [1])))))))));
                var_20 &= (((max(27712, var_11)) << ((((arr_2 [i_1]) <= ((max((arr_1 [1]), var_12))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [14] [1] [i_1] [3] = ((((!((max((arr_9 [12] [i_1] [5] [10] [i_1] [14]), (arr_10 [i_1])))))) ? (max((~var_4), (~var_0))) : -20211));
                            var_21 = (((arr_4 [i_3 + 1] [i_1] [15]) ? (((~var_0) ? (((arr_6 [i_1] [i_1]) % -1237624483307308059)) : ((var_10 ? var_11 : (arr_4 [8] [i_1] [13]))))) : (arr_4 [8] [i_1] [1])));
                            var_22 = ((((max((arr_0 [12] [14]), var_11)) / ((-(arr_6 [i_1] [14]))))));
                            var_23 &= (min(var_11, (((var_2 || (arr_0 [i_2] [i_3 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    var_24 &= var_14;
    var_25 = var_16;
    var_26 = (~var_8);
    #pragma endscop
}

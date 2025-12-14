/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-1703052981 ? var_3 : var_1);
    var_21 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = (((min((arr_10 [i_0] [i_0] [i_0 + 1] [i_3]), (arr_10 [i_0] [i_1] [i_0 + 1] [1])))) ? ((1 ? 1 : 1073740800)) : -262360633);
                            var_22 = (-262360629 ? (max(262360632, 262360629)) : (arr_8 [i_0] [i_0 + 1]));
                            arr_13 [i_3] [1] [i_2] [i_1] [i_0] = (((arr_11 [i_0] [i_0 + 1] [14] [i_0] [i_0 + 1] [i_0 + 1]) ? ((max((arr_4 [i_0 + 1] [i_0 + 1]), 1))) : (arr_11 [i_0] [8] [16] [14] [i_0 + 1] [i_2])));
                            var_23 += 1753618033;
                            var_24 = (((((arr_1 [i_0 + 1]) ? 1 : (arr_1 [i_0 + 1])))) ? ((-2147483644 ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_8 [i_0 + 1] [i_0 + 1]))) : (min((arr_3 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 + 1]))));
                        }
                    }
                }
                var_25 = (max(var_25, (arr_4 [i_0] [1])));
            }
        }
    }
    var_26 = (min(var_26, var_16));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (max((!26771), (max(-8780114526307011528, -26771))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 |= ((!((((max(-26789, var_4)) - -498632142)))));
                            var_21 = (max(var_21, (-2147483647 - 1)));
                            arr_9 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = ((!(((~(min(var_9, 0)))))));
                            var_22 = 1289934141;
                        }
                    }
                }
            }
        }
    }
    var_23 = (min((min(((46 ? 1421371243 : -1458703820)), -26772)), (!-29545)));
    var_24 = ((~(~612738243)));
    var_25 = ((var_0 ? (((((126 ? var_14 : 612738251))) * (max(5150911203165975202, -32048)))) : (var_12 * var_2)));
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                {
                    arr_18 [i_5] [i_5] [i_5] = (((((~(arr_14 [i_4 - 3] [i_5 + 2])))) ? (((1707585149 == -2147483641) ? (arr_6 [i_4]) : (arr_7 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_5 + 3] [i_4 - 2]))) : ((((((6629 ? -8304 : -32006))) ? (max(var_3, var_11)) : (arr_1 [14]))))));
                    arr_19 [i_4] [i_4] [i_4] [i_6] |= ((+(((arr_16 [i_5] [i_4 + 1] [i_4 + 1]) ? 0 : (min((arr_5 [i_4] [12]), -1373510375))))));
                }
            }
        }
    }
    #pragma endscop
}

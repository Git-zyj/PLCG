/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [15] [i_2] [i_1] [i_0] &= var_7;
                    var_12 = (((((var_1 ? var_6 : (arr_4 [i_1] [i_2])))) ? (~22016) : (~10044)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = ((((arr_11 [i_3 + 1] [i_3] [15] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]) ? var_6 : var_9)));
                                var_14 *= (arr_6 [i_0] [i_1] [i_2] [7]);
                                var_15 = ((((max(var_3, (~var_6)))) ? ((((((max(var_6, var_4))) && (8191 && var_9))))) : ((175 ? ((22028 ? (arr_10 [6] [i_3 - 1] [i_2] [i_0]) : var_11)) : (arr_1 [i_3 + 1])))));
                                var_16 = ((+(min((~var_11), (((arr_11 [i_0] [i_4] [i_2] [0] [i_4] [i_4] [10]) ? (arr_3 [i_0] [i_1] [i_2]) : -1181310209))))));
                                var_17 = ((((~0) | ((var_5 ? 33001 : var_4)))));
                            }
                        }
                    }
                    var_18 &= (arr_5 [11] [i_1] [i_1]);
                }
            }
        }
    }
    var_19 = (~-19760);
    #pragma endscop
}

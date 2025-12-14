/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_2 ? (~1) : ((((min(var_8, 3))) ? ((3 ? var_7 : var_3)) : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [12] [i_0 + 1] [i_1] = 14;
                arr_6 [i_1] = ((!((min((~var_3), ((-4 ? 3 : 4)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_11 = ((min((((arr_11 [i_3] [i_2] [1] [i_0]) ? var_2 : (arr_7 [i_0] [i_0] [i_0 - 2] [i_1]))), (arr_0 [i_1 - 3] [i_1 - 3]))));
                            var_12 += (((((((arr_4 [i_0]) <= 4)))) <= 13));
                            arr_12 [i_1] = ((!((((var_5 ? 13 : var_1))))));
                            arr_13 [i_0] [i_3] [i_1] [i_3 - 2] [i_2] [i_3] = ((((13 ? (((var_2 ? 3 : -18))) : (arr_11 [i_0 - 1] [i_0 + 1] [0] [i_0]))) & (((((((arr_1 [i_0] [16]) ? var_1 : (arr_1 [i_2] [i_3 + 1])))) - -3)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] = (min(((((min(-23, 37))) ? (!-23) : (max(var_2, (arr_4 [i_1]))))), (((((9 ? -4 : (arr_8 [i_1 + 1] [i_0 - 1]))) <= (arr_8 [i_0] [i_1 - 2]))))));
                                var_13 += ((((!((max(13, (arr_11 [i_1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))))) ? 3 : ((((arr_17 [i_1] [i_5] [i_6 - 2]) ? -17 : (arr_14 [i_5] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
                var_14 = (max(-23, 18));
            }
        }
    }
    var_15 = (!var_2);
    var_16 = (((!-4) ? var_5 : (min(17, var_4))));
    var_17 += (~3);
    #pragma endscop
}

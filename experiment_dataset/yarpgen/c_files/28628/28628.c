/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_10 = ((!(((-var_2 ? -127 : ((min(var_1, var_0))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] = (((((1096199994 ? 1096199994 : -1096199995))) || (((144 ? 1096199985 : 1)))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = (((~-1096199995) & (~var_4)));
                                var_11 = var_9;
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_0] = (min((((var_8 ? var_5 : var_1))), ((3247806393 ? var_4 : var_4))));
                }
                arr_16 [i_0] = ((!((((var_9 * var_8) ? var_6 : ((var_3 ? var_6 : var_0)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_12 = var_0;
                arr_23 [i_5] [i_5] = ((((max(2, 1096199997) - 0))));
                arr_24 [i_5] [i_6] [12] = 7589;
                var_13 = ((var_3 < (((((var_8 ? var_7 : var_7))) ? var_1 : 18446744073709551615))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (arr_1 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (arr_1 [i_0])));
                            var_13 = (max(var_13, ((max(((((var_4 ^ 48095) <= (!54)))), (13 - var_4))))));
                            var_14 -= (!var_5);
                            var_15 = (-(min((2118417110 / var_8), 7329422688449896962)));
                        }
                    }
                }
                var_16 ^= (arr_4 [i_0] [i_1]);
                var_17 = var_1;
                var_18 = (((~((var_0 ? -10 : 31025)))));
            }
        }
    }
    var_19 = var_2;
    var_20 = var_0;
    var_21 = (max(var_6, var_3));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            {
                var_22 = -13;

                /* vectorizable */
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_23 = (max(var_23, var_1));
                                var_24 = (arr_18 [i_4] [i_6 - 1] [i_6 - 1] [i_7 + 2] [i_8 - 1]);
                            }
                        }
                    }
                    var_25 &= -360645539428605553;
                    arr_21 [i_4] [i_4] [i_6] [i_4] = (arr_18 [i_5 + 2] [i_5 + 1] [i_6 - 3] [14] [i_6]);
                }
            }
        }
    }
    #pragma endscop
}

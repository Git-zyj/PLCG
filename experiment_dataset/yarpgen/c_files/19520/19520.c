/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(13842972209883669801, 8551200224602458867)) - ((((max(var_4, var_2))) ? var_0 : (4603771863825881799 - 13842972209883669814)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0 - 3] [i_1] = var_9;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_18 [i_2] = (((arr_0 [i_0 - 3] [6]) + var_8));
                                var_16 = arr_1 [i_2];
                                arr_19 [i_0 + 1] [i_3] [i_2] [8] [i_0 + 1] = (((arr_17 [i_0 - 2] [0] [0] [i_2] [i_3] [i_3 - 1]) / (arr_17 [i_0 - 2] [i_2] [i_2] [i_2] [i_2] [i_3 - 1])));
                                var_17 = (((4603771863825881815 ? (arr_10 [i_0] [i_0] [6]) : var_6)));
                                arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3 - 1] [i_4] = (((4603771863825881809 >> (var_5 - 3650577955))) * var_11);
                            }
                        }
                    }
                    var_18 = (min(var_18, var_5));
                    arr_21 [i_0] [i_1] [i_0] = 13842972209883669785;
                    var_19 *= var_2;
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_20 -= ((!(!var_4)));

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_26 [i_5] [i_1] &= (~4603771863825881796);
                        arr_27 [i_6] [1] [1] = (4603771863825881801 ? 13842972209883669819 : 144);
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, var_9));
    var_22 = ((((-(max(13842972209883669822, var_4)))) << (var_6 + 1580)));
    #pragma endscop
}

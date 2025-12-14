/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = var_6;
        var_16 = (-1 ^ 83);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (max((((arr_6 [1]) & (min((arr_8 [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_1] [i_0] [i_1]))))), (((((min(var_4, var_9))) || 0)))));
                                var_18 = (arr_0 [i_0] [i_0]);
                            }
                        }
                    }
                    arr_12 [i_0] [13] [i_1] [i_0] = (arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_19 = (3359876597 >= 172);
                                var_20 = ((193718762 ? ((((var_6 + (arr_4 [i_0] [i_0] [12] [i_0]))) % ((var_7 * (arr_6 [i_0]))))) : (0 < 0)));
                            }
                        }
                    }
                }
            }
        }
        var_21 *= ((+((min((((arr_13 [12] [14] [i_0]) == (arr_9 [i_0] [i_0]))), (193718741 || var_8))))));
        var_22 = (max(var_22, ((((var_7 ^ 2695440227) ? ((((max(13799500461819670787, 0))) ? 3993722749 : (!0))) : ((((!((138 <= (arr_4 [i_0] [4] [i_0] [0]))))))))))));
    }
    var_23 = var_8;
    var_24 = (min(var_24, (((((((var_13 && -14211) & var_13))) ? (((((var_7 ? var_10 : var_0))) ? var_2 : (((-127 - 1) ? var_11 : 7629056866844149244)))) : var_11)))));
    #pragma endscop
}

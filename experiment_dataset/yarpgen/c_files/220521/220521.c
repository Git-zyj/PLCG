/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((!((min((max(var_5, var_2)), 178)))));
    var_20 = ((((max(((var_3 ? var_15 : 1040992694)), var_10))) ? (max((((var_15 ? var_10 : 75))), (var_16 * var_17))) : ((min(var_2, var_1)))));
    var_21 = (min(var_1, (var_9 / 4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [6] &= var_3;
                arr_7 [i_0] [i_0] [i_0] = var_4;

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    arr_11 [i_0] [3] [3] = var_7;
                    var_22 |= var_11;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_18 [i_4] [i_3] [i_0] [i_0] [i_1] [i_0] = 1;
                            arr_19 [i_0] [i_1] [i_3] = -60;
                        }
                        var_23 = (max(var_23, ((min((arr_2 [i_2]), (((arr_4 [i_0] [i_2]) ? (((-127 - 1) ? -2251573793900251629 : 222)) : 1)))))));
                        var_24 |= var_14;
                    }
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_25 = (min(var_25, (((!((((((1 ? 26 : 1))) ? (arr_8 [i_0]) : (!5)))))))));
                    arr_22 [i_0] [i_1 + 1] [i_0] [i_0] = var_10;
                    var_26 -= -22866;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] = (((((min(84, 0)))) ? 2 : 0));
                                arr_30 [i_0] [i_0] [3] [i_0] [i_7] [i_0] = (min(var_7, (min(((-(arr_25 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))), (((2 ? 1 : var_9)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

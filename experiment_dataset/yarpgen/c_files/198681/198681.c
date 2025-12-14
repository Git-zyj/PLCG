/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-(min(-1602974395150653279, var_4)))) != (-118 < -8)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((((max(var_10, var_3))) ? ((((arr_2 [i_0] [i_0]) >> var_8))) : (5136996440096768505 | 9))) != (!var_10))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = ((((min(722, (arr_4 [i_2] [i_2 + 1] [1] [i_2])))) ? (((arr_7 [i_2] [i_2 + 1] [i_2]) ? (arr_7 [i_2] [i_2 + 1] [i_2]) : var_14)) : var_5));

                            for (int i_4 = 1; i_4 < 23;i_4 += 1)
                            {
                                var_18 = (((((arr_4 [i_0] [19] [i_0 - 2] [i_0 - 2]) >> (((arr_4 [i_0] [i_0] [i_0 - 3] [i_0]) - 7288283368394977992)))) | (~0)));
                                var_19 = var_6;
                            }
                            for (int i_5 = 1; i_5 < 22;i_5 += 1)
                            {
                                var_20 = (((arr_8 [i_0] [i_0 + 3]) ? var_1 : ((~(arr_12 [i_0] [i_0 - 3])))));
                                arr_13 [i_3] [i_1] [i_3] [15] [i_5] [9] = (max(3023730249373843094, var_6));
                                var_21 = ((max((max(var_7, var_13)), (var_3 != 24603))) % (arr_3 [i_0] [i_0]));
                                var_22 = 15423013824335708520;
                            }
                            var_23 = (min((((var_12 + 2147483647) >> (((max(40937, var_14)) - 899428287)))), ((min(20363, 21171)))));
                        }
                    }
                }
                arr_14 [i_0] = (min(var_6, ((-(min(15423013824335708491, (arr_12 [i_1] [i_0])))))));
            }
        }
    }
    #pragma endscop
}

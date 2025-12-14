/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 += ((max(2083925199, (arr_4 [i_1 + 1] [i_0 - 1] [i_0 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (arr_4 [i_0 - 1] [i_1] [21]);
                                var_17 = (max(var_17, 4278190080));
                                var_18 = (~(arr_8 [i_0] [i_0] [i_0]));
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        var_19 = (max(var_19, (((((arr_1 [i_1]) ? (arr_0 [i_0 - 1]) : var_3))))));
                        var_20 = (min(var_20, (arr_5 [i_2] [i_1])));
                        var_21 = (var_3 >= var_2);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_22 = (arr_1 [i_0 - 1]);
                        var_23 |= (arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_24 = (((1394963903820947476 ? var_5 : 235)));

                        for (int i_8 = 2; i_8 < 24;i_8 += 1)
                        {
                            arr_22 [5] [i_1] [i_2] [i_7] [i_8 - 2] [i_0] [i_8 - 2] = (min((((!((max((arr_1 [i_1]), var_2)))))), (arr_14 [i_0] [i_0])));
                            var_25 += (arr_11 [i_8] [i_8] [5] [i_2] [i_2] [i_0] [i_0]);
                            var_26 = (((arr_4 [i_8 - 1] [i_1 + 1] [i_0 - 1]) | ((~((var_4 ? var_7 : var_9))))));
                        }
                        var_27 = arr_1 [i_0];
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_28 = arr_12 [i_0] [15] [15] [i_2] [i_9];
                        var_29 = ((((~((15053650711429378598 ? 124 : -4701021322470666619)))) != (arr_10 [i_0] [i_0] [i_2] [i_2] [i_9] [i_1])));
                        var_30 = (arr_11 [i_9] [i_0] [i_2] [i_1] [i_1 + 1] [i_0] [i_0]);
                    }
                }
            }
        }
    }
    var_31 = var_7;
    var_32 = (var_5 || ((38973 || (!var_0))));
    #pragma endscop
}

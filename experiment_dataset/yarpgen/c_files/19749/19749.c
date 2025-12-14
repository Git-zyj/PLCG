/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (110 || var_5);

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_9 [7] [2] [0] [1] = ((-(1 * 110)));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_12 [10] [3] [4] [7] [10] [12] [9] = (var_0 && 162);
                        arr_13 [0] [5] [8] = (253 | 1);
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_18 = (((!2105823143978601492) | 150));
                    arr_17 [2] [0] [3] [i_5] = (((1 | 19) || 5329660582579352851));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_21 [0] [i_5] = (~2296835809958952960);
                        var_19 = ((-(var_14 | var_10)));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_20 = (max(var_20, (var_10 && var_8)));
                        arr_25 [1] [i_5] = var_7;
                        arr_26 [i_5] [8] [2] [3] [3] [2] = (3550352474 | var_2);
                    }
                }
            }
            var_21 = (max(var_21, (-11587 | 1)));
        }
        arr_27 [4] [6] = ((~(94 || 1)));
        arr_28 [8] = var_2;
        var_22 = (max((min((((var_16 ^ (-2147483647 - 1)))), (var_8 | 26))), (93 - var_7)));
    }
    var_23 ^= (max(var_14, (min(((max(136, var_9))), 62))));
    #pragma endscop
}

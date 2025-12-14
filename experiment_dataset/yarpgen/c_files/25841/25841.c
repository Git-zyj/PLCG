/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((var_7 * ((min(var_12, var_0)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_2] [3] [i_1] [i_0] = (2147483647 >= 23);
                    arr_7 [i_2] [i_1] [8] = var_11;
                }
            }
        }
        arr_8 [8] [i_0] = (min((((var_0 + 2147483647) >> (var_11 + 16593568000613670))), (var_6 >= var_4)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_19 [i_0] [i_3] [i_3] [i_0] [0] [i_5] = var_8;
                        arr_20 [i_0] [i_3] [3] [i_4] [i_4] = ((((var_0 % var_1) / (var_11 + var_9))) / ((((((min(var_4, var_8))) || ((max(var_2, var_4))))))));
                        arr_21 [i_0] [1] [i_4] [1] = (max((((var_7 && var_5) ^ var_4)), (-38 % 1227558160)));
                    }
                    var_14 = max(var_7, (var_7 >= var_7));
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        arr_24 [i_6 - 1] = (var_0 + (min(var_11, var_5)));
        var_15 = (max((((var_4 || (var_10 != var_8)))), var_0));
    }

    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_29 [i_7] [i_7] = ((var_3 / (min(var_3, var_7))));
        var_16 = var_2;
        var_17 = (((max(var_5, var_12)) != (var_1 % var_1)));
        var_18 = (((min(var_6, var_11)) / (var_3 + var_9)));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((77 ? (((max(var_2, (arr_4 [14] [10] [i_1]))) * (var_6 && -2045093019))) : ((((-29401 == (arr_1 [i_1])))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_11 [i_1] = var_4;
                    var_11 = ((((var_7 & var_5) != 26273)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] [3] [i_1] [i_1] = (((arr_12 [i_1] [i_5 - 1]) * (arr_12 [i_1] [i_5 - 3])));
                                var_12 = var_4;
                                arr_20 [11] [i_5 - 2] [11] [i_1] [21] = (0 | 12601);
                            }
                        }
                    }
                    var_13 = (arr_16 [i_3] [i_1] [i_0] [i_0]);
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_24 [i_0] [i_1] [4] = (arr_12 [i_1] [i_1]);
                    var_14 = ((((-29401 || var_9) && (arr_22 [i_1]))) && (((24 && 66) || var_9)));
                    arr_25 [i_1] = var_6;
                }
                var_15 = (((arr_8 [i_0] [i_1]) < ((var_5 | (arr_8 [i_0] [i_1])))));
                var_16 += (((((var_3 % -28) + 2147483647)) >> (((!(var_7 ^ 0))))));
            }
        }
    }
    var_17 += ((-26821 & ((16 >> (var_4 - 7884396902527119721)))));
    #pragma endscop
}

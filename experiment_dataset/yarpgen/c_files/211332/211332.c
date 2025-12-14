/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (~18446744073709551615);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] = ((max(-31229, 10)));
                                var_13 = (min(var_13, (((max(((1 ? var_7 : var_1)), ((((arr_10 [i_1] [i_4]) < 1)))))))));
                                arr_12 [i_4] [i_2] [i_2] [i_0] = ((-(max((arr_5 [i_0] [i_2] [i_2]), (arr_5 [i_1] [i_2] [i_2])))));
                                arr_13 [9] [i_2] [i_3] [7] [i_1] [i_2] [i_0] = (~-987265860);
                            }
                        }
                    }
                    var_14 = (arr_9 [i_2] [i_1] [2] [i_0] [i_0] [i_0]);
                    var_15 = (max(var_15, (max((max(((-53 ? 18446744073709551607 : 1008806316530991104)), 29779)), var_3))));
                    var_16 = ((-(((!(arr_5 [i_0] [i_2] [i_0]))))));
                }
            }
        }
    }
    var_17 |= -var_8;
    var_18 = ((max(var_8, ((max(var_4, var_9))))));

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = ((max((arr_3 [i_5] [i_5] [i_5]), ((max((arr_10 [18] [i_5]), 1))))));
        var_19 = ((((((~-39) ? 54654 : 18446744073709551602))) ? ((((!(arr_3 [i_5] [18] [i_5]))))) : var_4));
        var_20 = 1246510011;
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        arr_19 [i_6 - 2] [6] &= (((arr_9 [i_6] [i_6] [i_6] [i_6] [i_6 + 4] [i_6]) + ((1458328064 ? (max(3394750878, 53159)) : 1))));
        var_21 = ((+(max((arr_9 [i_6] [i_6] [i_6 + 3] [i_6] [i_6] [i_6]), (arr_17 [4])))));
        arr_20 [i_6] = ((((-((var_7 - (arr_18 [i_6 + 4])))))) ? (((((var_3 ? 53072 : 1234191274406726373))) ? (arr_6 [i_6 - 1] [i_6 + 4] [i_6 - 2] [i_6]) : var_11)) : var_10);
    }
    #pragma endscop
}

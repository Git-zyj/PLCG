/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (((((max((!var_7), var_2)))) & (((arr_4 [i_1] [i_1] [i_0]) + (var_11 * var_2)))));
                arr_6 [i_1] = (arr_5 [i_1] [i_1]);
                var_17 = (max((((arr_4 [i_0] [i_1] [i_0]) ? (((arr_1 [i_0]) * var_13)) : var_2)), ((((((65532 ? (arr_5 [i_0] [14]) : var_8))) || ((min(var_1, var_8))))))));
            }
        }
    }
    var_18 = var_11;

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((!(!var_10)));

        /* vectorizable */
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            var_19 = ((var_4 ? (var_0 & 6) : 8));
            arr_16 [i_3] = var_15;
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_24 [i_2] [i_4] [i_5] [i_6] [i_5] [i_2 + 1] = (((28789 | var_4) ? (~var_11) : (((var_10 ? var_12 : var_5)))));
                        arr_25 [16] [i_4] [i_5 + 1] = (((((((var_12 + 2147483647) << (var_6 - 1))) + (!var_10)))) || (~var_12));
                    }
                    arr_26 [i_4 + 1] [i_5] = var_6;
                    var_20 = (((arr_8 [i_2 + 1] [i_4]) == ((2460819155 ? -3 : 2311654068))));
                }
            }
        }
        var_21 = (((((arr_23 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1]) || (arr_20 [i_2 - 1]))) ? ((((var_8 + 2147483647) >> (((arr_20 [i_2 - 1]) - 25325))))) : ((var_2 ? (arr_23 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_15 [i_2 + 1])))));
    }
    var_22 = (((((1834148119 * (min(5, 39880))))) ? ((var_3 ? var_14 : (max(var_6, 31)))) : var_1));
    var_23 = var_11;
    #pragma endscop
}

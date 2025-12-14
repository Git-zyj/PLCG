/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = ((((((4294967295 ? var_7 : var_4))) ? (min(588390583928116599, 18446744073709551598)) : var_12)));
        var_14 = (1536474934 - 0);
        var_15 = ((-636157528 ? (min(var_6, (((arr_0 [i_0] [i_0]) ? var_7 : var_10)))) : 1));
    }
    var_16 = 1;
    var_17 = ((((((max(var_7, var_5)) ^ 1))) ? var_4 : ((~((1 ? var_7 : 1))))));
    var_18 = (max(1, (min((1 | 1), var_9))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    var_19 = (min(var_19, ((max((1 && 1), (!var_12))))));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_20 = ((max(1, (arr_3 [i_1 + 1] [i_1 + 1]))) ^ ((min(1, (1 ^ 1)))));
                        var_21 = (min(var_21, ((max((((~(arr_6 [i_1] [i_3] [i_4])))), (((arr_6 [i_1] [i_2] [i_3]) ? (((1 ? 1 : var_4))) : (min(1, var_6)))))))));
                        var_22 = ((+(min((arr_3 [i_3] [i_1 + 1]), 1))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 += var_3;
                            arr_14 [i_1] [i_2] [i_3] [i_4] [i_5] = (((min(((var_4 ? var_8 : 1)), (((var_8 ? 1 : (arr_4 [i_1] [i_2] [i_3])))))) - (((min(var_5, var_3))))));
                            var_24 += (arr_3 [i_1] [i_2]);
                            var_25 = (min(var_25, ((((min(var_10, (max(var_9, var_9))))) < (((~var_0) ? ((1 ? var_8 : 1)) : (((1 ? 1 : (arr_6 [i_3] [i_4] [i_5]))))))))));
                            var_26 = ((1 ? (arr_6 [i_1 + 1] [i_1] [i_1 + 1]) : (((min((arr_6 [i_1 + 1] [i_1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_27 = (((min(((1 ? var_4 : var_0)), ((~(arr_10 [1]))))) != (~var_3)));
                        var_28 = var_3;
                    }
                    arr_17 [i_1] = ((((!((max(var_10, (arr_16 [i_1] [i_2] [i_2] [i_3] [i_3] [i_3])))))) ? ((-(!1))) : (var_7 >= 1)));
                }
            }
        }
    }
    #pragma endscop
}

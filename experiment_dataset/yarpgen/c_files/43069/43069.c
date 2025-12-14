/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((~((((((~(arr_1 [i_2] [i_1]))) + 2147483647)) >> (((-3243480505355490483 - 1) + 3243480505355490496))))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 ^= (((((((1 | (arr_3 [4]))) ^ (~var_7)))) ^ ((1 ^ (var_8 & var_1)))));
                        var_19 = (min(var_19, ((min(((min(((65535 ? 1 : (arr_5 [i_0] [i_0]))), ((max(117, 118)))))), (max(((-1407716108074105364 ? -119 : (arr_0 [i_3] [i_0]))), (arr_9 [2] [1] [i_1] [4] [4] [i_3]))))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = (min(var_20, var_9));
                        arr_13 [1] [1] |= (((((min(var_6, 1))) ? var_16 : (arr_6 [2] [i_1] [4] [0]))));
                    }
                    arr_14 [i_0] [i_0] = (~var_6);

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_5] = var_8;
                        var_21 = ((((min((arr_8 [i_0] [i_0] [i_2] [9] [i_0]), 109))) ? var_8 : (1 * -105)));
                        arr_19 [i_2] [i_0] [i_0] = ((~(((var_5 && (max(1, 1)))))));
                        var_22 = (arr_0 [i_2] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        var_23 *= (arr_7 [i_6 + 1] [4] [i_0]);

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_24 -= (min(2, (((~(~100))))));
                            var_25 = (min(var_25, (((1407716108074105363 - (((((min(var_5, (arr_10 [i_0] [18] [i_2] [10]))) > ((max(-795070652, var_14))))))))))));
                            arr_27 [i_0] [i_6] [i_2] [i_6] [i_2] = (((((~(((arr_17 [i_0] [16] [i_2] [i_7]) ? (arr_4 [i_0] [i_7]) : 5802))))) % ((~(((arr_3 [i_0]) ? var_9 : -1407716108074105364))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, 496));
    var_27 *= max(var_16, var_13);
    #pragma endscop
}

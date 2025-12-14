/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [6] [1] = max(((((arr_3 [i_1 + 1] [i_1 + 2] [5]) ? (arr_3 [i_1 - 2] [i_1 - 1] [i_1]) : (arr_7 [i_1 + 1] [i_2 + 2] [i_2 + 1] [i_2 - 1])))), var_14);

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            var_19 = (min(var_19, (((~((-(arr_9 [i_2 + 1] [i_2 + 1] [11] [11]))))))));
                            var_20 = (((((arr_13 [i_0] [i_1] [i_0]) * 1995092828933742816)) / (((0 ? 1995092828933742820 : 1995092828933742797)))));
                            arr_16 [14] [i_4] [i_2] [i_2] = ((var_0 && (!var_4)));
                            var_21 = (max(var_21, (arr_5 [9] [i_1] [i_2 + 1] [i_1])));
                            arr_17 [i_0] [i_4] [i_2] [i_3] [i_4] = ((11093419772675806999 | (0 <= 1769267861)));
                        }
                        var_22 = ((arr_8 [i_0] [i_0] [i_0]) - (arr_7 [i_2] [i_2] [i_2] [i_2 + 1]));
                        var_23 = (min(var_23, ((min((~18446744073709551603), ((-(max(7353324301033744606, var_8)))))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        var_24 = (max(var_24, 3243455872219907062));
                        var_25 = (min(var_25, -var_17));
                        var_26 = (min(var_26, (((~(~25))))));
                    }
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        var_27 = (max(var_27, 15821191933288125860));
                        var_28 = (max(var_28, ((+(min((3718529075 && var_14), 25))))));
                        var_29 = (min(var_29, (((-(~-140737219919872))))));
                        arr_22 [3] = (~var_1);
                    }
                    arr_23 [i_1] [i_2] = ((!(var_1 + var_10)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_30 = (min((arr_24 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 - 2]), (arr_24 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                                var_31 = (min(var_31, ((min(25, 3718529092)))));
                                var_32 = (max(var_32, ((max((~0), ((((((-7846275320490307355 ? 4294967295 : var_8))) ? (((arr_12 [2] [i_0] [i_7] [i_7] [i_0] [i_0]) | var_0)) : (((((arr_5 [i_0] [15] [i_7] [4]) < 70351564308480))))))))))));
                            }
                        }
                    }
                    arr_29 [i_0] [i_0] [i_2 - 1] = (!var_10);
                    arr_30 [1] = ((min(3718529075, 3121075292206665720)) >> (var_6 - 836603938725344716));
                }
            }
        }
    }
    #pragma endscop
}

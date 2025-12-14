/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_6 & ((((var_10 && ((min(var_13, -1737158662))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 = 1;
                            var_16 = (!var_13);
                            var_17 = (max(var_17, ((((((arr_9 [i_1 + 3] [i_3] [i_0 - 2] [i_2] [i_4]) ? var_7 : (arr_9 [i_1 + 1] [i_3] [i_0 - 3] [0] [i_4])))) >= ((-((var_1 ? (arr_10 [i_4]) : var_4))))))));
                        }
                        var_18 = (!var_7);
                        arr_11 [i_0] [i_1] [i_1] [i_3] = var_8;
                        arr_12 [i_3] [i_3] [i_1] [i_3] [i_2] = var_8;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        arr_15 [i_0 + 1] [i_1] [i_0 + 1] = (((~(arr_14 [i_0 + 1] [i_1] [i_1] [i_1 + 2]))));
                        var_19 = (max(var_19, ((((((1 ? var_1 : var_11))) ? var_4 : var_9)))));
                        var_20 = (min(var_20, (((32757 <= var_10) * (!var_11)))));
                    }
                    var_21 -= (!((var_6 >= (arr_0 [i_0] [i_0]))));
                    arr_16 [i_0] [i_1] [8] = (arr_3 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}

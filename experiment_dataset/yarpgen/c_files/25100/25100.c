/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((((!((((arr_2 [i_1] [4] [i_0]) / (arr_2 [i_1] [i_0] [i_0])))))) || (((var_2 * ((var_9 ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1]))))))));
                arr_5 [i_0] [i_0] [i_0] = (((arr_1 [5]) & (min((43 + var_7), ((max((arr_3 [i_0] [5]), (arr_4 [9] [i_1] [i_0]))))))));

                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((((((((~(arr_2 [6] [1] [i_2]))))) + 2147483647)) << (((((-59 && ((((arr_3 [i_1] [i_0]) ? (arr_3 [i_0] [i_2]) : var_6)))))) - 1))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_12 ^= max((max((arr_11 [8] [i_2 - 1] [i_3]), (arr_11 [2] [i_2 - 1] [4]))), (min((arr_11 [0] [i_2 + 2] [i_3]), (arr_11 [2] [i_2 - 2] [i_3]))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [7] [i_0] [i_4] [i_3] [i_4] = ((~((((max(var_4, var_9))) * (((arr_14 [i_0] [3] [i_2] [i_3] [i_3] [i_4]) ? -59 : var_7))))));
                            var_13 = ((((((arr_10 [1] [i_0]) | ((var_1 ? (arr_6 [i_0] [i_3]) : (arr_2 [1] [i_3] [6])))))) ? (((((!(arr_6 [i_0] [i_0])))) | var_6)) : (min(((var_2 ? (arr_2 [i_1] [i_4] [i_2]) : (arr_2 [i_2] [i_3] [i_4]))), -1))));
                            var_14 = (min(var_14, (((+((max((arr_0 [i_2 + 3]), var_0))))))));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [2] [i_0] [7] [i_2 + 2] [i_2] [i_3] [2] = (((arr_7 [i_2] [i_3] [i_5]) | ((-34 ? ((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) < var_1))) : (~58)))));
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_5] = ((((((((min(var_10, (arr_7 [i_0] [i_3] [i_5])))) + 2147483647)) >> ((((max((arr_7 [i_0] [i_0] [i_2]), (arr_4 [3] [i_3] [i_5])))) - 45)))) != ((~(arr_2 [i_2 + 3] [i_2] [i_2])))));
                        }
                    }
                    var_15 = (arr_17 [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 1]);
                }
            }
        }
    }
    var_16 = (max(var_2, ((-((min(var_0, var_0)))))));
    #pragma endscop
}

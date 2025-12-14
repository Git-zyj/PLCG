/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [4] [9] [1] [6] = ((arr_9 [2] [0]) ? (min(((max(456982074, 0))), ((1 ? (arr_6 [i_0] [i_0] [i_0]) : 730921628)))) : (((~(((arr_0 [1]) ? 9 : 4294967268))))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = min((arr_5 [i_2 - 1] [i_3] [i_3 - 2]), -386876147);
                        arr_12 [i_0] = (((976199992 ? (((~(arr_3 [i_0] [i_2] [i_0]))) : (min(976199967, (arr_9 [i_0] [8])))))));
                        arr_13 [i_0] [i_3] [0] [i_1] [i_0] = ((!((max(9128492316631728170, var_8)))));
                        arr_14 [i_0] [i_3] [i_2] [i_3] [i_3] [i_0] = -var_7;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 = (max(var_16, (~14935764808855166735)));
                        var_17 = (min((((arr_7 [i_0] [i_2 - 1] [7] [i_0]) ? (arr_7 [i_0] [i_2 - 1] [5] [i_0]) : (arr_17 [i_0] [i_2 + 1] [i_2 + 1]))), (((arr_17 [i_0] [i_2 - 1] [0]) & (arr_17 [i_0] [i_2 + 1] [8])))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_0] [i_2] [i_0] [i_0] = (arr_5 [i_6] [i_0] [i_0]);
                                arr_23 [2] [i_1] [i_1] [i_1] [i_0] [i_1] = (max((arr_20 [i_0] [i_1] [i_2] [0] [i_0]), var_12));
                                var_18 *= ((1 & (min(((~(arr_6 [i_6] [4] [i_1]))), (min(9318251757077823457, 0))))));
                                arr_24 [i_0] [1] [1] [i_0] [10] [2] = (max((max(4294967250, (max(1, 9318251757077823432)))), 35709));
                                arr_25 [i_6] [i_1] [i_2] [i_5] [i_6] |= ((-(min((arr_9 [i_0] [i_0]), var_5))));
                            }
                        }
                    }
                    var_19 |= (((((arr_21 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] [0]) ? (((arr_19 [i_1]) ? 1 : var_0)) : (((511474994 ? 1 : 17))))) > (max((!1), 9128492316631728172))));
                    var_20 = ((((((arr_20 [i_0] [i_2 + 1] [i_2] [9] [i_0]) ? (arr_20 [i_0] [i_2 + 1] [i_2] [1] [i_0]) : (arr_20 [i_0] [i_2 + 1] [i_0] [i_2] [i_0])))) ? (arr_20 [i_0] [i_2 + 1] [i_2] [7] [i_0]) : (arr_20 [i_0] [i_2 - 1] [1] [i_2 - 1] [i_0])));
                }
            }
        }
        var_21 = (min(var_21, var_3));
    }
    var_22 = var_6;
    #pragma endscop
}

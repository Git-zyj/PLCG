/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = 15;
                arr_5 [i_0] [i_1] [i_0] = ((((var_3 || ((max((arr_2 [i_0]), 2081689382150504335))))) ? 53 : (((((min((arr_0 [i_0] [i_0]), var_5))) ? ((0 ? (arr_2 [i_0]) : (arr_1 [i_0]))) : (max((arr_2 [i_0]), var_4)))))));
                arr_6 [i_0] [i_1] [i_0] = -var_5;
                var_11 = (arr_3 [i_0 - 1]);
            }
        }
    }
    var_12 = var_2;
    var_13 = ((var_6 ? (max((max(-66, var_5)), ((max(4119744946, -81))))) : ((((min(2096, -8743147214277565636))) ? ((max(1, var_6))) : (var_1 - var_5)))));
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_14 = (max((((-(arr_9 [i_2] [i_3] [i_2])))), 8315566281576557586));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((((((arr_15 [i_2] [i_3] [i_2 + 1] [15] [i_5] [i_2]) ? (arr_15 [i_5] [10] [i_2 - 1] [i_2 - 1] [i_4] [i_3]) : var_1))) == (((max((arr_9 [i_2] [i_2] [1]), (arr_7 [i_5]))) ^ (arr_10 [4] [i_3])))))));
                            var_16 = ((((min((arr_16 [i_2 - 1] [i_2 + 1] [i_2 - 4] [i_2 - 4]), (arr_11 [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 4])))) ? ((max((arr_7 [i_2]), (((-(arr_11 [i_2] [i_3] [i_4] [i_5]))))))) : var_7));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_17 = ((+((821345572 ? (arr_14 [i_2] [i_3] [i_6] [i_7]) : (arr_14 [i_7] [i_3] [i_3] [i_2])))));

                            for (int i_8 = 0; i_8 < 17;i_8 += 1)
                            {
                                arr_23 [i_2 - 4] [i_3] [i_6] [i_7] = (max(((((-(arr_10 [i_3] [i_7]))))), (((((arr_20 [i_2 - 4] [i_3] [i_3] [i_3]) ? (arr_19 [i_8] [i_7] [i_3] [i_3] [i_2] [14]) : (arr_20 [i_2] [9] [i_7] [i_3]))) * (arr_9 [i_6] [i_6] [i_8])))));
                                arr_24 [i_8] [1] [i_3] [i_6 - 3] [i_3] [i_2] [i_2] = (max(((var_6 ? (arr_17 [i_2 - 3] [i_2 + 1] [i_6 + 1]) : (arr_17 [i_2 - 1] [i_2 - 2] [i_6 - 1]))), ((((min((arr_12 [i_2 - 2] [i_2 - 4] [i_2] [i_2]), (arr_22 [i_2 - 1] [i_2] [i_3] [i_6 + 1] [i_7] [i_8]))) == (arr_16 [i_2 - 2] [i_3] [1] [i_7]))))));
                                var_18 = (max(((max(var_5, (arr_7 [i_3])))), (arr_16 [i_2] [i_2] [i_2] [i_7])));
                            }
                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 1;i_9 += 1)
                            {
                                var_19 *= ((((((arr_8 [i_2]) ? (arr_15 [10] [i_3] [i_9] [i_7] [i_2] [i_7]) : (arr_25 [7] [i_6] [i_7] [9])))) ? (arr_9 [10] [6] [i_9 - 1]) : ((var_8 ? (arr_21 [i_2] [i_2] [i_6 - 3] [i_7] [i_9]) : -1))));
                                var_20 = ((~((((arr_22 [i_2] [i_3] [i_3] [i_6] [i_7] [9]) > (arr_10 [i_3] [i_3]))))));
                                var_21 = (arr_8 [i_7]);
                                arr_27 [i_2] [i_3] [i_2 - 4] [i_3] [i_2] [i_2 - 1] [i_2] = (((arr_11 [i_2 + 1] [i_6 - 3] [i_6] [i_9]) ? (arr_11 [i_2 - 4] [i_6 - 3] [i_2] [i_2]) : (arr_11 [i_2 - 2] [i_6 - 3] [i_6] [i_7])));
                            }
                            arr_28 [i_3] = (((((arr_12 [i_2] [i_2] [i_2 - 4] [5]) ? (arr_12 [i_2] [i_2] [i_2 - 2] [i_2]) : (arr_12 [i_2] [i_2] [i_2 - 2] [16]))) < ((~(arr_12 [i_2 - 4] [i_2] [i_2 - 3] [i_2 - 2])))));
                            var_22 = (((((var_6 ? 3521758985 : (arr_7 [i_6 - 2])))) ? (((arr_7 [i_6 - 1]) ? (arr_7 [i_6 - 2]) : (arr_7 [i_6 + 1]))) : ((((!(arr_7 [i_6 + 1])))))));
                        }
                    }
                }
                var_23 = ((~(~-var_7)));
            }
        }
    }
    #pragma endscop
}

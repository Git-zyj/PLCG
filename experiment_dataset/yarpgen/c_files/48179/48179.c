/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((max(var_4, 34576))) ? (((((34576 ? 4064 : var_9))) ? 34563 : 154)) : ((min(var_9, var_7))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [14] [11] = ((-(((arr_3 [i_0] [i_1] [i_1]) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_0] [i_1])))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_13 = (max(var_13, (arr_9 [i_0] [i_2] [i_3 + 3] [i_3 + 3])));
                        var_14 = (max(var_14, (arr_11 [i_3 + 3] [i_3 + 3] [i_3] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_15 = ((30972 ? (((arr_3 [13] [13] [i_4]) & ((127 ? (arr_0 [i_0]) : (arr_9 [i_0] [i_0] [i_2] [i_0]))))) : (~910878854)));
                        arr_16 [i_0] [i_2] [i_2] [i_4] = (max(65526, (arr_14 [11] [i_1] [5] [9])));
                    }
                    var_16 = (max((arr_3 [i_0] [i_1] [i_2]), (arr_3 [i_0] [i_0] [i_2])));
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_17 = (((min((arr_14 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]), 23472)) == ((-(((arr_14 [i_0] [i_0] [i_5 + 1] [i_6]) ? (arr_19 [i_0] [i_1] [15] [i_1]) : var_9))))));
                            var_18 = ((((((arr_14 [i_5 + 1] [i_5] [i_5] [i_5 + 1]) ? (!var_0) : (arr_9 [i_5 + 1] [i_5] [i_5 - 1] [i_6])))) ? (((!(arr_19 [8] [8] [i_5 - 1] [i_5])))) : (((((arr_13 [i_6] [i_1] [i_5] [12]) ? (-127 - 1) : 11370)) - (min((-2147483647 - 1), 48))))));
                            var_19 += ((((arr_10 [i_5 - 1] [i_5 - 1] [i_5] [i_5] [6] [i_5 - 1]) ? (arr_10 [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5] [i_5 - 1]) : (arr_13 [i_1] [i_5 - 1] [i_5 - 1] [12]))) & ((min((arr_15 [i_5 - 1] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5 - 1]), (arr_10 [i_5 - 1] [i_5 - 1] [14] [i_5 - 1] [14] [i_5 - 1])))));
                            var_20 = (min((((arr_14 [i_5 - 1] [i_5] [i_5 + 1] [i_5]) ? (arr_4 [i_6]) : 4064)), ((max((arr_4 [i_1]), var_10)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_21 = (max(var_21, (arr_21 [i_9] [i_8])));
                            var_22 = ((((((arr_25 [2] [i_8] [i_10]) ? (arr_25 [i_7] [i_9] [i_10]) : (arr_25 [i_7] [i_8] [i_10])))) ? ((((arr_25 [i_7] [i_8] [4]) != (arr_25 [i_8] [i_9] [i_10])))) : ((-11370 ? 1328800075 : 150))));
                        }
                    }
                }
                var_23 = ((var_6 ? ((+(((arr_13 [i_8] [i_7] [8] [i_8]) ? 4064 : var_6)))) : (((arr_1 [i_7] [i_8]) ? (arr_1 [i_7] [9]) : (arr_1 [i_7] [i_7])))));
                arr_30 [i_7] [i_7] [i_8] = (arr_14 [i_7] [i_8] [i_8] [i_8]);
            }
        }
    }
    var_24 = (((((var_1 ? ((var_11 ? var_6 : var_5)) : var_7))) ? (32765 + 65517) : var_9));
    var_25 += var_11;
    #pragma endscop
}

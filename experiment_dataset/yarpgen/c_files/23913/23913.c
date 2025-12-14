/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((min(var_3, -32754))), var_1));
    var_12 = min((-32754 | var_10), var_9);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = ((((-((-32754 ? (arr_1 [i_0]) : -32754))))) ? 32754 : (!32735));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [1] [i_2 + 2] [i_3] [i_3] = (arr_5 [i_0] [i_0]);
                        var_14 = (min(var_14, (((-32735 ? ((((((arr_4 [i_3] [i_2] [i_3]) >> (((arr_0 [i_0] [i_1]) - 133))))) ? var_10 : (var_0 + var_10))) : (arr_10 [i_0] [i_1] [i_2] [i_3]))))));
                        var_15 = ((((max((arr_3 [i_2 + 2] [i_2 - 2] [i_2 + 2]), (arr_10 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2])))) ? ((((arr_3 [i_2 + 1] [i_2 - 2] [i_2 + 1]) || (arr_10 [i_2 + 2] [i_2 - 2] [i_2 + 2] [i_2 - 2])))) : (((arr_10 [i_2 + 2] [i_2 + 3] [i_2 - 2] [i_2 + 2]) - (arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1])))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_16 = (min((((arr_14 [i_0] [i_0] [i_2 + 2] [i_2 + 2] [i_3] [i_3] [i_3]) | (arr_3 [i_1] [i_1] [i_2 - 1]))), (((arr_14 [8] [i_0] [i_2 + 2] [i_2 + 2] [1] [8] [i_2]) / (arr_7 [i_2] [i_0] [i_2 - 1] [i_4] [i_4] [8])))));
                            arr_16 [i_2] [i_1] [10] [i_3] [i_4] [i_1] [i_0] = 32754;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, ((max((arr_8 [i_3]), ((((arr_19 [i_1] [i_2 + 3] [7] [i_2] [i_2] [i_2 + 1] [i_2]) >= (arr_19 [i_1] [i_2 + 1] [3] [i_2] [i_2 + 2] [i_2 + 2] [i_3])))))))));
                            var_18 = (min((arr_0 [i_2 + 3] [i_1]), ((-(arr_0 [i_1] [i_0])))));
                            var_19 *= ((((arr_19 [11] [i_0] [i_1] [i_1] [i_1] [i_3] [i_5]) ? (-32735 & -32735) : (max((arr_12 [i_0] [10] [i_2 + 2] [i_3] [i_5]), -32754)))));
                            var_20 = (max((min((arr_15 [i_0] [i_2] [i_2 - 1] [i_2] [i_0]), (min(var_6, (arr_3 [i_0] [9] [7]))))), ((max((arr_19 [2] [3] [i_2 - 2] [i_3] [i_5] [i_5] [i_5]), (arr_19 [8] [i_2] [i_2 - 2] [8] [i_5] [i_5] [i_5]))))));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_0] [i_3] [i_2] [2] [i_0] = ((-(arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] [i_6] [i_6])));
                            var_21 = ((((min(((((arr_14 [i_0] [i_0] [i_2] [i_0] [i_6] [10] [i_0]) <= (arr_0 [i_1] [i_0])))), (arr_6 [i_0])))) / (((arr_17 [i_2] [2] [i_2 - 2] [i_2 - 2] [2] [i_0] [i_1]) - (((arr_17 [i_6] [i_0] [i_2 + 1] [i_1] [i_0] [i_0] [i_0]) ? (arr_21 [i_0] [i_1] [i_2] [i_2] [i_6]) : (arr_21 [i_0] [i_2] [i_2] [i_1] [i_0])))))));
                        }
                    }
                }
            }
        }
        arr_24 [i_0] = (min(((((((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_6 [i_0]) : var_6))) ? var_10 : (arr_9 [i_0] [i_0]))), (max(((var_5 ? var_3 : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((min(32754, var_8)))))));
    }
    #pragma endscop
}

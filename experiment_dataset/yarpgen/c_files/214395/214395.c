/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_15 = ((((!(arr_5 [i_0] [i_0] [i_0]))) && ((!(arr_5 [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_1] [i_1] = (arr_11 [3] [i_3] [i_1] [i_1] [i_1] [i_3] [8]);
                                var_16 = (max(var_16, ((((arr_12 [i_0]) ? (((arr_13 [17] [i_1 + 2] [i_2 - 3] [i_2] [6] [i_4]) ? (arr_1 [3]) : (arr_0 [1] [1]))) : (arr_8 [i_3] [1]))))));
                                var_17 = (((((arr_14 [i_0 + 1] [i_0 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_2]) ? (arr_3 [i_2] [i_4]) : (arr_14 [i_0] [i_0 + 1] [i_1] [i_2 - 1] [i_3] [1]))) > (arr_8 [i_1 - 1] [i_3])));
                            }
                        }
                    }
                    var_18 = (arr_6 [i_1 + 3]);
                    arr_16 [i_0] [i_1 + 3] = ((((arr_3 [i_0] [i_0]) ? (arr_10 [i_0 - 1] [i_2] [i_2] [10]) : (arr_13 [i_0 + 1] [14] [1] [i_0] [i_0] [i_0]))) > (((arr_6 [i_0]) ? (arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0 + 1] [i_1 + 2] [5]))));
                    var_19 = (max(var_19, ((((arr_11 [i_0] [4] [i_2] [i_0] [i_2] [i_1] [i_1]) > ((((arr_13 [i_0] [i_1] [i_1 + 2] [i_1 + 2] [i_2 - 3] [i_2 - 3]) ? (arr_14 [i_0] [16] [i_1] [i_1] [i_1] [3]) : (arr_12 [i_0])))))))));
                }
                var_20 = ((((min((arr_11 [i_0] [14] [i_0 + 1] [i_1 + 3] [i_1 + 2] [i_0 + 1] [2]), ((((arr_6 [i_1 + 1]) ? (arr_4 [17] [17] [i_1 + 1]) : (arr_9 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))))))) && (((-(((arr_10 [0] [0] [6] [0]) ? (arr_10 [i_0 - 1] [i_1] [i_0] [4]) : (arr_12 [i_0]))))))));
                var_21 = (min(var_21, ((max(((((((arr_1 [2]) ? (arr_0 [i_0] [i_1]) : (arr_12 [i_0])))) ? (((arr_11 [2] [10] [i_0] [i_0 + 1] [i_1] [i_0] [i_0]) ? (arr_8 [i_0 - 1] [14]) : (arr_14 [i_0] [i_0 + 1] [i_0] [i_1] [i_1 + 1] [i_1]))) : (((arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [13] [i_0 - 1]) ? (arr_8 [i_0 + 1] [1]) : (arr_2 [i_0] [i_0 - 1] [i_0 - 1]))))), ((((((arr_3 [i_0 + 1] [i_1]) ? (arr_7 [i_0 - 1] [i_0] [i_0 - 1] [i_0]) : (arr_1 [i_0])))) ? (((!(arr_10 [i_0] [i_0] [i_1] [14])))) : (((((arr_1 [i_0]) + 2147483647)) << (((arr_3 [i_0] [i_0]) - 36)))))))))));
            }
        }
    }
    var_22 ^= (((((var_0 > var_7) > -var_4)) ? ((~((var_8 ? var_11 : var_4)))) : var_1));
    var_23 = var_0;
    #pragma endscop
}

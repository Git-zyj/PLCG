/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
                {
                    var_18 = ((((((arr_0 [i_2 + 1] [i_0]) ? (arr_0 [i_2 + 1] [i_0]) : (arr_0 [i_2 + 1] [i_0])))) ? (((((-(arr_4 [i_0] [i_1])))) * (arr_3 [i_0]))) : var_17));
                    var_19 = ((-(arr_2 [i_0])));
                }
                for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        arr_11 [i_0] [i_1] = ((((-(((arr_4 [i_0] [i_3]) | (arr_1 [11])))))) ? (((((arr_2 [i_1]) ? (arr_9 [i_3 + 1] [i_4 + 1] [i_3 + 1] [i_4 + 2] [i_1] [i_3 + 1]) : (arr_6 [i_1] [i_1] [i_0]))) * (arr_2 [i_0]))) : var_13);
                        var_20 = ((-(((arr_0 [3] [i_0]) ? var_3 : 1))));
                        arr_12 [i_0] [i_1] [i_1] [5] [i_1] = (arr_9 [i_4 - 1] [i_1] [i_4 - 1] [i_4] [i_4] [i_1]);
                    }
                    var_21 = ((-((var_17 << (((-15 + 43) - 15))))));
                    var_22 ^= (-(arr_8 [10] [2]));
                    var_23 = (max(var_23, (arr_4 [0] [i_3 + 1])));
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_24 = var_16;
                                var_25 = ((-(arr_13 [i_0 + 1] [i_0 + 1])));
                            }
                        }
                    }
                }

                for (int i_8 = 3; i_8 < 14;i_8 += 1)
                {
                    arr_26 [i_0] [i_1] [i_8 + 1] [i_0] = (arr_7 [i_8] [11] [11]);
                    arr_27 [i_0 + 1] [i_0] [i_8 - 1] = ((((-(((arr_0 [i_0] [i_0]) ^ (arr_10 [i_0 + 1] [i_0] [i_1] [i_8] [i_0 + 1] [i_8]))))) < (arr_14 [14])));
                    arr_28 [i_0] = ((-(7 != -1)));
                    var_26 ^= ((var_1 && (arr_16 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 - 1])));
                    arr_29 [3] [i_0] = (((((var_4 || (((-(arr_8 [i_0] [i_0]))))))) < (arr_25 [i_8 - 1] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_27 = (-(23 + 1));
    #pragma endscop
}

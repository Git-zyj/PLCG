/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(((var_2 ? var_2 : var_1)), var_2)) - var_8));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = var_3;
                var_14 = var_1;
                var_15 ^= (((((arr_3 [i_1 + 1] [i_0 - 3]) >> (((arr_3 [i_1 - 1] [i_0 + 1]) - 1856681900)))) >> (((max((arr_3 [i_1 + 1] [i_0 - 3]), (arr_3 [i_1 - 1] [i_0 - 3]))) - 1856681873))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_16 = ((+(((arr_0 [i_0]) ? (arr_3 [i_2] [i_1]) : var_9))));
                    var_17 = (max(var_17, ((((arr_4 [i_0 + 2] [i_0 - 3]) ? (arr_4 [i_0 - 3] [i_0 - 3]) : (arr_4 [i_0 - 3] [i_0 - 3]))))));
                    var_18 = (max(var_18, (((arr_4 [i_1 + 2] [i_0 + 2]) && (arr_4 [i_1 + 1] [i_0 + 1])))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_19 += var_11;
                    var_20 = arr_1 [i_1];
                    arr_8 [i_0 - 3] [i_0 - 3] [4] = (!-var_11);
                }
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    var_21 -= ((((~((((arr_10 [1] [i_1] [i_1 - 1] [1]) != var_2)))))) && (((((max(var_4, var_11))) ? var_1 : (~var_6)))));
                    var_22 = (max((max((arr_4 [i_1 + 1] [i_4 + 2]), ((-(arr_2 [i_0 + 2] [i_0 + 2]))))), ((((max(var_4, (arr_10 [i_0] [1] [1] [i_0 + 2])))) ? var_0 : (arr_3 [i_1 - 1] [i_0 + 2])))));

                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        arr_15 [8] [i_4] [8] &= (((((-(((arr_11 [i_5] [i_4] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_4] [i_5]) : var_4))))) ? (min((max(var_11, var_0)), ((var_7 ? var_5 : var_5)))) : (((var_7 || ((((arr_2 [i_4] [4]) % var_8))))))));
                        arr_16 [8] [10] [i_4 + 3] [i_5] [i_0] [i_5] |= (min(((min((arr_13 [i_5] [i_4 + 3] [i_4] [i_1 - 1] [i_0 - 1]), (((arr_12 [i_5] [17] [i_1 - 1] [i_0 + 1]) >> (((arr_13 [i_5] [i_4] [i_5] [i_5] [i_0 - 1]) - 71))))))), (((arr_2 [i_4 + 1] [i_4 + 1]) - ((min((arr_11 [i_5] [i_4] [i_1] [i_0]), (arr_10 [i_0] [i_1] [i_4] [i_0]))))))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_23 = (arr_6 [i_1]);
                            arr_19 [i_0] [i_5] [4] [i_0 + 2] [i_0] = (((arr_6 [i_0 + 1]) > (arr_6 [i_0 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

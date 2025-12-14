/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((max(-var_5, ((var_6 ? var_10 : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [22] [i_3] [i_0] = ((-(arr_4 [1] [i_3])));
                            var_14 = (arr_3 [i_2]);
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_1] = (((arr_11 [6] [i_1 + 2]) < var_11));

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_15 = (arr_4 [i_1] [1]);

                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_16 = ((((((14 && (arr_5 [i_1 + 2]))))) + var_3));
                        var_17 ^= (arr_0 [i_4]);
                        var_18 = ((~((-(arr_5 [i_1 + 1])))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_4] [i_6] = (max((arr_2 [i_0]), ((1216704249618633732 ? -23875 : 9061))));
                        var_19 *= (((((min(var_8, var_5) == (((max((arr_14 [i_0] [i_1] [i_4] [i_6]), (arr_16 [i_0] [i_0] [i_0] [i_0]))))))))));
                    }
                }
                arr_22 [i_0] [i_0] [i_1] = (((((var_0 ? var_7 : var_3) * (((~(arr_18 [i_0] [i_1] [i_1 - 1]))))))));
                arr_23 [i_0] = (((((-(((arr_17 [i_1] [i_1] [12] [i_1] [i_1] [17]) ? (arr_2 [i_1 - 1]) : (arr_6 [2] [i_1])))))) ? (arr_16 [i_0] [i_0] [i_1] [i_1]) : var_6));
            }
        }
    }
    var_20 = 23888;
    var_21 = var_1;
    #pragma endscop
}

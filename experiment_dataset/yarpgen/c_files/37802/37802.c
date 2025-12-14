/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((~(~var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [1] [i_1 + 4] [i_1] [i_2] [i_3] = ((+((((arr_9 [i_1] [i_2] [i_1]) / var_6)))));
                            var_13 = min((((((var_2 / (arr_0 [i_0])))) / (arr_2 [i_0] [i_2] [i_3]))), ((max((((arr_0 [i_0]) ? 1 : 0)), (arr_0 [i_0])))));
                            arr_12 [1] [i_1] [i_1 + 3] [i_1] [i_3] = (((arr_6 [i_1] [i_2] [i_3 + 1]) ? (~231) : (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_2])))));
                            arr_13 [i_0] [8] [i_2] [i_3] |= ((var_4 ? ((~(arr_1 [i_0]))) : 97));
                            arr_14 [i_2] [i_1] [i_2] = ((~((((15264068340004706999 / (arr_7 [i_1]))) & ((((arr_0 [i_3]) * (arr_5 [i_1 + 1] [i_3 + 2]))))))));
                        }
                    }
                }
                var_14 = (min((max((((arr_9 [i_0] [i_0] [i_1]) ^ -2146497836)), (~var_7))), (max((arr_5 [i_0] [i_0]), (max((arr_4 [i_0] [i_1]), 1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            {
                var_15 = (arr_18 [i_4]);
                arr_19 [i_4] [i_4] = (max((arr_16 [i_4 + 1]), ((var_10 ? (arr_16 [i_4 - 1]) : (arr_17 [i_4] [i_4] [i_4 - 2])))));
                var_16 = (min(var_16, 11223875293925035037));
                var_17 = (arr_17 [i_5 - 1] [i_5 - 1] [i_5 - 1]);
            }
        }
    }
    var_18 = (((~(min(var_8, var_9)))));
    #pragma endscop
}

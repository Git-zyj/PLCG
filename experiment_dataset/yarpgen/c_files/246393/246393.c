/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = (~((((var_9 ? var_9 : var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_21 = (max(var_21, (arr_7 [14] [i_1] [i_1] [13])));
                        arr_10 [i_0] [i_0] = (((((((566430304 ? -34 : (arr_7 [i_0] [i_1] [1] [21])))))) == ((((max((arr_3 [i_0] [i_1] [i_3]), var_8))) ? (arr_2 [i_0] [12]) : (min(var_15, (arr_2 [i_2] [i_1])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_15 [6] [i_0] [i_2] = (((-(arr_7 [i_0] [i_1] [i_2] [i_5]))));
                                var_22 = (max(var_22, ((((arr_9 [i_4]) ^ ((((1132 ? 15578302303071634291 : (arr_3 [i_0] [i_1] [7]))) % ((((arr_1 [7] [i_1]) ? var_1 : var_2))))))))));
                                var_23 = (min(var_23, (((((((-44 ? var_4 : (arr_8 [i_0] [8] [i_2] [22]))) ? ((var_0 + (arr_12 [i_5] [i_1] [i_2] [i_4]))) : (1136 - 1132))))))));
                            }
                        }
                    }
                    var_24 = ((!((((((var_6 % (arr_8 [i_0] [i_0] [i_0] [i_0])))) | (((arr_2 [i_0] [i_2]) & var_0)))))));
                    arr_16 [20] [3] [i_2] [i_0] = ((var_13 ^ (((arr_13 [2] [i_2] [i_2] [i_0] [i_1] [i_0] [i_0]) | (arr_8 [i_0] [i_0] [4] [i_0])))));
                }
                arr_17 [i_0] [i_0] = (-(arr_13 [5] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]));
            }
        }
    }
    #pragma endscop
}

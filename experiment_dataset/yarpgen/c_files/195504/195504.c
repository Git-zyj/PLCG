/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((+((var_4 ? (arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (arr_0 [i_0 - 1])))));
                var_11 = (((min((arr_2 [i_1] [i_0 + 1] [i_0 - 1]), var_3))) ? (((!(((arr_0 [i_0]) && (arr_3 [i_0 - 1])))))) : ((((var_5 && (arr_0 [19]))))));
            }
        }
    }
    var_12 = (((((!var_1) ? (min(var_1, -10)) : (max(var_7, var_2)))) & (var_2 + 17122818448415042929)));
    var_13 = ((~(min(var_7, ((var_10 ? var_7 : var_2))))));

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] = (max(((var_0 ? var_5 : (var_1 * 1))), (min((arr_3 [i_2]), (arr_3 [i_2])))));
        arr_9 [i_2] = (6411 - ((var_0 ? (min(var_3, (arr_6 [i_2]))) : ((((arr_1 [i_2]) ? 923131217 : 923131191))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_24 [i_2] [i_2] [i_4] [1] [3] = (((var_8 ? 0 : (arr_19 [i_6 - 4] [i_2] [i_6] [i_6] [i_6 - 4] [i_6 - 4]))));
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_2] = ((~(((~var_6) | (max((arr_0 [i_2]), var_3))))));
                            }
                        }
                    }
                    var_14 = (arr_19 [12] [i_2] [i_2] [i_3] [i_4] [i_4]);
                    var_15 ^= ((-(((((0 == (arr_19 [10] [i_4] [i_3] [0] [i_3] [i_4])))) ^ (((!(arr_6 [i_3]))))))));
                }
            }
        }
        arr_26 [i_2] = (min((((arr_21 [i_2] [11] [i_2] [i_2] [8]) ? 5023534239141373050 : (arr_21 [i_2] [0] [i_2] [i_2] [i_2]))), (((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2])))));
    }
    #pragma endscop
}

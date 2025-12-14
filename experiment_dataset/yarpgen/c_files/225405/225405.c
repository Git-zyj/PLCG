/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    var_15 += (~-27138);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 *= (((arr_0 [i_0]) ? (((arr_2 [i_0]) ^ (min((arr_3 [i_0]), (arr_0 [i_0]))))) : ((((((arr_1 [i_0]) & var_13)))))));
        var_17 ^= (((((arr_1 [1]) ? (arr_0 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 = (max(var_18, (((((var_10 / (arr_6 [18] [18]))) / (((((arr_5 [1]) * (arr_6 [0] [i_1]))) * (arr_5 [16]))))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_19 &= (arr_4 [i_2 - 2]);
                    var_20 = (max(var_20, (((-(((arr_7 [i_2]) ? var_5 : (arr_7 [i_3]))))))));
                    arr_12 [i_1] [i_1] [10] [i_1] = (((((((var_8 ? var_0 : (arr_10 [i_3] [i_2] [i_1])))) ? (arr_8 [i_1] [i_2 + 1] [i_1]) : (arr_7 [i_1]))) != (((-(((var_11 > (arr_10 [i_1] [i_1] [i_3])))))))));
                    arr_13 [i_1] [i_2] [i_1] = ((((((~(var_9 & var_13))) + 2147483647)) << (((((~-32662) + 138)) - 31))));
                    var_21 = ((-(arr_8 [i_1] [i_2] [19])));
                }
            }
        }
        arr_14 [i_1] [0] = (((((-((((arr_7 [i_1]) > (arr_8 [i_1] [i_1] [i_1]))))))) ? var_11 : (min((arr_7 [i_1]), (!var_4)))));
        var_22 = (((((-(arr_10 [i_1] [i_1] [i_1])))) ? (((((arr_11 [i_1] [i_1] [i_1]) ? (arr_4 [i_1]) : var_6)))) : (((((arr_6 [i_1] [i_1]) ? (arr_10 [i_1] [i_1] [i_1]) : (arr_9 [i_1] [i_1])))))));
    }
    var_23 = ((var_12 ? -var_6 : (((((var_13 ? var_3 : var_11))) ? -var_0 : ((var_4 ? var_8 : var_0))))));
    #pragma endscop
}

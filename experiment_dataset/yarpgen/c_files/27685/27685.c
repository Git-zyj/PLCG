/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = ((((((var_4 ? var_1 : var_0)) ^ (var_10 && 2809816285673599070)))) ? (~-70) : ((min(119, (max(119, -119))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (min(((+((var_3 << (((arr_0 [i_0]) - 9443048174415764452)))))), (arr_0 [i_0])));
        arr_3 [i_0] = ((((-(~13874)))) ? var_6 : (!var_4));
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        arr_6 [i_1] [23] = ((arr_4 [i_1 - 4]) << (var_9 - 2071448090225428937));
        arr_7 [i_1 + 2] [i_1] = (((max((min(1, var_1)), (~-1259209446)))) ? (((var_4 ? ((22657 ? var_6 : var_2)) : ((((arr_5 [i_1]) || 127)))))) : -8940980490835153951);
        arr_8 [i_1 - 1] [i_1] = var_5;
        var_15 &= ((-2092185436 ? (((((arr_4 [i_1]) > 805306368)))) : (arr_4 [i_1])));
        var_16 &= 9216651696915652030;
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_17 *= ((((((-2147483647 - 1) ? (((arr_12 [i_3] [14]) ? (arr_16 [1] [0]) : var_6)) : (arr_4 [i_2])))) ? ((((((((var_8 + 2147483647) >> (-1146805671905352224 + 1146805671905352236)))) < (arr_16 [i_2 - 1] [4]))))) : ((-831738052 ^ (max(var_3, (arr_5 [i_3])))))));
                    var_18 = (((arr_14 [i_2 + 2] [i_2]) < (min(((((arr_17 [i_4] [i_3] [i_2]) | (arr_18 [i_2] [i_3] [6] [i_4])))), (((arr_9 [i_2]) ? (arr_4 [i_2 - 1]) : var_3))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((max((((((arr_23 [0] [i_3] [1] [0] [18]) == var_12)))), (min((arr_22 [8] [i_2 + 1] [i_2] [i_2 - 1]), (arr_11 [i_2 + 2]))))))));
                                arr_24 [i_4] [i_5] [i_2] = (min(((((805306368 % var_3) ? 119 : -1107170690))), (((((-(arr_12 [i_3] [i_2])))) ? ((var_1 ? 602032851 : -8940980490835153951)) : (arr_4 [i_2 + 2])))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_34 [i_2] = (-8940980490835153946 == -16260);
                        arr_35 [i_2] [i_2 - 1] [i_2] [i_2] [i_2] = ((max(232, (arr_11 [i_2]))) / (arr_20 [i_2] [i_2 + 2]));
                        arr_36 [i_8] [i_2] = (((((max(var_12, 1)) >> (var_10 - 176))) / ((-(0 || var_11)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_11, var_2));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 *= ((var_12 ? 2147483647 : ((var_0 * (arr_0 [i_0])))));
        var_21 = (((!2147483647) ? (arr_0 [i_0]) : (((-(arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 = ((!(((var_2 ? ((((arr_3 [i_1]) ? (arr_1 [i_1]) : var_17))) : (max(var_13, (arr_3 [i_1]))))))));
        arr_5 [i_1] = (arr_4 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_23 ^= (14 / -1261804170190748875);
        var_24 = (((!((max((arr_6 [i_2]), var_13))))));
        var_25 = (min(var_25, ((((arr_0 [i_2]) ? (24 - var_13) : 16086649784134083965)))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_13 [i_2] = 133;
            var_26 = (max(var_26, ((((arr_0 [i_3]) ? var_15 : -var_18)))));
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = ((((var_7 == 159) ? 0 : (max(2147483658, 1)))) / (arr_7 [i_4] [4]));
        var_27 -= var_8;
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_19 [i_5] = (max((max(((var_5 ? var_8 : 1)), (255 > 3506137230))), (((-var_5 || (((-5393919254946019768 ? var_8 : var_7))))))));
        var_28 &= (((arr_18 [i_5]) ? (((((arr_17 [i_5] [i_5]) ^ (arr_18 [i_5]))) | (max((arr_18 [1]), var_2)))) : (arr_18 [i_5])));
    }
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        var_29 ^= ((-((((((arr_23 [i_6]) / (arr_21 [14])))) ? ((14 >> (var_5 - 3373308138))) : var_14))));
        arr_24 [12] [i_6 + 2] &= (arr_23 [16]);
    }
    #pragma endscop
}

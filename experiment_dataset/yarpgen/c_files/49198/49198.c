/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_0] [16] |= var_9;
                    arr_10 [i_2] [i_2] = (arr_6 [i_1 - 1] [i_1 + 1]);
                }
            }
        }
        var_11 |= var_2;
        arr_11 [i_0] = arr_4 [i_0];
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_12 = ((((min(21418, 65511))) << (((min(((min(var_8, 24))), (max((arr_12 [i_3] [i_3]), var_6)))) - 9043724528916167332))));

        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            var_13 += (min((((((max((arr_13 [i_4]), (arr_13 [i_4])))) && ((((arr_12 [i_4] [16]) ^ (arr_17 [i_4] [i_3] [i_3]))))))), var_2));
            var_14 = ((+(min((((arr_15 [i_4] [i_4] [i_3]) / (arr_16 [i_3] [i_4 - 1]))), ((65517 ? 7260 : 25))))));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_15 = var_8;
            var_16 -= (min((max((arr_16 [i_5] [i_5]), (((arr_14 [i_3] [i_5]) / var_3)))), (arr_15 [i_5] [i_5] [i_5])));
            var_17 = var_5;
        }
        var_18 = ((var_4 || (arr_18 [i_3])));
        arr_21 [i_3] [i_3] = (arr_14 [i_3] [i_3]);
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] = (var_8 ? (((+((max((arr_19 [i_6] [i_6]), var_3)))))) : ((((min(var_5, var_6))) ? -var_6 : (((((arr_25 [i_6]) != (arr_25 [i_6]))))))));
        var_19 *= (((var_8 < var_5) ^ (max((min((arr_15 [i_6] [i_6] [i_6]), (arr_18 [i_6]))), ((((arr_14 [i_6] [i_6]) < (arr_17 [i_6] [i_6] [i_6]))))))));
        var_20 = min(var_5, var_8);
        var_21 = 25;
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        arr_29 [i_7 + 1] = ((-(arr_28 [i_7])));
        var_22 = (max(var_22, (((((((arr_28 [i_7]) >= var_2))) + var_5)))));
        var_23 = (min(var_23, (((var_3 ? (((((arr_28 [i_7]) + 2147483647)) >> (((arr_27 [i_7]) + 15906)))) : var_0)))));
        var_24 = (arr_28 [i_7]);
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        arr_33 [i_8] = min((((arr_0 [i_8]) >= -7532)), 1);
        var_25 = ((((!(!var_1))) ? ((min(var_8, (arr_27 [i_8])))) : (((!((max((arr_2 [i_8]), (arr_19 [i_8] [i_8])))))))));
        arr_34 [i_8] = ((+(((arr_19 [i_8] [i_8]) ^ var_0))));
    }
    #pragma endscop
}

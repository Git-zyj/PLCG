/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 + 1] = ((-1449386734 >= (arr_2 [i_0 - 1])));
        arr_5 [i_0 + 1] = (((max((((9209185776160164404 ? 1449386745 : 32767))), (~2358895009))) & (((1 ? 1 : -102)))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_10 = (((((arr_3 [i_1 - 1] [i_1 - 1]) ? var_5 : (arr_3 [i_1 + 1] [i_1 + 1]))) ^ (min((arr_2 [i_1 - 1]), (arr_3 [i_1 + 1] [i_1 + 1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    var_11 = (min(var_11, (max((arr_0 [i_3 + 3]), (min((((arr_1 [i_1 - 1]) - var_2)), ((63 ? (arr_9 [i_2]) : var_6))))))));
                    var_12 = (min(var_12, (((((((-78 ? var_3 : var_7)) >= (((min(55483, -3)))))) || var_2)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_20 [i_4] [i_1] [i_1] [20] = ((4292004274 ? 1048512 : 1));
                        arr_21 [i_1] [i_1] [i_4] [i_1] &= var_6;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_13 = (min(var_13, 0));
        arr_24 [i_7] = ((((max(55483, 1449386745))) ? (((((65530 ? -1769255847 : 1))))) : 3));
        arr_25 [i_7] [i_7] = (arr_23 [i_7] [i_7]);
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        arr_28 [i_8] [i_8] = (((arr_2 [i_8]) + (((max(var_9, 65535)) * (!var_7)))));
        arr_29 [i_8] = (arr_12 [i_8]);
    }
    var_14 = (min(var_14, ((((((var_4 < var_6) << (((var_0 + 822068115) - 822125812)))) << (var_8 > var_5))))));
    /* LoopNest 3 */
    for (int i_9 = 4; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                {
                    arr_40 [15] [i_10] [i_11] [i_11] = 55513;
                    arr_41 [5] [i_9] [2] [i_9] = (1 >= 282512900);
                    var_15 = (min(var_15, (arr_22 [i_9])));
                    var_16 += arr_11 [i_10] [12] [i_10];
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            {
                arr_46 [i_13] [i_12] = 1769255864;

                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    var_17 = (max(((var_2 << (var_2 - 8071121593831065399))), (~var_0)));
                    var_18 ^= ((((2 ? (((1 ? -1449386727 : 129942496))) : (min(var_9, 1)))) * (arr_22 [i_12])));
                }
                arr_49 [i_12] = (((var_2 + (max((arr_3 [i_12] [i_12]), (arr_16 [i_12] [i_12] [i_12]))))));
                arr_50 [i_13] = (max((arr_0 [i_12]), (max((arr_0 [i_12]), 4274886221))));
            }
        }
    }
    #pragma endscop
}

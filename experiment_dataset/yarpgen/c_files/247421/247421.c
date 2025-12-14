/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((var_5 | (max(var_1, var_3)))), (2047 + 93)));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 -= var_1;
                    var_15 = (((arr_4 [i_0] [i_1] [5] [15]) - ((-(arr_4 [2] [2] [13] [i_0])))));
                }
            }
        }
        arr_6 [i_0] [i_0] = (min((!var_4), ((65535 != (32752 <= 65522)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_16 = (min(var_16, (((((((((arr_7 [i_3]) || (arr_5 [i_0] [i_0 - 1] [i_0 + 1])))))) - (max(2047, 9007199254740991)))))));
                        arr_14 [15] [i_3] [i_4] [i_3] = (((min((min(var_3, (arr_3 [i_0] [i_4] [i_4]))), (var_12 / var_6))) + (arr_3 [i_0] [i_0 - 1] [i_0 + 3])));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_17 ^= (((+((((arr_16 [i_6]) || var_6))))));
        var_18 = (((-368488946486788392 + 9223372036854775807) << ((((((-(arr_16 [i_6]))))) - 1))));
        arr_17 [i_6] [i_6] |= (0 ^ 16901252775712645043);

        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            arr_21 [i_7] [i_7] = 35184372088831;
            var_19 = (max(((((arr_16 [i_6]) + -1277195401))), (((!0) * var_8))));
        }
    }

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_26 [1] = (~var_10);
        arr_27 [i_8] [i_8] = (((arr_15 [i_8]) * var_1));
        var_20 = (arr_20 [i_8] [i_8]);
        var_21 = ((~((((var_10 | (arr_18 [i_8])))))));
        var_22 = (17 < 7984333588190972007);
    }
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        arr_30 [i_9] = min(10408, (((((arr_29 [i_9] [i_9]) % var_12)) + var_4)));
        var_23 ^= (min((var_0 ^ var_4), (((((arr_0 [i_9 + 1]) & var_4)) | var_10))));
    }
    for (int i_10 = 1; i_10 < 9;i_10 += 1)
    {
        var_24 = -var_10;
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    {
                        var_25 *= ((1573 >> (18446744073709551615 - 18446744073709551611)));
                        arr_40 [i_12] [i_11] [i_12] [i_13] = var_0;
                    }
                }
            }
        }
        var_26 = (max(var_26, (((~(arr_16 [i_10]))))));
        arr_41 [2] = (((max((arr_38 [i_10] [i_10] [i_10] [2]), (arr_34 [i_10] [0] [i_10])))));
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        arr_44 [14] [i_14] = ((+(min((((arr_19 [i_14] [i_14] [i_14]) * (arr_20 [i_14] [i_14]))), (((var_1 - (arr_43 [i_14]))))))));
        var_27 = ((-((var_1 / (arr_43 [i_14])))));
    }
    #pragma endscop
}

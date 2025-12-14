/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(((32765 ? 9 : var_14)), ((max(var_2, var_4)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 7;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_1] = ((((arr_2 [i_1] [4]) ? var_9 : (arr_0 [i_0] [4]))) >= 18153975543234631411);
            var_19 ^= ((~(arr_2 [i_1 - 3] [i_1 + 4])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 *= ((-var_4 ? var_14 : var_15));

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_21 = ((-(arr_6 [i_1] [i_2] [i_3])));
                            arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = ((~(arr_11 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3])));
                            arr_14 [i_0] [i_1] [i_1] [i_3] [i_4] = 18446744073709551606;
                        }
                        var_22 = (min(var_22, ((((arr_6 [i_1] [i_1 - 1] [i_1]) ? (arr_6 [i_1 + 4] [i_1 - 2] [i_1]) : (arr_6 [i_1] [i_1 - 1] [1]))))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [4] = (((arr_12 [i_1 - 2] [i_1 + 4] [i_2] [i_3 - 1] [i_3 - 1]) || (!var_0)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    {
                        var_23 ^= var_5;
                        arr_21 [i_0] [i_1] = var_10;
                        var_24 = 3310508081619546985;
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 7;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {
                        var_25 ^= ((((((-9797 + 2147483647) >> ((max(1, var_3)))))) ^ (min((((var_3 ? 1 : 64))), var_8))));
                        var_26 = (max(((max(-32749, 238))), ((-30396 ? -113 : 102))));
                        arr_32 [i_0] [i_7] [i_0] [i_7] [0] [i_7] = (+((((arr_12 [i_9 - 1] [i_9] [i_8 - 1] [i_0] [i_0]) != -18446744073709551580))));
                    }
                }
            }
            var_27 = ((((min((min(var_1, 746222062)), var_16))) ? var_13 : (min(((var_17 ? var_12 : var_16)), (arr_26 [i_7])))));
            arr_33 [i_0] [i_7] = 55738;
        }
        var_28 = ((35 ? 299899243190316045 : -14));
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        var_29 = 277076930199552;
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    {
                        var_30 = ((((min(var_17, (((~(arr_39 [i_12]))))))) & (((arr_41 [i_12] [i_10] [i_12] [i_13]) + (arr_41 [i_10] [i_11] [i_12] [i_10])))));
                        arr_47 [i_11] [i_11] = 1787475632;
                        arr_48 [i_10] [i_12] [i_11] = ((2147483647 ^ ((((((var_6 ? (arr_40 [i_10] [i_10] [2] [10]) : (arr_43 [i_10] [i_11] [i_10] [i_10])))) ? -64 : (min(var_3, (arr_44 [2]))))))));
                    }
                }
            }
        }
        var_31 ^= ((((292768530474920204 * (arr_44 [i_10]))) != (((max(0, (!2507491661)))))));
    }
    #pragma endscop
}

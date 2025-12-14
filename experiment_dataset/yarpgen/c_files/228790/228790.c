/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_11 = var_1;
            arr_6 [9] [10] [6] = (!31608);
        }
        arr_7 [i_0] = max((((arr_4 [i_0] [13] [13]) | (arr_3 [i_0] [i_0]))), (255 & 33921));
        arr_8 [i_0] = ((~(min((~var_5), (arr_0 [i_0])))));
        arr_9 [i_0] = (((arr_2 [i_0] [12] [12]) ^ 33927));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_12 |= arr_0 [i_2];

        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
            {
                var_13 *= 255;

                for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_14 = var_1;
                    var_15 = 64;
                }
                for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_2] [6] [i_3] [i_4] [i_3] [i_6] = (((arr_1 [i_6] [i_3 + 1]) ? (arr_2 [i_2] [i_3 - 1] [i_3 + 2]) : var_8));
                    var_16 = (min(var_16, ((((((arr_22 [i_2] [i_3] [1] [i_3]) & -109)) >> ((((9223372036854775795 ? var_1 : 2757580750)) - 4294946057)))))));
                }
                var_17 -= arr_2 [i_2] [i_3] [i_4];
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
            {
                var_18 = (1152921500311879680 || var_7);
                var_19 = 4294967295;
                arr_26 [i_7] [i_3 + 2] [i_3] [i_2] = (((arr_25 [i_2]) ^ (arr_21 [i_3 + 1] [i_2] [i_7] [i_2])));
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
            {
                var_20 = ((168 | (arr_18 [i_2] [1] [i_2] [1] [i_2] [i_8])));
                var_21 ^= ((~(arr_14 [i_2] [1])));
                arr_31 [i_8] [i_2] [0] [i_3] = (((arr_24 [6] [i_2] [i_2] [i_3]) >> (var_4 + 4064484077900047414)));
                var_22 = (((arr_5 [14] [i_3 + 1]) ? (arr_19 [i_3 + 3] [i_8] [i_8] [i_8]) : (arr_30 [i_2] [i_2])));
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
            {
                var_23 = (arr_24 [16] [i_3 + 1] [i_2] [i_9]);
                arr_36 [i_2] [5] [i_2] = ((arr_12 [15]) == ((3 ? 2115 : -1152921500311879681)));
            }

            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {

                for (int i_11 = 4; i_11 < 16;i_11 += 1)
                {
                    var_24 = (((arr_4 [i_2] [i_3 - 1] [i_11 - 4]) ^ (~46515)));

                    for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        var_25 = (((~0) % -1152921500311879681));
                        var_26 = -1152921500311879681;
                        arr_45 [i_11] [i_3] = (arr_1 [i_3 + 3] [3]);
                    }
                    for (int i_13 = 1; i_13 < 13;i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_11 - 4] [i_13] [i_11 - 1] = (arr_12 [i_2]);
                        arr_49 [i_2] [i_3] [i_10] [i_13] [i_13 + 1] = (arr_47 [i_13] [i_3] [i_10] [i_11 + 1] [i_13]);
                        arr_50 [i_13] [i_3] [1] [i_13] [i_13] [13] = ((18446744073709551612 && (arr_47 [i_2] [i_11 - 4] [i_13 + 1] [i_2] [i_13 + 1])));
                    }
                    for (int i_14 = 1; i_14 < 13;i_14 += 1) /* same iter space */
                    {
                        arr_53 [1] [i_11 - 1] [i_11] [1] [6] [6] [i_2] = (arr_51 [i_14] [7] [i_10] [5] [i_2]);
                        arr_54 [i_2] [i_2] [i_2] [i_2] [8] [i_2] [i_2] = ((2427755526 ? (arr_27 [i_2]) : (arr_18 [i_2] [i_3 - 1] [i_3] [7] [i_14] [i_3])));
                    }
                    for (int i_15 = 1; i_15 < 13;i_15 += 1) /* same iter space */
                    {
                        arr_57 [i_2] [1] [i_2] [i_15] [0] [i_11 + 1] [i_3 - 1] = (((arr_46 [i_2] [i_2] [i_10] [i_11] [i_15]) > 0));
                        arr_58 [i_2] [9] [i_10] [i_11 - 4] [i_15] = arr_46 [i_2] [i_3] [i_10] [i_11 - 3] [i_15 + 3];
                        var_27 = (min(var_27, (~var_2)));
                    }
                }
                arr_59 [i_2] [i_2] = -1152921500311879683;
                var_28 = (33928 ? 0 : 31608);
            }
        }
        for (int i_16 = 1; i_16 < 14;i_16 += 1) /* same iter space */
        {
            var_29 = ((33928 > 65521) ? (((arr_3 [i_16 - 1] [i_2]) ? 31603 : (arr_3 [i_2] [7]))) : (~var_2));
            arr_64 [i_2] [i_16] [i_2] = 65535;
            var_30 = ((((((arr_0 [i_16 + 2]) * (arr_19 [i_2] [i_2] [i_2] [i_2])))) | ((65535 + (arr_21 [11] [i_2] [i_2] [i_2])))));
            var_31 = (max(var_31, (arr_30 [i_16 + 2] [i_2])));
            var_32 = ((((var_6 >= (arr_2 [i_16 + 1] [i_2] [i_2]))) ? (arr_38 [i_16 + 2] [i_16]) : ((18446744073709551609 ? (arr_17 [13] [i_16] [i_2]) : 255))));
        }
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 16;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                {
                    arr_69 [i_17] [i_2] = ((var_4 ? (~0) : ((~(arr_33 [i_18] [i_18] [i_18])))));
                    var_33 = (min(var_33, (arr_47 [i_2] [i_17] [i_17] [i_18] [i_18])));
                }
            }
        }
    }
    #pragma endscop
}

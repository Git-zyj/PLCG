/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((var_7 - var_12), (!var_4)));
    var_14 = var_2;
    var_15 = (max(var_1, var_11));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (65529 ^ -4);
        arr_4 [1] = var_1;

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = (((144110790029344768 % 4569064564390314895) ? 127 : 119));
            var_17 = (((127 + 119) + ((119 & (arr_6 [i_1 + 1] [i_1 + 1])))));
            var_18 *= ((-1753160304 ? (~var_1) : var_2));
            var_19 ^= ((~(((arr_1 [i_0]) ^ ((max(128, var_2)))))));
        }

        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                var_20 = var_1;
                arr_12 [i_2] = ((!(((arr_8 [i_0] [i_2] [i_3]) > 2138001074))));
            }

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_21 ^= var_2;
                            arr_20 [i_2] [i_2] [i_4] [i_4] [i_5] [i_5] [i_6] = ((((min((arr_19 [i_2 + 1] [i_2] [i_6] [i_5] [i_6 + 1]), var_4))) ? var_1 : var_0));
                        }
                    }
                }
                var_22 ^= ((((arr_18 [i_0] [13] [19] [i_0] [i_2]) / 9223372036854775807)));
                var_23 = (max((((~var_4) ? (arr_18 [i_2 - 1] [i_2] [i_2 + 1] [i_2] [i_2]) : (-121 && var_10))), ((((max((arr_5 [14]), 127))) * var_10))));
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_24 = (i_2 % 2 == 0) ? (((((((-2839 + 2147483647) << (((((arr_5 [i_2]) + 75)) - 18))))) ? 18413614203736953211 : ((((min(1, var_9))) ? ((~(arr_21 [i_0] [i_0] [i_2] [i_7]))) : (arr_19 [i_0] [i_2] [i_7] [i_7] [i_7])))))) : (((((((-2839 + 2147483647) << (((((((((arr_5 [i_2]) + 75)) - 18)) + 41)) - 10))))) ? 18413614203736953211 : ((((min(1, var_9))) ? ((~(arr_21 [i_0] [i_0] [i_2] [i_7]))) : (arr_19 [i_0] [i_2] [i_7] [i_7] [i_7]))))));
                arr_24 [i_7] [i_2] [i_7] [i_2] = (((!var_4) ? 65504 : 18446744073709551615));
                var_25 = (arr_8 [i_0] [i_0] [i_0]);
                var_26 = (arr_14 [7]);

                /* vectorizable */
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_27 = var_4;
                    arr_29 [i_2] = var_6;
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_28 = ((((~((((arr_28 [i_0] [i_2] [13] [13] [i_9]) || 1)))))) ? (max((((arr_14 [i_0]) ? (arr_25 [i_0] [1] [i_2]) : var_6)), var_1)) : (!-5546473880544787880));
                    var_29 = max(var_7, var_10);
                    arr_32 [i_0] [i_2] [i_7] [i_7] = (max((((((3374857106 ? (arr_11 [i_2] [i_2 - 1] [i_2]) : (arr_14 [i_0])))) ? 1 : (arr_25 [i_2] [i_2 + 1] [i_2]))), var_11));
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_30 = (arr_0 [17]);
                    var_31 = ((((arr_3 [i_0] [i_0]) ^ 18446744073709551615)));
                }
                for (int i_11 = 1; i_11 < 22;i_11 += 1)
                {
                    var_32 = 18872;

                    for (int i_12 = 1; i_12 < 22;i_12 += 1)
                    {
                        var_33 |= var_0;
                        arr_43 [i_7] [i_2] [22] [i_7] [4] = (max(((((max((arr_22 [i_0] [i_2] [i_0]), var_9))) ? (((max(var_3, var_3)))) : (max(var_6, 8383019990790975934)))), -113));
                    }
                    arr_44 [16] [i_7] [i_2] = ((!((max(1067017497237156904, -47)))));
                }
            }
            arr_45 [i_2] [i_2] [i_2] = -var_6;
        }
        for (int i_13 = 1; i_13 < 22;i_13 += 1) /* same iter space */
        {
            var_34 ^= 119;
            arr_49 [i_0] [i_0] = ((-(arr_46 [i_13] [i_13 - 1])));

            for (int i_14 = 3; i_14 < 21;i_14 += 1)
            {
                var_35 = (arr_38 [i_0] [i_0] [i_0] [i_13] [i_14 - 3] [i_14]);
                arr_52 [i_14] [i_13 + 1] = ((((max((arr_28 [i_0] [i_13 + 1] [i_14 + 2] [i_14 - 1] [i_14 - 1]), (arr_28 [i_0] [i_0] [i_13 - 1] [i_14 - 1] [i_14 + 1])))) ^ var_7));
            }
        }
        for (int i_15 = 1; i_15 < 22;i_15 += 1) /* same iter space */
        {
            arr_56 [i_0] [i_0] [3] = ((var_3 ? var_0 : var_3));
            var_36 |= ((~(var_6 % var_11)));
            var_37 &= (var_10 ? var_1 : (max(var_3, ((-1215307792 + (arr_50 [i_0] [2] [i_15] [i_15]))))));
            arr_57 [i_0] [i_15] = -var_2;
            /* LoopNest 3 */
            for (int i_16 = 1; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        {
                            var_38 = ((~(((var_7 <= (~var_3))))));
                            arr_68 [i_0] [i_16] = (20762 || -113);
                        }
                    }
                }
            }
        }
        arr_69 [i_0] [i_0] = (arr_11 [4] [i_0] [i_0]);
    }
    for (int i_19 = 2; i_19 < 19;i_19 += 1)
    {
        arr_73 [i_19] [i_19] = (~var_7);
        arr_74 [i_19 - 1] [i_19 - 1] = ((((max(var_0, (48 % var_9)))) ? var_7 : (arr_37 [i_19 + 4] [i_19 - 1] [i_19 + 4] [i_19 + 2] [i_19 - 2])));
    }
    #pragma endscop
}

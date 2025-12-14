/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 |= (((arr_3 [2]) ? (((arr_2 [i_0] [i_0]) ? (arr_0 [10]) : (arr_2 [i_0] [i_0]))) : (((((arr_2 [i_0] [i_0]) || 4244600745))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    {
                        var_11 = (min(var_11, 1));
                        var_12 = (max(var_12, (((50366550 >> (((arr_2 [i_0] [i_1 - 1]) + 39)))))));
                        var_13 ^= ((536870400 <= 50366550) ? (((((var_0 >> (15129992507160563561 - 15129992507160563544))) <= (((var_9 || (arr_0 [i_3]))))))) : ((((arr_3 [i_3]) || ((((arr_8 [i_0] [i_0] [i_0] [i_2] [i_3]) ? (arr_1 [i_1]) : 1573781308)))))));
                    }
                }
            }
        }
    }
    var_14 = 0;
    var_15 = (!17952035925346649823);

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    {
                        var_16 ^= (~var_2);
                        var_17 = var_4;
                        arr_20 [i_5] [i_5] = (arr_0 [i_5]);
                        var_18 = (min(var_18, (((((arr_8 [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_4]) ? (arr_11 [i_5]) : (var_9 <= var_3)))))));
                        arr_21 [i_5] [i_5] [i_5] [i_4] = var_5;
                    }
                }
            }
        }

        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            var_19 = (min(var_19, (arr_2 [i_8 - 2] [i_8 - 2])));
            arr_24 [i_4] [i_8] = (((-127 - 1) ? (arr_2 [i_8] [i_8]) : ((var_2 >> (((arr_17 [i_4] [i_4] [i_8 - 1]) - 11585852634250690964))))));
            arr_25 [i_4] [i_8] [i_4] = (~54);
            arr_26 [i_8] = var_6;
        }
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((var_6 ? (((var_8 && (var_8 || var_6)))) : ((((var_6 || var_5) || -84)))))));
                            var_21 = (((((arr_4 [i_12]) | var_9))));
                        }
                    }
                }
            }
            var_22 = ((-(((((arr_36 [i_4] [i_4] [i_4] [i_9 + 1]) | 18446744073709551615))))));
            var_23 = (!-1189346356);
            var_24 = (max(var_24, var_4));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
        {
            arr_41 [i_4] |= (!(((arr_5 [i_13] [i_13] [i_4]) || var_6)));
            var_25 = (min(var_25, ((((((var_2 ? var_6 : var_2))) ? 8037652023546984740 : (((arr_38 [i_4] [i_4] [i_4] [i_4] [i_13] [i_13] [i_4]) ? (arr_6 [i_4] [i_4] [i_13] [i_4]) : (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))))))));
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 1;i_16 += 1)
                {
                    {
                        arr_50 [i_4] [i_14] [1] [i_14] = (-127 - 1);
                        var_26 &= (arr_46 [i_16 - 1] [i_16 - 1]);
                        arr_51 [i_4] [i_4] [8] [i_4] [8] [4] = ((((((arr_12 [i_15]) ? (arr_12 [i_14]) : var_4))) || var_2));
                    }
                }
            }

            for (int i_17 = 2; i_17 < 18;i_17 += 1)
            {

                for (int i_18 = 2; i_18 < 18;i_18 += 1)
                {
                    arr_58 [i_14] [i_4] = (4244600739 / 30512);
                    var_27 = (min(var_27, (((((var_2 ? (arr_39 [i_4] [i_4] [i_17 + 3]) : (((var_2 || (arr_40 [i_4] [i_4]))))))) <= ((~(arr_2 [i_4] [i_4])))))));
                    var_28 = (max(var_28, ((var_8 ? ((((arr_53 [i_18 + 3] [i_18 - 1] [i_18 - 1]) || (arr_22 [i_4] [i_17 + 3] [i_18 + 3])))) : (var_1 || var_9)))));
                }
                var_29 = ((-(-127 - 1)));
                var_30 = (((!(arr_8 [i_17 + 3] [i_17 + 1] [i_17 + 3] [i_17 + 2] [i_4]))) || (((~((var_7 ? var_5 : var_3))))));
                var_31 |= var_3;
            }
            /* vectorizable */
            for (int i_19 = 1; i_19 < 20;i_19 += 1)
            {
                arr_62 [i_19] [i_19] [i_19] = (arr_53 [i_19] [i_4] [i_4]);
                var_32 = (max(var_32, (((~(arr_56 [i_4] [i_4] [i_19] [i_19 + 1] [i_19]))))));
            }
            for (int i_20 = 1; i_20 < 20;i_20 += 1) /* same iter space */
            {
                arr_65 [i_14] [i_4] |= ((630528291 >> (((arr_18 [i_4] [4] [i_14] [0]) - 136))));
                var_33 = (max(var_33, var_0));
                arr_66 [i_4] [0] |= ((~((~((0 ? (arr_36 [i_4] [i_14] [i_20 + 1] [i_14]) : -2))))));
                arr_67 [i_4] [i_4] [i_20] = var_9;
            }
            for (int i_21 = 1; i_21 < 20;i_21 += 1) /* same iter space */
            {
                var_34 *= ((((((~(arr_36 [i_21 + 1] [i_4] [i_4] [i_4]))) + 2147483647)) >> (((((((arr_5 [i_4] [i_14] [i_4]) ? (arr_45 [3] [i_14] [i_14]) : (arr_19 [2] [i_4] [i_4])))) || (!0))))));
                var_35 *= var_6;
            }
            arr_70 [i_4] [i_14] [i_14] = (((1 ? 3312884428990791142 : var_1)));
        }
        var_36 *= (var_4 >> var_0);
        arr_71 [i_4] = ((((~(!463438294)))) ? (((!(arr_39 [i_4] [i_4] [i_4])))) : -1023);
    }
    var_37 = (((var_3 || (var_6 || var_2))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_15));
                    var_21 = (min(var_21, ((min(-20635, 65535)))));
                }
            }
        }
    }
    var_22 = (((min(var_2, (((var_6 ? var_19 : var_19))))) & ((((!(31188 <= -15)))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, 0));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_24 += (arr_12 [i_3] [i_3] [i_3]);
                            arr_21 [i_7] [i_7] [i_7] [i_7] |= ((var_19 ? (arr_10 [i_7] [i_7]) : (((arr_17 [i_3] [i_4] [i_5] [i_3]) >> (((max(var_1, var_4)) - 11182905081285237551))))));
                        }
                        arr_22 [i_6] [i_5] [i_6] = (-31188 < 0);
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_8] = (-(arr_23 [i_3] [i_4] [i_5] [i_8]));
                        arr_26 [i_8] [i_5] [i_3] [i_8] = 32334;

                        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_25 |= (var_5 ? (max(31184, ((min(2147483647, (arr_19 [i_5] [i_5])))))) : ((((((var_19 <= (arr_7 [i_9] [i_9])))) * (((arr_20 [i_3] [i_8] [i_5] [i_3] [i_3]) / (arr_15 [i_3] [i_3] [i_3])))))));
                            var_26 = var_8;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                        {
                            arr_31 [i_8] [i_4] = (((~var_6) - var_13));
                            var_27 ^= (arr_8 [i_5]);
                            arr_32 [i_3] [i_3] [i_8] [i_8] [i_10] = (-112 >= -3);
                            arr_33 [i_3] [i_3] [i_4] [i_5] [i_8] [i_3] [i_3] = (arr_13 [i_10] [i_4] [i_5]);
                        }
                        arr_34 [i_3] [i_3] [i_8] [i_8] = -var_4;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        arr_37 [i_11] [i_3] [i_3] [i_11] = var_17;

                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_28 -= 2147483647;
                            arr_40 [i_11] = ((arr_28 [i_3] [i_5] [i_3] [i_11] [i_5]) >> var_14);
                            var_29 -= (~var_10);
                        }
                        for (int i_13 = 2; i_13 < 14;i_13 += 1)
                        {
                            var_30 = 231;
                            var_31 = ((~(arr_36 [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_11])));
                            var_32 = ((var_17 ? 25705 : (-1639888990 && 32314)));
                        }
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            arr_46 [i_11] [i_11] [i_11] = var_18;
                            var_33 = (var_11 + var_0);
                            arr_47 [i_14] [i_3] [i_11] [i_11] [i_3] [i_3] [i_3] = ((~((-1411368557 ? (arr_39 [i_4] [i_4] [i_4] [i_4] [i_4]) : var_17))));
                        }
                    }
                    arr_48 [i_5] = ((-(min((arr_41 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((var_13 ? -7 : var_17)))))));
                    arr_49 [i_3] [i_4] = 61850;
                    arr_50 [i_3] [i_3] [i_3] [i_3] = ((((((arr_35 [i_3] [i_5]) ? (arr_12 [i_4] [i_4] [i_4]) : (arr_13 [i_3] [i_3] [i_3])))) ? ((((!((max(-1639888990, 25705))))))) : (((arr_35 [i_3] [i_5]) ? var_8 : (arr_35 [i_3] [i_5])))));
                }
                /* vectorizable */
                for (int i_15 = 1; i_15 < 12;i_15 += 1) /* same iter space */
                {
                    var_34 = (max(var_34, (arr_35 [i_3] [12])));
                    var_35 += 9187343239835811840;
                }
                /* vectorizable */
                for (int i_16 = 1; i_16 < 12;i_16 += 1) /* same iter space */
                {
                    var_36 = ((-32767 - 1) ? (arr_44 [i_16 + 1] [i_4] [i_4] [i_4] [i_3]) : 1639888983);

                    for (int i_17 = 3; i_17 < 15;i_17 += 1) /* same iter space */
                    {
                        var_37 = (max(var_37, (((~(-2147483647 - 1))))));
                        var_38 = (i_16 % 2 == 0) ? ((((arr_42 [i_3] [i_16] [i_16] [i_17 + 1]) << (((arr_42 [i_3] [i_16] [i_3] [i_17 + 1]) - 1820144914))))) : ((((arr_42 [i_3] [i_16] [i_16] [i_17 + 1]) << (((((arr_42 [i_3] [i_16] [i_3] [i_17 + 1]) - 1820144914)) - 256473699)))));
                    }
                    for (int i_18 = 3; i_18 < 15;i_18 += 1) /* same iter space */
                    {
                        arr_61 [i_3] [i_3] [i_3] [i_16] = (!var_11);
                        var_39 += (arr_36 [8] [i_16 - 1] [i_18 - 3] [i_16 + 2] [i_16 - 1] [8]);
                        arr_62 [i_16] [i_16] = ((((var_14 || (arr_35 [i_18] [i_16]))) ? (var_10 != var_2) : var_12));
                        var_40 += var_1;
                    }
                    arr_63 [i_16] [i_4] = -var_8;
                    var_41 -= ((var_0 + (~1639888990)));
                }
                for (int i_19 = 1; i_19 < 12;i_19 += 1) /* same iter space */
                {

                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {
                        arr_70 [i_20] [i_19] [i_3] [i_19] [i_3] = 18446744073709551604;
                        var_42 = var_3;
                        arr_71 [i_3] [i_3] [i_19 - 1] [i_3] [i_19 - 1] [i_19] = var_10;
                        arr_72 [i_4] [i_4] [i_19] [i_4] = var_1;
                        arr_73 [i_19] [i_19] [i_19 + 4] [i_20] = ((((min(32767, 25138))) ? ((min(-1087057524, var_11))) : (min((arr_45 [i_19 + 3] [i_19 + 3] [i_19 + 1] [i_19 + 1] [i_19 + 2]), (arr_45 [i_19 + 3] [i_19 - 1] [i_19 + 4] [i_19 + 1] [i_19 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_21 = 0; i_21 < 16;i_21 += 1)
                    {
                        arr_77 [i_3] [i_3] [i_19] [i_19 + 1] [i_19] = -61852;
                        var_43 &= ((var_11 ? (arr_59 [i_19 + 2] [i_19 + 2] [i_19 + 1] [i_19 + 2] [i_19 - 1] [i_19 + 3]) : (arr_39 [i_19 + 2] [i_19 - 1] [i_19 + 2] [i_19 + 1] [i_19 + 1])));
                        arr_78 [i_3] [i_4] [i_4] [i_4] [i_19] = var_1;

                        for (int i_22 = 4; i_22 < 15;i_22 += 1)
                        {
                            var_44 = (min(var_44, 17287));
                            arr_81 [i_19] [i_19] [i_19] [i_19] [i_3] = 2147483633;
                        }
                    }
                    var_45 = (min(var_45, (((var_1 ? (arr_12 [i_3] [i_3] [i_3]) : (min((arr_14 [i_19] [i_19] [i_4] [i_19 + 3]), (min((arr_14 [i_19 - 1] [i_19 - 1] [i_4] [i_3]), (arr_43 [i_3] [i_3] [4] [i_3] [i_3]))))))))));
                }
                var_46 = (min(var_46, ((~(min(var_14, (arr_27 [6] [i_4])))))));
                arr_82 [i_3] = var_3;
                arr_83 [i_4] = ((((2147483617 && (arr_41 [i_3] [i_3] [i_3] [i_3] [i_4] [i_3])))));
                arr_84 [i_3] [i_3] [i_3] = var_18;
            }
        }
    }
    #pragma endscop
}

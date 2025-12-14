/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = -71;
                var_13 = (min((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))), ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_9)))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 21;i_2 += 1)
    {
        var_14 = var_2;
        arr_8 [i_2] = (~4855);
        var_15 = arr_5 [i_2];
        arr_9 [i_2 - 3] = -var_4;
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
    {
        var_16 &= (((arr_0 [1] [1]) ? var_10 : (max((((!(arr_7 [i_3] [i_3])))), (max((arr_13 [i_3]), (arr_10 [i_3])))))));
        var_17 ^= (max((((-((((arr_2 [i_3]) == (arr_6 [i_3]))))))), (arr_3 [i_3] [i_3])));
        arr_14 [i_3] = (!var_4);
    }
    for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_18 = ((15762598695796736 ? (((var_10 ? var_8 : var_0))) : (max((var_2 - var_1), var_6))));
        arr_17 [i_4] [i_4] = (arr_15 [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    arr_23 [i_4] [i_5] [i_5] [i_4] = (((((-67 >= ((((arr_19 [i_4] [i_4]) >= var_7)))))) ^ 66));
                    var_19 = (max(var_19, var_1));
                    var_20 = ((((var_9 & var_0) ? var_5 : var_0)));
                }
            }
        }
        arr_24 [i_4] [i_4] = ((~((60680 ? var_8 : (arr_20 [6] [i_4 - 3] [i_4])))));
    }
    var_21 = (max(var_11, var_8));
    var_22 |= var_6;

    for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_23 &= (~var_1);
        var_24 ^= (!60675);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 3; i_9 < 16;i_9 += 1)
        {
            arr_32 [i_8] = (arr_28 [i_8] [i_9 - 2]);
            var_25 = (arr_29 [i_8 + 2]);
            arr_33 [i_8] [i_8] = (arr_3 [i_9 - 1] [i_9]);
            var_26 = ((~(arr_28 [i_8] [i_8])));
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            var_27 = (var_2 ^ var_1);
                            var_28 += (((arr_6 [i_8 - 1]) ? (arr_3 [i_10 - 1] [i_8 - 1]) : var_7));
                            arr_43 [i_8 + 3] [i_9 - 2] [i_8] [i_11] [i_12] = ((12651 ? ((((!(arr_38 [i_8] [i_8] [i_8] [i_8] [i_8]))))) : (arr_3 [i_9 - 3] [10])));
                            var_29 *= arr_30 [0] [i_10] [i_11];
                        }

                        for (int i_13 = 1; i_13 < 15;i_13 += 1)
                        {
                            var_30 += ((!((var_0 && (arr_1 [i_8])))));
                            var_31 = (arr_2 [i_9 - 2]);
                            var_32 = (arr_26 [i_10]);
                            var_33 ^= var_5;
                        }
                        for (int i_14 = 3; i_14 < 13;i_14 += 1)
                        {
                            arr_48 [i_14] [i_14] [i_14] [i_14] [i_14] [i_8] [i_14 + 1] = var_1;
                            arr_49 [i_10] [i_8] [i_8] = (~(arr_28 [i_8] [i_9]));
                            var_34 = (((arr_46 [i_8] [i_14]) > (arr_27 [i_8] [i_8])));
                        }
                    }
                }
            }
        }
        for (int i_15 = 2; i_15 < 16;i_15 += 1) /* same iter space */
        {
            var_35 = (53 * 1861929548);
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 16;i_17 += 1)
                {
                    {
                        arr_58 [i_8 + 3] [i_15 + 1] [i_16] [i_16] [i_17] [12] |= (var_5 >> var_6);

                        for (int i_18 = 2; i_18 < 16;i_18 += 1)
                        {
                            var_36 = (arr_60 [i_15] [i_15] [i_15 - 2] [i_15] [i_15] [i_15 - 1] [i_15]);
                            var_37 |= var_2;
                            var_38 = (((!var_7) && var_11));
                        }
                        var_39 = (((arr_53 [i_8]) % (((arr_25 [i_8]) ^ (arr_44 [i_8] [i_8] [i_8 + 1] [0] [9])))));
                        var_40 ^= ((4855 ? (arr_5 [i_15 - 1]) : (arr_34 [10] [6] [10] [i_17])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 15;i_20 += 1)
                {
                    {
                        arr_70 [i_8] [i_15] [i_8] [i_15] = (var_9 - (arr_53 [i_8]));
                        arr_71 [i_8] [i_15 - 2] [i_8] [i_8] [i_15 - 2] = -7809542125753850598;
                        arr_72 [i_8 + 1] [i_15] [i_8] [i_8 + 1] = 93;
                    }
                }
            }
        }
        for (int i_21 = 2; i_21 < 16;i_21 += 1) /* same iter space */
        {
            arr_76 [i_8] [i_8] [i_8] = ((1 | (arr_7 [i_21 + 1] [i_8 - 1])));
            var_41 += ((((((arr_67 [16] [i_8] [i_8 + 3]) ? var_0 : (arr_73 [i_8])))) || var_3));
            /* LoopNest 3 */
            for (int i_22 = 2; i_22 < 16;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 15;i_23 += 1)
                {
                    for (int i_24 = 1; i_24 < 16;i_24 += 1)
                    {
                        {
                            var_42 ^= (arr_38 [i_22] [i_22 - 2] [i_22] [10] [i_22 + 1]);
                            var_43 = ((719170401350927252 && (60672 % 12043589531356538421)));
                            var_44 = (~var_1);
                        }
                    }
                }
            }
            arr_85 [i_8 + 3] [i_8] [8] = 14353102064635561687;
        }
        var_45 *= (((arr_38 [i_8] [i_8] [i_8] [4] [i_8 + 2]) ? 10711 : (((1 ? var_3 : var_6)))));
        arr_86 [i_8] = ((((196 ? (arr_59 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_8] [i_8]) : 10818879761801075870)) | var_8));
    }
    #pragma endscop
}

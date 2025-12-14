/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((max(var_8, var_8)) <= ((((!((min(33554431, var_7))))))))))));
    var_15 = -6512143484496833082;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = 255;
                    var_17 = (min(var_17, var_2));
                }
            }
        }
        var_18 = (~var_4);

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_19 = (max(var_19, 159));

            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
            {
                var_20 = (max(var_20, (((((~(arr_6 [i_4] [i_4]))) ^ (arr_1 [i_3]))))));

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_21 = var_2;
                    var_22 ^= (122 <= var_1);
                    var_23 = (arr_9 [i_0] [i_0] [i_0]);

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_24 ^= (arr_18 [i_0] [i_3] [i_4] [i_5] [i_4]);
                        var_25 ^= ((97 << (var_2 - 6072951972815345587)));
                    }
                }
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
            {
                var_26 &= var_2;
                arr_23 [i_3] |= 7246565198865603338;
            }
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_27 = (min(var_27, (arr_10 [i_0])));
            var_28 = ((122 && (arr_20 [17] [i_8])));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_29 = 161;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_30 ^= ((!(arr_28 [i_0] [i_0])));
                        var_31 = (min(var_31, var_0));
                    }
                }
            }
            arr_36 [i_9] = (arr_15 [i_0] [i_0] [i_0] [i_9]);
        }
    }
    for (int i_12 = 2; i_12 < 8;i_12 += 1)
    {
        arr_40 [3] = (((var_0 != var_0) % var_10));
        arr_41 [i_12] = (min(((var_1 && (arr_13 [i_12] [i_12] [i_12 + 1] [i_12]))), (((arr_13 [i_12] [i_12] [i_12 + 1] [i_12 + 2]) <= (arr_13 [i_12] [i_12] [i_12 + 1] [i_12])))));
    }
    for (int i_13 = 2; i_13 < 22;i_13 += 1)
    {
        var_32 = (min(var_32, (((((min((94 != 94), (arr_44 [i_13])))) && (((-(((arr_42 [i_13]) * var_9))))))))));
        var_33 += var_9;
        var_34 = (min((min((arr_45 [i_13] [i_13]), -var_8)), (min((arr_45 [i_13] [i_13]), var_8))));
    }

    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        var_35 = (((((var_1 & (arr_43 [i_14]))) << (var_7 + 3408216640092562268))));
        var_36 = ((((((arr_49 [i_14]) == (((!(arr_47 [i_14] [i_14]))))))) % (arr_46 [i_14])));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    arr_56 [i_15] = (min(var_9, (max(115, (min(83, 158))))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            {
                                var_37 *= 97;
                                var_38 ^= max((min(var_10, var_3)), (arr_47 [i_14] [1]));
                            }
                        }
                    }
                    var_39 *= (((((((arr_45 [i_14] [i_14]) < (arr_49 [i_16]))))) == (((((arr_55 [i_14] [i_15] [i_15] [i_16]) * var_10)) - (3975769732 & var_13)))));
                }
            }
        }
        arr_61 [i_14] [i_14] = 1;
    }
    for (int i_19 = 2; i_19 < 15;i_19 += 1)
    {
        var_40 ^= (min((((var_0 && (arr_60 [i_19] [i_19] [i_19] [i_19] [0] [i_19])))), (min(3595891681, (arr_25 [i_19] [i_19] [i_19])))));
        var_41 = ((!(144 ^ 125)));
        var_42 = (min(var_42, (((-(arr_24 [i_19] [i_19]))))));
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 17;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 17;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 17;i_22 += 1)
                {
                    {
                        var_43 ^= 94;
                        var_44 = (((arr_10 [i_19]) && ((((var_12 + 9223372036854775807) << (arr_1 [i_19]))))));
                        arr_72 [i_19] [i_20] [i_21] = (arr_59 [i_19 + 1] [i_19 + 2] [i_19 + 1] [i_19 + 1] [i_19 + 2]);
                        var_45 = (min(var_45, (((~(arr_18 [i_19 - 1] [i_19] [i_22] [i_22] [i_22]))))));
                        var_46 = (min(var_46, var_6));
                    }
                }
            }
        }
    }
    #pragma endscop
}

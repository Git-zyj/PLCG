/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((!((max((arr_1 [i_0]), (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        var_16 = ((((min(323095025, (arr_0 [i_0])))) ? ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (((arr_0 [11]) << (var_8 - 4786231522508055558)))))) : ((((max(3712, 1))) ? (3853313136 / 1) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (max((((min(67, 3853313136)))), ((-(min(7066792872890301994, 1))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {
                    var_17 = ((!((((arr_5 [i_3 + 1] [i_3 - 1]) / (arr_5 [i_3 + 1] [i_3 - 2]))))));
                    arr_13 [i_1] [i_2] [i_3 - 1] = var_8;
                    arr_14 [i_1] [i_1] [i_3] [i_2] = (((arr_12 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1]) >= (15 / 30813)));
                    var_18 = (max((arr_9 [i_1] [i_1] [i_1]), (min(-32, 4294967270))));
                }
            }
        }
        var_19 = (((((((arr_1 [14]) * (arr_10 [i_1])))) ? var_0 : (var_7 / 1))));
    }
    for (int i_4 = 3; i_4 < 20;i_4 += 1)
    {
        var_20 -= (arr_15 [i_4] [i_4 + 4]);
        var_21 = (min(((+((((arr_17 [i_4 + 3]) < (arr_15 [i_4] [i_4])))))), -255));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_22 = -123;
        arr_21 [i_5] = (((min((arr_1 [i_5]), var_5)) << (((max((arr_10 [i_5]), 26)) - 1313189509))));
        arr_22 [10] [i_5] = ((min(-8040275696049827121, 65532)));
    }

    for (int i_6 = 2; i_6 < 20;i_6 += 1)
    {
        arr_26 [i_6] = (((((!(arr_23 [i_6 - 2] [i_6 - 1])))) == (((!((min(32, 0))))))));

        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            arr_29 [i_6 + 3] = ((!((max(-6382356842570122879, 0)))));
            var_23 = (min(var_23, (((!(min((((arr_16 [i_6 - 2] [i_6]) || var_6)), (!var_0))))))));
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
        {
            var_24 = 197;
            arr_33 [i_6] [i_6] = 53694;
            var_25 -= ((-(min(((min(var_3, (arr_15 [i_6] [i_6 + 3])))), (min(var_4, (arr_16 [i_6] [i_8])))))));
            arr_34 [i_6 + 1] [i_8] = (((!(arr_27 [i_6 - 1] [i_6 + 3]))));
            var_26 = (min((max((arr_27 [i_6 - 1] [i_6 - 1]), 4294967295)), (((-((((arr_24 [i_6 + 3]) || -1833527739))))))));
        }
        var_27 = (arr_32 [i_6] [i_6 + 2]);
        var_28 = (max(var_28, (((!((max((~var_6), (var_13 & var_8)))))))));
    }

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_29 = var_11;
        var_30 = ((~(((arr_30 [i_9] [i_9]) ? ((~(arr_11 [i_9] [i_9] [i_9] [i_9]))) : ((~(arr_11 [i_9] [i_9] [13] [13])))))));
        arr_37 [i_9] = max(((-(arr_32 [i_9] [i_9]))), ((min(123, -48))));
        var_31 ^= (arr_28 [i_9]);
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    {
                        arr_47 [i_10] [i_11] [i_12] [7] = (arr_40 [i_10] [i_12 + 1] [i_10]);
                        arr_48 [i_10] [i_11] [i_12] [i_11] = var_15;
                        arr_49 [i_10] [i_11] [i_10] = var_7;
                        var_32 = (min((arr_40 [i_10] [i_11 - 1] [i_12 - 1]), ((-((var_1 ? var_8 : var_7))))));
                    }
                }
            }
        }
        arr_50 [i_10] = (((((((min(1, var_8))) ? -126 : (arr_38 [i_10])))) & 3119678640));
        arr_51 [i_10] = ((-((58893 % ((max((arr_16 [16] [i_10]), 32092)))))));

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 20;i_16 += 1)
                {
                    {
                        arr_61 [i_10] [i_14] [i_15] [i_16] = (+-851285925);
                        arr_62 [14] [i_14] [20] [i_16] = 71;
                    }
                }
            }

            for (int i_17 = 0; i_17 < 23;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 20;i_19 += 1)
                    {
                        {
                            var_33 = -8538336815680269545;
                            var_34 = (((((!-86) ? (!30813) : 64)) == ((max((arr_38 [i_18]), var_13)))));
                            var_35 = (arr_42 [i_19 - 2]);
                        }
                    }
                }
                arr_70 [i_10] = (min((~64712), ((4069 ? (arr_45 [i_14]) : 3119678640))));
            }
            for (int i_20 = 2; i_20 < 22;i_20 += 1)
            {
                var_36 -= (min((max((arr_40 [i_20 - 2] [11] [i_20 + 1]), (max(267486222, (arr_63 [i_10] [i_10] [i_10]))))), 73));
                var_37 = (min((((min(0, 1948238191612796959)) <= (min(58893, 7)))), (var_11 && 9223372036854775798)));
            }
            var_38 -= (var_6 < var_12);
            var_39 -= (arr_69 [i_10] [i_14] [i_14] [i_10] [i_14] [i_14] [i_14]);
        }
    }
    var_40 = var_12;
    #pragma endscop
}

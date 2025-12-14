/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((60130 ? var_12 : 5406))) || var_7)) ? 6014 : var_10));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((arr_0 [i_0 + 1]) % ((2570440083844449470 ? 5131214158667352368 : -647266825))));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_17 = (min(var_17, (((var_9 ? -986 : (arr_3 [i_0 + 3]))))));

                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_18 ^= (~var_15);
                        var_19 ^= (!13);
                        var_20 = (((((96 ? var_11 : var_12))) <= (arr_12 [i_4] [i_3 - 1] [i_2] [i_1] [i_0 - 2])));
                        arr_14 [i_0] [i_1] [i_2] [i_3] = (((arr_9 [i_2] [i_0 - 2] [i_0] [i_2]) >> ((((arr_8 [i_1] [i_2] [i_1]) < (arr_5 [i_4] [i_2] [i_1]))))));
                        arr_15 [i_2] [i_1] [i_2] [18] [i_4] &= ((((((arr_4 [i_2] [i_2] [i_2]) ? -2147483622 : var_7))) ? 2147483631 : ((255 ? 10612590496589835170 : var_15))));
                    }
                    arr_16 [i_0] [i_2] [i_2] [i_3] [i_3] = (((arr_0 [i_3 - 1]) | 60141));
                }
                for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_21 *= (var_4 == var_14);
                    var_22 += ((((243 ? 144 : (arr_0 [i_0]))) << (100 - 82)));
                    var_23 *= (5988319243025050876 ? 1 : -1925100545);
                    var_24 = ((((101 <= (-127 - 1))) ? ((var_15 ? (arr_17 [i_0]) : (arr_7 [i_2] [i_1] [i_2]))) : (arr_0 [i_0 - 1])));
                }
                for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_25 &= var_15;
                    var_26 = (arr_11 [i_0] [i_1]);
                    var_27 = (((arr_7 [i_2] [i_2] [i_2]) ? ((17513 ? 405 : (arr_2 [i_6]))) : (171 >= var_9)));
                    var_28 ^= ((123 ? 95 : ((-117 ? 112 : 160))));
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_2] [i_8] [i_2] = ((var_13 ? (arr_13 [i_0 + 1] [i_1] [i_7 + 3] [i_2] [i_8] [i_2]) : 28));
                            var_29 *= (!955);
                            var_30 = (min(var_30, ((((arr_10 [i_0 - 1] [10]) ? (arr_10 [i_0 - 1] [4]) : -32767)))));
                        }
                    }
                }
                arr_26 [i_2] [i_1] [i_2] = (var_5 % 8924825428452408359);
            }
            var_31 = (max(var_31, ((((arr_7 [12] [i_1] [i_1]) ? var_9 : (((8924825428452408359 ? var_1 : (arr_22 [i_0] [18] [i_1] [i_0] [i_1] [i_0])))))))));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_32 -= ((!(!63)));
            arr_31 [i_0] [i_9] = ((1729382256910270464 | (arr_3 [i_0 + 2])));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            arr_35 [i_0] [i_10] [i_10] = (((((162 ? (arr_10 [i_0] [12]) : 32766))) ? var_3 : var_0));
            var_33 = (min(var_33, (arr_30 [i_0] [i_10] [i_0])));
        }
        var_34 = (min(var_34, (((((683419401 ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) : 123)) != 15)))));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_15 = 1; i_15 < 17;i_15 += 1)
                        {
                            arr_47 [i_11] [i_11] [i_13] [i_11] [i_11] = arr_27 [i_12] [i_11];
                            var_35 -= (arr_42 [i_11] [i_15] [i_15] [i_15 + 1] [i_12 - 2] [i_11]);
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_36 &= (arr_40 [i_11] [i_12] [i_14] [i_14]);
                            var_37 |= (arr_7 [i_16] [i_12] [i_13]);
                        }
                        var_38 = (arr_34 [i_11]);
                        var_39 = var_7;
                    }
                }
            }
        }
        arr_50 [i_11] = (((((144 ? var_15 : var_0) >> (var_14 + 114)))));
    }
    #pragma endscop
}

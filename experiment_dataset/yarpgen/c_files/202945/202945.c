/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ? var_1 : var_2));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] = (arr_0 [i_0 - 1]);
            arr_6 [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_1] [i_0]);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_16 = (arr_7 [i_0 - 2]);

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_12 [i_2] [i_0] [i_2] [i_3] [i_3] [i_0] = ((-(arr_10 [10] [i_0])));
                    var_17 -= (arr_10 [i_0] [i_3]);
                    var_18 = (arr_9 [i_0 + 1]);
                    arr_13 [i_0] [i_1] [i_1] [i_0] = ((1 ? (arr_11 [i_3] [i_0] [i_0] [i_0]) : var_14));
                }
                for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                {
                    var_19 = (max(var_19, (((var_13 | (arr_11 [i_4 + 1] [i_1] [i_4] [i_4 + 1]))))));
                    arr_16 [i_0] [10] [i_0] = 3;
                    arr_17 [i_0] [i_2] = var_1;
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                {
                    var_20 -= (~var_0);
                    arr_22 [i_0] = 2350;
                    var_21 = (min(var_21, (arr_20 [1] [i_5] [i_1] [i_5])));
                    arr_23 [i_0 - 2] [i_1] [i_0] = (((-29 ^ (arr_3 [i_0] [i_0] [i_0]))));
                    var_22 = ((-(arr_19 [i_5 + 1] [i_0] [i_0] [i_0])));
                }
            }
            arr_24 [i_0] [i_0] [i_0] = (var_1 ^ var_4);

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_23 = ((var_14 < (((arr_4 [i_6]) ? var_1 : 32767))));
                var_24 = 10;

                for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_25 = ((-(-28 || 65535)));
                        var_26 = ((!(5876650607766766271 % 1)));
                    }
                    var_27 = var_3;
                    var_28 = (max(var_28, (arr_9 [i_0 + 1])));
                    arr_31 [i_0] [i_1] [i_6] [i_0] = (~65534);
                }
                for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    var_29 = (((arr_15 [i_0] [i_0 - 1] [i_6]) + (arr_9 [i_9 - 1])));
                    var_30 = (arr_11 [i_0] [i_0] [5] [i_9 + 1]);

                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        var_31 = (~255);
                        var_32 = (arr_33 [i_0] [12] [i_0] [i_0] [i_0 - 1] [15]);
                    }
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_33 ^= var_2;
                        arr_39 [i_0] [1] [1] [i_11] = ((~(arr_32 [i_11] [i_11] [i_0] [i_0 + 1] [i_0] [i_0])));
                        var_34 = var_3;
                        var_35 = (arr_19 [i_0 + 1] [i_0] [i_0] [i_9 + 1]);
                    }
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        var_36 ^= arr_1 [i_6];
                        arr_43 [i_0] [i_1] = 31395;
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_37 = var_14;
                        var_38 = (max(var_38, ((((arr_36 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2]) ? var_14 : (arr_36 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 2]))))));
                        var_39 = (((arr_14 [i_1] [i_1] [10] [i_9 + 1]) ? (arr_14 [i_9] [i_9 - 1] [i_9] [i_9 - 1]) : (arr_14 [i_0] [i_9 - 1] [i_0] [i_9 + 1])));
                        var_40 = ((+(((-127 - 1) ? 1 : -31701))));
                        var_41 = (~var_8);
                    }
                }
                for (int i_14 = 1; i_14 < 17;i_14 += 1) /* same iter space */
                {
                    var_42 += ((5876650607766766262 / (arr_42 [i_6])));
                    var_43 &= -1;
                }
                var_44 = (i_0 % 2 == 0) ? ((((arr_42 [i_0]) << (((arr_18 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0]) - 17068))))) : ((((arr_42 [i_0]) << (((((arr_18 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0]) - 17068)) - 14426)))));
            }
        }
        for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
        {
            arr_51 [i_0] = var_4;
            var_45 = (min(var_45, (((!(arr_14 [i_0] [i_0 + 1] [11] [i_15]))))));
            var_46 = (min(var_46, (arr_30 [i_0] [i_0 + 1] [i_15] [i_15] [i_0 + 1])));
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
        {
            arr_54 [i_0] [i_0] = (((arr_32 [i_0] [i_0] [i_0] [i_0 + 1] [i_16] [i_0]) % (arr_32 [i_16] [i_16] [i_0] [i_0 - 2] [i_16] [i_16])));
            var_47 = (!5876650607766766262);
        }
        var_48 = ((((-(arr_38 [0] [i_0] [i_0] [i_0]))) / 1));
        arr_55 [i_0] = (~var_10);
    }
    #pragma endscop
}

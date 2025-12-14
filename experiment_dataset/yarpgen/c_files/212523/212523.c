/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_9 ? var_13 : var_1)))) + 2147483647)) << (((var_4 + 126) - 17))));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, 86));
                    var_17 = (min((((((-86 ? var_11 : 127))) ? 100 : var_10)), (((127 && ((min(86, 127))))))));
                    var_18 = (max(var_18, -42));
                    var_19 ^= (-122 || -17);
                }
            }
        }
        var_20 = ((52 ? var_5 : (!-52)));
        var_21 = ((~(max((42 & -127), (~17)))));
        arr_8 [4] = (((var_13 + 2147483647) << (((arr_6 [i_0 - 1] [4] [4] [i_0 + 1]) - 58))));
    }
    for (int i_3 = 3; i_3 < 14;i_3 += 1)
    {
        arr_11 [i_3] = ((!((!(arr_4 [i_3 - 3] [i_3 - 3] [i_3])))));
        var_22 &= ((((max((~0), (arr_10 [i_3])))) ? (min((var_13 & 86), (var_1 || var_1))) : ((((min(var_14, 25))) ? (var_4 <= var_13) : var_11))));
    }
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        var_23 = (min(var_23, (min(((((((var_7 + 2147483647) << (127 - 127))) <= ((var_4 ? var_9 : 17))))), (-102 ^ var_11)))));
        var_24 = (((((arr_7 [i_4] [i_4 + 1] [i_4 + 1] [i_4]) < (arr_7 [i_4] [i_4] [i_4] [i_4 - 1]))) ? ((var_4 ? (arr_7 [7] [6] [i_4] [i_4]) : (arr_7 [11] [11] [i_4] [i_4 - 2]))) : (((arr_7 [11] [i_4] [11] [i_4]) ? (arr_9 [i_4 + 1] [i_4 - 1]) : (arr_7 [i_4] [i_4 + 1] [i_4] [i_4])))));

        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            var_25 = ((~(-127 - 1)));
            var_26 = ((((max(42, 59))) || (!var_9)));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {

                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_27 = -23;
                    var_28 = (91 <= -17);
                }
                arr_23 [i_6] = 0;
                var_29 = (min(var_29, ((((arr_9 [i_4 + 1] [1]) ? var_0 : (((!(arr_6 [i_4] [i_7] [i_6] [i_7])))))))));

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_30 = ((var_8 ? var_2 : (~-1)));
                    arr_27 [i_6] [i_4 - 2] [i_7] [i_6] = (((arr_1 [i_4 - 3]) ? (arr_21 [i_4] [i_4 + 1] [i_4 + 1] [i_9]) : (((arr_19 [i_6]) | 16))));

                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        arr_30 [i_6] [i_6] = (arr_26 [i_4 + 1]);
                        arr_31 [i_10 - 2] [i_6] [i_7] [i_6] [i_6] [i_4 - 2] = arr_1 [i_4];
                    }
                    arr_32 [i_4 + 1] [4] [i_6] = (var_3 == var_7);
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_31 ^= ((var_6 ? -60 : (16 % var_5)));
                    var_32 = ((var_8 ? (arr_2 [i_4 - 3] [i_4]) : var_2));
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 7;i_13 += 1)
                    {
                        {
                            arr_43 [i_6] [i_6] [i_6] [i_4] [i_13] = var_14;
                            var_33 ^= (arr_34 [i_13 - 1] [5] [10] [i_12 - 1]);
                            var_34 = ((var_14 ? var_3 : (arr_21 [i_13] [1] [i_13] [i_13 + 2])));
                        }
                    }
                }
            }
            var_35 = ((~((63 ? -34 : var_5))));
            var_36 = (((var_10 + 2147483647) << (((~var_8) - 45))));
        }
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            arr_46 [i_4 + 1] = ((((23 ? (-127 - 1) : ((-20 ? 104 : var_12)))) + (3 - var_0)));
            arr_47 [i_4] = (min(((min(((((arr_7 [i_4 - 2] [i_4] [i_14] [i_14]) || var_5))), (-127 - 1)))), ((~(arr_5 [4])))));
            var_37 = (max(var_37, (arr_25 [6] [i_14] [i_14] [i_4 - 1])));
            arr_48 [i_4] [i_4] = ((((~((max(var_9, (arr_20 [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 3])))))) / (((var_10 + 2147483647) << (20 - 20)))));
        }
    }
    #pragma endscop
}

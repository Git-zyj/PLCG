/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (((((3978629973 << (((-2147483647 - -2147483645) + 6))))) / ((var_9 % (min(var_1, var_4))))));
    var_12 = (max(var_12, (~var_7)));
    var_13 &= var_9;
    var_14 *= var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_15 += (((((10432752491256682150 ? var_0 : 2147483647))) ? (var_1 <= var_6) : (arr_1 [i_0 + 1])));
        var_16 = (max(var_16, -32761));
        var_17 = (max(var_17, (~2797181567561785131)));
        var_18 = (min(var_18, var_4));
        arr_2 [1] |= (((((-2147483647 ? 13835058055282163712 : var_8))) ? var_1 : ((2147483646 ? var_4 : var_6))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((((5 ? 13835058055282163714 : 8192))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                {
                    var_20 = (min(var_20, (((+(((arr_6 [i_1 + 2] [i_2 - 1] [i_3]) ? (arr_6 [i_1 + 2] [i_2 + 2] [i_3]) : var_4)))))));
                    var_21 += (((((!((((var_3 + 2147483647) << (var_1 - 3397738230))))))) << ((((arr_9 [i_1] [i_3] [i_3 - 1] [i_1]) < 2921161153358038527)))));
                }
            }
        }
        var_22 = (min(var_22, ((((((var_3 < var_1) < ((18446744073709551615 ? (arr_11 [0] [i_1] [16]) : 3279921837)))) ? ((((max(var_6, var_9))) ? ((var_7 ? var_9 : (arr_6 [i_1 + 2] [i_1 + 2] [2]))) : -4294967294)) : var_5)))));

        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_23 = (min(var_23, var_9));

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_24 = (max(var_24, (((var_6 | ((((!(2147483647 < 1))))))))));
                var_25 |= ((arr_12 [i_1] [i_5] [i_1 + 1]) ? ((-(arr_11 [5] [i_4] [i_5]))) : (((((arr_18 [i_1 - 1] [i_1 + 2] [i_1 + 1] [i_5]) < (arr_15 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))));
            }
            for (int i_6 = 3; i_6 < 17;i_6 += 1)
            {
                var_26 = (max(var_26, (((arr_3 [i_4] [i_6]) ? ((3279921827 ? 4294967295 : 1)) : (((-((var_7 ? var_3 : 8166)))))))));
                var_27 = (min(var_27, (((~(arr_15 [i_6 - 1] [19] [i_6]))))));
                var_28 |= (((-((var_1 ? 1 : (arr_8 [i_1 + 1] [i_4] [i_6]))))));
            }
            var_29 = (min(var_29, var_9));
            var_30 = (min(var_30, (var_1 | var_5)));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_31 += ((((min((!18978), 1845947119))) ? (arr_17 [i_1 + 2] [1]) : ((max(var_6, (arr_21 [i_7] [i_7] [i_1 + 1] [i_7]))))));
            var_32 = (max(var_32, ((max((~-45), (~10393255899096392239))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_33 |= ((-(arr_6 [10] [i_8 + 2] [10])));
        var_34 += (((((arr_21 [i_8 + 2] [i_8] [i_8 + 1] [i_8]) + 2147483647)) << (((((((arr_4 [i_8]) ? -50 : 1)) + 53)) - 3))));
        var_35 = (max(var_35, ((((((1 ? var_5 : var_7))) <= (arr_19 [2] [1] [2]))))));
    }
    for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    var_36 = (max(var_36, (((((min((arr_6 [i_9 + 2] [i_10] [i_11]), (arr_6 [i_9 + 1] [i_10] [i_10])))) ? (var_4 % 792362027) : (arr_6 [i_9 - 1] [i_10] [i_10]))))));
                    var_37 = (max(var_37, (arr_17 [i_9 + 1] [i_9 + 2])));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_38 = (max(var_38, 9223372036854710272));
                                var_39 = (max(var_39, ((((~var_7) ? (((1 - 7) ? 1 : 1)) : ((((-1 < (arr_8 [i_11] [i_12] [4]))))))))));
                            }
                        }
                    }
                    var_40 -= ((var_7 ? (max((((1 ? 1 : -32745))), var_7)) : (((var_9 ? ((1 ? -1 : 1)) : (((var_9 != (arr_28 [20])))))))));
                }
            }
        }
        arr_43 [6] |= ((var_0 ? ((var_5 ? (!var_0) : 1)) : ((min(3432149876, -49)))));
    }
    #pragma endscop
}

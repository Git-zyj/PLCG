/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = 982089988;
                    var_17 = (min(var_17, (((!(arr_4 [i_2 + 2] [i_0 + 1]))))));
                }
            }
        }

        for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_18 = (!var_12);

            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                var_19 = ((22849 ? 2147483647 : 71));
                var_20 = -1;
            }
            var_21 = ((71 ? -97 : var_8));
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_14 [i_5] = (((-(arr_0 [i_0] [i_5 - 1]))));
            var_22 |= (var_4 != var_4);
            var_23 |= (var_2 < var_12);
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    var_24 = (var_6 / 204);
                    var_25 = var_2;
                    arr_23 [i_8] [i_7] = ((~(arr_13 [i_0])));
                }
                var_26 *= ((-54 ? (!0) : -2600941352275815580));
                arr_24 [i_0] [i_7] [i_7] [11] = (((0 ? -100 : 2600941352275815580)));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_27 &= (((((-(arr_26 [i_6] [i_9] [i_6])))) ? ((var_8 << (7332717006823339159 - 7332717006823339157))) : (102 <= 86)));
                            arr_34 [i_0] [i_6 + 2] [i_9] [i_6 + 2] = (!1389725879);
                            arr_35 [i_0] [i_0] [i_9] [i_10] [i_6] &= (((((!(arr_2 [i_0 - 1])))) - -22846));
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    var_28 ^= 188;
                    var_29 |= ((((!(arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    var_30 = (min(var_30, ((((((-(arr_21 [12] [i_0 - 1] [i_6] [i_9] [i_9] [i_12])))) ? ((2147481600 ? 262143 : 23403)) : 2147485695)))));
                }
            }
            var_31 *= ((-(arr_38 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_6])));
            arr_39 [i_6] = (((((42132 ? 1 : 0))) ? -65523 : var_15));
        }
        var_32 -= (((~var_0) ? (~-103) : ((~(arr_5 [i_0] [i_0] [i_0] [i_0])))));
        var_33 = (arr_0 [i_0] [i_0 - 1]);
    }
    var_34 ^= (((max((min(127, var_14)), var_5)) + ((max(((min(var_8, var_6))), (~var_15))))));

    for (int i_13 = 2; i_13 < 9;i_13 += 1)
    {
        var_35 = (((24065 ? -9 : 178)));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 9;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 8;i_15 += 1)
            {
                {
                    var_36 = (min(var_36, (((~(((~var_0) ^ ((min(var_6, (arr_4 [i_14] [i_15])))))))))));
                    var_37 ^= (((((~57) < ((var_2 + (arr_33 [i_13] [i_13] [i_13] [i_14] [i_15 + 2]))))) ? (((!(var_2 > var_3)))) : (((!(~1))))));
                    var_38 *= ((!((3025339569667433364 || ((((arr_42 [i_13] [i_13]) - 38)))))));
                }
            }
        }
        var_39 = ((-((107 ? ((var_5 ? 8146441926287970259 : var_2)) : -var_0))));
        var_40 += ((((((((-(arr_16 [i_13] [i_13])))) ? ((var_0 ? (arr_5 [i_13] [i_13] [i_13] [i_13]) : 1048572)) : ((((arr_46 [i_13 + 1] [i_13 + 1] [i_13 + 1]) + (arr_9 [i_13 - 2] [i_13] [i_13]))))))) ? (!var_13) : ((-(~-13)))));
        var_41 |= ((34073 - 18947) << (((((arr_18 [i_13] [i_13] [i_13]) ? (var_9 & var_1) : ((82 >> (88 - 64))))) - 32913)));
    }
    #pragma endscop
}

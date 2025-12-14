/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(var_9 + -1)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (min(var_13, ((max((((~(arr_0 [i_0])))), 108)))));
        arr_3 [i_0] [i_0] = (min(var_0, (!-3811542135574192585)));
        var_14 ^= (+(((-354766696 + 2147483647) << (5646017079332060439 - 5646017079332060439))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = 1773;
        var_16 = ((((((min(-354766702, var_6))) ? ((-25417 ? 88 : 2302)) : (arr_6 [i_1]))) * ((((arr_5 [i_1]) > (((0 ? (arr_6 [i_1]) : var_2))))))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] = (arr_9 [i_2]);
        arr_11 [i_2] = (((((-(arr_2 [i_2])))) ? (((-106 && (arr_6 [i_2])))) : (((!(1 <= 5429491805181921834))))));
        var_17 = ((!(!var_3)));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_18 = ((((((arr_6 [i_3]) ? var_6 : var_0))) ? (!-75459849) : var_9));
            var_19 *= var_6;
            arr_14 [i_2] = (((2683874923 & 0) ? ((~(arr_4 [i_2]))) : var_0));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_20 = ((+(((arr_5 [i_4]) / (arr_5 [i_2])))));
            arr_18 [i_2] [i_2] = (max(((((min(-18694, var_10)) + ((-(arr_9 [i_4])))))), var_11));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_21 = ((-((~(arr_20 [i_2] [i_5])))));
            arr_22 [i_5] = (arr_7 [i_2]);
            var_22 = ((~(arr_1 [i_5])));

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                var_23 = (!var_6);
                var_24 = var_0;
                var_25 &= 41;
            }

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_26 = (min((arr_23 [i_5] [i_5] [i_5]), (min((arr_21 [i_7] [i_5] [i_2]), (var_7 && var_3)))));
                var_27 = ((((0 ? (((1 ? -18681 : var_10))) : var_8)) * ((min((arr_17 [i_5] [i_2]), (10033 / var_10))))));
                var_28 = ((!((((arr_24 [i_2] [i_2] [i_2]) ? (min(1481835220, 702707313)) : (min(-26660, 379426127)))))));
            }
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_39 [i_9] [0] = (((((-((9223372036854775788 >> (((arr_31 [6] [6]) - 140))))))) ? (min((((~(arr_34 [i_2] [i_8] [i_9] [i_10])))), var_11)) : ((((!(((5827 ? 127 : -5859)))))))));
                            var_29 ^= (!1118113601);
                        }
                    }
                }
            }
            var_30 = (max(var_30, var_1));
        }
    }
    var_31 &= ((8 <= 1) > var_5);
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 15;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 14;i_14 += 1)
            {
                {
                    var_32 = (min(var_32, ((((((1123883892 ? var_3 : 995599600))) ? (((arr_46 [i_12] [i_12] [i_12] [i_14]) ? -4294967288 : ((var_7 + (arr_4 [i_14 + 3]))))) : (((((var_0 ? -4636691422089579061 : 0)) + var_1))))))));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_54 [i_12] [i_12] [i_12] [i_12] = (+(((arr_4 [i_14 + 3]) * (min(var_11, (arr_40 [i_12] [i_12]))))));
                                var_33 = ((~(max((((arr_2 [i_12]) ? 12138858157616243486 : var_6)), (((arr_5 [i_13]) ? 48 : (arr_4 [i_16])))))));
                                var_34 = (arr_42 [i_15]);
                            }
                        }
                    }
                    var_35 ^= (((((((arr_4 [1]) || 2693725551)))) + ((~(arr_42 [i_13 + 2])))));
                    var_36 = var_9;
                }
            }
        }
    }
    #pragma endscop
}

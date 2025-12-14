/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(var_11, (~var_10));
    var_13 ^= (min(((var_3 ? var_9 : var_3)), (~var_5)));
    var_14 ^= var_2;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_15 *= (min(((((!(arr_1 [i_0]))))), (max((~var_11), (!35445)))));
        var_16 = (min(var_16, 58776));
        var_17 *= ((!(((var_0 << (((~var_5) - 3758579547)))))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_18 ^= (((65535 / 295568451) ? var_3 : (((!(var_8 && var_5))))));
            arr_4 [i_1] [2] = (((min((~56279), ((var_6 ? 9256 : 25752)))) ^ ((((-1736673361 | (arr_1 [11]))) & (max(52567, 0))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_7 [i_0 + 1] [i_2] = (4077503499 / 28322);
            arr_8 [i_2] [i_2] [i_2] = -466243566;
            var_19 = (((arr_3 [i_0 + 2]) > (~9256)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    {
                        var_20 = (~(arr_10 [i_4]));
                        var_21 = (min(var_21, ((((var_5 ? (arr_9 [i_0] [8] [i_0] [i_4]) : var_9))))));
                        var_22 += (((arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 2]) & 28332));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_23 = (min(var_23, (arr_14 [i_0 - 1])));
                        arr_20 [18] [i_5] [i_2] [7] &= (((-613056483 + 2147483647) >> (4294967295 - 4294967286)));

                        for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_24 += (~1);
                            var_25 = (min(var_25, (var_2 > 14517)));
                        }
                        for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
                        {
                            var_26 = var_4;
                            var_27 = (min(var_27, 39783));
                            var_28 = (max(var_28, 29986647));
                        }
                        for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_0 - 1] [19] [i_5] [i_6] [i_9 + 1] = (!var_0);
                            var_29 = ((-var_10 ? ((var_4 << (((((arr_25 [i_0] [i_9] [i_5 + 1]) + 550941632)) - 29)))) : (arr_14 [i_0 + 1])));
                        }
                        arr_30 [i_2] [i_5] [10] = var_5;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            arr_33 [i_10] = (var_6 ? (arr_13 [i_10] [i_10] [i_0 + 1] [i_10]) : (!14517));
            var_30 += ((((((arr_15 [5] [i_10] [i_0] [5]) / 14501))) ? (arr_23 [i_0] [i_0] [i_0 + 1] [18] [i_0] [i_0 + 1]) : (arr_21 [i_0] [i_0 + 2] [i_0 - 1] [18] [i_0 + 1] [i_0] [i_0])));
        }
        /* LoopNest 2 */
        for (int i_11 = 3; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                {

                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        var_31 = ((!((((2147483633 + 4294967295) ? ((4294967278 ? -1346697895 : var_7)) : (arr_40 [i_11 - 3] [i_11] [i_11 - 3] [20] [i_11] [i_0]))))));
                        var_32 &= ((((min(var_2, 4294967295))) || (((42572 ? (arr_26 [i_12] [i_11 - 2] [i_12] [i_12] [i_0 + 2]) : 46620)))));
                    }
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        var_33 += min((min(26050, (min(var_3, 54857)))), ((((arr_37 [i_14] [i_12] [i_0]) + var_11))));
                        var_34 *= ((4294967275 == ((1027594674 ? (-429012980 - 3275179104) : (((arr_5 [i_11 + 2] [i_11 + 2]) + (arr_17 [i_0] [i_0] [i_0] [i_11 - 3] [i_12] [i_14])))))));
                    }
                    for (int i_15 = 2; i_15 < 20;i_15 += 1)
                    {
                        var_35 = (max(-50429, (min((max(-97530248, 25752)), var_1))));
                        arr_47 [i_15] [i_0] [i_11] [i_11] [i_0] = var_10;
                        var_36 = (arr_10 [i_11]);
                        var_37 *= (!var_6);
                        arr_48 [i_0] [i_11] [i_12] [i_15] [i_0] [i_15 + 1] = ((((min(50439, 4294967295))) && (((var_11 ? (arr_12 [i_11] [i_11]) : (min((arr_21 [5] [i_12] [i_12] [i_11] [i_0] [i_0 + 2] [1]), (arr_0 [i_0]))))))));
                    }
                    arr_49 [2] [i_12] = (((-(arr_28 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 2] [i_11 - 3]))));
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        var_38 = (max(var_38, ((min((arr_17 [i_16] [i_16] [i_16] [i_16] [3] [i_16]), 0)))));
        var_39 = (max(var_39, ((min(((((1 ? 15106 : var_4)))), ((3362448441 ? (!var_2) : 808600539)))))));
        var_40 = (max(var_40, ((((arr_45 [i_16] [i_16] [i_16] [i_16] [1]) % ((min(132677200, 15096))))))));
        arr_53 [i_16] [i_16] = (max((~1545799112), ((((arr_3 [i_16]) && (arr_3 [i_16]))))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        var_41 = 22236;
        var_42 = (min(var_42, (arr_22 [i_17])));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 = (max(var_19, var_9));
            var_20 -= ((~(arr_5 [i_0] [i_0])));
            var_21 = (max(var_21, (((var_10 ? (max(var_13, var_14)) : (min(3194, 13)))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_22 = var_11;

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_23 = (((var_15 ^ 24) < ((((arr_2 [i_0]) ? (((-(arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4])))) : (arr_6 [i_0] [i_1] [i_0]))))));
                            var_24 ^= var_12;
                            var_25 = var_11;
                            var_26 = (((((arr_14 [i_0] [1] [i_2] [i_3] [i_4]) + 16776704)) << var_18));
                        }
                        var_27 = (((min(233, (((~(arr_7 [i_0] [i_0] [i_0])))))) | (((((var_14 & (arr_4 [i_0]))) ^ var_1)))));
                        var_28 = var_7;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_29 = (22126 / var_6);
            var_30 = var_1;
        }
        var_31 = ((((max((arr_1 [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) < ((var_16 ? 1 : var_12)))));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (((((((49 << (((arr_20 [i_6]) + 6794657813153684381))))) ? -951794771 : -var_0))) >= ((-3 ? (((((arr_18 [i_6]) > 37548)))) : (((((arr_20 [i_6]) + 9223372036854775807)) >> 1)))));
        arr_22 [i_6] = (((arr_18 [i_6]) > 4066668278900014977));
        var_32 = (((arr_18 [i_6]) ^ (min(((var_7 ? var_17 : var_9)), var_8))));
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_33 += -var_0;

        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_34 = ((((min((min(55865, (arr_23 [i_7] [i_8]))), (max(222, (arr_23 [i_7] [i_8])))))) >= (arr_23 [i_7] [i_8])));
            var_35 *= (((((arr_23 [i_7 - 1] [i_7 - 1]) ? ((1691685134 ? var_17 : (arr_26 [i_7] [i_7 - 1]))) : (((var_13 ? var_6 : (arr_23 [i_7] [i_7]))))))) ? (((((1943904741 ? (arr_23 [i_8] [i_7]) : var_4))) ? var_6 : 1048064)) : ((-2 ? (arr_24 [i_8] [i_7 - 1]) : (arr_24 [i_7 - 1] [i_7]))));
        }
        arr_27 [i_7] = (2512266720925467897 > 2512266720925467876);
    }
    var_36 = (((((55212 ? (-8081331867970396923 | 36197) : (42 / 63)))) ? (min(var_7, ((10481176216429067605 ? var_12 : var_3)))) : ((var_10 ? var_13 : 40499))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((max((min(var_3, var_8)), (!var_3))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_20 |= (((arr_2 [i_0 - 3]) - (!-5)));
        var_21 = -var_6;
        var_22 = (max(var_22, ((((arr_2 [i_0 + 1]) >= (arr_2 [i_0 + 1]))))));
        var_23 = (max(var_23, (arr_1 [i_0 - 3])));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_24 = ((var_12 ? (((((arr_3 [i_1] [i_1]) + 2147483647)) << (((arr_5 [i_1]) - 54)))) : (arr_5 [i_1])));
        var_25 = (119 && 38);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
            {
                var_26 ^= (arr_10 [i_2] [i_3]);
                var_27 -= (47 < var_15);
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_28 *= ((((((arr_5 [i_1]) ? (arr_9 [i_1] [0] [i_1] [i_2]) : (arr_11 [i_4] [i_1])))) ? -39 : (!110)));
                var_29 = arr_13 [i_1];
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                arr_20 [i_1] [i_1] [i_1] = (((arr_8 [i_1] [i_2] [i_5]) ? (((arr_13 [i_2]) * (var_5 < var_12))) : (arr_19 [i_5] [i_5] [i_5])));
                var_30 += ((!((((arr_16 [i_1] [i_2]) ? -42 : (arr_13 [i_2]))))));
            }
            arr_21 [4] [6] [i_2] = arr_19 [i_1] [i_2] [i_2];
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
        {
            var_31 = (max(var_31, (((-62 != ((((arr_6 [i_6]) && -95))))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_32 ^= ((((!(arr_3 [i_1] [i_7]))) ? (((((-121 / (arr_24 [i_1] [i_6] [i_7] [i_8])))) ? ((91 ? (arr_23 [i_1] [i_7] [2]) : 13)) : (((arr_7 [i_1] [i_7]) ? var_17 : (arr_4 [i_1]))))) : (((((arr_14 [i_1] [i_6] [i_8]) ? (arr_4 [i_1]) : -74))))));
                        arr_30 [i_1] [i_6] [i_6] [i_8] = (((((var_16 ? (arr_29 [i_7] [i_6] [i_7] [i_8] [i_7]) : ((~(arr_16 [i_1] [i_1])))))) ? (((arr_25 [i_1] [i_6]) | (arr_7 [i_7] [i_6]))) : ((((max(-91, var_8))) ? ((58 ? 13 : (arr_17 [i_7] [i_6]))) : (~125)))));
                        arr_31 [i_7] |= arr_7 [i_1] [i_1];
                        var_33 = (min((arr_27 [i_1]), (((arr_13 [i_1]) ? (arr_13 [i_8]) : (arr_18 [i_1] [i_1] [i_1] [i_1])))));
                        var_34 &= min(101, ((((arr_6 [i_8]) != (arr_6 [i_1])))));
                    }
                }
            }
            arr_32 [i_1] [i_6] [i_6] = (((arr_25 [i_1] [i_6]) ? ((-(arr_11 [i_1] [i_6]))) : (((arr_25 [i_1] [i_6]) - (arr_25 [i_1] [i_6])))));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            arr_36 [i_9] = (((min(((min((arr_16 [i_1] [i_1]), (arr_22 [i_9])))), ((81 ? var_2 : 117)))) ^ (((arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]) ? 81 : (arr_29 [i_1] [i_1] [i_9] [i_9] [i_9])))));
            arr_37 [i_1] [i_9] [i_9] = (18 & -27);
            var_35 *= var_3;
        }
    }
    for (int i_10 = 1; i_10 < 21;i_10 += 1)
    {
        arr_40 [i_10] = (min(((-((max((arr_38 [i_10]), (arr_38 [i_10])))))), (((arr_39 [i_10]) ? ((-(arr_39 [i_10]))) : ((28 ? (arr_38 [i_10]) : -12))))));
        arr_41 [i_10] = (((((var_9 & (arr_38 [i_10 + 1])))) ? ((-(arr_38 [i_10 - 1]))) : ((min((arr_39 [i_10]), -25)))));
        var_36 = -45;
    }
    #pragma endscop
}

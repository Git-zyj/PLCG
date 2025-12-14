/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_20 -= (arr_1 [i_0]);

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                var_21 ^= (min(((27352 >> (1460049218022092606 - 1460049218022092598))), (((((~(arr_1 [i_0])))) ? var_16 : (arr_4 [8])))));
                var_22 = ((((arr_3 [1] [i_2 - 1] [1]) / (arr_3 [i_2] [i_2 - 1] [i_2]))));
                var_23 = (((!-7811496208869832478) ? var_15 : (arr_2 [i_2] [2])));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_24 = (min(var_24, ((((arr_11 [i_0] [i_1]) ? 7 : (!var_18))))));
                var_25 *= (((arr_4 [i_3]) > 2497155751));
                var_26 += (arr_11 [i_0] [i_0]);
                var_27 += 255;
            }
            arr_13 [i_1] [i_0] [i_0] = (((((((arr_11 [i_0] [i_1]) > -9223372036854775793)))) <= (((((var_19 ? -24040200 : 6333101461118841722))) ? (((8825682556484762052 >> (-16840 + 16858)))) : (var_11 + var_6)))));
            var_28 = (min(var_28, (0 >= 4243259180)));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_29 = (min((arr_11 [i_0] [i_4]), (arr_7 [i_0] [i_0] [i_4] [i_4])));

            for (int i_5 = 4; i_5 < 12;i_5 += 1)
            {
                var_30 = (arr_2 [5] [5]);
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_25 [i_0] [i_0] [i_5] [i_0] [i_0] = var_5;
                            var_31 = (min(((1 ? (arr_6 [i_6 + 1] [i_5 - 3] [i_5 - 3] [i_6 - 3]) : (arr_1 [i_5 - 2]))), var_7));
                            var_32 = arr_22 [i_4] [i_5] [i_7];
                            var_33 = (min((12 == 2121867774), 1));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    var_34 = ((((!(arr_0 [i_4]))) ? ((min(1, -1))) : (arr_11 [i_5 - 4] [i_5 - 4])));
                    var_35 = ((-(((((((arr_6 [i_0] [i_0] [i_0] [i_0]) | -6333101461118841715)) + 9223372036854775807)) >> var_5))));
                }
            }
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_36 = (arr_16 [i_0] [i_4]);
                var_37 -= 28502;
                var_38 = ((+(((((-8635276480286087919 ? (arr_2 [i_0] [i_4]) : 31))) ? ((((arr_1 [i_0]) != var_6))) : ((var_18 ? 578487976 : (arr_16 [7] [8])))))));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_39 -= min(((255 ? var_17 : ((var_17 ? var_9 : var_11)))), ((((arr_16 [i_4] [i_10]) ? -30095 : var_2))));
                arr_34 [i_0] = ((((min((arr_33 [i_0]), (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) | ((min((arr_33 [i_4]), (arr_33 [i_0]))))));
            }
            arr_35 [i_0] [1] = (~188);
            var_40 += ((+((var_17 << (((67 >> 0) - 61))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
        {
            arr_40 [i_0] [i_0] [i_11] = ((16262840432055117247 ? (arr_24 [i_0] [i_0] [i_0] [i_11] [i_11] [i_11]) : 0));
            var_41 = (min(var_41, var_12));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_42 ^= ((-111 ? 13030 : 1823316267));
                        var_43 = var_13;
                    }
                }
            }
        }
        var_44 -= ((-(((var_0 || (arr_11 [1] [i_0]))))));
        var_45 = (max(var_45, (((127 ? 7811496208869832478 : -3038339996177274191)))));
        var_46 = (((var_2 == (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? ((var_6 ? (((arr_7 [1] [1] [2] [10]) ? var_0 : 3038339996177274187)) : (var_3 / -19))) : (((((arr_26 [i_0] [i_0] [6] [i_0]) < (-12454 != var_16))))));
    }
    var_47 |= 3875181639;
    #pragma endscop
}

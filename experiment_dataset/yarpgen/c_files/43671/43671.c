/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 += (max((((+((((arr_1 [i_0]) < var_8)))))), ((+(((arr_0 [i_0]) ? 0 : 1803694532))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 += 0;
            arr_5 [i_0] [i_0] [i_1] = 8;
            arr_6 [i_0] = var_0;
            var_19 &= (var_7 % 2);

            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_20 = var_14;
                            var_21 = (((arr_2 [i_2 - 1]) > (arr_2 [i_2 - 1])));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_22 = ((arr_2 [i_2 - 4]) * 0);
                    var_23 = (78 >> ((((arr_0 [i_2]) || var_2))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_18 [i_0] [i_1] [i_2] [i_6] = 1;
                    var_24 = (min(var_24, ((((!(arr_13 [0] [2])))))));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_25 &= (arr_19 [i_1] [i_7]);
                        var_26 = ((~((var_7 ^ (arr_2 [i_0])))));
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_27 = 31;
                        arr_26 [i_0] [2] [i_0] [i_2] [2] = (((arr_14 [i_2 - 4] [i_1]) ? 187 : (((arr_8 [i_2] [1] [i_9]) ? 4611686018427387904 : 187))));
                        arr_27 [6] [i_2] [6] [i_9] = (arr_2 [i_7]);
                        var_28 = (((arr_23 [i_2 - 2]) ? (arr_23 [i_2 + 1]) : (arr_23 [i_2 - 4])));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_30 [i_7] [i_7] [i_2 - 1] [i_7] [i_2] [i_10] = ((3505722716960277671 == (~1)));
                        var_29 = (arr_12 [2] [i_0] [i_1] [i_2] [i_2] [i_10]);
                        var_30 = ((76 << (9699650071235609620 - 9699650071235609600)));
                        var_31 = (((arr_17 [i_2 - 1] [i_2 - 1]) & 37));
                        var_32 = (max(var_32, (((-12197 / (arr_24 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_7] [i_10]))))));
                    }
                    var_33 = (max(var_33, ((((arr_29 [4] [i_1] [i_7] [i_7] [i_1] [4]) ? 4971839181739501364 : ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0]) ^ 236))))))));
                    var_34 += ((201 == (arr_4 [i_2 - 1] [i_2 - 3])));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_35 = var_10;
                            var_36 -= -1;
                            var_37 += ((var_1 < ((((arr_4 [i_0] [i_11]) == (arr_16 [i_0] [i_0] [i_0] [i_0]))))));
                            var_38 -= ((+(((-3381779538623283519 + 9223372036854775807) << (1 - 1)))));
                            var_39 = (max(var_39, 3072));
                        }
                    }
                }
            }
            for (int i_13 = 1; i_13 < 8;i_13 += 1)
            {

                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    var_40 = (!-647556872873541147);
                    var_41 = 236;
                    arr_40 [i_0] [i_0] [i_0] [i_13] = (arr_16 [i_0] [i_1] [i_13] [i_14]);
                }
                for (int i_15 = 1; i_15 < 9;i_15 += 1)
                {
                    var_42 += (248 * 0);
                    var_43 = (max(var_43, (((((1 >> (((arr_2 [i_0]) - 26080)))) << (var_8 - 39))))));
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 7;i_17 += 1)
                    {
                        {
                            arr_47 [i_13] [i_13] = (((((3071 ? (arr_43 [i_13] [9]) : 9223372036854775807))) && (~0)));
                            var_44 = (arr_32 [i_13]);
                            var_45 = var_0;
                        }
                    }
                }
                var_46 = (((((-(arr_9 [i_13] [i_13] [i_13] [i_0])))) ? (((arr_4 [i_0] [i_0]) * 0)) : -4559));
                var_47 = (max(var_47, ((((arr_23 [i_13 + 1]) && 17231722177188067146)))));
            }
        }
    }
    var_48 = (min(var_48, -71));
    var_49 = ((((max((~1), 224))) ? (max(5838922555949709592, var_10)) : (0 != var_4)));
    #pragma endscop
}

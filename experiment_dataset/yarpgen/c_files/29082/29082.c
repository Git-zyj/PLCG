/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_19 &= 0;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [1] = var_11;
            var_20 -= ((var_2 ? (((var_6 ? (arr_3 [i_0] [i_1]) : (1 * 1)))) : (min(-var_16, 11226811783600979739))));
        }
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            arr_10 [i_2 - 1] = (((1 ? -26806 : 1)));
            arr_11 [0] [i_0] [i_2 - 1] &= var_16;
        }
        var_21 = (max(var_21, (((+(((arr_1 [i_0 + 1]) ? (arr_5 [i_0 + 1] [i_0 + 1]) : 1)))))));
        arr_12 [1] = (arr_0 [i_0] [i_0]);
        arr_13 [6] [i_0] = arr_9 [i_0];
    }
    for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = (max(40, var_7));
        var_22 = var_4;
        arr_17 [i_3] = var_0;
    }
    for (int i_4 = 4; i_4 < 10;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_23 = ((~0) >= (arr_20 [i_4 - 3] [i_4 - 3]));
            arr_23 [i_5] [i_5] [i_5] = (9691965192818748800 ^ 12239131669187466582);
            arr_24 [i_5] = (((((arr_22 [i_5]) ? ((var_12 ? var_2 : (arr_15 [i_4]))) : -637087302)) >> (((arr_14 [i_4]) - 25671))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_24 = (min(((9691965192818748798 ? 1015145845144207223 : -990317348)), (arr_25 [i_6])));

            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                var_25 &= (((((1 ? 1 : 0)))) ? (((((1 >> (4294967292 - 4294967263)))) ? (arr_8 [5] [i_6] [5]) : (arr_5 [i_7 - 1] [i_4 + 1]))) : (~1));
                arr_33 [i_6] [1] [i_6] [7] = (((arr_4 [i_4] [i_4] [2]) << ((((0 ? ((var_11 ? var_7 : 1)) : ((22 ? var_11 : var_5)))) - 156))));
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                var_26 = (((((var_14 * (arr_18 [i_4 - 3])))) ^ (min((arr_18 [i_4 - 1]), var_8))));
                arr_38 [i_6] [i_6] [9] = (((((-((min((arr_31 [i_4]), 14)))))) && ((min((arr_2 [i_4 - 4]), var_1)))));
                var_27 = ((-((~(var_16 + var_5)))));

                for (int i_9 = 1; i_9 < 10;i_9 += 1)
                {
                    var_28 ^= var_3;
                    var_29 = 1073741760;
                    arr_43 [i_6] [i_6] = var_18;
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_30 = (max((((arr_37 [i_4 - 4] [i_6] [i_4 - 2]) ? -87 : 3399479754)), ((min((arr_14 [i_4 - 4]), 1)))));
                    var_31 = (((((max((arr_37 [i_4] [i_6] [3]), var_6)))) ? ((((var_10 ? -25 : var_15)))) : var_0));
                }
                arr_48 [i_6] [i_6] [i_6] [i_8] = (max(var_0, (arr_32 [0] [0] [i_4 - 3] [7])));
            }
            arr_49 [i_6] [i_6] = min(((((4294967295 ? 230 : (arr_32 [i_4] [i_6] [i_4] [i_6]))) + -22)), (arr_8 [i_4] [i_4] [i_4]));
            arr_50 [i_6] = (max((arr_0 [i_4] [i_6]), ((((arr_46 [i_6] [i_6] [9] [i_4] [i_6]) ? (arr_35 [i_4 + 1] [i_4 + 1]) : var_3)))));
        }
        arr_51 [i_4 - 1] = ((max((arr_40 [i_4]), (max(var_9, (arr_20 [6] [6]))))));
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                {
                    var_32 = (arr_53 [i_11]);
                    var_33 = (min(var_33, ((min(1, var_2)))));
                    arr_59 [i_12] [i_12] [20] [20] = ((((33 ? var_7 : (~var_10))) & (max(((((arr_53 [i_11]) ? 241 : var_4))), (((arr_58 [i_11] [i_11] [i_11]) ? (arr_55 [i_11] [i_12]) : var_12))))));

                    for (int i_14 = 3; i_14 < 21;i_14 += 1)
                    {
                        var_34 -= (-1 >= 6);
                        arr_63 [i_11] [i_11] [i_11] [i_12] [i_11] = ((1 ? 1 : 21));
                        var_35 += var_6;
                        var_36 -= var_9;
                    }
                }
            }
        }
    }
    #pragma endscop
}

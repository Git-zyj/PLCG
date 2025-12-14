/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_2] [i_3] = ((((-(arr_10 [i_0 - 4] [i_0 + 3] [i_1] [i_2] [i_2] [i_3]))) < (arr_9 [i_0] [i_1] [i_1] [i_3])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0 - 4] [i_3] [i_1] [i_4] = (~(arr_13 [i_0 - 2] [i_0 + 1] [i_2]));
                            var_20 *= (((arr_12 [i_2]) == (!var_11)));
                        }
                        var_21 *= -var_1;
                        var_22 = (arr_1 [i_0] [i_0]);
                    }
                }
            }
        }
        var_23 = (min((((-((5712449650148881468 ? 0 : -564905606))))), (min(var_12, (min(var_2, var_8))))));
        var_24 = (max(var_24, (arr_1 [0] [0])));
        arr_16 [i_0] = (var_12 >> (((((max(51888, (arr_3 [i_0 - 4]))))) - 51884)));
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    var_25 *= ((-91 ? (min((13648 + -32760), (arr_24 [i_5 - 1]))) : -51));
                    var_26 = (min(var_26, var_7));
                }
            }
        }
        var_27 *= (((!21660) || ((!(240 || 13663)))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_28 |= 31284;

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_29 = -789317735;
            var_30 = (~113);
            var_31 = (max(var_31, (-15 > 0)));
        }
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            var_32 = (max(var_32, (26963 - -21471)));
            var_33 = (min(var_33, -49));
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            arr_35 [i_8] = (((arr_26 [i_8] [i_11]) ? (arr_30 [i_8] [i_8]) : var_3));
            var_34 = (max(var_34, 38572));
        }
        arr_36 [i_8] [i_8] = ((var_2 ? (!var_18) : 22));
        var_35 = 4717996248751792153;
        arr_37 [i_8] = ((3230432727 ? (arr_22 [i_8] [i_8] [i_8] [i_8]) : (arr_28 [i_8] [i_8])));
    }

    for (int i_12 = 2; i_12 < 11;i_12 += 1)
    {
        arr_42 [i_12 + 4] [i_12 - 2] |= (((((((arr_21 [i_12 - 2] [i_12 + 2] [i_12 + 3]) ? (arr_20 [i_12]) : var_3)) % (var_8 / var_7)))) ? ((var_0 ? (arr_17 [i_12 + 3]) : var_14)) : ((-(arr_21 [i_12 + 4] [i_12 - 1] [i_12 + 1]))));
        var_36 *= ((+((+((min((arr_24 [i_12 + 3]), (arr_18 [i_12 + 1]))))))));
        var_37 = (max(var_37, 88));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                {
                    var_38 = (min(var_38, ((((((((min(1003677535, 56))) ? (arr_21 [i_12 + 2] [i_12 + 3] [i_13 + 1]) : (arr_40 [i_12 + 4])))) ? var_13 : (((arr_24 [i_12 + 2]) ? (arr_22 [i_12 + 4] [i_12] [i_13 - 2] [i_14]) : var_18)))))));
                    arr_48 [i_12 + 3] [i_13 - 1] [i_14] = (max((arr_39 [i_13 + 1]), ((232 ? (min(var_3, 255)) : ((((arr_41 [i_12 + 1]) ? (arr_21 [i_12 + 4] [i_12 + 3] [i_12 + 3]) : (arr_44 [i_13 - 1] [i_14]))))))));
                }
            }
        }
        var_39 = (max(var_39, (((((((((var_14 ? var_15 : 52691))) ? (arr_43 [i_12 - 1] [i_12 + 3] [i_12 - 1]) : (max(18446744073709551615, 1003677517))))) ? -8403 : (((((((1904156491 ? var_0 : 1))) == 9488009048186474678)))))))));
    }
    #pragma endscop
}

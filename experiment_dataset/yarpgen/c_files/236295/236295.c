/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= 102;
    var_11 ^= 17001549727139367817;
    var_12 = (min(var_12, (0 >> 43)));
    var_13 = (((var_2 && var_2) << (var_5 + 381796762)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = ((var_6 ? ((((arr_1 [i_0]) ? ((((arr_0 [i_0]) > (arr_1 [2])))) : var_7))) : (min((max((-2147483647 - 1), 9292558524718281729)), (arr_1 [i_0])))));
        arr_3 [i_0] = ((-(((-3708973718643116953 ? 9154185548991269893 : 9292558524718281727)))));
        arr_4 [i_0] = ((-(max(var_6, ((var_0 ? 9223372036854775807 : var_8))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_15 = (min((max(((0 ? (arr_5 [i_1 + 2]) : 9292558524718281719)), -32764)), (max(-61771589, 15365849567555569206))));
        var_16 = (~var_8);
        var_17 = ((-(max((arr_6 [i_1 - 2]), (9292558524718281727 / -59603293)))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            var_18 = (arr_9 [i_3] [i_2]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_19 = 9292558524718281704;
                        var_20 ^= 9154185548991269893;
                    }
                }
            }
            var_21 = (min(var_21, var_2));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            arr_30 [18] [i_6] [i_7] [i_7] [18] = ((!((min(var_1, (-2147483647 - 1))))));
                            var_22 = (((255 ? (arr_9 [i_6] [i_9]) : 12030591788749355107)));
                            var_23 -= (arr_13 [i_2] [i_2] [i_2]);
                        }
                    }
                }
            }
            var_24 = 127;
            arr_31 [11] [i_2] [i_6] = 1;
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            var_25 += (arr_10 [i_2] [1] [i_10]);
            var_26 = 0;

            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {
                arr_38 [i_2] [i_2] [i_11] = (arr_36 [i_2] [0] [i_2] [i_11]);

                for (int i_12 = 1; i_12 < 23;i_12 += 1)
                {
                    var_27 = (max(var_27, (((~(max(9292558524718281690, (((9292558524718281731 ? var_7 : (arr_27 [8] [22])))))))))));
                    var_28 ^= ((max(((-711252710 ? var_7 : (arr_36 [i_12] [i_12] [8] [i_10]))), ((-32750 ? -1 : 43729)))));
                }
                var_29 -= ((((min((((arr_9 [i_2] [22]) ? 1 : (arr_25 [7] [1]))), (~-6)))) ? (((arr_36 [i_2] [i_2] [14] [i_10]) ? (((max(-124, 213)))) : var_4)) : (997192896 && 2)));
            }
            for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
            {
                arr_45 [i_13] [i_13] [i_2] = -711252735;
                var_30 = var_6;
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                var_31 += (((arr_20 [i_14]) ? var_2 : (arr_13 [i_2] [i_10] [i_14])));
                arr_49 [6] [6] [i_14] = var_2;
            }
        }
        arr_50 [i_2] = (((var_5 / (arr_21 [0] [1] [i_2]))));
        var_32 = (((min(3, -244)) != (((!(arr_20 [i_2]))))));
        arr_51 [i_2] [i_2] = ((((!(arr_11 [i_2] [i_2] [i_2]))) ? ((((max(var_0, (arr_35 [i_2] [i_2])))) * ((4503599627370495 ? 0 : var_1)))) : -9154185548991269896));
    }
    #pragma endscop
}

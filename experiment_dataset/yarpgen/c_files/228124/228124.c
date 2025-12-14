/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(5606462149764156135, -5606462149764156135)) / var_12)) + 9223372036854775807)) << (((max(var_12, ((var_6 ? var_6 : 18446744073709551615)))) - 155))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (((((-(arr_2 [i_0] [1])))) ? (arr_2 [i_0] [i_0]) : ((-5606462149764156135 ? var_3 : (arr_2 [i_0] [i_0])))));
        var_19 = ((-5606462149764156135 ? (((((min((arr_0 [i_0]), var_10))) ? (-5606462149764156135 + var_4) : var_13))) : 0));
        var_20 |= ((!-5606462149764156119) ? (max(var_10, (var_12 | -5606462149764156133))) : var_0);
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_5 [10] |= (min(var_1, ((((((var_2 ? var_0 : 1741835857))) ? (!var_5) : ((min((arr_3 [4]), 0))))))));
        var_21 = -var_8;
        arr_6 [i_1] = -var_6;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_22 = ((!((min(10, 125)))));

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_14 [i_2] [i_3] [i_4] = 5606462149764156116;
                arr_15 [9] [7] [i_3] [i_2] |= (((((var_4 ? var_8 : var_14)) << ((((min((arr_9 [i_3] [i_2]), 1))) + 19076)))));
                arr_16 [14] = ((10 ^ ((min(var_7, (arr_3 [i_4]))))));
            }
            var_23 = ((11858184827940135121 ? 1 : 3279));
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_24 = -6510;
            arr_19 [i_5] [i_5] [i_2] = (arr_9 [i_5] [i_2]);
        }
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            var_25 -= ((((var_14 || var_6) && (((var_6 ? var_10 : 2015089510))))) ? ((((min(-6510, (arr_13 [17] [i_2])))))) : var_1);
            var_26 = 4294967295;
        }

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_27 -= ((((((((var_13 ? var_13 : var_16))) / (var_5 & var_14)))) ? ((min(1, var_16))) : ((((arr_8 [i_2 + 1] [11]) ? 1508118993 : (((var_9 << (255 - 248)))))))));
            var_28 = ((((((arr_10 [i_2] [1] [i_2 + 1]) ? var_11 : (arr_10 [i_2] [i_7] [i_7])))) ? (((((21026 ? 155 : (arr_25 [i_2 + 1])))) & (~var_11))) : ((((arr_7 [i_2 + 1]) ? ((var_10 ? (arr_25 [i_2]) : var_8)) : var_7)))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_29 = var_8;
                    arr_31 [11] [i_8] [i_9] = var_11;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_36 [i_10] = ((-((((!var_13) > ((var_10 ? var_4 : var_15)))))));
                                arr_37 [i_10] [i_8] [i_9] [4] [1] [i_10] = var_11;
                                var_30 = ((~((((((var_6 >> (var_9 - 2596)))) <= (min(var_2, var_3)))))));
                                var_31 = (max(-35, 147));
                            }
                        }
                    }
                    var_32 = var_9;
                    arr_38 [17] [i_8] [i_9] = (((((((5606462149764156115 ? (arr_21 [i_2] [4] [10]) : (arr_18 [i_2] [7])))) - ((var_12 ? var_1 : var_14)))) << (((((((!(arr_34 [i_2] [i_8] [i_9] [2] [i_2 + 1] [i_8])))) ^ ((min(var_5, 31))))) + 1514))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                {
                    arr_47 [i_12] [i_12] [i_12] = (5606462149764156158 - 1);
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 20;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 18;i_16 += 1)
                        {
                            {
                                var_33 += var_6;
                                var_34 = ((-(arr_48 [11] [i_13])));
                                arr_55 [i_16] [i_16] [i_15] [i_14] [i_13] [i_16] [i_12] = var_5;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    arr_61 [i_12] [i_18] [i_18] [i_17] = (((((34 ? -5606462149764156119 : 0))) ? 18446744073709551615 : 5669784048976059897));
                    var_35 = (!(arr_41 [i_12] [i_17] [i_18]));
                }
            }
        }
        arr_62 [15] = (((((10 ? (arr_60 [0]) : var_0))) ? var_4 : ((var_12 ? (arr_49 [4] [4] [i_12] [i_12]) : var_2))));
        var_36 = (arr_39 [i_12]);
    }
    var_37 -= (!var_0);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = var_10;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] = ((-(16376 - 33554176)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_0] [8] = (((max((arr_3 [i_0 + 1] [i_4 - 1] [i_2]), (arr_3 [i_0 - 1] [i_4 + 1] [i_1]))) ? (((((arr_7 [i_0 + 1] [i_0] [i_2]) || (arr_7 [i_0 - 2] [i_0] [8]))))) : (max(-5507685740411796727, 0))));
                            arr_16 [i_4] [i_0] [i_0] [i_0] [i_0] = var_6;
                        }
                        var_15 = ((((((((arr_2 [i_0]) & (arr_8 [10] [i_0] [i_2])))) ? (~17592186044400) : ((((arr_14 [i_3] [i_3] [i_2] [i_1] [14] [10]) ^ var_4))))) | ((min((arr_5 [i_0] [i_0 - 1] [i_0 - 2]), (arr_5 [i_0] [i_0 - 1] [i_0 - 1]))))));
                        var_16 = var_9;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_17 = ((!(arr_2 [i_0 - 2])));
                            arr_20 [12] [i_1] [12] [i_0] [11] = var_5;
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_18 = (max(var_18, (((((var_6 ? (arr_17 [i_0] [i_6] [i_2]) : (arr_17 [i_0] [i_1] [i_1]))) > ((max((arr_3 [8] [i_0 + 1] [i_3]), (arr_17 [i_0 + 1] [i_1] [i_6])))))))));
                            arr_24 [i_0] [i_1] [i_2] [i_2] [13] [i_2] [i_6] = ((~((((arr_13 [i_0] [i_3] [i_2] [i_1] [i_0]) % (arr_0 [i_0] [i_3]))))));
                            arr_25 [i_0] [i_1] [i_3] [i_3] [i_3] = (!60264);
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            var_19 = (min(var_19, ((((((((max(var_2, var_12))) + (max((arr_26 [i_0] [10] [i_1]), (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])))))) ? ((-18446744073709551615 ? (min((arr_2 [i_0 - 2]), (arr_28 [i_2] [i_3] [i_2] [i_0] [i_0]))) : (arr_21 [i_0] [i_1] [i_2] [i_3] [i_7] [i_7] [i_7 + 1]))) : ((((arr_26 [i_1] [i_0] [i_1]) + (((var_1 ? var_3 : (arr_4 [i_0]))))))))))));
                            var_20 &= (!511);
                            var_21 = (((+(((arr_19 [i_7] [i_0] [i_2] [i_0] [i_0]) / var_9)))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        arr_32 [i_1] [i_0] [i_8] = (((min(var_8, var_9))));
                        arr_33 [i_0] [i_0] [i_2] [i_8] = (max(1, 1));
                        arr_34 [i_8] [i_8] [i_2] [i_0] [i_8] = (((arr_5 [i_0] [i_2] [i_8]) || ((((arr_30 [i_1] [i_0]) >> (9248661031616786882 || var_10))))));
                    }
                    var_22 = (18446744073709551614 > 60264);
                }
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        var_23 |= (((((var_13 ? var_2 : (arr_30 [i_0] [i_9])))) ? var_13 : (arr_8 [i_0] [i_1] [i_9])));
                        var_24 = (i_0 % 2 == 0) ? ((((arr_18 [i_9] [11]) >> (((arr_1 [i_0]) - 13967))))) : ((((arr_18 [i_9] [11]) >> (((((arr_1 [i_0]) - 13967)) - 14294)))));
                    }
                    var_25 = ((((max(127, -33554177))) ? (((-((max(var_0, var_3)))))) : (max(((~(arr_13 [i_0] [i_0] [i_1] [i_1] [i_0]))), (((var_1 ? var_11 : var_3)))))));
                    arr_39 [i_0] [19] [i_9] = -var_8;
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 0;i_11 += 1)
                {

                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        var_26 = (((arr_29 [i_11 + 1] [i_11 + 1]) ? (arr_29 [i_11 + 1] [i_11 + 1]) : var_9));
                        var_27 = ((1 << (((~120) + 139))));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_28 = (max(var_28, (((var_0 && (arr_2 [i_0 - 1]))))));
                        var_29 = ((-(arr_22 [i_0] [i_0] [18] [i_13] [i_1] [i_11 + 1] [i_1])));
                        var_30 = (!1);
                        var_31 = (min(var_31, (arr_21 [i_0] [i_0] [i_1] [i_11] [i_11] [19] [i_13])));
                        var_32 = (min(var_32, (arr_40 [i_13] [i_1] [i_13])));
                    }

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        arr_51 [1] [17] [i_11] [i_0] [i_11 + 1] = ((-9 ? var_0 : ((var_3 ? (arr_7 [i_0 - 2] [i_0] [11]) : 229))));
                        var_33 = (((arr_4 [i_0 - 1]) != var_6));
                    }
                }
                var_34 = (max(var_34, (((!((!(!var_12))))))));
                arr_52 [i_0] [i_0] [i_0] = ((~(arr_38 [i_0] [i_1] [i_1] [14])));
            }
        }
    }
    var_35 = (min(var_35, (((((var_2 ? var_4 : (max(33554175, var_2))))) >= (min((var_8 + var_0), (max(65015, var_13))))))));
    var_36 = (((max((var_4 && var_11), (var_8 + var_13))) == 62));
    var_37 = (46547 + 281474976710655);
    #pragma endscop
}

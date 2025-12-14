/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_7;
        var_10 = var_4;
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_11 = ((((max(var_3, (arr_5 [2])))) ? (!var_5) : ((min((!128517597), (max(-16452, 16440)))))));

        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_1 + 1] [i_1] = ((1 ? var_3 : var_6));
            var_12 -= -16452;
            var_13 = (max(var_13, (((((((16481 ^ 1) ? ((~(arr_9 [i_2]))) : (arr_5 [i_1 - 2])))) % ((((var_1 ? var_0 : (arr_6 [i_1]))) + (arr_6 [i_1]))))))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_13 [i_3] = (max((min((min(var_9, 1)), (((1 >> (((arr_9 [i_1 - 1]) + 81))))))), (arr_12 [i_1] [i_1 + 2])));
            var_14 = -var_5;
            var_15 = var_1;
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            arr_18 [i_4] = var_4;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_7] [i_6] [i_6] [9] [9] [i_7] = (((arr_9 [i_1]) ? var_0 : ((((arr_11 [i_7] [i_6]) > 1)))));
                            var_16 = (min(var_16, (((!(arr_5 [i_1 - 1]))))));
                            arr_28 [i_7] = -921341329162818859;
                            var_17 = (((arr_6 [i_1 + 2]) / (var_8 ^ var_7)));
                        }
                        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_33 [i_1] [i_4] [i_5] [i_6] [i_8] = 17;
                            arr_34 [i_8] [i_8] [4] [11] [i_8] = (max((arr_30 [9] [i_5] [i_6]), var_5));
                        }
                        for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            var_18 = -6539399495997734479;
                            var_19 = -16985517341013533285;
                            var_20 -= (!((min(((12715 ? (arr_31 [i_1] [i_1] [i_1] [13] [10] [i_1]) : var_5)), (~1)))));
                            arr_37 [i_1] [4] [i_6] [i_6] [i_9] [i_1 + 1] [i_6] = (((max(((((arr_24 [i_1] [i_6] [i_1] [i_6] [i_1]) ? var_4 : 192397056))), -9172781638914923190)) - (((18446744073709551615 ? (((var_4 + 2147483647) >> var_7)) : ((1 ? (arr_15 [i_1] [i_1]) : var_6)))))));
                        }
                        var_21 = (((((((var_5 ? 16452 : var_9))) ? 27660 : (var_2 & 8))) >= (((var_5 ^ var_5) ? ((((var_7 <= (arr_6 [10]))))) : (max((arr_36 [i_1]), var_8))))));
                        arr_38 [i_1 + 1] [i_1 + 1] [i_1 + 1] [1] [0] &= (max(((((((-(arr_20 [i_1] [i_1])))) ? (32767 != var_1) : ((min(0, var_1)))))), ((-9172781638914923190 ? var_8 : (((9292393999608360126 ? 1 : 12685)))))));
                    }
                }
            }
        }
        arr_39 [i_1] = min((var_6 ^ 4294967295), (arr_8 [i_1 + 1] [i_1]));
    }
    var_22 = (!var_0);
    var_23 = min(var_6, var_8);
    var_24 = (((((!var_1) + 0)) >> var_6));
    #pragma endscop
}

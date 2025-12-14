/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 2] = ((((((arr_2 [i_0 - 1] [i_0 + 2]) ? 165 : var_7))) <= (((arr_0 [i_0] [i_0 + 2]) & (min((arr_2 [i_0] [i_0 - 2]), 12477281780561495425))))));
        var_19 = (((max((arr_1 [i_0 - 2]), var_14)) == (max((arr_1 [i_0 - 2]), 178))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = ((((!(arr_5 [i_1 + 2])))));
                    var_21 |= var_6;
                    arr_9 [i_2] [i_0 + 1] [i_1] [i_2 + 2] = 78;
                }
            }
        }
        var_22 = arr_0 [i_0] [2];
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] = var_10;
        var_23 = ((var_1 & (arr_0 [i_3] [i_3])));
        arr_13 [i_3] = (arr_6 [i_3] [i_3] [i_3] [i_3]);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_24 = (((arr_2 [i_3] [i_4]) & (arr_4 [i_3] [i_3])));

            for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
            {
                var_25 &= -34;
                var_26 = ((arr_17 [10] [10] [i_5]) ? 12905597278132605733 : var_15);
                var_27 = (min(var_27, (((var_8 >= (((arr_17 [i_3] [i_3] [i_3]) ? 33554431 : (arr_18 [12] [i_4] [16]))))))));
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    var_28 = (((arr_15 [i_6] [i_6]) >> (((arr_20 [i_3] [i_4]) - 106))));
                    var_29 = (min(var_29, var_2));
                    var_30 *= 5785203029226489813;
                }
                for (int i_8 = 2; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_31 = (min(var_31, (arr_17 [i_8 + 3] [i_8 - 1] [i_8 + 2])));
                    var_32 = (((arr_5 [i_8 + 1]) >> (((arr_6 [i_3] [i_4] [i_6] [i_8]) - 219))));
                    var_33 = ((arr_14 [10] [13] [1]) && var_8);
                }
                for (int i_9 = 4; i_9 < 13;i_9 += 1)
                {
                    var_34 = -5;

                    for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        var_35 = var_16;
                        arr_31 [i_3] [i_3] [i_10 - 1] [i_9 - 2] [i_10] [8] [2] = (arr_24 [i_9 + 3] [i_9 - 3] [i_9 + 3] [i_9 + 1]);
                    }
                    for (int i_11 = 3; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        var_36 |= (arr_29 [i_6] [i_9 + 3] [i_9 + 2] [i_9 - 4] [i_9 - 4] [i_6]);
                        var_37 ^= (!114);
                        var_38 = ((var_0 ? (((3518 ? var_4 : var_7))) : 12905597278132605730));
                    }
                }
                var_39 += (((((170 << (-2117227804 + 2117227820)))) ? (((arr_14 [i_3] [i_3] [i_6]) ? 134318000 : var_16)) : (((var_2 ? var_9 : var_9)))));
                arr_34 [12] [i_6] = ((-1620746596 ? var_14 : var_9));
                var_40 = (!var_4);
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
            {
                var_41 = (arr_7 [i_12] [i_4] [i_3]);
                var_42 ^= (arr_2 [i_3] [9]);
            }
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_43 = (((arr_4 [i_13] [i_3]) ? (arr_4 [i_3] [i_13]) : (arr_4 [i_3] [i_3])));
            var_44 = ((!(arr_29 [i_3] [i_13] [i_13] [i_3] [i_3] [10])));
            var_45 -= (!var_6);
            var_46 |= (((arr_17 [i_3] [i_13] [i_13]) > var_9));
        }
    }
    var_47 = ((!178) ? 3212 : (((((var_12 ? var_14 : var_16))) ? var_14 : (max(5541146795576945889, var_1)))));
    var_48 = (max(var_48, (max((!var_12), var_0))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_5 / ((((1220739793 > (1 & var_5)))))));
        arr_3 [i_0] = var_4;
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 += (0 ? ((~((var_12 ? 9494 : var_0)))) : ((-(arr_1 [i_1] [i_1]))));
        var_17 = ((~(arr_1 [i_1] [i_1])));
        var_18 = (((arr_0 [i_1]) ^ ((56041 ? 9500 : ((((arr_0 [i_1]) <= 9495)))))));
        var_19 += (-9223372036854775807 - 1);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            var_20 = 664722073;
            arr_11 [i_3] [i_3] = ((((((768107030 | 59) == -var_3))) == (~-var_0)));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_21 = (!15632);
            arr_14 [i_2] [i_2] = ((~((-30789 % (-9223372036854775807 - 1)))));
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_22 = 9513;
            arr_17 [i_2] [i_5 - 1] [i_5] = (var_12 + ((0 ? 56042 : (arr_0 [i_5 - 1]))));
            arr_18 [i_2] [i_2] |= ((-45 ? 3 : ((((9494 ? 1 : (arr_4 [i_5])))))));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_22 [i_6] = (((((arr_8 [i_2]) >= -3405072022869807657)) ? (((0 ? -1683536381 : 3425343425))) : -17635532646778333609));
            arr_23 [i_6] [i_6] [i_2] = var_10;
            arr_24 [i_2] [i_2] [i_6] = (!((((((~(arr_5 [i_2])))) ? (~var_4) : (((arr_10 [i_2]) * var_8))))));
            arr_25 [i_2] [i_2] [i_6] = (arr_7 [i_2]);
        }
        var_23 ^= (~(arr_9 [i_2] [i_2]));

        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            arr_29 [i_2] [i_2] [i_7] = (~0);
            var_24 = (((((561982455 ? (((!(arr_9 [i_2] [i_2])))) : (((!(arr_19 [i_7] [i_7]))))))) ? -59 : (-104 % 1617767888)));
            var_25 = var_10;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_36 [i_2] [i_8] [i_2] [i_2] = ((((-3522479004311593091 ? 60556 : 0))) ? ((((-3405072022869807634 < (arr_8 [i_8]))))) : (arr_33 [i_2] [i_7]));
                        arr_37 [i_2] [i_2] [i_9] [i_2] = 13;
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 13;i_10 += 1)
        {
            arr_42 [i_2] [i_10 + 3] = (10174885484745220032 ? ((-(arr_41 [i_10 + 3]))) : (((-((var_15 ? 49904 : 59))))));
            arr_43 [i_2] [i_2] [i_2] = ((~(((-9223372036854775807 - 1) / 9953))));
            arr_44 [i_2] [i_2] = ((+((var_14 ? (var_9 * var_2) : (!5)))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    {
                        var_26 *= ((~(arr_16 [i_2] [i_10 + 2] [i_10 + 2])));
                        arr_50 [i_12 + 1] [i_11] [i_11] [i_2] [i_2] |= ((29888 ? (((((var_7 ? var_3 : -43))) - -3405072022869807672)) : 2979130389));
                        arr_51 [i_12] = 216;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
    {
        var_27 = -var_11;
        var_28 *= var_14;
        var_29 = ((~(arr_38 [i_13] [i_13])));
        var_30 += (~49903);
    }
    var_31 = (!var_13);
    #pragma endscop
}

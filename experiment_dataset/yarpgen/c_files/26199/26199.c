/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 = (((~var_4) <= ((1 + ((var_3 ? 14222 : 1))))));
        arr_2 [i_0] [i_0] &= 49628;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = var_0;
            var_15 = ((-((((var_0 ? var_10 : 8677))))));
            var_16 = ((~(((!((max(var_10, var_5))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = ((50400 ? 12295 : var_3));
            var_18 = (15137 + var_10);
        }
        var_19 -= ((~(1 <= 18127177346608343444)));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 = (max(var_20, 53241));
        var_21 = 1;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] [i_4] = (max(((2941718963864829698 ? 1 : 1)), -65535));
        var_22 ^= ((55341 ? var_7 : var_8));
        var_23 += (((((59379 * (22411 <= 1)))) ? (((((65535 ? 17231048520474375076 : 6169))) ? 1 : 59379)) : ((((!0) > (~var_9))))));
        arr_13 [i_4] = (((((max(1, 59367)) ? (65535 > 1) : 61087))));
    }
    var_24 = 1;

    /* vectorizable */
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        arr_17 [i_5] |= ((-var_7 ? (1 > var_6) : 1));
        var_25 = (59379 > 1);

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_26 = (var_9 > 1);
            var_27 = (1 * 10815710961406297375);
            var_28 = ((var_9 ? (((var_2 ? 1 : 0))) : ((9661582022056103231 ? var_0 : 18127177346608343453))));

            for (int i_7 = 2; i_7 < 24;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_29 = ((~(~var_4)));
                        var_30 += (((1 & 1) ? ((var_5 ? 1 : 1)) : var_6));
                        arr_29 [i_5 - 1] [2] [i_7] [i_8] [i_7] &= (var_2 / 1);
                        arr_30 [i_5] [i_6] [i_6] [i_6] [i_6] = -49662;
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_33 [i_5] [2] [i_7 - 2] [i_6] [i_10] = 1;
                        var_31 = 1;
                        arr_34 [15] [i_6] [i_7] [i_8] [i_6] = var_2;
                    }
                    for (int i_11 = 1; i_11 < 23;i_11 += 1)
                    {
                        var_32 += (!var_7);
                        var_33 = (!var_2);
                    }
                    for (int i_12 = 2; i_12 < 21;i_12 += 1)
                    {
                        var_34 = var_3;
                        arr_41 [i_6] [i_6] [i_6] = ((var_3 ? (~56058) : 6169));
                    }
                    arr_42 [i_5] [i_6] [i_5 - 1] [i_5] [i_5 - 1] [i_6] = -1;
                }
                for (int i_13 = 4; i_13 < 24;i_13 += 1)
                {
                    arr_47 [i_6] = (var_2 || var_8);
                    arr_48 [i_6] [i_6] [i_6] [i_6] = (-var_11 > var_6);
                    arr_49 [11] [i_6] [19] [i_13] [i_7 - 2] = (((var_0 | 2941718963864829688) ? var_8 : ((2941718963864829667 ? 15505025109844721930 : 1))));
                }
                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    arr_54 [i_5] [i_5 + 1] [i_5] [i_6] = var_1;
                    arr_55 [i_6] [i_6] [i_7] = (((((1 ? 1 : var_0))) ? -6152 : ((1 ? 15505025109844721933 : 1))));
                }
                var_35 = (~var_12);
                arr_56 [i_5] [i_6] [i_6] [i_7] = (!65402);
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {

                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    arr_61 [1] [i_6] [14] [1] [i_6] [i_6] = ((1 | ((1 ? 59940 : 1))));
                    arr_62 [11] [i_6] [9] = 1;
                }
                var_36 = ((var_11 ? 0 : var_5));
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                arr_65 [i_5] [i_6] [i_17] = (((var_0 * var_11) ? (var_3 <= 1) : (1 | 1)));
                arr_66 [i_6] = (((((var_5 ? 1 : var_11))) ? (((1 ? 5152 : var_1))) : var_7));
                var_37 = ((((14155 ? var_3 : 1))) ? ((0 ? var_3 : var_7)) : (!1));
                var_38 = (((((0 ? var_1 : 51381))) ? var_6 : (~var_0)));
            }
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                arr_69 [i_6] = ((var_1 ? 1 : (1 > 0)));

                for (int i_19 = 0; i_19 < 25;i_19 += 1)
                {
                    arr_74 [i_5] [1] [i_18] [i_6] = (((((var_5 ? 1 : var_12))) ? (1 <= 30066) : -var_5));
                    arr_75 [i_6] = 1;

                    for (int i_20 = 0; i_20 < 25;i_20 += 1) /* same iter space */
                    {
                        arr_80 [1] [i_6] [1] [i_19] [i_20] = ((var_1 ? var_5 : 1));
                        arr_81 [i_5] [i_6] [i_5] [i_6] = var_6;
                        var_39 = 51381;
                        var_40 = (((((31744 ? var_10 : var_9))) ? 17145547098304990397 : 0));
                    }
                    for (int i_21 = 0; i_21 < 25;i_21 += 1) /* same iter space */
                    {
                        var_41 = 1;
                        arr_85 [i_6] = (1 > 1);
                        arr_86 [i_6] [i_21] [i_19] [i_18] [i_6] [i_6] = 279223176896970752;
                        var_42 = var_10;
                    }
                }
                var_43 = -32767;
            }
        }
        for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
        {
            var_44 = ((var_9 ? 2941718963864829667 : var_9));
            var_45 = (~var_3);
        }
        for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
        {
            var_46 = ((var_3 ? 0 : var_4));
            var_47 = ((((1 ? 42400 : var_1)) - -var_0));
            var_48 = (max(var_48, 1));
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    {
                        arr_98 [22] [i_23] [i_23] [i_5] = 1;
                        var_49 = ((((1 ? 1 : var_8))) > ((var_5 ? 17577 : var_12)));
                        var_50 ^= ((8192 > ((64655 << (4033888230107140378 - 4033888230107140363)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

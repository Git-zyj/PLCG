/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (!var_14);
        var_19 = ((26837 ? var_8 : var_11));
        arr_3 [i_0] = ((var_17 ? ((var_4 ? var_4 : var_16)) : var_6));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_20 = -var_7;
            arr_6 [i_0] [0] [i_1 - 1] = -var_15;
            var_21 = (min(var_21, (38696 & 118)));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_22 ^= -var_8;
            var_23 *= var_15;
            var_24 = (min(var_24, ((1 ? 135 : 119))));
            var_25 = (max(var_25, (((var_0 < (~var_15))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_26 = (var_13 ? var_0 : var_13);
            arr_14 [i_0] [i_0] = var_13;
        }
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        arr_17 [i_4 - 1] [i_4] = (min(var_7, var_17));
        arr_18 [i_4] = (((((((max(var_3, var_9))) ? (var_18 + var_14) : var_7))) ? var_6 : -var_17));
        arr_19 [i_4] = ((((var_14 ? var_18 : var_12)) / var_9));
        var_27 = (max(var_27, (((var_1 ? (var_11 - var_10) : -var_17)))));
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_28 = (min(((var_15 ? var_11 : var_2)), var_13));
        arr_24 [i_5] = (((var_6 ? var_14 : var_16)) >> ((-1490881303 ? 1 : 11)));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_29 = (((var_13 ? var_12 : var_12)) % ((((max(var_15, var_5))) ? var_5 : var_10)));
        var_30 &= (min(((max(-84, 137))), (min(var_14, var_12))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                var_31 = (((((((var_11 ? 235 : var_0)) / -1))) ? ((((159 ? -1264025301 : 127)))) : var_1));
                arr_36 [i_8] = var_4;
            }
        }
    }

    for (int i_9 = 3; i_9 < 22;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_32 = (max(var_32, ((((var_16 + var_11) ? (var_5 || var_4) : ((var_6 ? var_17 : var_10)))))));
            arr_41 [i_10] [i_10] = ((((min(var_15, var_4))) ? var_9 : (!var_9)));
            var_33 = ((-((var_2 ? var_18 : var_10))));
        }
        arr_42 [3] = (min(var_10, var_9));
        var_34 = ((-var_8 ? -var_11 : (var_2 != var_16)));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        arr_47 [i_11] |= (min((max((((var_10 ? var_15 : var_15))), (var_11 - var_13))), (var_14 <= var_18)));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    var_35 -= var_4;
                    var_36 = var_14;
                    arr_53 [i_11] [i_11] [i_13] |= ((var_13 ? 6 : (~var_4)));
                    var_37 = ((10 ? 2057682102108809436 : 162));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 16;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    {
                        var_38 = var_5;
                        var_39 = (min(var_39, (((-(!0))))));

                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            arr_65 [i_11] [i_14] [i_14] [i_16] [0] = ((((((((var_4 ? var_17 : var_3))) ? ((var_9 ? var_7 : var_8)) : -var_13))) ? ((-((var_10 ? var_14 : var_12)))) : ((1 ? 65526 : 8))));
                            var_40 *= 4;
                            arr_66 [i_14] = (var_4 ^ (((!(((var_0 ? var_8 : var_0)))))));
                        }
                        arr_67 [i_11] [i_14] [i_11] [i_15 + 1] [i_15] [i_16] &= (((((-var_12 ? (var_4 % var_8) : (~var_4)))) ? (var_10 >= var_1) : (var_4 < var_11)));
                        var_41 = ((~((var_12 ? var_3 : var_0))));
                    }
                }
            }
        }
        var_42 = (min(var_42, ((min((~var_2), (((!(var_12 <= var_9)))))))));
        var_43 |= (67 <= 3230988259);
    }
    #pragma endscop
}

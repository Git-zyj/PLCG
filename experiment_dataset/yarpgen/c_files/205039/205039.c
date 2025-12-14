/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((((255 ? var_2 : var_14)) / ((min(648294705, 255))))) / -var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [7] = var_9;

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_20 = ((~var_12) ? (var_8 + 255) : var_5);
            var_21 *= ((1382859663248359268 << (var_1 - 4736182615544748497)));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_22 = 17131271853110223430;
                    var_23 = (max(var_23, (1 * 1)));
                    var_24 = (max(var_24, ((81 ? (~var_4) : (~var_18)))));
                }
                arr_12 [i_2] [i_2] [i_2] = (!83);
                arr_13 [i_2] [i_2] = -224355434;

                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    arr_17 [9] [i_2] [9] [21] [i_2] [i_3] = ((var_2 ? (var_14 < var_8) : (var_2 ^ 81)));
                    var_25 -= ((81 ? 224355439 : 4070611857));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    var_26 = 17;
                    var_27 |= ((var_13 ^ (var_12 + 228)));
                    var_28 += (224 > var_6);
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_22 [1] [i_2] [i_2] [i_2] = ((var_11 % (((-10256 ? var_8 : 0)))));
                    arr_23 [i_0] [i_3] [i_2] = (~80);
                }
                arr_24 [i_2] = (((2190763093 ? var_18 : var_5)));
            }
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_29 = ((~(47 < var_2)));
                            var_30 -= ((!(224355434 <= 65)));
                            var_31 = (13687055188868188747 | var_15);
                            arr_33 [i_0] [i_2] [16] [14] [i_2] [i_2] [i_10] = (~-1382859663248359243);
                            arr_34 [i_0] [11] [i_9] [i_2] = -95;
                        }
                    }
                }
                var_32 = (min(var_32, (((var_12 ? 37210 : -53)))));
                var_33 = (min(var_33, (((((var_0 ? -49 : var_7))) ? -11 : var_5))));
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_41 [i_0] [i_2] [i_8] [i_11 - 4] [i_12 + 1] [i_12 - 1] = ((16384 << ((((873974782 ? 48 : var_13)) - 33))));
                            arr_42 [i_12] [i_12 - 1] [i_12] [i_12] [i_12 + 2] [i_2] = 0;
                        }
                    }
                }
                var_34 = (max(var_34, (((((-32761 ? 24546 : 1))) + 14788814917043866607))));
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                arr_45 [i_0] [i_2] [i_13] [i_13] = var_11;
                var_35 = (max(var_35, var_15));
            }
            arr_46 [4] [4] |= (var_15 - 10256);
            var_36 = -33;
            var_37 |= ((3407089654444626360 ? var_10 : 3840721006377764751));
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            arr_50 [i_0] = (var_14 && 115);
            var_38 = (min(var_38, ((((~var_18) ? 49 : var_4)))));
        }
        for (int i_15 = 1; i_15 < 20;i_15 += 1)
        {
            arr_55 [i_0] [i_15] = (-20703 / var_6);
            var_39 = -643726138;
        }
        arr_56 [i_0] [i_0] |= 3840721006377764743;
    }
    #pragma endscop
}

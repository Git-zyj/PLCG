/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 &= 18446744073709551615;
                    var_17 = (!var_6);
                    var_18 = (min(var_18, 15238814492342891845));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    arr_13 [i_4] [i_0] [i_0] [i_0] = 32757;
                    var_19 = 3207929581366659787;
                }
            }
        }
        var_20 = ((!(((var_3 ? var_9 : var_1)))));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_24 [i_0] [i_0] [i_6] [i_7] [18] [i_7] = (1 - var_7);
                        var_21 = ((var_14 ? 1 : var_6));
                        arr_25 [i_0] [19] [i_0] [i_0] = var_11;
                        var_22 = (var_1 ^ 32750);
                        var_23 -= (!1);
                    }
                }
            }

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_24 = ((1 && (var_11 || var_14)));
                arr_28 [1] [18] [i_8] &= (!var_9);
            }
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_39 [i_11 + 1] [i_10] [i_0] [i_5] [i_0] = 32757;
                            arr_40 [i_0] [i_5] [1] = var_9;
                            var_25 = (((10271459421082757232 % var_14) >= var_13));
                            var_26 = (192 != 234);
                        }
                    }
                }
                var_27 ^= ((269996228 >> (var_14 + 1820704671197474482)));
            }

            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_28 = 1309963000;
                arr_45 [i_0] [i_0] [i_0] = (~var_15);
                var_29 = (min(var_29, (!4024971067)));
                var_30 = (((((1478200375 ? 154 : -10643))) ? 1816367033 : (((9223372036854775807 << (var_5 - 66))))));
            }
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                var_31 += (((!var_6) ? (var_15 && 79) : 10619));
                var_32 -= (!-32751);
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
        {
            var_33 ^= -var_13;
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        {
                            arr_60 [i_0] = (4611686018427387904 != 1);
                            var_34 = (~5293);
                        }
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            arr_63 [i_0] = -13;
            var_35 = (max(var_35, (!var_14)));
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 21;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 21;i_20 += 1)
            {
                {
                    var_36 = -var_14;
                    arr_70 [i_0] [i_0] [i_20] = var_3;
                    var_37 += 255;
                    var_38 = (max(var_38, (var_7 != 13360743914896110777)));
                }
            }
        }
    }
    var_39 = (min((min(((0 ? 8 : 32767)), 32747)), (var_4 / var_1)));
    #pragma endscop
}

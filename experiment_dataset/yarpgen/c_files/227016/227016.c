/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 719425978;
        var_21 = (min(var_21, 1946852450));
        arr_4 [i_0] = -1353331826;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 = 1;
        var_23 = 1276150540;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_24 = 6207;
        var_25 = 0;
        var_26 = -2106411917;
        arr_9 [i_2] = 1;

        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            var_27 = (min(var_27, 2529224383));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_28 = (max(var_28, 4249468044778346091));

                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    var_29 = (max(var_29, 1));
                    var_30 = 0;
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_22 [i_2] [i_2] [15] [i_4] [1] [i_6] [i_7] = 1;
                        arr_23 [i_4] [6] [i_4] [i_6] [i_4] [i_7] = 0;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_31 = 1;
                        var_32 = 0;
                        var_33 ^= 65;
                        var_34 = 2511134228;
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_35 = 0;
                        var_36 = 1;
                        var_37 = -126;
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_38 = 0;
                        var_39 = -32761;
                        var_40 ^= 3463;
                        var_41 = (-2147483647 - 1);
                    }
                }

                for (int i_11 = 3; i_11 < 16;i_11 += 1)
                {
                    var_42 = 1946852434;

                    for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_43 = 1258903850;
                        var_44 = (max(var_44, 1));
                        var_45 = 1;
                        var_46 = 60;
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        var_47 -= 12314;
                        var_48 = 43707;
                        var_49 &= -14862;
                        var_50 = (max(var_50, 1946852451));
                    }
                }
                for (int i_14 = 1; i_14 < 16;i_14 += 1)
                {

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        var_51 = 1;
                        var_52 = 195;
                    }
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        var_53 = 1;
                        var_54 += 195;
                        var_55 = 25241;
                        var_56 -= 1;
                    }
                    var_57 = (min(var_57, 16122));
                }
            }
            var_58 = 0;
            var_59 |= 6077190618484619806;
            arr_47 [i_2] = 1;
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_11;
        var_18 ^= var_16;
        arr_5 [i_0] = -610878407;

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
            {
                var_19 ^= (var_5 ? var_5 : -var_2);
                arr_10 [i_0] [i_0 + 2] [i_0] [i_0] = var_2;
                arr_11 [i_0] = (~(arr_6 [i_2]));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [3] [i_0] [i_5 - 3] [i_1] [i_0 - 1] = var_3;
                            arr_21 [5] [i_1] [i_0] [i_1] [i_1] = var_13;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        {
                            arr_28 [i_0] [i_0] [i_1] [i_0] &= 12716401219022655066;
                            var_20 += (!12716401219022655068);
                            arr_29 [i_0] [i_1] [4] [10] [i_0] [i_0] &= (((var_14 - 18446744073709551595) ? (5730342854686896569 != var_11) : ((12716401219022655058 ? 11291785928842639173 : var_9))));
                            var_21 -= (~var_4);
                        }
                    }
                }
            }
            var_22 -= ((var_5 ? (arr_24 [i_1] [6] [i_0 + 3] [i_0 + 1] [i_0 + 1]) : 533678508611860256));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_23 += var_13;
            arr_33 [i_0] [i_0] [i_8] = 14;

            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
            {
                arr_36 [i_0] [i_8] [i_0] = var_5;
                var_24 ^= (((var_16 - var_7) ? var_4 : ((var_4 ? 0 : 210))));
            }
            for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
            {
                arr_40 [i_0] = (~5730342854686896559);
                var_25 = var_0;
                var_26 -= (!281474976710655);
                var_27 += 12716401219022655068;
            }
            arr_41 [i_0] [i_8] = (arr_22 [i_0] [i_0] [i_0] [i_8] [i_8]);
        }
        var_28 ^= (12716401219022655047 || var_2);
    }
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        var_29 -= var_4;
        var_30 ^= var_15;
        var_31 ^= ((((((-1760247504 ? 210 : 165)))) ? (var_14 || var_12) : var_11));
        var_32 = -511;
    }
    #pragma endscop
}

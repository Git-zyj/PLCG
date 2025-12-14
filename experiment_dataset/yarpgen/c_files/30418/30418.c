/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        var_13 = ((!((((((var_6 - (arr_2 [i_0] [i_0])))) ? (890 > var_0) : var_2)))));
        arr_4 [i_0] = ((13 + ((((var_6 + var_5) ? 9 : ((min(65526, var_3))))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_14 = (--18446744073709551615);
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_15 = (min(-24643, var_0));
                    var_16 = -24650;
                }
            }
        }
        var_17 &= (32743 / 4294967283);
        var_18 = 2787393312843485512;
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = 0;

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_19 = 49298;
                var_20 *= (((5260 & 782558240) > 3));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                arr_26 [i_4] [i_7] [i_5] [i_7] = (arr_9 [i_4 + 2] [i_5] [i_7]);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_21 = (((arr_9 [i_4 - 1] [5] [i_7]) ? 31 : (arr_9 [i_4 + 3] [i_5] [i_7])));
                            var_22 = (max(var_22, (arr_30 [8] [10])));
                            var_23 = 2540501508;
                        }
                    }
                }
            }
            var_24 = (min(var_24, ((min((((-32744 + (arr_18 [i_4] [11] [i_5] [i_4 - 1])))), var_0)))));
            var_25 = (arr_24 [i_4] [i_5] [9] [i_4 + 3]);
            var_26 *= 30175;
            var_27 = (-((((2787393312843485512 << (7951 - 7950))) / -4294967289)));
        }
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            var_28 = (((((arr_18 [i_10 + 1] [i_10 + 1] [1] [9]) | (arr_18 [i_10 + 2] [i_10 + 1] [i_10] [i_10 + 2]))) & ((((15154163186758598181 == -32744) >= ((52297 << (42556 - 42549))))))));
            var_29 = ((-((4697 | (min(268427264, var_6))))));
        }
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            var_30 = (max(var_30, ((max(((-(arr_9 [2] [i_11] [14]))), -var_10)))));
            var_31 = ((~(((min((arr_19 [i_4] [i_11] [i_11 + 2]), var_4))))));
            var_32 = ((~(arr_19 [i_4] [i_11 + 1] [i_4])));
            var_33 = (!6759454153322270002);
        }
        var_34 = (min(var_34, (((max((((18446744073709551615 ? (arr_31 [i_4] [i_4] [i_4 - 1] [i_4] [14]) : 3881312740))), 5242090396919605621))))));
        var_35 &= (((arr_7 [12]) >> (((-4448111911502902114 / -27218) - 163425377011625))));
    }

    /* vectorizable */
    for (int i_12 = 3; i_12 < 10;i_12 += 1)
    {
        arr_41 [3] |= (((var_9 + 9193871304182991712) == (((var_4 ? (arr_25 [1] [i_12] [i_12]) : 7929)))));
        arr_42 [i_12 - 1] = (30077 - 8);
        arr_43 [i_12] [i_12] = (((arr_5 [15] [i_12]) - (var_7 - 52695)));
        var_36 = (arr_16 [i_12 - 1]);
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        var_37 *= (min(4221457608, -32743));
        arr_48 [i_13] = ((max(18446744073709551615, 4257824895652726915)) * (((max(6938, 13062)))));
        arr_49 [8] [8] = 4294967295;
    }
    var_38 = 41197;
    #pragma endscop
}

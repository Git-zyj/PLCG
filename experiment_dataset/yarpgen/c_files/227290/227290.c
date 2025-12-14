/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 4294967295;
    var_11 = (var_7 & var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_2] [16] [i_0] = (((((var_9 ? var_2 : 4294967289))) ? var_6 : ((72 ? 4294967285 : 15))));
                        var_12 = ((var_7 << (var_6 - 96)));
                        var_13 |= 1;
                        var_14 -= (var_5 >= var_0);
                        var_15 = (1 >= var_9);
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 24;i_4 += 1)
        {
            arr_15 [i_0] [i_0] = ((((((arr_6 [i_0] [0]) ? 1 : (arr_9 [4] [19] [i_0] [i_0])))) ? var_9 : var_2));
            var_16 -= (1 ? var_1 : (arr_13 [i_0] [i_0] [i_0]));
            var_17 = (((arr_12 [i_4 + 1] [i_4 + 1] [7]) ? (arr_9 [i_4 + 1] [i_0] [17] [3]) : 18446744073709551615));
            var_18 = ((~((1 ? 610929738493863374 : 1))));
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_20 [24] [24] [i_5] = ((((-62 ? 162 : var_6)) << 1));
                var_19 -= ((((arr_10 [i_0] [i_5] [i_5] [14]) ? -1 : var_9)));
            }
            arr_21 [i_0] [i_5] = var_5;
            var_20 = ((var_6 ? (arr_7 [i_0] [i_5]) : var_6));
            var_21 = (max(var_21, (~var_5)));
            var_22 -= (((((var_4 ? var_9 : var_0))) != ((var_7 ? 7872552381436516856 : var_1))));
        }
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_26 [19] [19] [i_8] [19] = (~7);

                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_31 [6] [i_8] [i_8] [i_0] = (((arr_9 [i_0] [i_7 - 1] [6] [i_9]) % var_4));
                    var_23 = var_4;
                    var_24 = (~1);
                    var_25 = (max(var_25, -var_9));
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_26 = (max(var_26, (((1 ? -821682405 : 94)))));
                    var_27 += (((var_7 ? var_8 : (arr_12 [i_0] [i_0] [i_10]))) != ((var_9 ? 18138781617962739912 : (arr_0 [i_7 - 1] [i_7 - 1]))));
                }
                var_28 += (((((4294967278 ? var_1 : 4294967292))) ? var_5 : (!6372116626049363802)));
            }
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                var_29 = ((9223372036854775807 >> (var_2 - 52021)));
                var_30 = (!var_5);
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                arr_39 [4] = ((var_5 ? 4294967295 : (((-3488163977182387195 ? var_4 : var_0)))));
                var_31 = (((arr_25 [i_12] [i_7 + 1]) ? 8410 : (arr_37 [18] [i_7 + 1] [i_7 + 1])));
            }
            for (int i_13 = 1; i_13 < 22;i_13 += 1)
            {
                arr_44 [i_0] [i_0] [i_0] [i_13] = (((((29878 ? -84 : 4294967279))) && 1));
                var_32 = (min(var_32, (((4294967264 ? ((536868864 ? (arr_9 [i_0] [i_0] [i_7 + 1] [i_7]) : 3)) : 35)))));
                var_33 = (min(var_33, (((86 - (arr_3 [i_7 + 1]))))));
                arr_45 [i_0] [i_0] = (~-4739065233807897009);
            }
            var_34 = (((arr_22 [i_0] [i_7 + 1] [i_7 + 2]) ? (arr_25 [i_0] [i_7 + 1]) : (((var_4 ? (arr_19 [i_7]) : var_1)))));
            var_35 = (((arr_37 [i_7 + 2] [i_7 + 2] [i_7 + 2]) - ((var_7 ? var_6 : 1))));
        }

        for (int i_14 = 1; i_14 < 22;i_14 += 1)
        {
            arr_49 [i_0] [i_14 - 1] [9] = ((var_6 ? var_2 : (var_2 >= -5865652917080794516)));
            arr_50 [i_0] [i_14] [i_14] = ((!(arr_13 [i_14 + 3] [i_14 + 2] [i_14 + 3])));
            var_36 ^= ((((51 ? var_2 : var_8)) / var_6));
        }
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            var_37 = (((((var_8 ? 3354149122 : -3844434663420616020))) ? 1 : 1));
            arr_53 [19] = ((((((arr_6 [i_15 - 1] [10]) | var_6))) ? var_7 : 10));
        }
        arr_54 [i_0] = (arr_3 [i_0]);
    }
    #pragma endscop
}

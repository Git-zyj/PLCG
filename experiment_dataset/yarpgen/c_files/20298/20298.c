/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_19 = (min((min(var_4, var_13)), 815));
            var_20 = ((-(arr_5 [i_0] [1])));
            var_21 ^= ((~((min((arr_4 [16]), (arr_4 [1]))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_0] = var_14;
            var_22 = (min(var_22, var_5));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                arr_15 [i_0] = ((-(arr_5 [i_0] [i_2])));

                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    var_23 = -var_11;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] = (((~(arr_0 [i_0]))));
                        var_24 &= var_9;
                        var_25 = (min(var_25, (82 - var_6)));
                        var_26 = (max(var_26, (((var_17 == (~815))))));
                    }
                    arr_22 [i_0] [i_0] = var_3;
                    arr_23 [i_0] [i_0] [i_4 - 1] [9] = 1;
                }
                var_27 *= var_7;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_32 [i_7] [1] [i_6] [i_3] [i_2] [1] [i_0] &= 0;
                            var_28 = (1 & -815);
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_29 = ((min(-1080, (arr_17 [i_0] [i_0] [i_8] [i_8]))));
            var_30 = (min(var_30, -2759));
            var_31 = (max(var_31, ((((min((min(var_1, var_13), -2759))))))));

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_32 = (max(var_32, (((~var_7) >= (!var_2)))));
                var_33 = ((+(((min((arr_6 [i_0] [8] [i_0]), 1))))));
                var_34 = (((((arr_33 [i_0] [19] [i_9]) ? var_9 : var_3))));
                var_35 *= ((~((min((arr_33 [i_0] [i_8] [i_8]), var_8)))));
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_36 = ((((var_14 ? (arr_37 [1] [i_10]) : (arr_17 [i_0] [i_0] [i_10] [i_10]))) >> (var_0 - 126)));
            arr_43 [i_0] [i_10] = (max(((var_12 ? 13 : (-24182 * -19922))), var_4));
            arr_44 [1] &= ((~((~(arr_29 [i_0] [i_10] [18] [i_10] [i_10])))));
        }
        var_37 = min(((((29561 - -4022) != ((min(1080, var_0)))))), -29541);
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_38 = ((-7497 * (arr_4 [i_11])));
        var_39 ^= var_11;

        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            var_40 = (min(var_40, ((max(((min(var_9, (max(32748, 0))))), ((var_1 | (arr_25 [i_11] [i_11]))))))));
            arr_51 [i_11] [i_11] = (min(var_3, (~var_18)));
        }
    }

    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_41 = (max(var_41, 8186));
        var_42 = arr_33 [i_13] [i_13] [i_13];
    }
    #pragma endscop
}

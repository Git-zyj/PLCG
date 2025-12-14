/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(0, var_13))) ? (var_9 / var_10) : var_0);
    var_15 = (max(var_15, ((max((((((var_13 ? var_2 : var_11))) || -var_10)), 0)))));

    for (int i_0 = 4; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 = (max((((min(var_3, (arr_0 [i_0 - 4]))) % (((-(arr_2 [i_0])))))), (arr_2 [i_0])));
        var_17 = (max(var_17, (arr_1 [i_0])));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_18 += (((((var_6 && (((62172 ? (arr_2 [i_1]) : (arr_3 [i_1]))))))) * 1));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        var_19 = ((~(((((min(var_9, (arr_10 [i_1] [i_1] [2] [i_1 + 3]))))) & (arr_5 [i_1 - 1] [i_1 - 3])))));
                        var_20 = (max((((arr_6 [i_4 + 1]) ? (arr_6 [i_4 + 1]) : (arr_6 [i_4 + 1]))), ((min((arr_6 [i_4 + 2]), (arr_6 [i_4 - 2]))))));
                        var_21 = arr_7 [i_3] [i_4 - 1];
                    }
                }
            }

            for (int i_5 = 3; i_5 < 20;i_5 += 1)
            {
                var_22 = ((0 * ((~(arr_2 [i_1 - 4])))));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_15 [i_1] [i_1 - 4] [11] = min(((~((4095 << (4256 - 4245))))), var_8);

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_23 = var_11;
                        var_24 = (min((min(4256, ((((arr_6 [i_7]) >= (arr_4 [i_1])))))), 1));
                        var_25 = (max((arr_7 [i_5] [i_2]), (max(((var_3 ? (arr_7 [i_6] [i_2]) : 1)), ((max(var_13, var_7)))))));
                    }
                    for (int i_8 = 4; i_8 < 19;i_8 += 1)
                    {
                        var_26 = (arr_3 [i_6]);
                        var_27 = var_12;
                        var_28 = (((2727602020 <= (arr_2 [i_2]))) || var_8);
                        var_29 = ((((max((arr_2 [i_1 + 1]), ((4294967295 ? var_10 : (arr_5 [i_1] [i_1])))))) ? (max((((arr_1 [i_8 - 3]) / 1567365273)), ((max(var_11, var_6))))) : var_0));
                        var_30 = (arr_4 [i_5 - 1]);
                    }
                    var_31 &= ((1 ? -4096 : 1));
                }

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_25 [i_1] [16] [10] [10] = (arr_16 [i_1 - 1] [i_1 + 1] [i_1]);
                    var_32 = (min((((((var_8 / (arr_6 [i_1 - 3])))) ? ((min(var_0, -1891270974))) : (arr_16 [i_5 - 2] [i_1 - 1] [i_1 - 1]))), (((1536 - 1) ? (var_8 - 64000) : ((var_6 ? (arr_7 [17] [i_2]) : var_8))))));
                }
                var_33 = ((((-4095 ? var_1 : (arr_8 [i_1] [i_1] [i_1 + 4]))) * var_4));
                var_34 = (arr_2 [i_1]);
            }
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                var_35 = (((arr_16 [i_1 + 1] [i_1 - 2] [i_1 - 2]) < (arr_4 [i_1 - 2])));
                var_36 = (max(var_36, var_3));
                arr_33 [9] [9] [i_10] [i_11] &= (arr_26 [i_10] [11] [i_10 + 1]);
            }
            arr_34 [i_1] = (arr_20 [i_1] [i_1] [i_10 + 2] [i_10 - 1] [i_10] [i_10 + 2]);
            var_37 ^= (((arr_32 [i_10]) >= 4081));
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            var_38 = var_6;
            var_39 = ((-120 ? -2669180811501526822 : 1567365277));
        }
        var_40 = ((((((arr_29 [i_1] [i_1 + 4] [i_1 + 4] [i_1 - 4]) ? (arr_29 [i_1 + 2] [i_1 + 3] [i_1] [18]) : var_10))) ? ((((((arr_32 [1]) || (arr_32 [i_1 - 2]))) ? ((min((arr_10 [11] [i_1 + 3] [i_1 - 3] [18]), var_3))) : -53))) : (min((arr_27 [i_1 - 4]), 61279))));
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
    {
        var_41 = (min(((((!6395064413941640259) ? var_5 : (!var_1)))), (max((((2727602031 ? 206 : 4092))), (min(13719417088143331806, (arr_23 [i_13] [i_13] [18])))))));
        var_42 = (arr_10 [i_13] [16] [i_13] [i_13]);
        var_43 ^= (min((min(1, (arr_21 [i_13]))), ((min(var_3, var_13)))));
        arr_40 [i_13] = var_6;
    }
    for (int i_14 = 0; i_14 < 13;i_14 += 1) /* same iter space */
    {
        var_44 = (var_8 == 83);
        var_45 = var_10;
    }
    #pragma endscop
}

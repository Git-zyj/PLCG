/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = ((~((var_1 - (arr_2 [i_0])))));
        arr_3 [i_0] [i_0] = ((+(((arr_2 [i_0]) + var_12))));
        arr_4 [i_0] = (!3455255519);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, ((max((max(60446764, (9 && var_5))), ((((((36 ? var_7 : (arr_6 [i_1])))) && (arr_6 [i_1])))))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] [i_3] [i_4] [i_3] = (max((~49830), var_0));
                        var_16 += (((0 & -15520) + (((~88) ? (!var_5) : (3455255495 != var_12)))));
                        var_17 = (min(var_17, ((((var_13 <= var_8) < ((min((7190 && 1), var_0))))))));

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_16 [i_3] = ((~(((((-15523 ? var_2 : 64304))) ? -95 : (~var_11)))));
                            var_18 *= -76;
                            arr_17 [i_3] [4] [i_3] [i_3] [i_3] = (((((!(255 && var_8)))) >> (((((1214126536 + 3455255519) | (((min(var_11, (arr_7 [i_1] [i_1] [i_1]))))))) - 374414759))));
                        }
                        arr_18 [i_1] [i_1] |= ((((min(95, (var_13 < var_3)))) ? (var_2 > var_12) : ((((arr_1 [i_2 + 1] [i_4 - 3]) > 27)))));
                    }
                }
            }
        }

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            arr_21 [i_1] [i_6 - 2] = var_12;
            var_19 += var_7;
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            arr_26 [i_7] = var_2;
            arr_27 [i_7] [1] [i_7] = (min((((-(var_1 - 32768)))), (min(((min(var_2, (arr_20 [i_7] [i_7] [i_7])))), (arr_23 [i_8 + 1])))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_20 = var_0;
            var_21 = ((var_2 ? (~-63) : var_9));
        }
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_22 = (max(var_22, ((min(((((max(26056, 52476))) ? (!9) : ((3455255519 ? 839711776 : var_12)))), ((((!var_8) | ((max(254, 0)))))))))));
            var_23 *= -36;
            var_24 = (min(var_24, ((min((0 && 0), (!-125))))));
            /* LoopNest 3 */
            for (int i_11 = 3; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_38 [i_7] [i_7] [i_10] [i_7] [8] [6] [i_7] = ((!((min((arr_36 [i_13] [i_13] [i_13 - 1] [i_13 + 2] [i_10]), 249)))));
                            var_25 |= 809964878;
                            var_26 = ((~(((min(var_8, var_4))))));
                            arr_39 [i_7] [i_10] [i_10] [i_12] [i_13] = (~var_9);
                            var_27 = (max(var_27, ((((min(-99, 1)))))));
                        }
                    }
                }
            }
        }
        var_28 = ((((max(490, var_10))) ? ((1 ^ (arr_20 [i_7] [i_7] [i_7]))) : (((~9223372036854775807) ? var_7 : (arr_32 [i_7] [i_7] [i_7])))));
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 12;i_15 += 1)
        {
            {
                var_29 = (((arr_8 [i_14 - 1] [i_14 + 1] [i_14 - 1]) | (((arr_32 [i_14] [i_14 - 1] [i_15]) ? (~73) : var_2))));
                arr_47 [i_15] [7] [i_15] = ((var_2 | ((var_3 ? ((96 ? var_2 : 10851)) : ((var_5 ? (arr_1 [i_14] [i_14]) : var_3))))));
                var_30 ^= (max(((((((~(arr_10 [i_14])))) || (((22565 ? var_11 : var_11)))))), ((10851 ? -6644607762367910957 : (arr_43 [i_14 - 1] [i_14 - 1] [i_14 + 1])))));
            }
        }
    }
    #pragma endscop
}

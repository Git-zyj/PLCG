/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = ((((((arr_0 [i_0]) <= -1))) * var_2));
        arr_4 [i_0] = var_10;
        arr_5 [i_0] [i_0] = var_3;
    }
    var_13 = (~534221323);

    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1 - 1] = 6575;
        arr_9 [i_1] [i_1] = ((!((((arr_6 [i_1 + 1]) ? (arr_6 [i_1 - 1]) : (arr_6 [i_1 + 1]))))));
        var_14 -= (-((((arr_6 [i_1 - 1]) > (arr_6 [i_1 + 1])))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_15 -= ((((~((0 ? var_11 : var_3)))) ^ -var_8));
        var_16 = (((var_8 ^ -1101273011) - ((((arr_3 [i_2]) || (arr_3 [i_2]))))));
        var_17 ^= (var_8 - var_8);
        var_18 *= var_6;

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_19 = ((((((((arr_12 [i_2] [i_3] [i_2]) || 2279060663)) || (((~(arr_17 [1]))))))) | ((min((arr_0 [i_2]), (arr_0 [i_2]))))));
                        var_20 |= (max((!-114), ((8191 ? 6575 : 84))));
                    }
                }
            }
            arr_20 [i_2] [i_2] [i_2] = -5873555292778800252;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_21 = (max(var_21, (((0 ? 7 : 9101169556820719196)))));
            var_22 = 0;
            arr_23 [i_2] [i_2] = ((((((arr_14 [4] [i_6] [i_6]) / 100))) && var_5));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_33 [i_2] [i_2] [i_7] [i_8] [i_8] [i_9] [i_10] = ((~((max(var_3, (arr_10 [i_7]))))));
                            var_23 = ((~(((((2281170406 ? var_8 : 28115))) ? var_5 : (((var_10 == (arr_29 [i_10] [i_9]))))))));
                            var_24 = (min(var_24, (-5 - var_7)));
                            arr_34 [i_2] [i_2] [i_2] = (((~-126) ? 22 : 5873555292778800221));
                        }
                    }
                }
            }
            arr_35 [i_2] [i_7] = max(-22901, -8558980270289518707);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {
                        var_25 = (max(var_5, (((((~var_9) + 2147483647)) << (!3942838359473489586)))));
                        arr_41 [i_2] [i_7] [i_7] [i_7] [i_12] = (min(var_11, (min((-5873555292778800262 + -73), var_9))));
                        var_26 = 10208984480385079185;
                        var_27 = (arr_22 [i_2] [11]);
                        var_28 = (max(var_28, 1101273011));
                    }
                }
            }
            var_29 = (max(var_29, (!var_7)));
        }
    }
    var_30 += var_4;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 = ((((min((((var_13 / (-9223372036854775807 - 1)))), (arr_1 [2] [i_0])))) ? (arr_0 [i_0] [4]) : (arr_3 [i_0])));
        var_19 = (!-23833);
        var_20 = 17574356636758367329;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (arr_0 [i_1] [i_1]);
        var_21 -= ((!(((1 ? ((min(3829885122, var_10))) : (((arr_1 [i_1] [i_1]) ^ 23855)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 4; i_3 < 7;i_3 += 1)
        {
            var_22 = (((-109 <= (arr_5 [i_2]))));
            var_23 = (max(var_23, (((!(((-(arr_3 [i_2])))))))));
        }
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                arr_18 [i_4] = (!9223372036854775807);
                var_24 = (arr_10 [i_4 + 1]);
            }
            for (int i_6 = 1; i_6 < 8;i_6 += 1)
            {
                var_25 |= (arr_17 [i_2] [i_4] [i_6 + 2] [i_6]);
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        {
                            arr_28 [i_2] [i_4 + 1] [i_2] [i_4] = ((((3584 ? (arr_14 [2] [2] [i_4]) : (arr_11 [2]))) < 23826));
                            var_26 = (max(var_26, var_12));
                            var_27 = ((!(((23824 ? var_11 : var_4)))));
                            arr_29 [i_2] [i_2] [7] [i_2] [i_2] [i_4] = ((((arr_3 [i_6]) ? -9223372036854775807 : 23838)));
                            var_28 = (((((((arr_5 [i_4]) != var_15)))) ^ 1479214976));
                        }
                    }
                }
            }
            arr_30 [i_4] [i_4] [8] = var_3;
        }
        var_29 = ((-(arr_8 [i_2] [i_2])));
        var_30 = (((~var_8) - (arr_23 [1] [i_2])));
        var_31 += (arr_2 [i_2] [i_2]);
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_32 = (arr_2 [i_9] [i_9]);
        var_33 = 2457638308727504004;
    }
    var_34 = 65533;
    var_35 = -491455085953455050;
    #pragma endscop
}

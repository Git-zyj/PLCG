/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((959680966942505328 ? 17487063106767046288 : 3968)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((((((arr_0 [i_0] [3]) ? -3969 : -17487063106767046287)) > ((4294967287 ? (max((arr_1 [8]), -7555512417050910658)) : ((((var_8 + 2147483647) >> (var_0 - 764300422)))))))))));
        var_18 += 17487063106767046299;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = (~3968);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    var_19 = (min(var_19, var_13));
                    var_20 = var_9;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_21 += -25865;
        arr_13 [6] = (((~var_15) > 5995799845094900700));

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_22 = ((3956 | (min((arr_11 [i_4]), (arr_15 [i_5] [i_4] [i_5])))));
            arr_16 [i_4] [i_5] = (max((((17487063106767046287 ? var_8 : 0))), (var_5 == var_6)));
            var_23 = (min(var_23, var_15));
            var_24 = (((arr_15 [i_5] [i_5] [9]) ? var_12 : ((((arr_12 [i_4] [i_4]) ^ (arr_12 [i_4] [i_5]))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_19 [i_4] [i_4] [i_4] = (((arr_12 [i_4] [i_6]) - (arr_15 [i_6] [i_6] [i_6])));

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_25 &= (((arr_14 [i_8] [i_8]) >= (arr_14 [i_8] [8])));
                    var_26 = 46399;
                    arr_24 [i_4] [i_6] [1] [i_8] [i_4] [i_7] = (~-1);
                }
                var_27 = (((19136 | -5864) ? -7555512417050910658 : (arr_15 [i_7] [i_6] [i_7])));
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_28 = var_5;
                    var_29 = (max(var_7, (((max(205, (arr_12 [i_10 - 1] [i_10])))))));
                }
            }
        }
        var_30 = ((((3355292515425810267 ? 1 : 2176443729)) <= ((((((var_11 ? var_12 : var_1))) ? ((((arr_31 [1] [7] [i_9]) && var_14))) : var_7)))));
    }
    #pragma endscop
}

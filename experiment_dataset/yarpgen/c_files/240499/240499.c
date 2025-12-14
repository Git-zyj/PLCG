/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 ^= (arr_3 [i_0] [i_0]);
        var_17 = (max(var_17, (arr_2 [i_0] [i_0])));
        var_18 -= var_4;
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = ((((max((((arr_4 [i_1]) ? 2179613896308727230 : var_7)), (((var_11 > (arr_5 [i_1] [i_1]))))))) ? 3249041941 : (~var_11)));
        arr_7 [i_1] = (((min((((arr_5 [i_1] [i_1]) ? -1529330230 : (arr_5 [i_1] [i_1]))), (arr_5 [i_1] [i_1]))) / var_15));
        var_19 = (max((arr_5 [i_1] [i_1]), (((var_3 ? var_9 : var_13)))));
        var_20 *= 1045925345;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_21 = ((min(6390520847367016232, 15906139012310581461)));
        arr_12 [i_2] [i_2] = (((max(var_12, (arr_1 [i_2])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_22 = (((arr_8 [i_3]) ? 9392570535331987554 : ((((arr_10 [i_3]) ? var_4 : var_9)))));
        var_23 = ((32766 ? (arr_1 [i_3]) : (arr_5 [i_3] [i_3])));
        var_24 = (arr_10 [i_3]);
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_18 [i_4] = (min((max((arr_10 [i_4]), (arr_5 [i_4] [i_4]))), var_14));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_25 = (min(var_9, (min(1062729536065285391, (max(1469127658, 16440121587062583031))))));
                        arr_27 [i_5] [i_5] [i_6] [i_7] [i_5] [i_6] = var_6;
                        arr_28 [i_4] [i_6] [i_4] [i_4] = ((((min((arr_20 [i_5] [i_6] [i_7]), var_8))) ? 29160 : ((((((arr_26 [i_4] [i_4] [i_4] [i_4]) / var_7))) ? var_6 : ((max((arr_4 [i_7]), var_5)))))));
                        arr_29 [i_4] [i_6] = (arr_5 [i_6 + 3] [i_6 + 2]);
                        arr_30 [i_6] = max((arr_17 [i_4]), (arr_20 [i_4] [i_6 + 2] [i_4]));
                    }
                }
            }
        }
        arr_31 [i_4] [i_4] = var_0;
    }
    var_26 = var_4;
    var_27 = var_10;
    #pragma endscop
}

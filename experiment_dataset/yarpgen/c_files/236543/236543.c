/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = -4294967295;
        var_19 = (4294967291 >= var_0);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_20 = (((((arr_3 [i_0] [i_0 - 1] [i_0 + 1]) ? 13 : var_0)) - (arr_3 [i_1] [i_1] [i_3])));

                        for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
                        {
                            var_21 = var_4;
                            var_22 = ((((min(0, (arr_8 [i_2 + 2] [i_2 + 1] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 2] [i_4])))) ? (((((max((arr_8 [i_0 - 2] [i_1] [7] [i_3] [i_3] [i_4] [7]), var_4))) ? ((4294967286 ? (arr_9 [i_0] [9]) : 4294967278)) : (arr_5 [i_0] [i_2] [i_0] [i_0])))) : ((34508 ? var_6 : ((var_8 ? -123 : -9204777421746113407))))));
                            var_23 &= ((((max(var_8, var_0))) ? ((var_11 ? (arr_7 [i_0 - 1] [i_0 - 2] [i_2 + 1] [i_2 + 1] [i_4 + 1]) : var_10)) : ((((((12 ? var_15 : var_12)) == (arr_7 [i_0 - 2] [i_1] [i_2] [i_3] [13])))))));
                            var_24 = 110;
                            var_25 = var_14;
                        }
                        for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_26 = (((((var_13 ? var_11 : (arr_8 [17] [14] [8] [i_3] [i_3] [16] [16]))) & ((((arr_6 [i_3] [i_3] [i_0]) ? var_16 : 75))))));
                            var_27 = (arr_0 [i_1] [i_3]);
                        }
                        arr_14 [i_1] [i_3] [i_1] [i_1] = (var_11 + 109);
                        var_28 *= ((var_15 ? (min((arr_9 [i_0 + 1] [i_2 + 3]), var_10)) : 0));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_29 = (min(-9, 4294967295));
        arr_17 [18] [i_6] = ((!(arr_2 [i_6] [i_6])));
        var_30 = ((((((arr_15 [i_6] [i_6]) ? var_8 : (min(23, (arr_7 [i_6] [i_6] [19] [i_6] [i_6])))))) ? var_16 : 5789495718417782260));
    }

    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {
        var_31 = ((~(max(-8548030235298955401, ((min(8, 4294967295)))))));
        var_32 = (((var_13 ? var_5 : var_10)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        arr_22 [i_8] [i_8] = (~4294967295);
        arr_23 [6] [i_8] = var_8;
        arr_24 [7] = (((~var_5) ? (((~(arr_15 [i_8] [i_8])))) : ((-5789495718417782255 ? (arr_8 [i_8] [i_8] [i_8] [i_8] [i_8] [6] [i_8]) : var_13))));
    }
    var_33 = max(var_7, (((var_11 ? var_16 : var_0))));
    #pragma endscop
}

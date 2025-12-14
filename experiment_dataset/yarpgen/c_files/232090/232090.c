/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((~(max(((3058689718 ? var_11 : var_12)), (!3469)))));
    var_17 = (((((var_9 ? (var_10 >= 172) : var_5))) ? var_7 : (max(((var_0 ? var_1 : var_11)), var_0))));
    var_18 *= ((+((((var_11 > var_11) > ((var_9 ? 18446744073709551615 : var_2)))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 = (((((((max(243, 59))) ? ((max(var_14, -874031478))) : (arr_2 [i_0])))) ? ((max((arr_0 [i_0 + 1] [i_0 + 1]), var_13))) : ((-103 ? 196 : -var_8))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_20 = ((((((~var_4) ? ((max(-2332698, (arr_0 [i_0] [i_0])))) : (var_3 | var_5)))) ? (max((((arr_4 [i_0] [i_0]) / var_1)), 4294967295)) : ((((arr_1 [i_1]) ? (((arr_1 [i_0]) ? var_4 : var_1)) : ((var_7 ? var_7 : var_7)))))));
            var_21 = (max((arr_4 [i_0] [i_0]), (~3751532521716940981)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_22 = ((-(arr_2 [i_0])));

            for (int i_3 = 4; i_3 < 15;i_3 += 1)
            {
                var_23 &= (-80 / var_13);
                var_24 = var_14;
                arr_11 [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0 - 1] [i_3 - 4]);
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_25 = ((var_12 ? var_15 : (arr_4 [i_0 + 1] [i_0])));
                var_26 = ((var_12 ? 2659066846 : 17));
            }
            arr_14 [i_0] [i_0] [i_0] = (((arr_9 [i_0 - 1] [i_0 - 1]) ? var_2 : (var_8 / var_8)));
            var_27 = (((arr_5 [i_0 - 1] [i_2]) ? var_14 : var_6));
            arr_15 [i_0] = (0 == var_6);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_19 [i_0] [i_0] [i_0] = var_5;
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_25 [i_0] [i_0] = var_7;
                        var_28 *= ((~(arr_0 [i_0] [i_5])));
                        arr_26 [i_0] [i_5] [2] [i_0] [i_0] = (arr_4 [1] [i_0]);
                    }
                }
            }
        }
        var_29 = (max((max(var_2, ((var_1 ? var_8 : (arr_13 [i_0] [i_0] [i_0]))))), 196));
        var_30 = min((((arr_7 [i_0]) ? var_15 : (arr_7 [i_0]))), 1);
        var_31 ^= var_11;
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_32 = (min(var_32, (((((max((arr_1 [i_8]), (arr_1 [i_8])))) ? (!var_10) : (((!(arr_23 [i_8] [i_8] [i_8] [i_8])))))))));
        arr_29 [i_8] = ((~((var_6 ? (arr_21 [i_8] [i_8] [i_8]) : (arr_21 [i_8] [i_8] [i_8])))));
        var_33 -= (max((var_7 / var_2), var_10));
    }
    var_34 *= (((((var_12 ? (var_15 == var_4) : ((max(54, 33)))))) ? (max(-211, 4294967278)) : (max(((min(var_2, var_12))), (var_4 + 524256)))));
    #pragma endscop
}

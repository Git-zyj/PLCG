/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    {
                        var_12 |= 20;
                        arr_13 [i_0] [i_1] [0] |= (((arr_2 [i_1] [i_2]) + ((((min(var_8, 3323144971880425709))) ? (((arr_6 [i_0] [i_1]) & (arr_2 [i_0] [i_1]))) : (arr_8 [i_3 - 1] [i_3 - 1] [i_3 - 1])))));
                        var_13 = (max(var_13, ((max((arr_10 [i_0] [i_0] [i_0] [19]), (((arr_10 [i_2] [i_2] [i_1] [5]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : 181)))))));
                    }
                }
            }
        }
        arr_14 [i_0] = ((var_5 ? 20 : (((arr_12 [i_0]) ? (!0) : (arr_5 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        var_14 = (max(var_14, (arr_10 [i_4 - 1] [i_4 - 3] [i_4] [i_4])));
        var_15 = (min(var_15, 15123599101829125907));
        arr_17 [i_4 - 4] |= (arr_1 [i_4 - 1]);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_16 = (min(var_16, (((3323144971880425709 ^ ((((1022740341 < (~-5991939961938536902))))))))));

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            var_17 = (((1024 ? 8945441202260654807 : (arr_6 [i_5] [i_5]))) <= (max((arr_8 [i_5] [i_5] [i_5]), (((arr_10 [i_5] [i_5] [i_5] [i_5]) ? var_8 : var_2)))));
            var_18 |= (min((arr_0 [i_5]), ((-32 ? 93 : (arr_3 [i_6])))));
            var_19 = 7;
            arr_24 [i_5] [i_5] |= 2128247826595321059;
            var_20 = ((+(((~0) ? (((arr_10 [i_5] [i_6] [i_6] [i_6]) - (arr_6 [i_5] [i_5]))) : (arr_23 [i_5] [i_5] [i_5])))));
        }
        for (int i_7 = 1; i_7 < 16;i_7 += 1)
        {
            arr_28 [i_7] = ((20 ? (arr_8 [i_5] [i_5] [i_7 + 1]) : 0));
            arr_29 [i_5] [i_5] [i_5] |= (((32 < 0) ? (((((-2031395853 || -2132150330) || ((max((arr_27 [i_5]), var_0))))))) : 262143));
            var_21 = ((((min(((((arr_19 [i_7]) > var_4))), var_8))) ? ((var_3 % (((((arr_9 [i_7] [i_7] [i_7] [i_5] [i_5]) >= (arr_18 [4]))))))) : ((((arr_2 [i_7] [i_7]) ? ((((arr_6 [19] [i_7]) <= 1))) : 950739822)))));
            var_22 = (max(var_22, ((((((!(((16607223597863528952 ? -1024 : (arr_9 [i_5] [4] [4] [i_5] [i_5]))))))) * ((21988 ? (!93) : (((arr_9 [i_5] [i_5] [i_5] [i_5] [i_5]) / 69)))))))));
        }
        var_23 |= (!27761);
        var_24 |= (~1365182769);
    }
    var_25 = (max(var_25, (((~(-284322068 != -7352))))));
    #pragma endscop
}

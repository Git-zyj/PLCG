/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((((arr_1 [i_0 - 1] [i_0 - 1]) * (((arr_1 [8] [i_0 - 1]) ? (arr_1 [14] [i_0 - 1]) : 4294967283)))))));
        var_13 = (min(((((arr_0 [i_0 - 1]) - (arr_0 [i_0 - 1])))), ((((9223372036854775808 ? 2859536883137319666 : -2859536883137319699)) >> ((((arr_0 [i_0]) <= var_4)))))));
        var_14 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (~237)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = ((((max((arr_3 [i_0 - 1] [i_0 - 1]), (arr_4 [i_3])))) ? (((65472 ? (arr_3 [i_0 - 1] [i_3]) : (arr_4 [i_1])))) : ((1300934905 / (arr_3 [i_0 - 1] [1])))));
                                arr_17 [i_4] [i_4] &= 191;
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2] [20] = (((((!((min(var_10, (arr_11 [i_1] [1] [i_1] [i_1]))))))) & ((~((((arr_15 [i_4] [i_1] [i_2] [i_3] [i_1]) || 3)))))));
                            }
                        }
                    }
                    arr_19 [1] [1] [8] &= 1366890362;
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (!6770999655808909398)));
        var_18 = (((((min(-32741, (arr_0 [i_5 - 1]))))) < ((-2752099873856794325 ? 2752099873856794335 : 247))));

        /* vectorizable */
        for (int i_6 = 4; i_6 < 20;i_6 += 1) /* same iter space */
        {
            arr_24 [i_5] = var_9;
            arr_25 [i_5] = (1 / 1300934900);
            var_19 = (min(var_19, (((((((arr_14 [9] [i_5] [i_6 + 1] [1] [i_6] [1]) / var_3))) == (((arr_22 [i_5] [3] [3]) ? var_8 : var_7)))))));
        }
        for (int i_7 = 4; i_7 < 20;i_7 += 1) /* same iter space */
        {
            var_20 = (min(2994032395, (235 > 1)));
            arr_28 [19] = (((((1 ? 2859536883137319688 : -8348))) ? ((min((min((arr_16 [i_7]), 2095104)), var_6))) : ((2859536883137319644 ? (min((arr_8 [i_5] [i_5] [i_7 - 4]), 536346624)) : (!-29)))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    {
                        var_21 = (((-16076 - -2859536883137319686) >> ((((-60 ? var_10 : 35)) + 1409508885))));
                        arr_34 [i_5] [i_7 - 4] [i_8] [i_9] = 29656;
                        var_22 &= 8619095048701747049;
                        var_23 = (max(1, (arr_11 [5] [i_7] [i_7] [8])));
                    }
                }
            }
            var_24 = (max(var_24, ((max(((((arr_0 [i_7]) || ((((arr_31 [i_5] [i_5 - 1] [i_5 - 1]) ? var_5 : var_7)))))), (max(((min(20918, 1300934883))), ((52 ? 16744448 : (arr_8 [i_7] [2] [9]))))))))));
        }
    }
    var_25 = (-2859536883137319693 / 8104073280153125046);
    #pragma endscop
}

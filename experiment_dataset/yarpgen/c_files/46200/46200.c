/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = var_8;

                            for (int i_4 = 2; i_4 < 24;i_4 += 1)
                            {
                                var_14 = (min((((49884 * (arr_9 [i_1] [i_3 - 1] [i_3 + 1] [i_4 - 1] [i_4])))), (min(-116, 6618197942276231088))));
                                arr_12 [i_4] [i_4] [i_2] [i_4] [i_0] = -var_11;
                                var_15 = (((~-519743407) > (((!-3476) >> (arr_3 [i_2])))));
                            }
                            for (int i_5 = 2; i_5 < 23;i_5 += 1)
                            {
                                var_16 = (((((arr_1 [i_1] [21]) ? (arr_7 [i_3] [i_3] [i_3 - 3] [11]) : (((min((arr_5 [i_5 + 1] [i_2] [1]), (arr_6 [i_1] [5])))))))));
                                arr_15 [i_5 - 2] [i_3] [i_2] [14] [i_0] = (-3476 != 3471);
                                arr_16 [i_0] [7] [i_2] [7] [i_5] [i_5] = (max((max((min(var_1, var_2)), (-420666734060267504 + var_8))), -var_10));
                                var_17 = (+-62115);
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                var_18 = ((var_0 ? -316367109 : (((108 ? var_9 : var_8)))));
                                arr_21 [i_0] [16] [i_6] = ((~(((((52 ? 0 : (arr_9 [i_0] [i_3] [i_2] [20] [i_0])))) ? (min(17592186044415, (arr_2 [i_0] [4]))) : (((~(arr_13 [i_0] [i_1] [13]))))))));
                                arr_22 [i_0] [i_0] [i_3] [13] = (((((min(var_4, 2100450065)))) ? (arr_7 [1] [i_2] [i_3] [i_6]) : (arr_11 [i_2] [i_2] [i_3])));
                                var_19 = (arr_5 [i_3 - 4] [i_3 - 3] [i_3 + 1]);
                            }
                        }
                    }
                }
                var_20 = (max(((~(arr_7 [i_0] [i_0] [1] [i_0]))), (arr_13 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_21 = ((((((max(var_1, 143523583))) / var_3)) * -316367109));

    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_22 = ((((((((0 ? 2147483647 : 246))) ? (max(var_8, 1073741696)) : (arr_8 [i_7] [i_7] [i_7] [i_7] [i_7])))) ? ((((max((arr_14 [i_7] [i_7] [i_7] [21] [i_7] [i_7] [i_7]), (arr_5 [i_7] [i_7] [i_7])))) ? var_11 : ((max((arr_2 [i_7] [i_7]), -1))))) : var_11));
        var_23 = (max(var_23, (((((((arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) + (((-5 ? 63 : (arr_7 [i_7] [i_7] [8] [i_7]))))))) ? (~15293088770150019502) : var_4)))));
    }
    for (int i_8 = 1; i_8 < 16;i_8 += 1)
    {
        var_24 = (arr_2 [22] [i_8 + 1]);
        var_25 = (max((min((~var_0), var_1)), (arr_18 [13] [i_8] [i_8 + 1] [i_8] [i_8])));
        arr_28 [i_8] [i_8 - 1] = (((((+(min((arr_17 [i_8] [18] [i_8] [i_8]), var_4))))) ? (min(7442518752562158401, (arr_23 [i_8]))) : (((~((-(arr_13 [i_8] [i_8] [i_8]))))))));
        var_26 |= 107;
    }
    for (int i_9 = 3; i_9 < 13;i_9 += 1)
    {
        arr_31 [i_9] [i_9 + 1] = var_8;
        arr_32 [i_9] [i_9] = (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9 + 2] [i_9] [i_9]);

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_27 = (min(((min(var_7, 0))), (~902965332)));
            var_28 = (min(var_28, (((-17870283321406128128 ? (arr_8 [i_9] [i_9] [i_9 + 1] [i_9] [i_10]) : (arr_10 [i_9] [24]))))));
            arr_36 [i_10] [i_10] [i_9 + 3] = (min((((-2561362392 + (arr_35 [i_9 - 2])))), (((max((arr_23 [i_10]), (arr_25 [i_9]))) - (arr_7 [i_9] [i_10] [6] [i_10])))));
        }
    }
    var_29 = var_12;
    #pragma endscop
}

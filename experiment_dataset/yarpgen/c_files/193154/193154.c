/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = var_7;
                arr_5 [i_0] [i_1] = (var_4 < 13733521934936870120);
                var_15 = (min((var_7 != var_9), ((((min((arr_1 [15] [i_1]), (arr_1 [i_0 - 1] [i_0])))) ? var_4 : (~var_13)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_4] [i_4] = var_7;
                    var_16 *= (min(((~(arr_10 [i_2] [i_2] [i_2]))), -19733));
                }
            }
        }
    }
    var_17 = ((var_13 + (((((24545 / var_0) < (min(16948871599483466669, -9128779690059824368))))))));
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_19 = var_6;
                arr_21 [i_5] [14] [i_5] = ((arr_14 [i_5] [i_5 + 1] [14] [i_5]) >= (~var_4));
                var_20 = (~9128779690059824367);

                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    arr_25 [i_6] [i_5] = min((arr_24 [i_5] [i_6] [i_5]), (((~(~var_7)))));
                    var_21 = -var_9;
                    var_22 *= ((~((((arr_6 [i_7] [i_7]) < (((var_4 ? (arr_3 [i_7]) : var_4))))))));
                    var_23 ^= ((-(((((arr_23 [i_5] [i_5] [i_7] [i_6]) || var_5)) ? 1 : 4294967295))));
                }
                for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_24 = ((((~(~var_3)))) < (max(2901439856649053526, 9128779690059824367)));
                        var_25 = (+-2016997654);
                        var_26 = var_11;
                    }
                    for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        var_27 = (max((max((arr_22 [i_5 + 1]), 16948871599483466669)), 2901439856649053526));
                        var_28 = (min(var_28, 8857886277485024194));
                        var_29 = (min(var_29, var_12));
                        arr_33 [i_5] [i_5] = ((var_5 ? ((((!(((var_11 ? -2016997626 : var_0))))))) : (arr_27 [i_5] [i_6])));
                    }
                    var_30 = (((~var_4) || ((!(arr_30 [7] [i_5 - 1] [7] [i_8 + 1] [i_5])))));
                }
                for (int i_11 = 2; i_11 < 17;i_11 += 1) /* same iter space */
                {
                    var_31 = ((8821402855959312272 ? (min((arr_23 [i_11] [i_5 + 1] [i_11 - 1] [16]), (arr_23 [i_5 - 1] [i_5 + 1] [i_11 - 1] [i_11]))) : (((((arr_24 [i_5] [i_5 + 1] [i_5]) < var_11))))));
                    arr_36 [i_5] [10] [i_11 + 1] = (max(13535088077645455886, (max((arr_14 [16] [i_11] [16] [i_11 - 2]), 13535088077645455860))));
                    var_32 ^= ((-(((11258173825890949354 >= ((var_7 ? 1233920212 : (arr_8 [i_11]))))))));
                }
            }
        }
    }
    #pragma endscop
}

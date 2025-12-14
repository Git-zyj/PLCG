/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 + (((21 + 4130873112) - 7260504922434132492))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (((86 ? -84 : -3187983745190409929)))));
                            var_15 |= ((((min((arr_5 [i_0 - 3]), 115))) ? (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1]))) : 1));
                            arr_11 [i_3] [i_3] [i_0] [i_1] [i_0 - 1] = (min((arr_1 [i_0]), (arr_5 [i_0 + 3])));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_16 *= ((1 ? 1206786223914521231 : 1));
                            var_17 = (((((~255) != var_12)) ? -7864061408757999177 : (((1 ? -84 : 84)))));
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] = (max((((arr_16 [i_0] [i_1] [i_0 + 2] [i_0 + 2] [i_6]) ? (arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_6]) : ((-72 ? -29986 : 542416519)))), -84));
                            var_18 = 3752550791;
                            arr_21 [i_0] [i_1] [i_0] [i_5] [i_1] = 5485735448223993256;
                        }
                        var_19 = ((((min((min((arr_14 [i_0] [i_0] [i_4] [i_5] [i_1]), 1)), (arr_15 [i_0])))) ? ((((-86 ? 0 : (arr_2 [i_4 - 1] [i_5]))) % (84 | 1))) : (((0 > (((arr_12 [i_0] [i_1]) ? 117 : (arr_7 [i_5] [i_4] [i_1] [i_0]))))))));
                        var_20 += ((var_12 ? (-3456534465 + -8695) : (((arr_3 [i_4] [i_5]) ? (~-84) : (arr_13 [i_1])))));
                        var_21 = (max(var_21, (arr_16 [i_0] [i_0] [i_4] [i_5] [i_4])));
                    }
                    var_22 = (max((((((-72 ? 1 : 838432827))) ? (arr_12 [i_0] [i_4 + 2]) : (arr_3 [i_0 - 2] [i_4 + 2]))), ((((arr_15 [i_0]) ? (arr_15 [i_0]) : (arr_15 [i_0]))))));
                    var_23 = var_8;

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_24 = ((!(((min(1, (arr_13 [i_0]))) > (arr_8 [i_7])))));
                        var_25 = 218;
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_26 += (min((arr_15 [i_1]), (((arr_16 [i_0] [i_1] [i_4] [i_8] [i_4 + 1]) ? (arr_15 [i_1]) : 1))));
                        arr_26 [i_0] [i_0] [i_4] [i_8] = ((155538873211054922 != (arr_13 [i_0 + 3])));
                        var_27 += ((1 ? 67108863 : 1));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_28 = 0;
                            arr_29 [i_0] [i_8] [i_4] [i_1] [i_0] = ((90 ? (((((arr_24 [i_0] [1] [i_0] [i_8] [i_0]) > 3456534465)))) : ((((max((arr_28 [i_0 + 2] [i_0] [i_4] [15] [i_0 + 2] [i_9] [i_9]), var_8))) / (542416519 != var_9)))));
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_29 = (min(var_29, ((((((max((arr_10 [i_0] [i_0 + 3]), (arr_10 [i_0] [i_0 + 3]))))) * 3228241888093518336)))));
                    var_30 -= ((((((arr_15 [i_1]) * (arr_15 [i_1])))) ? (((arr_15 [i_1]) ? 113 : var_8)) : (arr_15 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}

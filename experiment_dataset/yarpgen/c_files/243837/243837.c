/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 - 2] [i_0] [1] &= (arr_2 [23]);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_14 = (arr_10 [i_4 - 1] [i_0] [i_2] [i_0]);
                            var_15 = (min((((arr_11 [12] [12]) ? 132 : (max(var_0, var_9)))), (((8164753743750003274 > (!var_6))))));
                            var_16 = (i_2 % 2 == 0) ? (((((((((arr_8 [i_0] [i_0] [i_1 + 1] [i_3] [i_4] [i_2]) >> (((arr_9 [i_0] [i_1 - 1] [i_2] [i_2]) - 12803)))) | 3310))) ? ((((arr_5 [i_1 - 2] [i_4 - 1]) ? 46311 : ((max(var_9, var_10)))))) : var_4))) : (((((((((arr_8 [i_0] [i_0] [i_1 + 1] [i_3] [i_4] [i_2]) >> (((((arr_9 [i_0] [i_1 - 1] [i_2] [i_2]) - 12803)) + 38251)))) | 3310))) ? ((((arr_5 [i_1 - 2] [i_4 - 1]) ? 46311 : ((max(var_9, var_10)))))) : var_4)));
                            arr_14 [i_0] [i_2] = (((((min(3310, -723943568)))) + (((((127 ? var_9 : var_6))) ? ((var_6 ? var_3 : 3310)) : ((var_10 ? (arr_9 [i_0] [i_0] [i_2] [i_0]) : 3310))))));
                            var_17 = var_5;
                        }
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [10] = (min((14639641607467865645 | 8591424587741889972), ((max(var_11, (arr_11 [i_1] [i_1 - 3]))))));
                            var_18 = (((max(var_1, 20847))));
                            arr_20 [i_2] [i_3] [i_2] [i_2] [6] [i_2] = (max((((5189380242542509306 >> (var_5 + 1157795077)))), ((-(max(var_6, 7584747028079537628))))));
                            var_19 = ((~(((((-(arr_9 [9] [i_2] [i_2] [9])))) ? (arr_17 [i_0] [i_1] [i_2]) : ((min((arr_8 [18] [i_0] [i_2] [1] [i_2] [i_2]), (arr_4 [1]))))))));
                        }
                        arr_21 [i_0] [i_0] [i_2] [i_2] [15] = (var_12 ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_1]));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 -= (((var_6 + -3311) + (var_8 / var_7)));
                                var_21 ^= (((((~((-7474779511422542246 ? var_10 : (arr_22 [i_1 - 2] [i_1])))))) ? (min((arr_5 [i_1 - 3] [i_6 - 2]), 6)) : ((((((~44679) + 2147483647)) >> (((~var_8) + 51871)))))));
                                arr_28 [i_0] [i_6] [i_6] [i_6] [i_7] |= (max(((((max(var_6, 138))) ? (arr_25 [i_0]) : (417157618 > 7168))), (((min(6898482052114084592, (arr_17 [i_2] [i_6] [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (~var_10);
    var_23 = 58367;
    #pragma endscop
}

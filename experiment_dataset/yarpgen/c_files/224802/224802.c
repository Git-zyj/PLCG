/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((min(0, 27936))) / (var_3 != 16356469704225763549)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = -var_5;
                                var_15 = var_2;
                            }
                        }
                    }
                    arr_13 [i_2] = 1;
                    arr_14 [i_2] [i_1] [i_0] [i_0] = ((var_5 == ((-1042420186 ? 32853 : var_7))));
                    var_16 -= ((1282990155 ? (arr_2 [i_0]) : (arr_2 [i_0])));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    var_17 = ((62020 >= (((arr_6 [i_0] [i_0] [i_5]) ? 32768 : -125))));
                    var_18 -= (((arr_3 [i_5 + 1]) >= var_4));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    arr_19 [i_0] [i_1] [15] [i_6] = 2599417334;
                    arr_20 [i_0] [14] [i_1] [i_6] = (arr_12 [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_1]);
                    var_19 = (65535 % 15);
                }
                var_20 -= (min((max((arr_9 [i_0]), var_9)), (arr_18 [i_0])));
                arr_21 [i_1] = ((var_12 > ((((arr_7 [i_0] [i_1] [i_1] [i_1]) > (65519 / var_1))))));
            }
        }
    }
    var_21 = 3813397202;
    var_22 = (max(var_12, (min(((min(19204, 9223372036854775807))), (min(873853177567196832, var_5))))));
    var_23 = (!(var_0 + var_11));
    #pragma endscop
}

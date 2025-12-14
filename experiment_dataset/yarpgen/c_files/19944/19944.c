/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (min(var_2, (((-32747 ^ 90) + (var_4 * var_9)))));
    var_11 = var_3;
    var_12 = (((!var_6) || -22586));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] |= ((((((arr_3 [i_0] [i_1] [i_1]) ? (arr_0 [i_0] [i_1]) : 8))) ? (((32746 ? var_7 : var_7))) : ((((min(-17875, 5836637616487564184))) ? var_5 : (arr_3 [i_1] [i_0] [i_0])))));
                var_13 = (min(var_13, (((~((-8192 ? -32726 : -30894)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            {
                var_14 &= ((((max((arr_6 [i_3 + 1] [i_3 - 1]), -26578))) != (arr_5 [i_2])));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_15 = (min(((((arr_10 [i_2] [i_3 - 2] [i_4] [i_3 - 2]) <= (39 <= var_6)))), (min(1, (arr_8 [i_4] [i_3 - 1])))));
                    var_16 = ((((((arr_8 [i_2] [i_3 + 1]) - 1))) ? (arr_7 [i_2] [i_3 + 1]) : ((((arr_8 [i_3] [i_3 + 1]) < 600739432)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_6] [i_4] [i_5] = (((!1) + ((max(-52, (arr_14 [i_2 + 1] [i_3] [i_3] [1] [i_6]))))));
                                var_17 = ((~((-(arr_15 [i_5] [i_3 + 1] [i_4])))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_18 = ((((max((0 || 47), (arr_14 [i_2 + 1] [i_3] [i_7] [i_2] [i_3 - 2])))) ? var_7 : ((((max((arr_7 [i_2 - 1] [i_2 - 1]), var_5))) ? (min(5, (arr_7 [i_3] [i_7]))) : (((max(1, var_7))))))));
                    arr_22 [i_2] [i_3] [1] [i_2 + 1] = (~8658726921535382292);
                }
                arr_23 [i_3] = ((-10786 ? (((!-52) ? 1 : (min(4294967277, -30897)))) : ((-13155 ? (arr_8 [i_2 - 1] [i_3 + 1]) : var_9))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 *= (((min((~28515), 2251799813684224)) * ((((((18444492273895867394 ? 18444492273895867401 : var_17))) ? (0 && 27304) : (var_6 || var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = (min(((((max(17993, 14)) - ((((arr_4 [i_1] [i_0]) ? var_5 : var_4)))))), (min(15787148465848232315, (~-404306204)))));
                arr_6 [i_0] [i_1 + 1] = ((!(((2251799813684214 ? (arr_3 [i_1 + 1] [i_1]) : 0)))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_2] [i_0] [i_0] [i_0 + 1] = arr_1 [8];
                                var_21 ^= (max((((var_9 == (arr_11 [i_2 - 1] [i_0 + 1] [i_3] [0] [2] [i_3 + 1])))), (arr_11 [i_4 - 1] [6] [i_4 + 2] [i_2 - 2] [6] [i_1 + 1])));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_20 [i_0] [i_1 - 2] [i_5] [13] = -var_10;
                    arr_21 [1] = (min((((-(arr_19 [1] [i_1] [i_5])))), ((-(min(-27323, (arr_0 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_26 [i_6] [6] = ((54070350 < (-2147483647 - 1)));
                                arr_27 [i_6] [i_1 + 1] = (arr_24 [i_0 + 1] [i_1] [i_5] [i_6] [i_6]);
                            }
                        }
                    }
                    arr_28 [i_0] [i_1 + 1] [i_5] [i_5] = (max(1125898833100800, 2251799813684226));
                }
            }
        }
    }
    var_22 = ((var_7 ? (max((2251799813684224 > var_9), (~var_10))) : var_5));
    #pragma endscop
}

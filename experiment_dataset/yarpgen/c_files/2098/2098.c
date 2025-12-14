/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -43592;
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_3] |= (min((arr_3 [i_2] [i_3]), 43589));
                        var_15 -= (max((((-6 & -1193602745) ^ (arr_0 [i_3]))), (min((max(var_0, 1739312628)), (arr_8 [i_3] [i_1 + 1] [i_1] [i_1 + 1])))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_16 = -6;
                        var_17 = -21965;
                    }
                    var_18 = (max((((arr_11 [i_1] [i_1] [i_1 + 3] [i_1 + 2] [i_1 - 1]) ? (arr_11 [i_0] [i_1] [i_1 + 2] [17] [i_1 - 1]) : -10996)), ((((arr_1 [i_2]) || (arr_8 [i_0] [i_0] [i_1] [i_2]))))));
                    var_19 = (max(var_19, (21947 & 7)));
                    var_20 = ((((max(((-1728525222 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [3]) : (arr_5 [i_0] [i_0] [i_1 + 3] [i_2]))), (((arr_1 [i_0]) * -116))))) / ((max(43592, (arr_13 [i_0] [17]))))));
                }
            }
        }
    }
    var_21 = var_9;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            {
                var_22 = (arr_15 [i_6]);
                var_23 = 43571;
                var_24 = -12266379277221836280;
                arr_19 [i_6] [i_5 - 1] [i_5 - 1] = (arr_1 [i_5 + 1]);
            }
        }
    }
    #pragma endscop
}

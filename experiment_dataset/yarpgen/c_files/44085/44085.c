/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((((min((arr_3 [i_0] [i_0 + 4] [i_0 + 4]), 112))) != (arr_5 [i_0 + 2] [i_0 + 2] [i_1])));
                var_17 = (((((arr_1 [i_0] [i_0]) & ((((arr_5 [i_1] [i_1] [i_1]) < -1091038312))))) << (((~-1091038312) - 1091038301))));
                var_18 = (max(var_18, (arr_0 [i_0])));
                arr_6 [i_0 - 2] = (arr_4 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_19 = ((((!(((var_9 ? (arr_7 [i_2 + 3]) : (arr_11 [i_2] [i_2 - 2] [i_2 - 2])))))) ? (arr_10 [i_2]) : ((min((arr_10 [i_2 - 3]), (arr_10 [i_2 - 1]))))));
                var_20 = (((arr_8 [i_2 + 4]) << (((max((arr_13 [i_2 + 1]), (arr_13 [i_2]))) + 437868451))));
            }
        }
    }
    var_21 = -1091038312;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_22 ^= ((((arr_16 [i_4] [i_5]) != (arr_14 [i_5]))));
                arr_18 [i_4] [i_4] [i_5] = ((((min(24627, 58387))) ? ((((((50368 ? (arr_16 [i_4] [i_4]) : 9))) ? ((460499048 ? 24628 : 40922)) : (58387 <= 5)))) : 15037938843863523866));
                var_23 = (max(9, (((!(arr_14 [i_5]))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_24 *= ((~(max(119, 41283))));
                            arr_24 [i_4] [i_4] [i_4] [i_6 - 1] [i_4] = 119;
                            arr_25 [i_7] [i_4] [i_4] [i_4] = (((((~(arr_22 [i_7] [i_6 - 1] [i_6 + 1] [i_7])))) ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : (arr_21 [i_4] [i_4] [i_6] [i_7])));
                            var_25 *= (arr_20 [i_4] [i_4] [i_4]);
                        }
                    }
                }
                var_26 = (arr_14 [i_4]);
            }
        }
    }
    #pragma endscop
}

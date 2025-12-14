/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [1] [i_2] = 1194876440;
                    arr_11 [i_0] [i_0] [i_1] [i_0] |= 0;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = ((~((~((var_11 >> (-1861127947 + 1861127972)))))));
                                arr_19 [i_0] [i_2] [i_2] [i_3] [9] = (min(3100090856, var_11));
                                var_15 = ((-(max(3100090856, var_10))));
                                var_16 ^= (max((((((max(7037217834386412922, -4168))) ? (((arr_4 [i_1] [14]) & 4294967282)) : (~var_6)))), (((arr_17 [i_4] [i_1] [i_2] [i_4]) ? (arr_6 [i_0]) : (arr_6 [i_1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 = ((((arr_22 [i_6] [i_6] [i_6 - 1] [i_6 - 1] [i_2]) / 8840)));
                                var_18 = ((-((min(127, (arr_1 [i_0] [i_0]))))));
                                var_19 = ((!(((-(min(-16, var_6)))))));
                                arr_27 [i_2] [i_2] [i_2] [i_5] [i_6 - 1] = (arr_5 [i_6 - 1] [i_6 - 1]);
                            }
                        }
                    }
                    var_20 = (((((max(var_5, 18446744073709551604)) & ((min(var_12, 3100090877))))) ^ var_13));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            {
                var_21 = ((!(((~(arr_32 [i_7 - 1]))))));
                arr_34 [i_8] = ((-(max((min((arr_32 [i_8]), var_2)), -7037217834386412935))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            {
                var_22 += (arr_35 [i_10]);
                var_23 = (!(((-((((arr_38 [i_9] [i_10]) >= (arr_35 [i_10]))))))));
            }
        }
    }
    #pragma endscop
}

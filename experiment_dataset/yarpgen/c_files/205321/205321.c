/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -var_9));
    var_13 = (min((max(var_2, var_2)), ((((max(var_1, 180305374))) / var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, var_2));
                    arr_8 [i_0] [i_0] = 180305361;
                    arr_9 [i_0] [i_2] = (max((((244 | var_1) ^ ((var_9 ? (arr_1 [i_1] [i_2]) : var_10)))), ((max(((max((arr_4 [i_0] [i_0] [i_0]), (arr_6 [i_2] [i_0] [i_0] [i_0])))), (arr_5 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (max(-180305374, -270958920));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3 + 2] [i_0] = (((((max(((((arr_1 [i_0] [11]) || var_8))), 58872)))) * ((var_11 * (arr_1 [i_0] [i_3 + 4])))));
                                var_16 = ((((min((!65535), ((var_9 ? 180305355 : 137))))) ? ((max((arr_6 [i_0] [6] [19] [i_4]), (min(6672, var_8))))) : (max(var_3, (((!(arr_0 [i_0]))))))));
                                var_17 -= (arr_4 [i_0] [17] [i_4]);
                            }
                        }
                    }
                    var_18 = (min((((arr_13 [i_0] [i_0] [i_2] [0] [15]) ? (((((arr_6 [i_0] [i_0] [10] [10]) && var_0)))) : (max((arr_11 [i_0] [2] [i_0] [i_0]), var_10)))), (arr_10 [i_0] [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                {
                    var_19 = -6672;
                    var_20 *= ((((max(58870, 0)))) * (arr_19 [19] [i_6] [i_7 + 1]));
                    arr_23 [12] [12] = (((((arr_20 [18] [i_6] [18]) + 2147483647)) >> (var_10 - 17004427335062318101)));
                    arr_24 [i_7 - 2] [i_5] [i_5] = arr_14 [17] [17] [2] [12] [12];
                    var_21 = ((+(((arr_7 [i_5]) ? (arr_7 [i_5]) : var_1))));
                }
            }
        }
    }
    var_22 = (max((180305365 > 6672), ((-(min(var_2, var_9))))));
    #pragma endscop
}

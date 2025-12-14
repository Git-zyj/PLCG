/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (99 >= 17961);
                arr_6 [1] = (min((arr_4 [i_1] [i_1] [i_0]), (arr_4 [3] [i_1] [i_1])));
                arr_7 [i_0] [i_0] [i_0] = (17961 && (arr_1 [i_1]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            {

                for (int i_4 = 3; i_4 < 6;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_2] &= (arr_17 [i_3] [i_3] [i_4 + 1] [i_4 + 1]);
                        var_15 = (max(var_15, ((((arr_2 [i_2]) << (arr_8 [i_2]))))));
                        arr_19 [i_3] [i_3] = (max((((arr_10 [9] [i_4 + 3] [i_3 + 1]) ? 7 : 7)), (min((6168 & 47575), (arr_10 [i_4 + 3] [i_4 + 3] [i_3 - 3])))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_22 [1] [i_3] [3] [i_3] [i_3] [1] = (arr_13 [i_2] [i_3] [i_3 - 4] [i_6]);
                        var_16 ^= (arr_20 [i_3 - 1] [i_3 + 1] [i_3 - 4] [i_4 + 2]);
                        arr_23 [i_3] [i_3] = 47562;

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_26 [i_3] = ((arr_5 [i_4 + 1] [i_3 - 3]) && (arr_5 [i_4 - 2] [i_3 - 1]));
                            var_17 = (min(var_17, ((((arr_3 [i_4 + 3]) >= (arr_3 [i_4 + 3]))))));
                            var_18 = (((((22 >> (((arr_1 [13]) - 71))))) / ((7 ? (arr_21 [i_2] [5] [i_4] [7]) : -30123))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_34 [i_2] [7] [6] [i_3] [6] [8] = 1;
                                var_19 = (max(var_19, (12 * 30122)));
                            }
                        }
                    }
                }
                arr_35 [i_3] [i_2] = 4095;
            }
        }
    }
    var_20 = min(var_13, (var_11 > 8087));

    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_21 &= (--10126661286398306029);
        arr_38 [i_10] = (arr_5 [i_10] [4]);
        arr_39 [i_10] [i_10] = ((min((((!(arr_36 [i_10])))), (arr_1 [i_10]))));
    }
    #pragma endscop
}

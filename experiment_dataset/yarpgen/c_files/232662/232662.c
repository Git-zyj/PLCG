/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 236;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_4 [i_0] [i_1]);
                var_11 = (((((arr_2 [i_0] [i_1 + 1] [i_1 - 1]) ? 173 : (arr_2 [7] [i_1 - 1] [i_1 - 1])))) ? (((!(var_7 >= var_7)))) : (min(-2109361586, (max(2109361586, 132)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 = 198;
                            arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [6] [11] [i_1 + 1] |= ((((!(arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))) ? -2109361573 : ((min((arr_4 [i_2 + 2] [i_1 - 1]), (-127 - 1))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_1] [1] [i_4] [1] [i_5] = ((~(((((arr_14 [i_5]) ? (arr_16 [i_4 - 1] [i_5]) : (arr_5 [i_4 + 1])))))));
                            arr_20 [i_0] [i_5] [i_0] [i_0] [i_0] = (((min((arr_15 [i_1 - 1] [i_1] [i_1 + 1] [i_4 + 1]), 255)) | 2109361573));
                            var_13 = -2109361584;
                            var_14 &= ((((max((((!(arr_2 [i_0] [i_1] [i_4])))), (arr_4 [i_1 + 1] [i_0])))) ? ((~(arr_18 [i_0] [i_4] [i_0] [i_0]))) : (max((arr_14 [i_1 + 1]), (130 * -116)))));
                            arr_21 [i_0] [8] [i_4] [i_5] &= var_8;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

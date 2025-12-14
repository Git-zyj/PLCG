/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [1] [i_2] [12] = (arr_0 [i_2]);
                            var_13 += (((((2147483647 ? 2147483647 : (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3])) & (!-2147483644)))));
                            arr_12 [0] [i_0] |= (((((-(max(847052826, 2147483647))))) ? 427488401 : (((((((arr_4 [i_0] [i_1]) ? var_11 : (arr_6 [i_0] [i_0] [i_2])))) ? ((2147483630 ? -23859 : (arr_4 [i_3] [i_3]))) : 127)))));
                            var_14 = (min((min(-1892211272, ((var_3 ? 2147483647 : 846007825)))), ((min((max(2147483644, 7164)), 1)))));
                        }
                    }
                }
                arr_13 [i_1] [i_1] = (min((max((((-825462209 ? (arr_0 [i_1]) : 1460760310))), ((~(arr_10 [i_1] [16] [i_0] [i_0] [i_1]))))), 706980138));
                var_15 = (((arr_1 [i_1]) ? 63712 : -1649176445));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_22 [i_1] [i_6] = ((57 ? (arr_0 [i_6]) : (((4755538930505939957 >= (arr_15 [i_0] [i_1] [i_1]))))));
                                var_16 = (max(((((0 ? 2719522164736104272 : 67)) + (((-127 - 1) ? -1277543825 : (arr_18 [i_1] [i_4]))))), ((max((arr_1 [i_1]), (min((arr_14 [i_1] [i_4] [i_1] [i_6]), (arr_9 [i_0] [i_1] [i_5] [i_1]))))))));
                                arr_23 [i_0 + 2] [i_1] [i_4] [i_5] [i_5] [i_6] &= ((!((min((((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_1]) : (arr_20 [i_0] [i_0] [i_4] [i_5] [i_6] [13]))), (arr_7 [i_0] [i_0] [i_0] [10] [i_0 - 2]))))));
                                arr_24 [i_0] [i_6] &= (min(((min((arr_1 [i_0 + 1]), (arr_0 [i_1])))), (max(724303009, (min((arr_21 [i_0 - 1] [i_1] [i_4] [i_5] [12]), -450166429))))));
                                arr_25 [i_1] [i_0] [i_4] [i_1] [i_0] [i_1] = ((846007832 ? ((5377405104842560102 ^ (arr_9 [i_0] [i_0 + 1] [7] [i_1]))) : 180));
                            }
                        }
                    }
                }
                var_17 += (min(((min((!3118236992444245074), (min(var_10, -10764))))), (max(-3118236992444245075, ((max(47912, 75657956)))))));
            }
        }
    }
    var_18 = var_2;
    var_19 = (max(((((max(2047, var_5))) ? var_7 : var_1)), (((!(((-42 ? var_12 : 221))))))));
    var_20 &= (min(-1699908224, 34));
    #pragma endscop
}

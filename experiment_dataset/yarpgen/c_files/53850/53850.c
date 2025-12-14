/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                var_13 = (((((arr_2 [i_0 + 1]) || 1263845755)) || ((min((max(4294967293, 0)), (arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_2] [i_0] |= ((((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2]))) | ((2 ? (arr_9 [i_1 + 1]) : (arr_9 [i_0 - 1]))));
                            arr_11 [1] [1] [i_2] [i_0] = ((((max((arr_6 [i_0] [i_1] [i_1]), (((arr_4 [i_0] [i_1] [i_2] [i_3]) ? -35 : 1263845755))))) ? (((((((arr_3 [i_1] [i_1]) * 0))) ? ((3 / (arr_3 [i_0 - 1] [i_0 - 1]))) : (((-(arr_3 [i_1] [i_2]))))))) : (min(((max(1263845729, (arr_1 [i_0])))), (arr_4 [i_0 - 1] [2] [i_1 - 4] [i_1 - 4])))));
                            var_14 ^= max((((arr_3 [i_1 + 2] [i_1 - 1]) + (arr_3 [i_1 + 3] [i_1]))), ((min((arr_3 [i_1 + 2] [i_1]), (arr_3 [i_1 + 1] [1])))));
                        }
                    }
                }
                var_15 *= (((((arr_0 [i_1 + 1]) || (arr_0 [i_1 - 1]))) ? ((4294967293 ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 4]))) : (((!(arr_0 [i_1 + 3]))))));
                var_16 -= (5079190262768162818 / 13);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_17 = (arr_13 [i_4 + 1] [i_4 - 1]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_16 [i_4 + 1])));
                                arr_26 [i_4] [8] [i_4] [i_4] [i_4] [i_4] = ((((arr_21 [i_7] [i_7] [i_6] [i_5] [i_4 - 1]) ? (arr_24 [i_4 + 1] [i_4 + 1] [i_4] [3] [6] [i_4 + 1]) : (arr_21 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]))) - ((((arr_24 [i_4] [i_5] [i_6] [i_4] [i_8] [i_5]) ? -105 : (arr_24 [10] [i_5] [i_6] [i_6] [3] [i_5])))));
                                arr_27 [i_4] [i_5] [i_6] [i_7] [i_4] [i_8] = -5871772377319617738;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

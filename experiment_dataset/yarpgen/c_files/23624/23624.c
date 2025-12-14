/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = (((((var_4 | (arr_4 [i_1 - 1] [i_1 - 4])))) ? ((var_13 ? (arr_4 [i_1 - 2] [i_1 - 2]) : (arr_4 [i_1 + 1] [i_1 - 4]))) : (max(var_13, (arr_4 [i_1 - 4] [i_1 - 3])))));
                arr_5 [i_0] = var_10;
                var_16 = (max(((~(arr_1 [i_1 - 4] [i_1 - 3]))), ((65529 ? 511 : 34916))));
                var_17 = var_13;
            }
        }
    }
    var_18 = var_10;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_19 = 2147483647;
                    var_20 += (arr_8 [i_2] [i_3]);
                    var_21 = ((arr_11 [i_2] [i_3] [i_2] [i_2]) | ((((((arr_10 [i_2] [i_3] [i_4]) / var_3))) ? ((0 ? 34916 : 2147483628)) : var_13)));
                    arr_13 [i_2] [i_2] [i_2] = ((~(15135076942637993568 >> 0)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    arr_21 [i_5 - 2] [i_5] [i_7] = (min((arr_6 [i_5]), var_13));
                    var_22 = ((-(((((min((arr_20 [i_5] [i_5]), 31061))) || 3311667131071558047)))));
                    var_23 = (i_5 % 2 == 0) ? ((((((894126713 >> ((((-750675828212439841 ? (arr_9 [i_5] [i_5] [i_5]) : (arr_20 [1] [i_5]))) - 6255495589765405874))))) ? (((~4621365725221810063) ? (arr_18 [5] [i_5]) : ((((arr_9 [i_5] [i_5] [i_7]) || 4294967295))))) : (((!(arr_17 [i_7 + 1] [i_7 - 1] [i_5]))))))) : ((((((894126713 >> ((((((-750675828212439841 ? (arr_9 [i_5] [i_5] [i_5]) : (arr_20 [1] [i_5]))) - 6255495589765405874)) + 1190745120888568406))))) ? (((~4621365725221810063) ? (arr_18 [5] [i_5]) : ((((arr_9 [i_5] [i_5] [i_7]) || 4294967295))))) : (((!(arr_17 [i_7 + 1] [i_7 - 1] [i_5])))))));
                }
            }
        }
    }
    #pragma endscop
}

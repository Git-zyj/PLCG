/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] = (min((((arr_4 [i_0]) | ((114 & (arr_2 [i_1] [i_0] [i_3]))))), ((~(((arr_4 [i_0]) ? 151 : var_1))))));
                        arr_10 [i_0] [i_0] = (i_0 % 2 == 0) ? (((((arr_2 [i_1] [i_0] [i_3]) >> (((arr_7 [i_0] [i_1] [i_1] [i_3]) - 200)))))) : (((((arr_2 [i_1] [i_0] [i_3]) >> (((((arr_7 [i_0] [i_1] [i_1] [i_3]) - 200)) + 163))))));
                        arr_11 [0] [i_1] [i_2] [i_0] = ((-(arr_5 [i_0])));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = (((((142 & 30) ? ((142 ? (arr_0 [i_0]) : (arr_5 [i_0]))) : (~var_1))) != 136));
        arr_13 [i_0] [i_0] = 174;
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        arr_16 [4] [i_4 - 2] = ((138 ? (arr_14 [6]) : var_12));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_4] = (arr_8 [i_4] [i_4 + 1] [i_4 - 1] [i_4] [10]);
                        arr_26 [i_5] [i_5] [i_5] [i_4] = (arr_7 [i_4] [i_6] [i_6 - 1] [i_4]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 10;i_10 += 1)
                {
                    {
                        arr_33 [i_4] [i_9] [i_8 - 3] [i_4] = (((~var_5) ? (arr_17 [i_4 - 3] [i_4] [i_4]) : (((arr_28 [i_4] [i_4] [i_9]) ? 90 : (arr_1 [i_4])))));
                        arr_34 [4] [i_8] [i_9] [i_10] [i_4] [i_4 + 1] = arr_17 [i_4] [i_4] [i_4];
                        arr_35 [i_4] [i_4] = ((!(arr_1 [i_4])));
                        arr_36 [7] [i_8 - 1] [i_9] [i_4] = (((arr_4 [i_4]) && (arr_15 [i_10 - 2] [i_8 - 2])));
                    }
                }
            }
        }
    }
    var_14 = 230;
    var_15 = ((((var_3 <= (var_6 + 116))) ? (((max(var_4, 157)))) : (var_6 + var_7)));
    #pragma endscop
}

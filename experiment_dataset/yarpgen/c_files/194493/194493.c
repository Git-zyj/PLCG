/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_3);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [2] [2] [i_1] [21] = ((2276 ^ (max(var_15, ((2271 ? (arr_2 [i_0]) : (arr_2 [i_2])))))));
                    arr_7 [i_2] [i_1] [20] [1] = (((((min((arr_1 [i_1]), 0)) == 393216)) ? (arr_3 [2] [18] [18]) : (arr_5 [i_0] [i_1] [i_2])));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 19;i_5 += 1)
            {
                {
                    var_20 = ((-21760 ? ((((min(-2276, (arr_13 [i_3] [i_3])))) ? 183 : 2269)) : (((arr_5 [i_4] [i_4 + 2] [i_5 + 1]) * (arr_5 [9] [i_4 - 3] [i_5 - 3])))));
                    arr_16 [i_5] [15] [i_5] [i_5] = (((var_5 ? (arr_3 [1] [i_5 - 3] [i_5]) : 8902)));
                    var_21 = (((((~(arr_5 [5] [i_4] [i_4])))) ? ((((((arr_10 [18]) ? var_7 : (arr_13 [i_4] [i_4])))) ? ((max(7858, (arr_5 [i_5] [24] [23])))) : ((5287 ? (arr_14 [1] [11]) : var_16)))) : ((((((arr_10 [i_3]) ? (arr_9 [i_3]) : var_3))) ? ((max(var_15, (arr_3 [i_3] [i_3] [6])))) : (max((arr_5 [22] [1] [13]), var_13))))));
                    arr_17 [i_5] [i_5] [i_5] [i_3] = ((!2269) + (arr_11 [4]));
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            var_22 = ((((((arr_8 [i_3]) > var_11))) * -692665238));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    {
                        var_23 = (min(var_23, (((!(((-2127763553 ? (arr_11 [i_7]) : 1))))))));
                        var_24 = (((arr_2 [i_7 - 2]) && (arr_19 [i_6 - 1] [i_7 - 2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = 13447;
                arr_4 [i_1] [10] = (arr_0 [i_0] [i_1]);
                var_17 = ((~(((arr_3 [i_1 - 2] [i_1 - 1]) * 2498938057))));
                arr_5 [i_0] [i_1] [i_1] = ((-18682 ? 1 : 13438));
                arr_6 [i_1] = (49 | 17863);
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_18 = (min(var_18, 504403158265495552));
            var_19 = (min(var_19, (arr_10 [i_2] [i_3])));
            arr_12 [i_2] [i_2] = (arr_11 [i_3]);
            arr_13 [i_2] [5] [5] |= (((arr_8 [i_3] [i_3]) ? (arr_11 [i_2]) : (arr_8 [i_3] [i_2])));
        }
        var_20 = (min((arr_10 [i_2] [i_2]), (min(var_14, 52098))));
        var_21 = ((18446744073709551611 != (((min(508, 1))))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 16;i_7 += 1)
                {
                    {
                        var_22 = 1;
                        var_23 = (((arr_16 [i_5 - 1] [i_5 - 1]) ^ (min((arr_16 [i_5 - 1] [i_5 + 1]), (arr_16 [i_5 - 1] [i_5 - 1])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                {
                    var_24 = (arr_11 [i_8]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_25 = (min(((13347819079840708370 & ((((arr_25 [i_10] [i_8 - 2] [i_10] [i_10]) ? (arr_17 [i_8 - 1]) : -2082533267640496005))))), 521));
                                arr_32 [i_4] [i_8 - 2] [i_8 - 2] [i_10] [i_11] [i_9] = (1390953179 << (((-1369859293 + 1369859304) - 11)));
                                var_26 += (((arr_31 [i_8] [i_8 + 2]) * ((10 ? (arr_28 [i_4] [i_4] [i_11] [11] [i_9] [15]) : (arr_31 [1] [7])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

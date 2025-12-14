/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_7 [21] [i_1] [i_2] = (arr_5 [i_2] [i_2] [i_0] [i_0]);
                    var_19 = (max(var_19, var_8));
                    var_20 = 624683199;
                }
                for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_1] [i_1] [i_1] [i_1] = (arr_3 [i_3 + 2] [i_3 + 3] [i_1]);
                    arr_12 [i_1] = (arr_9 [i_1] [i_1] [i_3 + 1]);
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_21 = ((var_15 ? (((arr_0 [i_6]) ? 18446744073709551609 : 127)) : (arr_2 [24])));
                                var_22 |= ((arr_13 [i_6] [7] [i_4] [7]) ? (~var_12) : (arr_13 [i_1] [i_4] [i_5] [i_6]));
                                var_23 = ((((+(((arr_4 [i_0] [i_0]) ? (arr_10 [i_0] [5] [i_1] [i_6]) : (arr_5 [i_0] [i_1] [i_5] [i_6]))))) * ((((!(arr_3 [i_0] [22] [i_1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 16;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_30 [i_7] = ((!(((((867954311 ? 18446744073709551593 : 46214451589422111)) % -8713876003928925226)))));
                                var_24 = ((arr_24 [i_7 + 2] [i_7]) | 0);
                            }
                        }
                    }
                }
                arr_31 [i_7 + 2] [i_7] [8] = (arr_8 [i_7] [1] [i_7 - 1] [i_7]);
            }
        }
    }
    #pragma endscop
}

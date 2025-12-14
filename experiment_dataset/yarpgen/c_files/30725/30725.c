/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2] [i_0] = (((((arr_1 [i_0] [i_1]) + 9223372036854775807)) << ((((18446744073709551601 ? 18446744073709551601 : 4256660246)) - 18446744073709551601))));
                    var_18 += (arr_3 [i_1]);
                    arr_7 [i_2] [i_2] [i_2] [i_2] = (((~(arr_0 [i_2]))));
                    var_19 = ((!((!(arr_0 [i_0])))));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_20 = (max(var_20, (((!(((var_1 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_1] [i_3 + 1])))))))));
                        var_21 = (min(((((arr_2 [i_0] [i_0]) / var_17))), ((+(((arr_2 [i_0] [i_0]) ? var_14 : var_16))))));
                        arr_10 [i_0] [i_2] [i_3 - 1] = (((max(-129353242, 129353251))) ? 219 : -1164547958);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_22 = ((+(max((arr_14 [i_4 + 2]), ((min((arr_11 [i_4 - 1] [i_5]), 24663)))))));
                arr_15 [i_4] = 18446744073709551601;
                arr_16 [i_4] = ((~(arr_14 [i_4 + 1])));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = 92464079;
                arr_4 [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_1]);
                arr_5 [i_0] [i_0] [i_1] = var_9;
            }
        }
    }
    var_12 = ((((~1) ? var_3 : (~var_1))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_2] [3] [i_4] = (((((arr_13 [i_2]) & 44)) != var_4));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_2] [i_2] [17] [i_2] [i_5] = (((((-((min(var_4, (arr_11 [i_5]))))))) ? (arr_10 [i_5] [6]) : ((var_6 ? (~var_1) : -1980142193556533581))));
                        arr_18 [i_2] [i_5] [i_2] [11] = (arr_15 [i_5] [i_3] [i_2] [i_5]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_2] [i_3] [17] = ((((~((var_8 ? 11293 : var_7))))) ? ((+(((arr_10 [7] [1]) ? var_4 : 6)))) : (11294 || 3208072156));
                        var_13 = (((((((((!(arr_6 [i_4] [i_3]))))) > (var_9 - var_6)))) <= ((max((arr_11 [i_3]), var_1)))));
                        var_14 = (max(var_14, var_5));
                        var_15 = var_5;
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] = (arr_3 [i_4]);
                                var_17 = var_4;
                                var_18 |= (max(((var_9 ? (arr_5 [i_3 + 1] [i_3 - 1] [i_0 + 1]) : (arr_5 [i_3 - 1] [i_3 + 1] [i_0 - 1]))), (arr_5 [i_3 + 1] [i_3 + 1] [i_0 - 1])));
                                var_19 = (max(2147483632, 32741));
                                var_20 |= ((-(((arr_14 [i_4] [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 + 1]) - (arr_14 [i_4] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1])))));
                            }
                        }
                    }
                    arr_16 [12] [i_1] [9] = (-2 * 65535);
                    arr_17 [i_1] [i_1] [i_1] [i_0] = min((min(-4, (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]))), (arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1]));
                }
            }
        }
    }
    var_21 = (min(var_21, -257397114412140061));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_22 = (arr_24 [i_5] [i_6]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_23 = (((arr_10 [0] [i_6] [i_6] [0]) - ((31 ? -257397114412140061 : 38))));
                            arr_31 [i_8] [i_8] |= ((((min((arr_3 [i_8]), var_2))) ? (arr_27 [i_8] [i_5] [i_5] [i_5]) : -730701356));
                            var_24 = ((-(max((257397114412140036 != 730701363), -7245739249862991704))));
                            var_25 = (max(var_25, ((((~-730701346) ? ((((arr_5 [i_7] [i_6] [i_5]) ? var_0 : var_5))) : ((9603389570764122522 * (arr_5 [i_8] [i_6] [i_7]))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

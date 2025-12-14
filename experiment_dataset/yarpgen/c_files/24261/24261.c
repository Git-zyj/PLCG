/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = var_16;
                                var_19 = ((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (((!(arr_6 [i_0])))) : (((((min(-1645268299, var_16))) && var_15))));
                                var_20 = (min(var_20, ((((min((~2147483647), (~3010738849))) - ((((arr_8 [i_2 + 2] [i_2 + 3] [i_2] [i_3 - 1]) ? 31675 : (arr_8 [i_2 + 2] [i_2 - 1] [i_2] [i_3 - 1])))))))));
                            }
                        }
                    }
                }
                var_21 = ((~-783030421) - (~var_10));
                var_22 = (((arr_0 [1] [i_0]) <= ((~(arr_15 [i_0] [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_23 = (min(var_23, var_11));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            {
                arr_23 [i_5] [i_5] [i_5] = (max((max(-1645268299, (((!(arr_0 [i_5] [13])))))), (((((128 ? (arr_9 [i_5] [i_5] [i_6] [6]) : 24696))) ? 0 : (min(2147483647, 10865))))));
                var_24 = (((!(arr_10 [i_6] [i_5]))));
                arr_24 [i_5] [i_5] = (arr_11 [i_5] [i_5] [i_5] [4]);
            }
        }
    }
    #pragma endscop
}

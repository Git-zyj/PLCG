/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (arr_2 [i_0]);
        arr_3 [i_0] [i_0] = ((240 ? (!15) : (((arr_2 [i_0]) ? (arr_1 [10]) : (arr_1 [14])))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = (((arr_0 [i_1]) >= (arr_5 [i_0])));
            var_14 = ((-(((arr_1 [i_0]) + (arr_5 [i_1])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = (arr_4 [i_3]);
                        var_15 = (max(var_15, (arr_9 [i_3] [i_2] [i_1] [i_0])));
                    }
                }
            }
            var_16 = (arr_9 [i_0] [i_0] [0] [15]);
            var_17 = ((-25533 ? (arr_6 [i_0] [i_0] [i_1]) : (~10)));
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            arr_14 [i_4] = (((arr_6 [i_0] [i_0] [i_4 + 3]) ? (((arr_13 [i_4] [i_0]) ? (arr_12 [i_4] [i_4 + 4] [i_0]) : 8)) : (arr_2 [i_4 + 4])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 14;i_6 += 1)
                {
                    {
                        var_18 = ((((-18549 ? -15 : 244))) ? 12769 : ((38 ? 255 : 4080)));
                        var_19 = (38 ^ 255);
                        var_20 = ((((arr_6 [i_6] [i_5] [1]) || 242)) ? (((arr_13 [i_0] [i_0]) << 18)) : ((-22875 ? (arr_15 [i_0] [i_4]) : 2122043750)));
                        arr_20 [i_6] [i_4] [i_4] [i_0] = (((arr_17 [i_4 + 2] [i_4 + 2] [i_6 - 3]) ? (arr_17 [i_4 + 4] [i_4] [i_6 + 1]) : (arr_17 [i_4 + 1] [i_4] [i_6 + 1])));
                        var_21 = (((arr_12 [i_0] [i_6 - 2] [i_4 - 1]) != (arr_12 [i_4] [i_6 + 1] [i_4 + 1])));
                    }
                }
            }
            arr_21 [i_4] = (22701 * 0);
            arr_22 [i_4] [i_4] = (((~96) ? (arr_15 [i_4] [i_4]) : 12000682867026540358));
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            var_22 = (((9 ^ 239) ? ((((arr_25 [12] [6] [i_0]) ? -25533 : 1))) : (arr_10 [8] [i_7] [i_7] [8] [i_0] [14])));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_37 [i_10 + 1] [i_7] [i_8] [i_7] [i_0] = (arr_0 [i_9]);
                            var_23 = (((arr_5 [i_8]) > -2253227147375125229));
                        }
                    }
                }
            }
            var_24 = (-(((arr_35 [i_7] [i_7] [15] [i_7 - 1] [15] [i_7 - 1] [1]) ? 288230376151711743 : (arr_36 [i_7] [i_0] [i_0]))));
            arr_38 [i_7] [i_7] [i_7] = ((arr_13 [i_7 - 1] [i_7 + 1]) | (arr_13 [i_7 + 1] [i_7 - 1]));
            var_25 = ((arr_12 [i_0] [i_7] [i_7]) / (((arr_32 [i_0] [i_7 + 1] [i_0] [i_7] [i_7] [i_0]) & 14)));
        }
        var_26 = ((((((arr_36 [i_0] [i_0] [1]) ? (arr_19 [i_0] [i_0] [8] [11]) : (arr_15 [1] [1])))) ? 1 : (arr_9 [1] [i_0] [1] [i_0])));
    }
    #pragma endscop
}

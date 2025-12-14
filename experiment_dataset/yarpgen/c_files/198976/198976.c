/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 ^= (((((max(var_0, (arr_0 [i_1]))) * ((var_0 + (arr_2 [i_0]))))) * ((min(81, (((arr_3 [i_0]) ? (arr_3 [i_0]) : 29)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        {
                            arr_11 [i_0 + 1] [i_0 - 1] [i_1] [i_2] [i_2] [i_3 + 3] = 29360128;
                            var_17 &= max((((19 ? 1613887305 : 69))), (((arr_5 [i_0 + 1] [i_2 - 1] [i_2 - 1]) ? (arr_4 [i_0 + 4] [i_3 + 1] [i_2 - 1]) : (~var_8))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                {
                    var_18 += (((((~((max((arr_12 [i_6]), 246)))))) ? (((arr_15 [i_6] [i_6]) - (arr_15 [i_6] [i_6]))) : ((((max(-19, 2681079972)) == var_13)))));
                    var_19 = (var_3 ^ -1);
                    var_20 -= var_12;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_21 = max(2681079966, ((((115 || -6374202691603021947) ? var_3 : (!var_3)))));
                                arr_25 [14] [i_5] [4] [i_5] [14] [i_8] = (arr_24 [i_4 + 1] [5] [i_4] [i_5] [i_5 + 1]);
                                var_22 = (max(var_22, ((min(2681079990, 1613887310)))));
                                var_23 = (min(var_23, (~10791952439559858192)));
                                var_24 += (max((((arr_12 [i_4 - 1]) * var_1)), ((((arr_12 [i_4 - 1]) ? (arr_12 [i_4]) : -1035)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_10;
    #pragma endscop
}

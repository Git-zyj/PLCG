/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = 41988;
                var_15 = (((arr_0 [2]) | (max((~var_12), (((var_10 == (arr_4 [i_1] [i_1] [i_0]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_16 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_4] [i_5] [i_2] = (((((((min(var_2, 4080))) ? ((1602022336 ? -1212923200014208142 : 23563)) : -1212923200014208142))) ? (((1212923200014208142 % 62488) ? -var_13 : -6323268225803935391)) : (arr_6 [i_2] [i_2])));
                                arr_17 [i_2] [i_5] [i_4] [i_4] [i_4] [i_5] [i_4] = (((((-7180889053223249628 ? 1 : 3062))) ? (((9275 << (((arr_9 [i_3 + 2] [i_3 - 2]) - 26135))))) : (arr_11 [i_2 - 2] [i_3] [i_2 - 2] [i_2 - 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_16 = (((((148 ? 1212923200014208141 : 4921172334286113048))) ? (arr_15 [i_8] [i_3 + 2] [i_3 + 2] [i_2 + 2] [i_2 + 1]) : (arr_14 [i_3] [i_3] [20])));
                                var_17 ^= (max(21737, -1972589966));
                                arr_24 [i_2] [i_3] [i_2] [i_7] [i_8] [i_2] = ((~(arr_18 [i_8] [i_8] [i_8] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_10;
    #pragma endscop
}

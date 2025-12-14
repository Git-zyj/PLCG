/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_1] &= 0;
                    var_16 = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (min((((((var_8 ? (arr_0 [i_0]) : (arr_7 [i_0] [i_1] [i_1] [i_3] [i_3] [i_0])))) ? 255 : (arr_2 [i_0] [i_0]))), (((arr_9 [i_0] [i_2] [i_2] [i_2]) ? ((var_4 ? 0 : var_13)) : ((4171645107 ? 14506 : 14514))))));
                                arr_12 [i_2] |= (arr_3 [i_1 + 3] [i_1 + 3]);
                                var_18 = (max((((((39 ? var_14 : var_5))) ? (arr_11 [i_0] [i_1] [i_2] [i_0]) : (var_4 == 11079099109182582542))), var_9));
                                var_19 = (((((~(arr_4 [i_1 - 2] [i_4 - 2] [i_1 - 2] [i_0 + 1])))) ? (((((var_14 ? var_15 : var_9))) ? (var_6 * var_0) : 45577)) : -472793563));
                                var_20 = (arr_10 [i_0] [i_0] [i_2] [i_3] [i_4 + 4] [i_0] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, (((((((var_1 - -993578736) ? (((-1896866434 ? 21 : var_14))) : ((var_3 ? var_10 : var_13))))) ? var_7 : 1152780767118491648)))));
    #pragma endscop
}

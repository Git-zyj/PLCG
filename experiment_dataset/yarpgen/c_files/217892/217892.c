/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 ^= (var_1 ? ((((arr_0 [i_0 - 1]) ? ((8101369908748772738 ? var_0 : var_12)) : var_4))) : ((var_7 ? 872767160513122860 : ((var_11 >> (10345374164960778878 - 10345374164960778852))))));
                arr_5 [i_0] [i_0] = 26;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_15 ^= (872767160513122860 ? ((var_10 ? 6048240798813303513 : 10345374164960778878)) : (~var_10));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_16 ^= (((arr_7 [i_2 + 2] [i_2 + 1]) ? (arr_7 [i_2 + 2] [i_2]) : (arr_7 [i_2 - 1] [i_3])));
            var_17 = 248;
        }
        var_18 = (arr_6 [i_2] [i_2 - 2]);
        var_19 *= (var_1 - 8101369908748772738);
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_20 = ((((((max(var_12, (-32767 - 1)))) ? (arr_14 [i_4]) : var_7))) ? ((((max((arr_13 [3] [19]), var_2)) >> (((arr_15 [i_4]) - 8021558038455803514))))) : (arr_15 [i_4]));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    var_21 = 246;
                    var_22 = ((-(max((!var_13), ((var_2 ? 177 : var_7))))));
                }
            }
        }
        var_23 *= (-(max(var_5, ((21664 ? 1341240457771649045 : (arr_16 [9] [8]))))));
        var_24 = (min(var_24, 10345374164960778877));
        arr_23 [i_4] [i_4] = ((~(arr_22 [i_4] [i_4] [i_4] [i_4])));
    }
    #pragma endscop
}

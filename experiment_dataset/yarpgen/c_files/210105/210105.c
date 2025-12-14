/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [20] [i_0] [i_0] = -4669785563050359779;
                        var_14 = (min(var_14, (((-30 ? -30 : ((-30 ? 29 : -1835335886)))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_17 [i_6] [i_5] [i_5] [i_6] = 30;
                        arr_18 [i_0] [i_4 + 1] [i_5] [i_0] [i_6] = ((~(arr_13 [i_0] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_7 = 4; i_7 < 20;i_7 += 1)
    {
        var_15 = (min(255, (((!(arr_22 [i_7] [i_7]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_27 [i_7 - 3] [1] [i_9] = (max((min(9, ((~(arr_1 [i_7]))))), (((!((((arr_26 [i_8]) ? (arr_20 [i_7 + 2] [i_7]) : (arr_1 [i_9])))))))));
                    var_16 = max(9, (arr_23 [i_7 - 3] [i_8] [i_9]));
                }
            }
        }
    }
    var_17 = 623144311;
    var_18 = (min(var_18, ((min((max(-1392374069, 64787)), 29)))));
    var_19 = -var_11;
    var_20 = 9;
    #pragma endscop
}

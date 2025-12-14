/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_18 = ((+(((~7553356001344347710) ? ((-7553356001344347711 ? (-2147483647 - 1) : 1)) : 1))));
                        var_19 = (((((((((arr_0 [2]) | var_12))) ? ((1 ? (arr_3 [i_1] [i_1]) : 43192)) : (((arr_1 [i_0]) ? 22344 : 27610))))) ^ (max(((var_14 ? var_17 : var_9)), (arr_3 [i_1] [i_2 - 1])))));
                        var_20 = (~95);
                        var_21 |= max((((var_16 != (arr_3 [i_3] [i_1 - 2])))), var_12);
                    }
                }
            }
            arr_8 [i_0 + 1] [i_1] = ((max((arr_4 [i_0] [i_0] [i_1 - 1] [i_0]), (arr_2 [i_0] [i_1]))));
            arr_9 [8] |= (((arr_2 [i_0] [0]) ? (max((arr_1 [i_0 + 3]), 5561353375147584737)) : (((var_6 ? (4267749393691335127 != var_4) : var_10)))));
        }

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            arr_13 [i_0] [8] = ((~(max(7553356001344347711, (arr_6 [i_0] [i_0] [i_0] [i_4 + 3] [i_4])))));
            var_22 = var_9;
            var_23 = ((var_13 != (1 != 29)));
        }
    }
    var_24 = var_14;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_25 = var_9;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                {
                    var_26 = (~var_3);
                    var_27 -= 0;
                }
            }
        }
        var_28 *= (((arr_7 [1] [i_5] [1] [1] [11] [i_5]) != 16499476117097341301));
    }
    #pragma endscop
}

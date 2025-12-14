/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_14 &= ((-3979531760307644536 || (arr_3 [i_0] [2] [i_2])));
                            var_15 |= ((+((-(((arr_8 [i_0] [i_0] [i_0]) ? var_6 : -7875101439927204407))))));
                            var_16 ^= (!2551265176);
                        }
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            arr_17 [3] [4] [i_3] [i_3] = var_10;
                            var_17 = (max((((((138 << (var_3 + 5762717084869305970))) <= (0 < 104)))), (((var_9 == var_4) ? (arr_11 [i_1 + 1] [i_1] [i_5 + 1] [7]) : 208842759000025632))));
                        }
                        var_18 ^= ((114 ? var_7 : var_13));
                    }
                }
            }
        }
        arr_18 [i_0] = ((var_9 ? 97 : (!-3262505236604556647)));
    }
    var_19 = -104;
    var_20 = var_3;
    #pragma endscop
}

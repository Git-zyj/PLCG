/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_20 = (max(var_20, 235));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_21 &= 1;
                        arr_11 [i_3] [i_0] [i_1] [i_0] [i_0] |= 255;
                        arr_12 [5] [i_3] [i_3] = 131008;
                        var_22 = 30;
                        var_23 *= (((((40 ? 1 : 4294967295))) ? ((1 ? 7594554763559513081 : 1698887749135030556)) : 109));
                    }
                    var_24 = 64;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] |= 241;
        arr_18 [i_4] = ((1 ? ((114492381 ? -435133189 : 215)) : 211));
    }
    var_25 = 18;
    var_26 |= 1;
    #pragma endscop
}

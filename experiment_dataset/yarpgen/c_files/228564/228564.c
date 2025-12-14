/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_20 = (arr_5 [i_0] [i_1 + 1] [i_2] [i_3]);
                        var_21 = ((min((arr_2 [i_0] [i_2] [i_0]), ((13043982604845320314 ^ (arr_3 [i_0] [i_0]))))));
                    }
                }
            }
        }
        arr_12 [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = max(var_16, -0);
        arr_16 [i_4] [i_4] = ((!(arr_15 [i_4])));
        var_23 = 13635972529550769574;
        arr_17 [1] = ((1 ? var_5 : ((((1265048171 > (((arr_15 [i_4]) >> (17268214827997001634 - 17268214827997001626)))))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    arr_27 [i_7 - 1] [7] [i_7 + 3] [i_7] = (((((~((-4984720676049408556 ? var_11 : (arr_21 [i_5])))))) ? 13043982604845320314 : (arr_22 [i_7] [i_6] [5])));
                    var_24 = ((((((var_8 >> (var_4 - 154))))) && (var_14 - 4810771544158782042)));
                }
            }
        }
    }
    #pragma endscop
}

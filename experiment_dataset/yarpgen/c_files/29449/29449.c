/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [17] = -72057594037927936;
                var_18 = 8737801632914580429;
                var_19 = (max((arr_6 [i_1 + 2]), (-630824587 | var_14)));
                var_20 -= (arr_5 [i_0]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_21 = (max(var_0, ((~(max((arr_3 [i_2] [i_2]), 630824599))))));
        var_22 = (min(((max(11, (-95152255 / 72057594037927936)))), (max(6634419055227940344, -72057594037927936))));
        var_23 = (max((arr_3 [i_2] [i_2]), (max(var_3, -6092587326012810830))));
    }
    #pragma endscop
}

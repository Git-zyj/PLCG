/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = 12378;
    var_16 = ((var_1 ? var_8 : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((16019222819496622131 ? (((1078331447 ? 228 : -124))) : 2427521254212929484));
                    arr_8 [i_0] [i_1] [11] = (((((-126 ? 1940783461 : 5753))) ? 79 : 48853));
                    var_17 ^= (((9071319240280666694 ? 62 : 977931071498130416)));
                    arr_9 [i_0] = 124;
                    var_18 += ((28 ? 755905614 : 168));
                }
            }
        }
    }
    #pragma endscop
}

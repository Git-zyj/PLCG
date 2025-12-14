/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_10 += (max((539392221545883587 | -539392221545883588), ((1 * ((64 ? 24 : var_7))))));
        var_11 = (max(var_11, var_4));
        var_12 += (~((var_2 ? var_8 : 64)));
        var_13 = (min(var_13, (~var_1)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_14 = (((min(3378749580, (((1 ? 90 : 0))))) >> ((((74 ? var_5 : var_9)) >> (((min(73, 2832085592)) - 52))))));
                        var_15 = ((max((((0 << (1925363520 - 1925363490)))), (~2329206583))));
                    }
                }
            }
        }
        var_16 = 219;
    }
    var_17 = ((~((((min(-5, var_2)) >= (var_3 || 0))))));
    var_18 = (min(var_18, -var_3));
    var_19 = var_3;
    var_20 = 2066207669764836038;
    #pragma endscop
}

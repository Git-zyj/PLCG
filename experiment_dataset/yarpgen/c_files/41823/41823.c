/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_6 ? -32 : ((var_13 ? var_13 : var_3)))), ((((!29) % var_3)))));
    var_16 = (max(((-(var_10 < 34827))), var_14));
    var_17 = 32;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_18 *= (max((((~18446744073709551610) & ((~(arr_5 [1] [4]))))), (min(1206429064685144045, 11181454470200405018))));
                arr_7 [i_0] [i_1] [i_0] = (~var_6);
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(((6 ? var_8 : var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = ((((+(min((arr_2 [6]), 6)))) - (!var_6)));
                    var_13 = (min(var_13, ((((((18446744073709551607 << (var_0 - 1662045395)) >> (var_4 - 947679956))))))));
                    var_14 = (min(var_14, ((((arr_0 [i_0] [i_0]) - var_10)))));
                    var_15 = (min(var_15, ((var_2 ? ((((1 * 1468735752700758749) && (~var_9)))) : ((-(((arr_7 [1] [5]) ? 874694727 : -874694732))))))));
                }
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(1, -65535));
                    var_21 = (((((((min(32, 0)))) & ((1 ? 63 : 42147)))) | (!var_18)));
                    var_22 ^= (max(6956, (var_15 * var_1)));
                    var_23 = ((((1 ? 0 : 3171819728)) << (arr_8 [i_0])));
                    var_24 |= ((!(!833876932)));
                }
            }
        }
    }
    var_25 = var_3;
    var_26 = -53;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_1]);
                var_20 = var_15;
            }
        }
    }
    var_21 = var_16;
    var_22 = 1462842220984489235;
    var_23 &= var_4;
    var_24 = (min(var_24, ((max(var_8, ((((min(18446744073709551594, 16983901852725062380))) ? (var_14 || var_5) : (max(1462842220984489235, var_12)))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [12] = (max((((((8 ? var_10 : 14))) ? var_7 : ((-24454 ? 268435455 : 1605827444104604470)))), 9218501491724119921));
                var_18 = ((((((9679 >> (154 - 153)))) ? ((-7899307660631936980 ? var_7 : var_10)) : 16710186317316510840)));
            }
        }
    }
    var_19 = (((((((var_10 ? var_12 : var_3)) <= (min(var_0, -29950)))))));
    #pragma endscop
}

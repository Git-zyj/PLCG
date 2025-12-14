/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((~(var_4 & var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (min((~125), (min(((~(arr_1 [i_0]))), 254))));
                arr_8 [i_1] = ((((~((14 ? 255 : var_8)))) * (~94704552)));
                var_16 = var_8;
                var_17 &= (169 <= 5);
            }
        }
    }
    #pragma endscop
}

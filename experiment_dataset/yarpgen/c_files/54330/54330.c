/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (min(((((arr_2 [i_0]) > (~var_4)))), (7082060172517317328 / 2175577421)));
                var_12 = (max(var_12, ((((7082060172517317328 & -1478903791603436170) / (((1 <= 7082060172517317328) | 1478903791603436182)))))));
                var_13 = 1;
            }
        }
    }
    var_14 = (min(var_14, ((min(((1 - (~1478903791603436152))), ((min(1, (-1478903791603436170 || 0)))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((((8 << (((arr_0 [i_0 - 1]) - 4588877572940519167)))) ^ (((var_0 != (((arr_3 [i_0 - 1] [i_1 + 1] [i_0 - 1]) ? (arr_2 [i_0] [i_1]) : (arr_0 [i_0 - 1]))))))));
                var_19 = 120;
            }
        }
    }
    var_20 &= var_10;
    #pragma endscop
}

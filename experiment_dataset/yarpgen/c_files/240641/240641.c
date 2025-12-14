/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((~(max(32764, (arr_2 [i_0]))))))));
                var_14 = (max(var_14, (arr_0 [9])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_15 -= -34991864815768423;
        var_16 -= (~(arr_2 [i_2 + 2]));
        var_17 |= (((arr_4 [i_2 + 2] [i_2 + 3]) ? 2982741493 : (arr_0 [i_2 + 3])));
    }
    var_18 = (min(var_18, var_12));
    #pragma endscop
}

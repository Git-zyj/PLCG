/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (~0);
                    var_16 = ((~(arr_2 [i_0])));
                }
            }
        }
        var_17 |= ((((min((arr_1 [i_0]), var_10))) | (((arr_1 [i_0]) ? 65531 : (arr_1 [i_0])))));
    }
    var_18 |= var_11;
    #pragma endscop
}

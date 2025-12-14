/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (max((arr_6 [i_0] [i_2] [19] [i_0]), (((((-124 ? 2394824236 : 2852282039)) >= (((min((arr_0 [i_0]), 1)))))))));
                    arr_7 [i_0] = ((((1565494083 + ((max(var_9, var_7))))) - var_2));
                }
            }
        }
    }
    var_18 ^= ((((((27 ? var_4 : var_6)))) * (var_11 && var_10)));
    #pragma endscop
}

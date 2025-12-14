/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = ((((var_17 ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1]))) < (min(var_2, (arr_0 [i_1 - 1])))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (((((1 ? 1 : 32256))) ? (min((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]), var_8)) : (((178 ? -1 : ((551873279 ? 136875206 : 140783065)))))));
                }
            }
        }
    }
    #pragma endscop
}

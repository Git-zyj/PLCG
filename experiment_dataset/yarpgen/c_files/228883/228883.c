/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= -1415904247;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (arr_0 [i_1])));
                    var_12 ^= (arr_5 [i_0] [i_0] [i_2] [1]);
                }
            }
        }
    }
    #pragma endscop
}

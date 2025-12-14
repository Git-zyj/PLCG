/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = 19;
                arr_4 [i_1] = (((arr_2 [i_0] [i_1]) ^ (((arr_2 [i_0] [2]) | (arr_2 [i_0] [i_1])))));
            }
        }
    }
    var_11 = -36;
    var_12 = var_0;
    #pragma endscop
}

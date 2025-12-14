/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (arr_1 [i_0 - 1]);
                var_21 = (arr_2 [i_0]);
                arr_4 [i_0 - 1] &= (4294967295 ^ 65535);
            }
        }
    }
    #pragma endscop
}

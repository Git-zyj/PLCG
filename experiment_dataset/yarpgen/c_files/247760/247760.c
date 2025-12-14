/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_8 [3] [3] [i_0 - 1] = ((((((arr_2 [i_0] [i_0]) + 32797))) ? (((32797 < 524287) ? (32814 ^ 3965708388) : (arr_7 [i_0] [i_0]))) : 268862124));
                var_21 = (max((min(60082, (arr_1 [i_0 - 1] [i_0 - 1]))), (arr_7 [i_0] [i_0])));
                arr_9 [i_1] [i_1] [i_0] = 2967728822981656778;
                var_22 = (arr_1 [i_1 + 2] [i_1 - 2]);
            }
        }
    }
    #pragma endscop
}

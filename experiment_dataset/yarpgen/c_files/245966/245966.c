/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1 ? 1 : var_5));
    var_11 = var_2;
    var_12 &= (var_0 ^ var_5);
    var_13 ^= (var_5 < var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (((((35 * (arr_4 [i_2 + 1] [i_0])))) ? (((221 < (arr_4 [i_2 + 1] [i_1])))) : ((max(var_6, 22)))));
                    var_14 = ((221 ? -1 : var_9));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max((arr_1 [i_0 + 2] [i_0 + 2]), (max(var_2, (arr_0 [i_0] [i_0 + 2])))));
                var_16 ^= ((+(min((arr_1 [i_0 + 3] [i_1 + 1]), (46211 % 128)))));
            }
        }
    }
    var_17 = ((0 ? var_2 : -4294967277));
    #pragma endscop
}

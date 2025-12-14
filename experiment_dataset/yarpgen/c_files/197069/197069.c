/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((240 ? 0 : 1))) && 0));
                var_12 = ((~(5196885789610280660 & 2147483647)));
            }
        }
    }
    #pragma endscop
}

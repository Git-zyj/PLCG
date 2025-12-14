/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = ((((arr_0 [i_1 - 1]) ^ var_5)));
                var_20 = (min(var_20, 1157898267));
            }
        }
    }
    var_21 += var_3;
    #pragma endscop
}

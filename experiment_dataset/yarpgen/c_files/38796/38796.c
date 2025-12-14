/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = 106;
                arr_7 [i_0] = (min(((((arr_4 [i_0] [i_1 + 1]) & ((118 ? -111 : 106))))), 16497255110530117764));
                arr_8 [i_0] [i_0] [i_1] = -111;
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = ((+(((arr_1 [i_0] [i_1 - 3]) * (arr_3 [i_0] [i_1 - 4])))));
                var_13 = 47210;
                var_14 = 1749325353;
            }
        }
    }
    var_15 = 1749325339;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -1496388245));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((((min((min(var_8, var_10)), (arr_2 [i_1] [i_0] [i_0])))) && (((~(arr_0 [i_0] [i_0]))))));
                var_14 ^= 46085;
            }
        }
    }
    var_15 = (var_4 < -1585090807);
    #pragma endscop
}

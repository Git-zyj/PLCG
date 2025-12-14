/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (arr_5 [i_0]);
                var_13 = min((min(32767, (var_1 % 28839))), (8160727165843124534 != 122));
            }
        }
    }
    var_14 = 13885303927694078969;
    #pragma endscop
}

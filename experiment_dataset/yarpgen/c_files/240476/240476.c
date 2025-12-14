/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((min((!65535), 11225023439869427138)) * 230));
    var_14 ^= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (2147483647 - 2147483625))))));
                arr_5 [i_1] [i_1] = max(((-11299 - (arr_2 [9]))), ((((-14248 && 64303) < 0))));
                arr_6 [i_0] [i_1] [i_1] = 0;
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}

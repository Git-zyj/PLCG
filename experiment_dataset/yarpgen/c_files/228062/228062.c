/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= -5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = 21844;
                arr_7 [i_0] [i_1] = (arr_2 [i_0]);
            }
        }
    }
    var_12 = var_5;
    var_13 &= var_0;
    var_14 = (min((((255 ? 4294967291 : var_2))), ((((((-2147483647 - 1) ? 11094655011092776897 : var_7))) ? 62766 : (-4389165272744891124 - var_4)))));
    #pragma endscop
}

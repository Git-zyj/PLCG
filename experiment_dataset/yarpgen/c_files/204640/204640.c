/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((((var_6 == var_3) ? var_11 : (var_1 || var_4))))));
    var_13 = ((~(-2147483647 - 1)));
    var_14 *= (!-1788987110);
    var_15 -= ((-(2147483647 - 66)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 - 1] [i_1] = ((((max(var_2, var_7))) / (((-2147483647 - 1) ? 2147483647 : 2147483624))));
                var_16 ^= (((8088907991294270504 - 15) ? (((32766 - (1649238319 == 2147483647)))) : var_4));
            }
        }
    }
    #pragma endscop
}

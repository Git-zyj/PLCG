/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (((-2147483647 - 1) ? 3635708472 : 3635708472));
                var_12 = (min(1001389375, 3635708491));
                arr_6 [i_0] [i_0] = 39;
                arr_7 [i_0] = ((7744 * ((+(((arr_4 [i_0]) / 4294967295))))));
            }
        }
    }
    var_13 = ((~(max(11, (var_0 * var_6)))));
    var_14 = (max(var_14, (((min(114, 4011909367))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_17 += (-(max(1928470524, -1928470524)));
                var_18 = (((max(1, 1))) & (max(1928470539, (arr_1 [i_1] [i_0]))));
            }
        }
    }
    var_19 = (((((((1928470539 ? var_7 : 1928470539))) ? -2034687379 : -1928470539))) ? ((var_4 ? 41772 : (min(1, 311844751)))) : var_13);
    var_20 -= (max(((((-1928470528 & 1928470529) || (((1 ? var_16 : 1)))))), var_16));
    #pragma endscop
}

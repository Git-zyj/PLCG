/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_10;
    var_19 = (min(var_14, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((var_2 + (18446744073709551593 * -24576)));
                var_20 |= var_11;
                var_21 += (min((((18798 * 11347) | (max(var_12, var_8)))), (var_12 < var_10)));
            }
        }
    }
    var_22 = var_13;
    #pragma endscop
}

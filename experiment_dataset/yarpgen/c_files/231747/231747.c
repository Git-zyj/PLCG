/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((1012573382 ? 577772798 : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((-(arr_0 [i_0 - 2] [i_0])));
                var_17 ^= var_8;
            }
        }
    }
    var_18 = var_3;
    var_19 = var_2;
    var_20 = var_12;
    #pragma endscop
}

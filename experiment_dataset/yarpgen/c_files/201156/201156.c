/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 ? var_6 : ((var_4 ? var_6 : var_2))));
    var_14 = (max(var_9, ((max(var_1, (~var_8))))));
    var_15 ^= var_10;
    var_16 = (max(var_16, ((min(var_8, ((((var_7 ? var_1 : 4294967295)) % var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (18446744073709551615 | var_9);
                arr_4 [4] &= (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}

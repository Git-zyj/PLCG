/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = ((-((((var_9 | var_7) == var_3)))));
                var_13 = (min(var_13, ((((max((arr_3 [i_0] [i_1 + 1]), 9223372036854775807)) / (((var_11 | var_5) ? (var_10 ^ 44872) : (((arr_1 [12]) % 4766753932736854929)))))))));
                var_14 = 32767;
            }
        }
    }
    var_15 = ((((max(((var_4 ? 4294967295 : var_11)), (var_4 || var_2)))) - ((max(var_8, var_7)))));
    var_16 = (min(var_16, (var_3 + 194387927)));
    #pragma endscop
}

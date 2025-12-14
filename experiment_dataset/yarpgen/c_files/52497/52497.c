/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 2] [i_1] = ((arr_1 [i_0]) ^ (min((arr_2 [i_1]), (~var_3))));
                arr_6 [i_1] = ((31 + ((-(arr_2 [i_0 + 1])))));
                arr_7 [1] = ((var_6 ^ ((((arr_1 [i_0]) ? (var_3 & -31) : var_4)))));
                arr_8 [1] [i_0] [i_0] = ((!(((1978648478157386151 & (arr_1 [i_0 - 2]))))));
                arr_9 [i_1] = ((-(arr_1 [i_0 - 2])));
            }
        }
    }
    var_13 = (max((!1), var_1));
    var_14 *= ((9223372036854775807 ^ ((~(-9223372036854775807 | 1)))));
    var_15 = var_0;
    var_16 = (min(3350607612, (max((var_2 & var_11), 9223372036854775807))));
    #pragma endscop
}

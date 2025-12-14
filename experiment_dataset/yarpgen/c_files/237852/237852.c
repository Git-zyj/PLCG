/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 ^= (!((((((var_2 ? var_1 : (arr_1 [22])))) ? var_6 : var_5))));
                arr_5 [i_1] [i_1] [i_0] = (((((((181 ? var_3 : (arr_3 [i_0] [i_1] [i_1])))) ? 4294967294 : 4294967294)) << (1918844968 - 1918844951)));
                arr_6 [i_0] [i_1] = (((((-0 ? ((156 ? var_8 : var_11)) : (((arr_0 [i_1]) | (arr_0 [5])))))) - (min((((arr_4 [i_0] [12] [i_1]) | (-9223372036854775807 - 1))), var_5))));
            }
        }
    }
    var_15 = ((~(((18446744073709551615 * var_13) ? (var_4 / var_13) : var_0))));
    #pragma endscop
}

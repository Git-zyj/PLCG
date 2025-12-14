/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (18446744073709551615 ? ((0 ? -7789743802184309938 : var_4)) : var_1);
    var_11 = (~11661584865207385112);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (((44 | 8803738345858557419) ? ((-(((arr_0 [i_0]) & (arr_0 [i_0 - 1]))))) : (((max(((min(34, (arr_2 [9] [5] [i_0 - 4])))), var_9))))));
                var_13 = (max((min(var_9, ((18446744073709551604 ? 10192956767988666751 : 9223372036854775807)))), ((((var_9 - 4294967282) ? 44835 : (arr_2 [4] [4] [6]))))));
            }
        }
    }
    #pragma endscop
}

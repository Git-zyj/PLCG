/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 &= (((((111 ? (max(var_7, var_15)) : (16919983444886174203 != 353227373)))) ? ((((arr_1 [i_0 - 2]) < (arr_3 [i_0 + 1])))) : (((-32767 - 1) ? (var_14 | 0) : 353227373))));
                var_21 = (min(var_12, ((((arr_3 [i_0 + 4]) & var_0)))));
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}

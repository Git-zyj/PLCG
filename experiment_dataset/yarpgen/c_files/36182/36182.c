/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((((min(((var_7 ? 9667082012735897162 : 223)), (8779662060973654453 | var_5)))) ? (((((685557501 ? 8779662060973654453 : -7303196325900203795))) ? var_15 : (((arr_1 [i_0] [i_1]) + -1741423285)))) : var_2));
                arr_4 [i_1] = 9667082012735897174;
            }
        }
    }
    var_22 = -48801;
    #pragma endscop
}

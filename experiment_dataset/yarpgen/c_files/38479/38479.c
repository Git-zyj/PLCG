/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 898291089;
    var_21 += var_4;
    var_22 = (((((var_6 != var_4) >= var_8)) && ((!(-898291090 || 118)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_23 += ((((((arr_3 [7] [i_1]) ? var_7 : 121))) / (((((arr_0 [i_0]) ? (arr_3 [i_0] [i_0]) : (-9223372036854775807 - 1)))))));
                var_24 = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}

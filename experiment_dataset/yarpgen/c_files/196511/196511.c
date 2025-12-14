/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((min((((min(var_1, var_8)) & var_7)), var_16)))));
    var_21 = ((!((max(var_5, var_2)))));
    var_22 = (max((((var_0 == -13) ? 0 : 8585740288)), (127 != 0)));
    var_23 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_1] = (arr_3 [i_0] [i_1] [i_1]);
                var_24 |= ((var_2 ? (((((0 & 0) < (arr_1 [i_0]))))) : ((((min(var_17, 0))) ? (-9223372036854775807 - 1) : 18446744065123811328))));
                arr_8 [5] [i_1] = (arr_2 [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}

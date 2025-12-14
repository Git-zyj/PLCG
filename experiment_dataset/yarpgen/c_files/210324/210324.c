/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((+((((((var_1 + 9223372036854775807) >> (-9805 + 9819)))) ? -var_7 : ((1 ? var_1 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((((~((~(-9223372036854775807 - 1)))))) ? ((((((arr_2 [6]) ? (arr_2 [i_0]) : var_11))) / -9223372036854775807)) : (((-(((arr_3 [i_0]) ^ (arr_0 [i_1 - 3] [i_0])))))));
                var_14 = ((((((((arr_2 [18]) ? 65535 : 65535))) ? (var_4 / var_3) : ((((!(arr_1 [i_1] [i_0]))))))) <= ((((((var_7 ? 65514 : 65522))) ? (((!(arr_3 [i_1])))) : (-4946466456921084309 >= -1712769485280941057))))));
            }
        }
    }
    #pragma endscop
}

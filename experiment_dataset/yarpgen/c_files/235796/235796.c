/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (((var_0 - 52489) ^ ((-var_8 ? var_13 : (-9223372036854775807 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0 - 2] = (13 ? (arr_5 [i_0 - 1] [i_1]) : ((((arr_1 [i_1]) > var_14))));
                var_16 = ((var_11 ? ((((max(1734873429047814330, var_8))) ? ((15 ? -11 : var_12)) : (((-(arr_3 [i_0 - 2] [i_1] [i_0 - 2])))))) : ((min((var_9 <= 13), (arr_2 [i_0]))))));
                arr_7 [i_0] [i_0 - 2] [i_1] = (arr_1 [21]);
            }
        }
    }
    #pragma endscop
}

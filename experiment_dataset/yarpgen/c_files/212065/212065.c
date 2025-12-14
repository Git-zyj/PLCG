/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_19, var_12));
    var_21 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_22 = (((!var_14) - (((0 <= ((var_3 ? (-9223372036854775807 - 1) : (arr_2 [i_0]))))))));
                var_23 = (max((max(((-(arr_5 [i_0] [i_1 + 1]))), (arr_5 [i_1] [i_1 + 1]))), ((((min(var_11, 3208595406)) > (arr_1 [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}

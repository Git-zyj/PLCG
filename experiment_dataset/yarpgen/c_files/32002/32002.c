/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (min((arr_3 [i_1 - 2] [i_1]), ((var_12 & (16506 || 16527)))));
                var_16 = ((var_4 ? (arr_3 [i_0] [i_1]) : (min((arr_1 [i_0]), (max(var_5, (arr_1 [i_0])))))));
                var_17 = (min(var_17, (((((((min(var_14, (arr_1 [i_1])))))) / (max((arr_5 [i_0]), (((~(arr_1 [i_0])))))))))));
                var_18 = ((~((((var_4 ? var_14 : 49030))))));
                var_19 = (max((((((var_8 ? var_10 : var_9)) > var_10))), (arr_2 [i_1] [i_0] [i_1])));
            }
        }
    }
    var_20 = (((max(49027, var_9))) ? (var_1 <= var_13) : var_5);
    var_21 = (min(var_21, var_0));
    #pragma endscop
}

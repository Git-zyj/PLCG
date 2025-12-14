/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((((((arr_2 [i_0] [i_0]) % (arr_1 [i_0] [i_0])))) + var_1)));
                var_13 = (((arr_3 [i_1]) ? var_6 : (min((((arr_4 [i_0] [i_0]) + var_4)), ((var_0 ? var_2 : (arr_2 [i_0] [i_0])))))));
                var_14 = ((-((1 % (arr_2 [i_0] [i_1])))));
                var_15 = ((max(114, (min(30647, (arr_3 [i_1]))))));
                var_16 = (max((((((var_3 ? (arr_4 [i_0 - 1] [i_1]) : var_4))) ? 1 : ((var_3 ? 0 : var_4)))), (((((min(var_7, 1))) > 0)))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_17 += var_0;
        var_18 = (min(var_18, (((((((arr_6 [6]) ? var_5 : -var_3))) ? (arr_6 [2]) : ((min(1, 0))))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_5 ? var_10 : (var_6 / var_13))) != var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((((arr_2 [i_0]) ? var_2 : (arr_2 [i_0])))) ? ((min(73, var_12))) : (((!(arr_2 [i_0]))))));
                var_15 += var_1;
                var_16 = (((var_3 ? var_5 : ((min(var_12, -113))))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_17 = ((-(arr_3 [i_2] [i_2])));
        arr_11 [i_2] = var_7;
    }
    var_18 = var_9;
    #pragma endscop
}

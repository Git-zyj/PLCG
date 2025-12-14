/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 |= (var_12 && ((((arr_0 [i_0]) ? (arr_0 [i_1]) : var_4))));
                arr_6 [i_1] = ((var_15 < ((((max(var_14, var_15))) ? var_12 : var_9))));
                arr_7 [i_0] |= (-(max(1, 2522507278371780414)));
                arr_8 [i_0] [i_1] [i_1] = ((((var_6 ? (var_9 | 31744) : (((var_8 & (arr_5 [i_1])))))) ^ (((((arr_5 [i_1]) | var_10)) - (((1 ? 52 : 68)))))));
            }
        }
    }
    #pragma endscop
}

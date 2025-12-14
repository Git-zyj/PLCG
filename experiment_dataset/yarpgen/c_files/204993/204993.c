/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((-77 ? var_13 : 371087487)))) ? var_12 : var_0));
    var_18 = var_4;
    var_19 |= 7379;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((!var_9) ? (arr_0 [i_1]) : (min(16383, (max(var_4, (arr_0 [1]))))));
                var_21 = (-(((!(((var_8 ? var_9 : var_13)))))));
            }
        }
    }
    #pragma endscop
}

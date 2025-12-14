/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] &= (max((((-94 ? ((66 ? var_2 : var_12)) : ((200 ? var_8 : 2455153957))))), var_11));
                var_17 = ((!(((((min((arr_1 [i_0]), (arr_1 [3])))) ? (max(0, 2)) : var_3)))));
                arr_6 [12] = 55;
                var_18 = (((arr_1 [i_0]) ? 85 : -1));
            }
        }
    }
    var_19 &= ((var_8 ? (min((min(var_1, var_9)), var_10)) : var_4));
    var_20 = (((((-(!var_16)))) ? var_3 : 93));
    #pragma endscop
}

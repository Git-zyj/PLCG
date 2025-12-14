/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (max((var_9 == var_4), var_9));
    var_12 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_2] = (11 || 1);
                    var_13 = (max(var_13, ((((min(((var_4 ? var_2 : 0)), 171))) ? (max((min(var_5, var_10)), (18446744073709551615 == var_10))) : (((((var_2 ? (arr_0 [i_2]) : var_0)))))))));
                }
            }
        }
    }
    #pragma endscop
}

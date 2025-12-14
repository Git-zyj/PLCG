/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max((max(var_8, var_13)), (~var_7))) == ((max(var_13, var_10)))));
    var_19 = (min(var_19, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_20 += (((((var_12 | (arr_0 [6])))) ? (max(((max(11354, (arr_1 [i_0])))), (arr_2 [i_1]))) : ((-(arr_5 [i_1 - 2] [6])))));
                var_21 = (max(var_21, (((+(max((((arr_4 [i_1] [i_0] [i_0]) ? var_7 : var_4)), ((max(1204292830, var_14))))))))));
                var_22 = (arr_5 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}

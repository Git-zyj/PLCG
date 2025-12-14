/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 &= (min((min(var_5, ((var_15 ? var_17 : 4903247120921964451)))), (arr_2 [i_0] [1])));
                arr_6 [i_0 - 2] [i_0] = (max(var_12, ((max(var_8, ((var_15 ? var_2 : var_1)))))));
            }
        }
    }
    var_19 = (min((((((var_4 ? var_11 : var_16)) != var_1))), ((var_0 ? (((min(var_4, var_1)))) : ((32755 ? var_16 : var_0))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_13 [i_2] = (((!(arr_9 [i_2]))) ? -29359 : (4903247120921964451 / -4903247120921964452));
                arr_14 [i_2] = (arr_12 [i_3]);
                var_20 = ((((min(4903247120921964451, (arr_8 [i_3])))) ? ((max((arr_8 [i_2]), var_14))) : ((((arr_8 [i_3]) || var_14)))));
                arr_15 [i_2] [i_2] [i_3] = (min((max((max(var_7, (arr_8 [i_3]))), var_17)), ((min((arr_8 [i_3]), (min(1, (arr_8 [i_2]))))))));
            }
        }
    }
    var_21 &= var_15;
    var_22 = max((max(-2046825632, (~var_6))), var_13);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += max((max(((var_3 ? var_14 : var_15)), (((153 ? var_9 : -26171))))), var_8);
    var_20 = ((~(((var_16 + var_4) ? var_8 : ((var_10 ? var_11 : var_2))))));
    var_21 = (max((max(159, (max(var_3, var_9)))), var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 = 26178;
                    var_23 = (((((((var_14 ? var_17 : 17))) ? (max((arr_0 [3]), (arr_5 [i_0] [i_0] [i_0]))) : -71))) ? (((((-(arr_5 [10] [i_1 - 3] [i_2])))) ? (1 - 3669917345) : var_1)) : var_17);
                }
            }
        }
    }
    #pragma endscop
}

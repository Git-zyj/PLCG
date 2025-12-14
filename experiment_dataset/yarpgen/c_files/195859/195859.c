/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? (((var_10 * var_8) | ((var_0 ? var_5 : var_1)))) : ((((max(var_9, var_7)))))));
    var_12 = ((((max((((var_8 ? var_1 : var_0))), var_10))) + var_5));
    var_13 = 616959358;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] = (max(var_4, (arr_0 [i_1 + 3])));
                var_14 -= ((-((var_2 ? (((max(1, var_9)))) : (((arr_2 [i_0] [10] [10]) ? var_9 : var_10))))));
            }
        }
    }
    #pragma endscop
}

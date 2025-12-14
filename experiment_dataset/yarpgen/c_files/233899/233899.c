/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 -= (((min((arr_4 [i_0]), (arr_4 [i_1]))) >= ((((!(arr_4 [i_0])))))));
                arr_6 [i_0] [i_1] = (arr_2 [i_0]);
            }
        }
    }
    var_19 = (var_0 || var_9);
    var_20 = ((((var_6 ? var_13 : var_8)) + (((!var_9) ? -25006 : var_3))));
    var_21 = ((var_1 ? ((var_12 ? (max(7520128749070652369, 7520128749070652374)) : (((var_10 ? var_3 : var_3))))) : var_13));
    #pragma endscop
}

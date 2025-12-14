/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (arr_3 [i_0 - 2] [i_0 + 2] [i_0 - 1]);
                var_13 = (min(((-(max(var_6, (arr_2 [i_1] [i_1] [i_1]))))), 1));
                var_14 -= (((min(var_10, var_9)) >= (((min(((!(arr_3 [i_0] [1] [i_0]))), (12 || var_7)))))));
            }
        }
    }
    var_15 = max((max(var_0, ((var_6 ? -14 : var_1)))), ((var_11 ? ((max(var_9, -12))) : ((max(var_0, var_9))))));
    var_16 = ((min(((var_5 ? var_6 : 49445)), (21608 / var_6))));
    #pragma endscop
}

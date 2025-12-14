/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((var_11 ? ((((!(arr_4 [i_0 + 3]))))) : (arr_2 [i_0] [i_1]))))));
                arr_6 [i_0] [11] = (!0);
            }
        }
    }
    var_13 = ((-8 ? var_10 : (((!var_3) ? ((max(-26, 105))) : -var_10))));
    var_14 = var_1;
    #pragma endscop
}

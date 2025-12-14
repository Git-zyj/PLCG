/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_1;
    var_15 = ((var_13 << (((max(var_12, var_4)) - 4931789489544146922))));
    var_16 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (-(((arr_0 [i_0] [i_0]) ? (((7457480382862781167 ? 7457480382862781167 : 7457480382862781167))) : var_10)));
                arr_6 [i_0] [i_0] [i_0] = (((arr_3 [i_0] [i_0]) ? (((!(arr_1 [i_0] [i_0])))) : (arr_4 [i_1] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}

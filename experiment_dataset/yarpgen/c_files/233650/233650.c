/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [13] = (min(-7134532642177136101, (arr_1 [i_0] [i_0])));
                var_17 += (min((min((var_8 & var_14), (var_1 <= 0))), (6327161091098091842 / 1356378380)));
                var_18 += 251;
            }
        }
    }
    var_19 = ((-(max(0, var_5))));
    var_20 += (((((var_15 ? (max(18446744073709551613, var_0)) : var_11))) ? (((!(!var_13)))) : (max(32766, ((5 ? var_3 : var_5))))));
    #pragma endscop
}

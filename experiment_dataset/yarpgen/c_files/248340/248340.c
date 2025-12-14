/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((min((min(1485199568, var_15)), 44))) ? var_7 : (max(7676332617090516755, ((min(55, -1623985349))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 - 1])))) ? (((arr_1 [i_0 + 3]) + 55)) : ((-2102347787 ? (arr_1 [i_0 + 3]) : var_4))));
                var_19 = (((((arr_4 [i_0 + 2]) / (arr_4 [i_0 - 2]))) - (((arr_3 [i_0 - 1]) / 629))));
            }
        }
    }
    var_20 = 64931;
    #pragma endscop
}

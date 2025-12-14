/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_12, var_14))) ? 0 : var_9));
    var_17 -= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 += (((((~(arr_0 [i_0])))) ? (arr_3 [i_0]) : -var_8));
                var_19 = (max(((min(1, (arr_2 [i_0])))), (arr_1 [i_1])));
                var_20 = (((((((min(var_0, (arr_1 [i_1])))) ? (((var_9 != (-127 - 1)))) : -var_11))) ? (+-1) : 3852877275));
                arr_4 [i_1] = ((1 ? 36 : 105));
                arr_5 [i_1] = var_3;
            }
        }
    }
    #pragma endscop
}

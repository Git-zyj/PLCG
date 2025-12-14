/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 18446744073709551612;
    var_20 = -var_12;
    var_21 = (max((min(((var_9 ? var_9 : var_18)), (~var_11))), (((var_5 ? (~var_15) : ((min(var_0, var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = ((0 + (max(((-8365568085792227468 ? var_16 : var_17)), (min(var_0, 34909494181888))))));
                arr_6 [i_1] [17] [i_1] = (~((var_0 ? var_6 : var_14)));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] = (min((14227649072396092767 % var_11), (((min(1, -11))))));
                arr_6 [i_0] = (min((((75 ? ((53625 << (2339 - 2337))) : var_17))), ((-32766 ? (max(var_6, (arr_0 [i_1] [i_1]))) : (((min(var_9, var_2))))))));
            }
        }
    }
    #pragma endscop
}

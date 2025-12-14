/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_3;
    var_21 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_6 [10] [10] = 9105100602070918604;
                arr_7 [i_0] [i_1] [i_0 + 2] = (max((min(15081173096176789560, (~-373029556))), -373029556));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (3624300424 << ((max(1, 1))));
                    var_20 = (3368548320979791743 < ((((arr_1 [20]) * (((127 == (arr_2 [1]))))))));
                }
            }
        }
    }
    var_21 = var_18;
    var_22 = (((var_13 <= 449063127) ^ (min(var_6, (-2536507308231389486 <= 1106452145876255707)))));
    #pragma endscop
}

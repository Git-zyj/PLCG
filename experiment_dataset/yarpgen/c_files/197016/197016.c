/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (max((~65), var_3));
                    arr_7 [i_0] = (103 / -var_5);
                }
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}

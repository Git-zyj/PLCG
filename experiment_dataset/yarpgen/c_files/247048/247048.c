/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_0 [9]);
                arr_5 [i_1] = (max((((~95) ? (arr_3 [i_0] [i_1] [i_1]) : -96)), (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}

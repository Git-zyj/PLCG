/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((329294429 && (((var_3 ? var_0 : var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (arr_2 [i_2] [i_1]);
                    var_18 = (max(var_18, ((max(0, 197)))));
                    var_19 -= (max(var_6, 7));
                }
            }
        }
    }
    #pragma endscop
}

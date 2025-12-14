/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((max(var_10, (min((arr_5 [i_0] [i_0] [i_0 + 1] [i_0]), var_8)))))));
                    var_21 = max(var_13, (max((max(var_1, var_3)), ((max(var_16, var_17))))));
                    var_22 = (max(var_22, ((max(var_5, (min(var_11, var_3)))))));
                }
            }
        }
    }
    #pragma endscop
}

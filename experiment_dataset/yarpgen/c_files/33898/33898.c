/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((((arr_4 [0]) | var_12)))));
                    var_17 = ((((arr_3 [i_1 - 1] [i_1] [i_0]) || 11834707463395188663)));
                }
            }
        }
    }
    #pragma endscop
}

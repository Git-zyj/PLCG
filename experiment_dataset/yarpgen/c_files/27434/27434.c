/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_7, var_1));
    var_13 = (min((+-44053), 15360));
    var_14 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 += (min(var_9, (4205077697 || var_5)));
                    var_16 |= (max(3444581149, (min((min(15377, var_3)), (arr_7 [i_1] [i_2] [i_2])))));
                    var_17 = var_8;
                }
            }
        }
    }
    #pragma endscop
}

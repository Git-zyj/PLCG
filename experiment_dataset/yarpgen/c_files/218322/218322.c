/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 -= (~var_4);
    var_13 = 17907880828880771086;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((min(125, (arr_1 [i_0] [i_1]))))));
                var_15 = 784104368;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_16 = (((min(var_8, var_2))));
                    var_17 = -30691;
                }
            }
        }
    }
    #pragma endscop
}

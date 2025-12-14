/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [14] [i_1] [5] = ((var_5 ? ((max((arr_1 [6] [i_1 + 3]), (arr_5 [i_1 + 3] [8] [i_1 + 3])))) : (-4151550349403632010 ^ var_1)));
                    var_13 = (max(((281474976710654 * (arr_2 [8] [i_1]))), ((((~30) & (arr_0 [i_1 + 1] [18]))))));
                }
            }
        }
    }
    #pragma endscop
}

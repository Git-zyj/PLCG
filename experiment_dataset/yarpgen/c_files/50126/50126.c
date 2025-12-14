/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (max((max(12, ((var_8 ? var_1 : (arr_2 [i_1 + 3] [i_1 - 3] [i_1 + 3]))))), ((((~var_3) ? (~var_1) : (var_5 - var_8))))));
                    var_11 = (arr_5 [i_1 - 2] [i_2]);
                    var_12 += var_8;
                }
            }
        }
    }
    var_13 = ((-((1130910023 ? 31 : ((219 ? 55 : 1338982924506753094))))));
    var_14 = var_1;
    #pragma endscop
}

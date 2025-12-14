/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (((max(97, (arr_3 [i_0])))));
                    arr_8 [i_0] [i_0] = var_8;
                    arr_9 [5] [5] = 150;
                }
            }
        }
    }
    var_14 = 1572146999;
    #pragma endscop
}

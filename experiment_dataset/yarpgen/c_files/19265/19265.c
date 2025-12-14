/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(~var_6)));
    var_13 = (~var_7);
    var_14 = ((~((~(!255)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 3] [i_1] [i_2] [i_1] = (min(((~(arr_2 [i_1]))), ((((!255) & 4786)))));
                    var_15 = (~6333227013224179395);
                }
            }
        }
    }
    #pragma endscop
}

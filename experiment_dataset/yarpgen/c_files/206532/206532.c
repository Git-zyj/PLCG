/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_2) ? var_2 : (max(3173822130, var_6))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (~var_7);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = var_5;
                    arr_9 [3] [i_1] [i_1] = var_0;
                }
            }
        }
        arr_10 [i_0] = (min(var_10, ((max(545, 692512151)))));
    }
    #pragma endscop
}

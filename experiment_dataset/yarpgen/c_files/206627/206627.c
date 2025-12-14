/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_10 = (min(var_10, var_7));
        var_11 -= ((72 ? 200 : ((65 ? 35587 : 3))));
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_12 = (~((35587 ? 32767 : -29417)));
                    var_13 = 4294967295;
                    var_14 = -894364715;
                }
            }
        }
        var_15 -= (arr_7 [i_1]);
    }
    var_16 = (~var_4);
    #pragma endscop
}

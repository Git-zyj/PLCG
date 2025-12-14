/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_4, ((-187558623 ? -187558623 : 187558622))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_11 = (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [1]))), 187558623));
        arr_2 [i_0] [i_0] = 0;
        var_12 = (~var_3);
        var_13 = (arr_1 [14]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [13] = 134217712;

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_14 = (min(var_14, 77));
                arr_13 [i_3] [i_2] [i_2] [i_3] = (!-187558628);
            }
            arr_14 [i_1] [i_1] [i_1] = (arr_6 [i_1] [8] [i_2]);
        }
        arr_15 [6] [i_1] = (arr_9 [i_1] [i_1]);
        var_15 ^= (arr_9 [i_1] [i_1]);
    }
    #pragma endscop
}

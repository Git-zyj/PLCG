/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_9 * (!26)));
    var_14 = ((var_5 ? ((((var_1 >> (var_3 - 9018560138540534555))) * 4294967294)) : var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (((~1) ? ((max(45703, (!46)))) : -55));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_2] [i_1] [i_0] |= (~var_1);
                    var_16 ^= ((var_9 % ((var_3 >> (var_0 - 32288)))));
                }
                var_17 = ((45703 ? var_0 : (arr_5 [i_1] [i_1] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = -906900679;
        arr_3 [i_0] |= 1869849942;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_3] [5] [i_1] [i_1] [i_1] = (2860928512 | -906900671);
                                var_21 = (max(var_21, (((131070 ? 1 : 116)))));
                                var_22 |= (arr_15 [i_0] [i_0]);
                            }
                        }
                    }
                    var_23 = ((((!(arr_8 [4] [i_1] [i_1]))) ? (~var_4) : (arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [i_2])));
                }
            }
        }
    }
    var_24 = (max(var_24, var_9));
    #pragma endscop
}

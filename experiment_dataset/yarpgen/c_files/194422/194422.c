/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(15, ((((min(var_13, 17)) != 907804919)))));
    var_16 = (max(var_16, 27105));
    var_17 = (max(((~(var_7 | 59))), var_2));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((16 >= (arr_3 [12] [1] [3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 ^= (!31569);
                                var_20 = (arr_4 [17] [14] [i_4]);
                                var_21 |= 20;
                            }
                        }
                    }
                    var_22 = (arr_3 [i_2 - 2] [i_2 - 2] [i_2 - 1]);
                }
            }
        }
        var_23 = (((((~(arr_5 [9] [i_0])))) ? 23 : 917939873));
        var_24 = (arr_4 [i_0] [i_0] [6]);
    }
    #pragma endscop
}

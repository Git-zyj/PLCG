/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [4] [i_0] [i_0] = (~var_10);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = max((131 + -2147483637), (9594315344347125503 + 4198890949));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_1] = (arr_0 [i_0] [i_0]);
                                var_22 += (max(4198890931, 124));
                                var_23 = ((-96076364 ? (max(((max(248, var_16))), (arr_12 [11]))) : (((1 >> (124 - 113))))));
                                arr_14 [i_0] [i_2] [i_0] = (max(var_9, var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, (!-var_6)));
    #pragma endscop
}

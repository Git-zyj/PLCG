/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((114 ? 127 : -115));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = (max((((!((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? 108 : (arr_6 [i_2 - 3] [i_1 - 1] [i_0]))))))), (((115 % 23) ? (((arr_1 [i_1] [i_1]) ? var_3 : (arr_1 [i_0] [i_1]))) : (arr_9 [i_0] [i_1 + 1] [i_2] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = ((!(arr_4 [i_1 + 1])));
                                var_16 = (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

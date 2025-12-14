/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2] = ((~(((arr_7 [i_2 + 2] [i_2] [i_2 + 2] [i_2]) ? (arr_7 [i_2 - 1] [i_2] [i_2 - 1] [i_2]) : 512))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (min((arr_7 [i_0 - 2] [i_0 - 2] [i_2 - 1] [i_0 - 2]), (((~(arr_7 [i_2] [i_2 - 1] [i_2] [i_4 - 1]))))));
                                var_15 -= (min((((-(arr_6 [i_0])))), var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 += (((~var_13) ? var_13 : (max(65043, (var_13 | 490)))));
    var_17 = (!var_5);
    #pragma endscop
}

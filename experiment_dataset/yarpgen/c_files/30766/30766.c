/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (arr_7 [i_0])));
                                arr_17 [i_0] [i_1 + 1] [i_2] = ((!(231 < -0)));
                            }
                        }
                    }
                    arr_18 [i_0] [i_2] = (1777718975280398734 ? 25 : 1);
                    var_12 = (min(((max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1])))), (arr_1 [i_1])));
                }
            }
        }
    }
    var_13 = (max((!var_6), 231));
    var_14 = (250 & 201);
    var_15 *= var_0;
    #pragma endscop
}

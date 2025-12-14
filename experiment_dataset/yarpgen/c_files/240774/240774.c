/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = var_2;
                                var_18 = (arr_6 [17] [1] [1]);
                                var_19 = (max(var_19, (arr_4 [i_0 - 2] [14])));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] = ((1 && ((min((arr_10 [i_0] [12] [8] [i_1] [i_2] [14]), ((((arr_10 [3] [3] [1] [1] [i_0] [i_0]) <= 2147483392))))))));
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}

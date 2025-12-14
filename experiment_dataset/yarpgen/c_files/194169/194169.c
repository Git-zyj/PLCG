/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = min(3939753900, 355213395);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_0] [i_1] [i_1] [i_0] = (((((!(var_2 && 8417))))) | (max(40230, -7943317730868043668)));
                            arr_10 [i_3 - 1] [i_1] [i_2] [i_1] [i_1] [i_0] = -125;
                            var_12 = var_3;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_13 = (min(var_13, var_10));
                                var_14 = 4503599627370495;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}

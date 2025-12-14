/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((max((arr_0 [i_1 + 2] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, ((((arr_3 [i_1 - 1]) > (max((arr_4 [i_0] [i_1 + 2] [i_0]), var_1)))))));
                            arr_8 [i_0] [i_1] [i_2 - 1] [i_3] [i_1] [i_2] &= var_7;
                        }
                    }
                }
                arr_9 [i_0] [i_1] = (max(2199023255551, 40288));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = ((!(((156 ? 2137495562 : (arr_3 [i_0] [i_0 - 1] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (arr_5 [i_0] [i_1]);
                                arr_11 [i_0] [i_0] [i_0] [1] [i_1] [i_0] = (((((max((arr_4 [i_3] [i_0] [i_1] [i_0]), (arr_2 [i_4] [i_2]))))) ? (max(var_2, (((arr_1 [i_3]) ? 1 : -122)))) : var_6));
                                var_20 = ((var_8 ? 1 : (max(((var_8 ? 0 : 1)), (!var_9)))));
                                arr_12 [i_0] [i_4] [i_3] [i_0] [i_0] [i_0] = (((var_9 | 320577517) | (!65535)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 320577541;
    #pragma endscop
}

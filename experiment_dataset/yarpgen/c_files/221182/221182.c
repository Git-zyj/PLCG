/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = var_3;
                                var_18 = (min(var_18, (((((((arr_5 [i_1] [i_2 + 2] [i_3 + 2] [i_4]) ? (arr_4 [i_0 - 1]) : 103))) ? (((arr_1 [i_0 - 1]) - var_15)) : (((arr_5 [i_0] [i_2 + 2] [i_3 + 2] [i_4 - 2]) ? (arr_1 [i_4 - 1]) : (arr_1 [i_0 + 1]))))))));
                            }
                        }
                    }
                    var_19 = (arr_4 [i_0 + 1]);
                    var_20 = (max(var_20, ((max((4294705152 * 4294705152), (~28672))))));
                }
            }
        }
    }
    var_21 = (max((max(4294705152, (~var_9))), ((((var_5 || var_14) <= var_1)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = var_9;
                                var_21 ^= ((var_4 ? 5583356789360645936 : 2956610288));
                                var_22 = (max(var_22, ((max(((-16 ? var_10 : 9007199254740991)), ((max(3807474636, (arr_7 [i_3 - 1] [i_2 - 3] [i_1] [i_0])))))))));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [i_1] [i_2 - 3] = (arr_4 [i_0] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}

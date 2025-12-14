/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [8] [0] &= (((min(var_8, (-32767 - 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 - 1] [i_1 + 1] [i_2 - 1] [i_3] [i_2] [i_2] [i_4 - 1] = 20987;
                                var_17 = (arr_13 [i_2] [i_2] [i_1] [i_2] [i_3] [i_4]);
                                var_18 = (max(var_18, ((((arr_10 [i_0] [i_0 - 1] [i_0] [6]) ? (!var_2) : (max((min((arr_10 [1] [0] [i_2] [i_2]), var_5)), -14552)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

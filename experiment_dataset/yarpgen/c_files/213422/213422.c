/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = 32764;
                                var_18 = (max(-0, ((((max((arr_10 [1]), var_2))) ? 0 : (((min((arr_4 [i_0] [i_1] [i_2] [i_3]), (arr_11 [i_0])))))))));
                            }
                        }
                    }
                    arr_13 [9] [i_1] [i_0] [i_0] = 4294967291;
                    var_19 += ((~(((arr_12 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 2] [i_1]) - (arr_12 [i_0] [i_2] [i_0] [i_1 - 2] [i_1 - 4])))));
                }
            }
        }
    }
    var_20 = (min(var_20, ((min((((-7 - var_8) - 4294967295)), var_7)))));
    #pragma endscop
}

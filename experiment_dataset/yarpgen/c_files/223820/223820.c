/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (var_6 / var_4)));
    var_19 = (max(var_19, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (((((7396845663660847730 / (arr_1 [i_0] [i_0])) % 247))));
                    var_20 += var_15;
                    arr_9 [i_0] [i_0] [i_0] [14] = ((var_2 ? (!11049898410048703875) : (arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [11] [i_0] [i_0] [i_0] = max(((~(arr_15 [i_2 - 3] [i_1] [i_2]))), (arr_7 [i_0]));
                                arr_17 [i_0] [i_0] [i_0] [i_2 - 1] [22] [i_3] [i_4 - 1] = ((max((arr_6 [i_0] [i_1] [i_2]), var_13)));
                            }
                        }
                    }
                    var_21 = (max(var_21, (((11049898410048703895 >> (883440898 - 883440871))))));
                }
            }
        }
    }
    #pragma endscop
}

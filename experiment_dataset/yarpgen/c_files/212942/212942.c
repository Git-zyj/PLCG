/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((((((4095 >> (var_4 - 30569))) - (var_6 < var_3)))) < var_9))));
                                arr_14 [i_4] [i_1 - 1] [i_2] [i_4] [1] [i_1 - 1] [1] = ((1 - (var_0 ^ var_3)));
                                var_12 = var_4;
                                var_13 = (((((var_2 > (var_6 - 1)))) - 1));
                            }
                        }
                    }
                    var_14 = ((var_8 <= (var_8 != var_3)));
                }
            }
        }
    }
    var_15 = (0 - 1);
    var_16 = var_5;
    #pragma endscop
}

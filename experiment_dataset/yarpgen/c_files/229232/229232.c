/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((1668178634 ^ 52), (max(((min(var_6, var_5))), (~var_0)))));
    var_11 = ((+(max((4378680784104593730 ^ var_1), 1))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 = 7798026876619595702;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = -51;
                                var_14 ^= (min((min(((max(8, (arr_1 [1])))), (~-1480549853))), var_1));
                            }
                        }
                    }
                    arr_12 [i_1] [i_1] [i_0] [i_1] = var_3;
                }
            }
        }
    }
    #pragma endscop
}

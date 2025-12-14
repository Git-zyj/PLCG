/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    var_21 = var_2;
    var_22 = (-((max(var_17, 6827))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((min((max((arr_1 [i_0]), (arr_2 [i_0]))), ((min(667548175, var_5))))));
                arr_8 [i_1] = 1;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_23 = (arr_10 [i_4] [5]);
                                var_24 = (min(((~(arr_4 [i_0] [i_3 + 2]))), ((max((arr_3 [i_0]), var_12)))));
                            }
                        }
                    }
                }
                var_25 ^= ((58708 ? 0 : 46253));
                var_26 ^= (max((arr_0 [i_1 + 2] [i_1 + 1]), (arr_2 [i_1 + 2])));
            }
        }
    }
    #pragma endscop
}

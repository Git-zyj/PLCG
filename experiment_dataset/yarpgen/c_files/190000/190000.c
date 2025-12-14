/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = ((~((-(arr_10 [i_0] [i_0 - 3] [i_3 + 1])))));
                                var_17 = (max(var_17, (95270093 != 187)));
                                var_18 = ((((-(arr_16 [i_0 - 2] [i_3 - 1] [i_3 - 1] [i_4 - 1]))) < (((arr_16 [i_0 + 2] [i_3 + 1] [i_3 + 2] [i_4 + 2]) - (arr_15 [i_0 - 1] [i_3 + 1] [i_2] [i_3 - 1] [i_2])))));
                            }
                        }
                    }
                }
                arr_17 [6] = min(-var_8, (arr_4 [i_0 - 4]));
            }
        }
    }
    #pragma endscop
}

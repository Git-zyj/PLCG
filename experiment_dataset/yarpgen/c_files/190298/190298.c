/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 &= ((~((max(0, (min((arr_3 [i_0]), 1)))))));
                                arr_12 [i_0] [i_1] [i_3] [i_2] [i_0] = (max((~var_8), (max(1, 1))));
                                var_11 += (min(((-23 / (!var_7))), (min((~var_5), (~30467)))));
                            }
                        }
                    }
                    arr_13 [i_0] [9] [i_2] = ((-var_7 ? ((((arr_1 [i_0]) ? (arr_3 [i_0]) : 1))) : 90));
                }
            }
        }
    }
    var_12 = 0;
    var_13 = max(101, (max(180, (!8))));
    #pragma endscop
}

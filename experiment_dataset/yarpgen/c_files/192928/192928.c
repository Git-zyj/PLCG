/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_10 = (-108 && (arr_8 [i_2]));
                            arr_13 [6] [12] [22] &= ((!3528731324) < ((-((((arr_11 [i_0] [18] [i_2 + 1] [i_2 + 1]) || 1))))));
                        }
                    }
                }
                var_11 *= (arr_7 [i_0] [i_1] [2] [8]);
            }
        }
    }
    var_12 = (((2758870055 ? (((max(1, var_7)))) : var_5)));
    #pragma endscop
}

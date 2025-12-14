/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (min((arr_1 [i_4]), -2297627244009562519));
                                var_17 = (max(var_17, var_0));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] = (-(max(1, ((max(var_7, var_9))))));
                    var_18 = 3274;
                }
            }
        }
    }
    var_19 = (min(((!(!262143))), (((((var_13 ? var_14 : 2297627244009562507))) && -10822414048230766332))));
    var_20 = (1 || 0);
    var_21 = var_9;
    var_22 &= 63488;
    #pragma endscop
}

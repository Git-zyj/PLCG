/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_2 || var_6) | (~18404)))) || var_15));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_18));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_21 = 0;
                                arr_13 [i_3] [i_1] [i_2] [i_2] [i_4 + 1] = 16;
                            }
                        }
                    }
                }
            }
        }
        var_22 = (1 >= 1);
    }
    var_23 = var_4;
    #pragma endscop
}

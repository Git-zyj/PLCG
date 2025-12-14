/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= max(var_5, var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_10 [7] [i_1] [i_2] [i_3] = var_3;
                            var_14 = ((17762235242483528615 == (arr_0 [i_2])));
                            var_15 = var_6;
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_1] |= 2;
                var_16 = 0;
            }
        }
    }
    var_17 = var_3;
    var_18 = (!var_0);
    #pragma endscop
}

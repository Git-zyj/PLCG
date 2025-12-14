/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_19 += var_1;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_2] &= (((var_16 + var_3) ? (!-24980) : (arr_6 [i_1 - 1] [i_3 + 2])));
                            var_20 = (min(var_20, (((-24980 ? var_1 : var_11)))));
                        }
                        arr_11 [i_0] [i_1] [i_2] [i_3] = -25763;
                        arr_12 [i_0 + 1] [i_1 - 1] [i_0] [6] = arr_3 [i_1] [i_2] [i_0];
                    }
                    var_21 = ((-24965 ? (-24992 && 24992) : var_14));
                }
            }
        }
    }
    var_22 = (((max((max(-80, 1), -69)))));
    #pragma endscop
}

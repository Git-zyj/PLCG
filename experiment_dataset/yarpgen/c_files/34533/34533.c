/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(((((var_7 ? var_14 : var_11))) | ((2251799813685247 ? var_3 : 18446744073709551615))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_0;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [14] [i_3] = var_10;
                        arr_14 [i_2] [i_0] [i_2] [i_0] [i_2 - 1] [i_3] = ((17592186044415 - ((var_2 ? 17799041091041529103 : var_6))));
                    }
                    arr_15 [i_0] [i_0] [i_0] [14] = ((!((((-(arr_9 [i_1] [2]))) <= (((max((arr_0 [i_0]), var_5))))))));
                }
            }
        }
    }
    #pragma endscop
}

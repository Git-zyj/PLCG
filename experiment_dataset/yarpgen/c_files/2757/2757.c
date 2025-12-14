/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!9816);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_0 + 2] [i_1] [i_1] [i_3 - 2] [i_3] = ((!(((-(arr_0 [i_2]))))));
                        var_20 = (arr_6 [i_2 - 2] [i_2] [1] [i_0 + 1]);
                        arr_11 [i_0 + 2] [i_1] [i_2 + 3] [i_2] = 1;
                        arr_12 [i_1] [i_2] [i_1 + 1] [i_1] = 1;
                        var_21 -= arr_3 [i_2] [1];
                    }
                    var_22 = arr_0 [i_1 + 1];
                }
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}

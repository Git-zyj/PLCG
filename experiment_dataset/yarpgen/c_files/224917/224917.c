/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = var_10;
    var_20 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_1] [21] [6] [i_3] = 1101300025;
                        arr_12 [i_1] = var_10;
                    }
                    arr_13 [i_0] [18] [i_1] [i_2] = min(((var_16 ? (arr_7 [1] [i_2]) : (((108 < (arr_2 [i_1] [i_1])))))), (!-24));
                }
            }
        }
    }
    #pragma endscop
}

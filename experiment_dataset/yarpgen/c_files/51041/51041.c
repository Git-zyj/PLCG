/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0] = var_8;
                        arr_12 [i_0] = 0;
                    }
                    arr_13 [i_0] = ((var_4 >> (((!((max(1, -33))))))));
                }
            }
        }
    }
    #pragma endscop
}

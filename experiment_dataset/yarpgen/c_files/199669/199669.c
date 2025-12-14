/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((!((min((arr_2 [i_0] [i_0] [i_0]), var_6)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [8] [i_0] [i_0] [i_3] [2] [i_1] = (((151 - (arr_6 [i_2 + 1] [i_2 - 2]))));
                            arr_12 [i_0] [1] = (arr_8 [i_0] [i_0] [6] [i_0]);
                            arr_13 [i_0] [i_1] [i_2] [i_0] = min(4294967280, (((1023 == (arr_2 [i_2 + 2] [i_2] [i_2 + 2])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

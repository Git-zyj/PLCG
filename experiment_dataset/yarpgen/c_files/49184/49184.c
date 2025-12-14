/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max((max(var_9, var_11)), var_12)))));
    var_14 = (-1252388736417941669 - 10423919002388490733);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 *= (min((min(((max(0, var_7))), (min((arr_0 [13]), 124)))), (min(1252388736417941668, (arr_0 [i_1 + 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((min(((((arr_2 [i_2] [i_2]) || var_4))), (min(var_9, var_3)))))));
                            arr_10 [i_1] [i_1] = (max((max((arr_5 [i_3 - 1] [21] [i_1]), var_11)), ((min(-27959, (arr_1 [i_1 + 3]))))));
                        }
                    }
                }
                arr_11 [i_1] = (min(((max(var_0, var_0))), (min(var_12, 1378648125))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 33;
    var_15 = 184;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((max(((-(arr_0 [i_0]))), var_4)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_3] [i_3 + 1] = (max(((max(var_2, ((var_0 & (arr_4 [i_0])))))), (min(0, 0))));
                            var_17 = (max(var_17, (arr_2 [i_0])));
                            arr_10 [i_0] [i_3] [i_0] [i_0] = (arr_8 [i_0] [i_1] [i_1] [i_3 - 1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

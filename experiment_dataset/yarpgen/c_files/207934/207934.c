/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_19, (((38536 << (((max(var_12, var_3)) - 1701901437)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 += (max((arr_6 [i_3] [i_3] [i_3]), ((var_0 ? (arr_8 [14] [i_1] [i_2] [i_3] [i_0] [i_1]) : (arr_8 [6] [i_1] [6] [i_1] [6] [i_1])))));
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] = 2349027606;
                        }
                    }
                }
                var_22 -= -var_1;
            }
        }
    }
    #pragma endscop
}

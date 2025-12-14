/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (var_6 < var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0 - 1] |= (arr_3 [i_0 - 1]);
                    arr_10 [i_0] [i_0] = (arr_7 [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_14 = -4458871047926644171;
                arr_18 [i_4] [i_3] = (((((arr_11 [i_3]) / var_4)) * ((-(arr_11 [i_3])))));
            }
        }
    }
    #pragma endscop
}

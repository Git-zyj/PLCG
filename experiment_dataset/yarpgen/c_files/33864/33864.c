/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = (min(var_9, -4943));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = -6019644513032020063;

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_19 = (max((arr_5 [i_0 + 2] [1] [i_0 + 2]), (min((((arr_7 [4] [17] [4] [i_2] [i_3]) ? 268226389 : var_11)), (((var_7 + 9223372036854775807) >> 1))))));
                        var_20 = (arr_5 [i_0] [13] [i_2]);
                    }
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        var_21 = 4673257774912368400;
                        arr_12 [i_2] [7] = var_1;
                    }
                    var_22 = (max(var_5, var_0));
                }
            }
        }
    }
    #pragma endscop
}

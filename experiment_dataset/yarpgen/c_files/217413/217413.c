/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((max(var_0, var_18))))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (min((arr_1 [i_0 + 3] [i_0 + 1]), (arr_1 [i_0 + 3] [i_0 + 3])));
                    var_22 -= (((min((((arr_2 [i_0]) ? var_11 : (arr_0 [i_2] [i_2]))), (((arr_1 [i_0] [i_1 - 1]) ^ (arr_2 [i_1 + 1]))))) | var_2));
                }
            }
        }
        var_23 += ((!((var_1 != (arr_6 [i_0 + 1] [i_0 - 2] [i_0 + 2])))));
    }
    var_24 &= var_2;
    var_25 = (max(var_25, var_11));
    #pragma endscop
}

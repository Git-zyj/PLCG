/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((max((min((arr_3 [i_2 - 2] [i_1] [i_0]), (arr_3 [i_2 + 2] [i_1] [i_0]))), ((max(var_2, (arr_6 [i_2 + 2] [i_2] [i_1 + 2])))))))));
                    arr_7 [i_1] [16] [i_0] = (((((min(var_7, (arr_0 [i_1]))) + 2147483647)) >> (((arr_4 [i_1 - 1]) - 750164176))));
                    var_13 &= var_8;
                    var_14 = (((arr_2 [i_0]) * var_2));
                }
            }
        }
    }
    #pragma endscop
}

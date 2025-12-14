/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((((((arr_2 [i_0] [i_0]) + var_12)) + (((max((arr_3 [i_0] [i_0] [i_2]), var_1)))))) + -var_8)))));
                    var_15 = (max(12044260928827801933, 96358947));
                    var_16 = max(((+(min((arr_2 [i_0 + 2] [i_0 - 1]), var_5)))), (((~(var_7 || var_6)))));
                    arr_6 [i_0] [3] [i_0] [i_0] = ((~(var_2 <= var_5)));
                    arr_7 [0] [i_2] = (arr_3 [1] [i_1] [i_0]);
                }
            }
        }
    }
    var_17 = (max(var_17, var_6));
    var_18 = var_7;
    #pragma endscop
}

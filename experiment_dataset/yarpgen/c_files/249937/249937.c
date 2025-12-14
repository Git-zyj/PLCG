/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_9, -5760));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2]))), (((arr_1 [i_0 + 3]) ^ (arr_1 [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_0] [i_1] = (max((arr_3 [i_0]), (max((arr_0 [i_0]), 11204673016875803370))));
                    arr_8 [i_0] [i_0] = var_13;
                    var_15 = (max(var_15, ((((((arr_0 [i_1]) + 2147483647)) << (((((arr_1 [i_1]) && -5737)))))))));
                }
            }
        }
    }
    var_16 = (~-var_3);
    var_17 += (max(((((max(var_13, var_12))) ? (1 < 5743) : var_12)), ((((((-10016 ? -5737 : var_8))) ? (max(-1948185228, 1948185227)) : -var_7)))));
    #pragma endscop
}

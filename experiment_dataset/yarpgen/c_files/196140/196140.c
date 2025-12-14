/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1 + 2] [i_0] = (min((min((min(68719460352, 0)), 1)), var_7));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_15 = ((68719460348 % (arr_6 [i_0] [i_0] [i_0])));
                    arr_9 [i_0] [i_0] [i_2] = ((arr_3 [i_1 + 2] [i_1 + 2]) ^ ((((((arr_2 [i_0]) % 18446744004990091253))) ? 18446744004990091264 : (max(68719460392, (arr_3 [i_1 + 1] [i_0]))))));
                }
                arr_10 [i_1 + 2] [i_1] |= ((var_4 ? (min(var_2, -7548941924460203759)) : (((arr_1 [1] [i_1]) ? var_1 : (min((arr_3 [i_1 + 2] [i_0]), 1))))));
                arr_11 [9] = min(68719460343, 18446744004990091264);
            }
        }
    }
    #pragma endscop
}

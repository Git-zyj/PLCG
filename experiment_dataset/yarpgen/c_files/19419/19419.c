/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = (1 & 80);
    var_15 = (((var_1 - var_7) - var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = ((-((110 ? (arr_0 [i_0 - 1]) : (arr_2 [i_1])))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((~((2147483647 ? (arr_0 [i_0 + 1]) : -10345))));
                    arr_8 [i_1] [i_1] [i_2] = ((-(((((max(-10354, -80)))) - (((arr_1 [i_0]) + var_6))))));
                }
                var_16 = 98;
                var_17 += 65522;
                var_18 += ((!((max((arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1]), 133)))));
            }
        }
    }
    var_19 += (~10348);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = (((max((arr_7 [i_1] [i_1 + 3] [i_1 + 1]), (arr_7 [6] [i_1 + 2] [i_1 - 2]))) != (((arr_7 [i_1] [i_1] [i_1 - 2]) / (arr_7 [i_1] [19] [i_1 + 3])))));
                    var_15 = (max(var_15, (((~(((-1 && (arr_3 [i_1 + 3])))))))));
                }
            }
        }
    }
    #pragma endscop
}

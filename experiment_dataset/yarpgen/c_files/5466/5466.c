/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = -18446744073709551602;
        arr_3 [i_0] = (min((arr_2 [i_0]), (((arr_2 [i_0]) ? var_11 : (arr_2 [i_0])))));
    }
    var_19 = var_14;
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_20 = arr_1 [i_2];
                    arr_12 [i_2] [i_2 + 1] [i_2] [i_2 - 2] = max(((min(((var_8 ? var_2 : 30118)), (arr_5 [12] [15])))), ((~(arr_6 [i_2 - 2] [i_2 + 1]))));
                    var_21 &= (arr_8 [3] [i_2 + 1] [i_2]);
                    var_22 = min(((((max(var_16, var_11))))), (((65515 + var_2) * (min(12205, 8225171707192927281)))));
                }
            }
        }
    }
    #pragma endscop
}

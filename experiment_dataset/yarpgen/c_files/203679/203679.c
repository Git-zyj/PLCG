/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((~((var_5 ? var_8 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (arr_0 [i_0]);
                arr_6 [i_0] [7] = (923339252463687061 == 923339252463687071);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_15 = 18446744073709551604;
                arr_14 [i_2] = (83 < -84);
                arr_15 [13] = var_6;
            }
        }
    }
    var_16 = var_2;
    #pragma endscop
}

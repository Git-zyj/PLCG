/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 ^= ((!((((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - 21824)))))));
        var_21 |= var_8;
        var_22 -= ((var_7 ? (-27469 & -27476) : (arr_1 [i_0] [i_0])));
        var_23 = (arr_1 [i_0] [i_0]);
    }
    var_24 = var_16;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                var_25 = 903680514;
                arr_8 [1] [i_1] = (max((var_11 - 3384282602), (((arr_5 [i_1] [i_2] [i_2]) - (arr_5 [i_2] [i_2] [i_1])))));
                var_26 = var_6;
            }
        }
    }
    var_27 += ((-(min(((25773 ? 16576 : 48959)), ((max(var_11, var_10)))))));
    #pragma endscop
}

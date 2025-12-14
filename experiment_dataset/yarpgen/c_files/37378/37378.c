/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = (min(var_15, (((!(arr_0 [i_0 + 2]))))));
        arr_2 [i_0] [i_0 + 1] = ((!(arr_0 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = var_12;
                    var_16 &= (arr_5 [i_2 + 1] [i_1] [i_0]);
                    var_17 = ((-1364632153 + 2147483647) << (((arr_3 [1] [i_1] [i_2]) - 470520630)));
                    var_18 -= 1;
                }
            }
        }
        arr_8 [1] [1] = 1;
    }
    #pragma endscop
}

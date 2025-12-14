/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_5, 117440512));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = var_5;
                    var_11 = ((((~(~-336137393)))) ? -5785132688028188192 : ((((((20787 ? 19236 : 10463180660747524813))) ? var_2 : 1))));
                    var_12 = -var_2;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = (((((((min(var_3, var_6)) + 2147483647)) << (((var_9 && var_7) - 1))))));
        var_13 = var_7;
        arr_15 [i_3] [i_3] = ((((!(!68719476735))) ? var_8 : ((2824478037 - (max(var_8, var_9))))));
    }
    var_14 = ((var_0 >> (var_2 - 36124)));
    #pragma endscop
}

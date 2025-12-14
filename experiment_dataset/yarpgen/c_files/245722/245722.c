/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((((max(var_2, var_18)))) & var_15)), var_6));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 = (max(var_13, (max((max((arr_0 [i_0]), var_18)), (arr_0 [i_0])))));
        arr_2 [i_0] [i_0 - 1] = ((min((arr_0 [i_0]), (max(var_14, (arr_1 [i_0]))))));
        var_21 = var_2;
        var_22 = (max(var_22, (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_23 += (46157 + -79);
                        arr_16 [i_1] [i_2] [i_2] [i_3] [i_2] = var_8;
                        var_24 = var_4;
                        var_25 = var_10;
                        var_26 = (min(var_26, var_4));
                    }
                }
            }
        }
        var_27 = var_11;
    }
    var_28 = (max((max((var_12 * var_7), ((max(var_15, var_8))))), var_6));
    var_29 ^= ((var_13 + (max(var_0, var_6))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_16));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 &= (((arr_3 [i_0] [i_0]) ? (((arr_0 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_0]))) : (arr_2 [i_0])));
        var_21 = var_18;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = var_15;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_23 &= ((var_3 * (((!(arr_9 [i_1] [i_2 - 4] [i_2] [i_2 - 4] [i_2 - 4] [i_2]))))));
                        var_24 = (((((((arr_9 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3]) >> (arr_11 [i_2] [i_2]))) ^ (arr_9 [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) >= ((((var_12 || (arr_6 [i_0] [i_1])))))));
                    }
                }
            }
        }
    }
    var_25 = (var_6 % var_15);
    var_26 = (var_12 == var_6);
    #pragma endscop
}

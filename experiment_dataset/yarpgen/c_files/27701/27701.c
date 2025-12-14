/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 *= var_1;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_14 = (min(var_14, (((255 ? (((arr_1 [i_1 - 1] [i_1 - 1]) ? (min(var_2, var_9)) : (~-2))) : (arr_3 [i_0] [i_0]))))));
            var_15 = (arr_4 [i_1] [i_0]);
            var_16 -= var_1;
            var_17 -= (var_1 ? (arr_4 [i_0] [i_0]) : (((((var_2 ? var_3 : -9223372036854775807))) ? (arr_4 [i_0] [i_1]) : (((arr_1 [i_0] [4]) ? var_12 : var_12)))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_0] [4] = (arr_4 [i_2] [i_0]);
            var_18 = (min(((800621052917688952 ? ((var_8 - (arr_0 [i_2]))) : (var_4 - 6))), (arr_0 [i_2])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] &= var_6;
                        arr_17 [i_3] [i_2] [15] = 4482909184003051782;
                        var_19 = ((((min(0, var_4))) * (arr_10 [i_0] [i_2] [i_3] [i_3])));
                        arr_18 [17] [i_3] = 2;
                        var_20 &= var_4;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_21 = (~var_1);
            var_22 = ((-110 ? 1 : ((((min(var_1, var_4)) ? ((-(arr_3 [i_0] [i_0]))) : ((((var_1 || (arr_6 [5] [i_0] [i_5]))))))))));
        }
        arr_21 [9] [i_0] = (!var_9);
    }
    var_23 = var_11;
    #pragma endscop
}

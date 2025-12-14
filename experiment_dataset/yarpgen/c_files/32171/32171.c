/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_0 + 3] [i_1] = (((arr_5 [i_1] [i_2]) % ((min((max((arr_3 [i_0 - 1] [i_1] [i_2]), -120)), (-115 >= -27))))));
                    var_13 = (min(((-((~(arr_0 [i_0] [i_1]))))), (arr_3 [i_0 + 3] [i_1] [i_2])));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_14 = (((((max((((arr_2 [i_1]) ? var_12 : (arr_3 [i_1] [i_2] [i_3 + 1]))), -98)) + 2147483647)) >> (85 - 54)));
                        var_15 = ((+((var_9 ? var_10 : (((arr_8 [i_0 + 3] [i_0 + 3] [i_2] [3]) - (arr_6 [5])))))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1] = (~-63);
                        arr_15 [i_0] [i_1] [i_1] = ((-((0 ? ((85 ? -55 : (arr_12 [5]))) : 84))));
                    }
                    arr_16 [i_0] [i_1] [i_1] [i_2] = ((max(85, -85)));
                }
            }
        }
    }
    var_16 = ((-((~((var_9 ? -42 : var_2))))));
    var_17 = (max(var_17, -14));
    var_18 = (min(var_18, (min(-7, 38))));
    var_19 = (max(var_19, ((min((-var_4 - -var_12), (((65 <= 42) ? -var_11 : var_10)))))));
    #pragma endscop
}

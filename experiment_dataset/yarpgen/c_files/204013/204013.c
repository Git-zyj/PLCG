/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = var_2;
        var_18 *= ((~((~(arr_1 [i_0] [i_0])))));
        var_19 *= ((var_9 ? 1073741823 : (5992540711336063932 / -35)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((1198204441 & (((arr_0 [i_1]) / 5992540711336063921))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_12 [i_3] [i_3] [i_3] = var_12;
                arr_13 [i_2] [i_3] = -33;
                var_20 -= var_8;
                arr_14 [i_3] [i_2] [i_1] |= (((!var_7) && (arr_1 [i_1] [i_2])));
            }
            arr_15 [i_1] |= 3096762855;
        }
    }
    var_21 = var_5;
    var_22 = (min(var_22, var_14));
    #pragma endscop
}

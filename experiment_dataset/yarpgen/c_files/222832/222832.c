/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_17;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (((arr_2 [i_0] [i_0]) - (arr_1 [7])));

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_22 += 0;

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_23 = 95;
                var_24 = (max(var_24, (((31467 & (arr_1 [i_0]))))));
                var_25 |= ((arr_8 [i_0]) / (arr_6 [i_1 - 1] [i_1 - 1]));
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                arr_14 [i_0] [i_1] [i_3] = ((6 - (arr_3 [i_1 - 1])));
                var_26 = (max(var_26, 0));
            }
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_27 = ((+(((arr_9 [i_4]) + 6))));
            var_28 = (-(arr_7 [i_4] [i_4] [i_0]));
        }
        var_29 = var_11;

        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            var_30 = (min(var_30, (arr_2 [i_0] [i_5 - 1])));

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_31 ^= (arr_20 [i_5]);
                var_32 = (((arr_22 [i_5 - 1] [i_5 + 1] [i_5 - 1]) > (arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1])));
            }
        }
    }
    #pragma endscop
}

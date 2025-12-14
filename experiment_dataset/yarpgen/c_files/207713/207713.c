/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = 1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                var_20 = (arr_5 [i_0] [i_0] [i_0]);
                arr_11 [i_0] [i_1] [i_1] [i_2] = (1 + 1);
            }
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                arr_15 [i_1] = 1;
                arr_16 [i_0] [i_1] = 485490568;
            }
            var_21 = 9223372036854775804;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
        {
            arr_19 [6] [i_0] [i_4 + 1] = ((((arr_9 [i_0] [i_0] [i_0]) - -1150207393)));
            var_22 |= (((arr_2 [i_0] [i_4 + 1]) - (arr_9 [i_0] [i_0] [i_4 + 1])));
            var_23 *= ((((((arr_6 [i_0]) & 121))) || (arr_13 [i_0] [i_4] [i_4 + 1] [i_4 + 1])));
        }
        var_24 = ((3809476738 != (((((arr_6 [i_0]) && 4294967295))))));
    }
    var_25 = var_9;
    var_26 = (var_1 < var_2);
    #pragma endscop
}

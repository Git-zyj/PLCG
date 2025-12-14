/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] &= -2020733269631395917;
            arr_7 [0] [i_1 - 1] = (!54885);

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_21 ^= -var_17;
                arr_10 [i_0] [14] [i_1 + 1] [i_2] = ((!(arr_2 [i_0])));
                var_22 = (5 ? (arr_0 [i_2] [i_1 + 1]) : (arr_5 [i_0] [i_1 - 1]));
            }
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_18 [i_4] &= (-1943922802680054147 == var_14);
                arr_19 [i_3] = -1485757624;
                arr_20 [i_3] [i_3] = (!-1943922802680054141);
                var_23 = (min(var_23, (((var_5 < (arr_1 [i_0]))))));
            }
            var_24 = ((((1943922802680054166 >> (-1943922802680054167 + 1943922802680054217)))) ? (arr_5 [i_0] [i_3]) : ((133 ? var_18 : -1943922802680054167)));
        }
        var_25 = ((var_17 != (!222)));
        var_26 = ((1943922802680054158 ? (((1943922802680054160 ? 9897 : -9903))) : (arr_0 [i_0] [i_0])));
        var_27 = (min(var_27, 136));
    }
    #pragma endscop
}

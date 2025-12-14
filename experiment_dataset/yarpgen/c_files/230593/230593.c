/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((var_9 ^ ((max(var_0, var_4)))))));
    var_11 = var_9;
    var_12 = (var_9 < var_3);
    var_13 = (!-var_3);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((var_4 ? (((arr_0 [i_0]) % (arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (arr_0 [i_0]);
                    var_16 = (max(var_16, (((arr_2 [i_1] [i_1]) || ((((arr_5 [i_0] [i_0] [17] [i_2]) ? (((max((arr_0 [i_0]), var_2)))) : ((var_7 * (arr_5 [7] [i_1] [i_2] [i_2]))))))))));
                    var_17 = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_18 = var_2;
        var_19 |= (arr_7 [i_3] [i_3]);
        var_20 = (arr_4 [i_3] [1]);
        var_21 = (100 || 513461961649700318);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_22 = (arr_10 [i_4]);
                        arr_20 [14] [i_5] [i_5] [i_5] = (arr_19 [i_4] [i_5] [i_5] [i_7]);
                        var_23 += var_0;
                        var_24 = (-(arr_16 [i_4] [i_5] [i_6]));
                        arr_21 [i_5] [i_5] [i_5] = var_0;
                    }
                }
            }
        }
        arr_22 [i_4] [i_4] = -57;
        var_25 = (((arr_11 [i_4] [i_4]) / (((arr_13 [i_4] [i_4] [i_4]) ? var_7 : var_4))));
    }
    #pragma endscop
}

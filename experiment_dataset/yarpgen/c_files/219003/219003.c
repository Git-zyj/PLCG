/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = min((67 < -50), ((~((539179928 ? var_4 : -1960261754)))));
                        var_13 &= (((((16384 ? var_11 : -22))) ? (arr_4 [i_2 - 1] [i_2 + 1] [i_2 - 1]) : ((((arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1]) < 21399)))));

                        for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_0] [16] [i_4] &= var_1;
                            var_14 = (!var_0);
                            arr_16 [i_1] [i_1] [i_0] = (min(-78, var_10));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_5 [i_3]);
                            arr_20 [i_0] [i_0] [i_0] = ((arr_12 [i_0] [i_0] [i_0]) & (arr_12 [i_0] [i_0] [i_2 - 1]));
                            arr_21 [i_1] [i_5] [i_2] [i_5] [i_3] [i_1] [i_5] = ((~((var_3 ? var_10 : var_12))));
                            var_15 = var_5;
                        }
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] = ((-((var_5 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
        var_16 = arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [5];
        arr_23 [i_0] = var_1;
        var_17 = 1880338643;
    }
    var_18 = var_9;
    var_19 -= var_0;
    var_20 = max((((16384 > (var_2 > 17609)))), ((var_10 ? (min(424588371, var_2)) : (~var_0))));
    #pragma endscop
}

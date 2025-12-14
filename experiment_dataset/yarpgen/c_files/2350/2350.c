/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = max(var_9, var_1);

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_11 ^= 1459269289;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = var_6;
                    var_12 += (var_7 > -126);
                    var_13 = var_4;
                }
            }
        }
        var_14 = ((1 ? (arr_0 [i_0]) : (!-64)));
    }
    for (int i_3 = 3; i_3 < 23;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    arr_18 [i_3 - 2] [19] [i_5] [i_3 - 2] = ((((min(1963927589, (arr_4 [18])))) ? 42963 : ((max((arr_1 [i_3] [i_3 - 1]), 1)))));
                    arr_19 [i_3] [i_4] [i_5] = 1;
                    arr_20 [i_3] [i_3] [i_3] = ((-(((arr_17 [i_3] [i_3 + 1] [15] [i_3]) ? ((-(arr_1 [i_3 + 2] [20]))) : (arr_2 [22])))));
                    arr_21 [i_3] [i_3] [0] = ((-((((arr_12 [13] [i_4]) <= 1)))));
                }
            }
        }
        var_15 = (arr_9 [i_3]);
        var_16 = (max(var_16, 4541964348868193217));
    }
    #pragma endscop
}

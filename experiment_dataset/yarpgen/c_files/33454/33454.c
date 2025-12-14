/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((((~(arr_0 [i_0]))))) ? ((((var_5 > (arr_1 [8] [0]))))) : (~var_3)));
        arr_3 [4] = ((((((((arr_1 [i_0] [3]) & var_1))) ? -var_0 : var_9)) >= ((((!(arr_1 [7] [1]))) ? 1931761457 : var_3))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        var_12 = (((var_8 / -16000115704263080705) && ((((arr_7 [i_1]) * (arr_12 [i_1] [i_3 + 1] [i_4 - 1]))))));
                        var_13 = (arr_7 [i_4]);
                    }
                }
            }
        }
        var_14 = (!-26);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_15 = (arr_17 [1] [i_5]);
        var_16 -= (((((var_6 ? ((254 - (arr_15 [12]))) : (((arr_17 [16] [2]) ? 31 : 255))))) ? var_8 : (((((var_10 - 4582327953235538731) > (min(31804, var_10))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_17 = ((!(arr_19 [i_6])));

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_18 = 0;
            var_19 |= 1;
            var_20 = (arr_21 [1] [i_7]);
        }
    }
    var_21 = (max(((((max(var_10, var_7))) ? (var_7 + var_9) : var_5)), var_9));
    #pragma endscop
}

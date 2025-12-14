/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((min(48, (arr_0 [i_0])))), (~182)))) ? 412929659 : ((((((((arr_1 [i_0]) <= (arr_0 [i_0])))) < (arr_0 [i_0])))))));
        var_14 = var_12;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, ((((((!(arr_4 [i_0])))) > ((~(~206))))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_16 = (0 * 107753797);
                            var_17 = 211;
                            arr_15 [i_0] = 204;
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        var_18 = -89530049;
        var_19 &= (arr_16 [i_5 + 2]);
        var_20 = min((min((arr_16 [i_5 - 3]), (arr_16 [i_5 - 3]))), (((arr_16 [i_5 - 3]) ? (arr_16 [i_5 - 3]) : var_5)));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_21 = (min(var_21, ((((arr_18 [i_5] [i_6] [i_6]) % (arr_18 [i_5 + 2] [i_5 - 2] [i_5 - 2]))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    {
                        var_22 = var_0;
                        var_23 = (min(var_23, ((((arr_19 [i_5] [1] [8]) & (arr_17 [i_8 + 2] [i_5 + 1]))))));
                        arr_24 [i_7] [i_7] [15] [i_7] = (~255);
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_27 [i_5] [10] [i_5] = 431858989;
            arr_28 [i_9] = (((((-(arr_23 [i_5] [i_5] [i_5] [i_5] [i_9] [i_9])))) ? (((!(arr_17 [i_9] [i_9])))) : (((((!(arr_16 [1])))) ^ 204))));
        }
    }
    var_24 *= 49;
    #pragma endscop
}

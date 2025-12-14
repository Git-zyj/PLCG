/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = var_9;

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_12 += (((-738603139 ? 1 : 1)));
        var_13 = (arr_0 [i_0 + 1]);
        var_14 = ((min(var_8, (arr_1 [i_0 + 1]))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_1 [i_1]);
        var_15 -= (((92 >> 0) && var_5));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_16 = ((!(~1)));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_2] [i_5] = ((var_3 ? -var_9 : 51702));
                            arr_19 [i_1] [i_1] [6] [i_1] [i_1] [3] [3] = (arr_3 [i_3] [i_2]);
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6] [i_4] [3] [3] [3] = ((-1554858967 ? (!var_3) : var_5));
                            var_17 -= (var_2 + -389071686);
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_18 = 127;
                            arr_26 [i_1] [i_1] [i_1] [i_4] [i_7] = var_5;
                        }
                    }
                }
            }
            arr_27 [i_1] = -5908565781856248891;
            var_19 = ((arr_7 [i_1 - 1]) ? (arr_7 [i_1 - 1]) : 1);
        }
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_20 ^= ((((-(((arr_15 [i_8] [4] [i_8] [10] [i_8]) ? (arr_2 [i_8] [i_8 - 2]) : var_8)))) == (-9223372036854775807 - 1)));
        var_21 = 1;
        arr_31 [14] &= (((86 ? (min(var_2, 18201)) : (((10044002108068378509 ? 0 : 1353098964))))) >= ((((!(arr_17 [8] [8] [8] [i_8 - 2] [i_8 + 1]))))));
    }
    #pragma endscop
}

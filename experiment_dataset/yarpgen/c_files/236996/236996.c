/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(!var_0)));
    var_18 = (max(var_18, (((~(max(-var_5, -var_16)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_2] [i_0 - 1] |= (arr_4 [i_1] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((((arr_0 [i_0]) || ((max((max(1, -27796)), -1))))))));
                                var_20 ^= (-54 + ((((-(arr_2 [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_21 -= (min((arr_9 [i_0 - 1]), (((arr_9 [i_0 - 1]) << (arr_9 [i_0 - 1])))));
                    arr_15 [i_1] [i_1] |= (arr_12 [i_1] [i_1] [1] [i_1 - 1] [i_1 - 2]);
                    var_22 -= (arr_10 [18] [0]);
                }
            }
        }
        arr_16 [i_0] = (max(var_5, (arr_13 [i_0] [i_0])));
        var_23 = (arr_11 [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_24 *= ((-(arr_5 [i_5 - 1])));
        var_25 *= var_14;
        var_26 = (max(var_26, (((((!(arr_3 [i_5] [8] [6]))))))));
        arr_20 [i_5] [i_5] = (((((arr_3 [i_5] [i_5] [i_5 - 1]) && var_15)) || ((!(arr_7 [11] [i_5 - 1])))));
        var_27 = (!var_1);
    }
    var_28 = min((((((min(var_2, var_16))) && var_2))), var_13);
    #pragma endscop
}

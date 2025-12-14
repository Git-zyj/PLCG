/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(~5486)));
    var_13 = ((-(min((var_8 - var_5), var_4))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 |= (((((-1662436714 ? -1662436731 : 431615244))) * (min((arr_0 [i_0 + 1] [i_0 - 1]), (arr_0 [i_0 + 2] [i_0 + 1])))));
        var_15 = ((!(arr_0 [i_0 - 1] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((231 ? 2925104994291558669 : -113));
        var_16 = -1560;
        var_17 = (arr_4 [i_1 - 1] [i_1 - 1]);
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    {
                        var_18 += -113;
                        var_19 += (~-1662436688);
                    }
                }
            }
            var_20 = (~-1662436719);
            arr_18 [i_2] [i_2 - 1] [i_3] = (arr_7 [i_2]);
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_21 = var_8;
            var_22 = (arr_13 [i_6] [i_6] [i_2] [i_2]);
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_23 = -431615244;
            var_24 = ((768 & (arr_21 [i_2 - 1])));
            var_25 = (31 <= -110);
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_26 ^= (~var_7);
                            arr_31 [i_2] [i_10] = var_9;
                            arr_32 [i_2] [i_2] [1] [i_8] [i_9] [i_10 + 1] = (arr_12 [i_2] [i_2] [i_8 - 1] [i_10]);
                        }
                    }
                }
            }
            var_27 = ((~(arr_28 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1])));
        }
        arr_33 [i_2] [4] = (arr_30 [i_2 - 1]);
    }
    #pragma endscop
}

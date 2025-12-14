/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_15 ^= (((var_11 && var_3) | (((arr_3 [i_0] [0]) % 768))));
            var_16 = (max(var_16, ((((768 != var_9) ? (arr_5 [2]) : 2503727545)))));
            var_17 = (max(var_17, ((((var_3 - var_8) ? ((var_3 ? var_12 : var_11)) : ((((arr_2 [i_0] [i_1]) >= var_14))))))));
            var_18 = (i_0 % 2 == zero) ? ((((arr_5 [i_0]) << (((arr_5 [i_0]) - 3638769353))))) : ((((arr_5 [i_0]) << (((((arr_5 [i_0]) - 3638769353)) - 4063078675)))));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 6;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_4] = (((9320619112642954146 ? 768 : (arr_12 [i_0] [i_3 - 1] [3] [i_0]))));
                        arr_15 [i_0] = var_14;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 &= (((arr_19 [i_5]) ? var_0 : ((6828140951963620589 ? 8 : 9126124961066597470))));
        arr_20 [i_5] |= (!(((64758 ? (arr_18 [i_5] [12]) : (arr_17 [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            var_20 = (((((!(arr_24 [i_5])))) + 23193));
                            var_21 = (arr_25 [i_6] [i_7] [15]);
                            arr_35 [i_5] [i_8] [i_5] [1] = ((((arr_32 [i_5] [i_6] [i_7] [i_8 - 1] [i_9 - 2]) ? 64767 : (arr_16 [i_5]))));
                            arr_36 [i_5] [i_6] [i_7] [i_8 + 1] [i_6] [i_8] = ((((arr_16 [i_7]) ? (arr_26 [3] [14] [i_7] [i_9 - 2]) : var_2)));
                        }
                        var_22 = (max(var_22, ((((arr_32 [i_6] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1]) & (arr_32 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1] [i_8 + 1]))))));
                        arr_37 [i_5] [i_8] [i_8] [i_8] = (arr_30 [i_7]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_23 = (((arr_39 [i_10]) ? (arr_4 [7] [7] [i_10]) : var_10));
        var_24 = ((arr_1 [i_10]) ? 0 : (((var_10 ? 1 : (arr_25 [i_10] [16] [i_10])))));
        arr_41 [i_10] |= (((arr_3 [i_10] [i_10]) >> var_10));
    }
    var_25 += var_14;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [2] [i_0] = (arr_1 [i_0]);
        var_13 = (min(var_13, 200724090069922662));
        var_14 = 112;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_15 = (min(var_15, (((((18446744073709551615 ? var_11 : (arr_1 [i_0]))) >= (arr_0 [i_0] [i_0]))))));
            arr_8 [i_1] [i_1] = ((var_0 ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 - 1] [i_1 - 1])));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    var_16 += ((max(var_7, -2116157946)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [0] [i_3] [i_4] [i_5] [i_3] = arr_10 [i_0] [i_2] [i_3];
                                arr_21 [i_3] [i_2] = var_1;
                                var_17 = (min(var_17, (((((((arr_13 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2]) ? var_11 : (arr_4 [i_0])))) * ((0 ? 14374005336629083313 : 18246019983639628953)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_18 = (min(255, 200724090069922662));
        arr_25 [i_6] [i_6] = ((((min(4095, 200724090069922678))) ? ((8594476417455676776 ? (arr_2 [i_6]) : 9852267656253874839)) : -58));
        var_19 += (arr_9 [i_6] [i_6]);
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_20 += var_0;
                    var_21 = (min(var_21, ((((arr_11 [i_7 + 2] [i_7 - 2]) ? var_6 : ((((arr_18 [i_7] [i_8]) ? var_9 : var_11))))))));
                    var_22 = var_0;
                    var_23 |= 1099511627768;

                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        var_24 = (64769 >= (arr_15 [i_10 - 1] [i_10] [i_10 + 2] [i_10]));
                        arr_37 [i_10] [2] [i_8] [i_7 + 3] = ((arr_15 [i_7] [i_7 + 1] [i_7 + 1] [i_10 + 2]) - (200724090069922662 | var_6));
                    }
                }
            }
        }
        var_25 = (~(arr_4 [6]));
        arr_38 [10] = -4578150493432050477;
    }
    #pragma endscop
}

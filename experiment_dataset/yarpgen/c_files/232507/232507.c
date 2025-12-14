/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = (max(var_14, ((min(((var_1 ? ((18071437843832997841 ? var_10 : 4776725701796207493)) : 1733683002)), ((max(var_2, var_1))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = 5750580014832429128;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_4] [i_1] [i_0] [i_1] [i_0] = ((~(arr_3 [i_4])));
                            arr_13 [i_0] [i_0] [i_2] [i_1] [i_3] [11] = ((arr_7 [i_3] [i_3] [i_3] [i_3] [i_4]) ? -1251549193 : (arr_7 [i_0] [i_0] [i_1] [i_3] [i_3]));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_16 = 1929;
                            arr_18 [i_0] [i_1] [i_0] [i_1] [i_1] = (arr_9 [i_0] [i_1] [8] [i_3] [i_5] [i_5]);
                            arr_19 [i_1] [i_2] [i_0] [i_1] = 1928;
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_1] [i_5] = (~(arr_14 [i_1] [i_1] [i_5]));
                        }
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            var_17 = ((var_2 ? -var_4 : (arr_1 [i_2])));
                            arr_25 [i_0] [i_1] [6] = ((~(arr_8 [i_1] [i_1])));
                            var_18 = (~var_12);
                            var_19 = (arr_23 [i_6 - 2] [i_1] [i_3] [i_2] [i_6 - 2] [i_6 - 2]);
                            var_20 = ((((126 ? var_13 : 46))) ? -1040899147 : (~-16141740));
                        }
                        var_21 = (((arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_23 [3] [i_2] [i_2] [i_1] [i_0] [i_0]) : (arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_22 += (max(((max(-5238933014827519451, var_6))), 818227234));
                        var_23 = ((((((arr_24 [11] [i_1] [i_1] [i_0]) ? (arr_24 [i_1] [i_1] [i_2] [i_1]) : 2416694697))) ? ((~(arr_24 [i_0] [i_1] [i_1] [i_1]))) : ((((!(arr_14 [i_0] [i_2] [i_0])))))));
                    }
                    var_24 = 512126629951332425;
                    arr_28 [i_1] [i_2] [i_2] = (arr_4 [i_1] [i_0] [i_2]);
                }
            }
        }
        var_25 = (min(var_5, ((~(arr_27 [7] [i_0])))));
        arr_29 [4] [i_0] = ((~((~(arr_16 [i_0] [i_0])))));
    }
    var_26 = var_8;
    var_27 = var_9;
    var_28 = var_11;
    #pragma endscop
}

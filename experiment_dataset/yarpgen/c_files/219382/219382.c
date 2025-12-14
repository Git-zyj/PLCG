/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 = 1;
        arr_2 [i_0] = ((-12 ? var_13 : 1478538460));
        arr_3 [i_0] = (((arr_0 [i_0 + 4]) * (arr_0 [i_0 + 3])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = var_10;
        arr_8 [i_1] [i_1] = ((((~((0 ? 140 : var_2)))) / (arr_4 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_16 [i_1] [i_2] = (max(-1125899906842623, 138));
                    var_20 = ((-141 <= (arr_14 [i_3] [i_2])));

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_19 [i_1] [9] [6] [i_4] [8] = (!-12);
                        var_21 = 1342525434;
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_27 [8] [i_5] = (((((((-12 ? (arr_14 [i_5] [i_6]) : (arr_24 [i_6])))))) ^ (max(115, (arr_23 [4] [i_6])))));
            arr_28 [i_5] = ((106 ? 59 : 107));
            arr_29 [0] [i_5] = (((arr_26 [i_5] [i_6] [i_5]) && (arr_26 [i_5] [3] [i_5])));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_32 [i_5] [i_7] [i_5] = (min((max((arr_24 [i_7]), (max((arr_11 [i_5]), (arr_5 [i_5] [i_5]))))), (((147 > ((var_10 ? 147 : 3563234800)))))));
            arr_33 [i_5] = (arr_0 [i_5]);
        }
        var_22 += (max((max((arr_5 [i_5] [i_5]), 141)), (((-(arr_26 [i_5] [i_5] [2]))))));
        arr_34 [i_5] = -26961;
        arr_35 [i_5] = ((~((max((arr_17 [i_5] [i_5] [i_5] [i_5]), (arr_17 [i_5] [i_5] [i_5] [i_5]))))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 22;i_8 += 1)
    {
        var_23 = var_16;
        arr_38 [i_8] |= 255;
    }
    var_24 = (189 >= 150);
    #pragma endscop
}

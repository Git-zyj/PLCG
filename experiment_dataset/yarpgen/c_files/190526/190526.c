/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (min(var_14, var_9));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, (~1)));
                    var_16 = (((arr_2 [i_1 + 2] [i_1 + 1]) ? (arr_2 [i_1 + 2] [i_1 + 1]) : var_10));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [1] [i_1] [12] [i_1] [i_4 - 1] = 1;
                            arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] = 18812;
                        }
                        arr_17 [i_3] [i_1] [i_3] [i_3] = (((arr_14 [i_3 - 2] [8] [i_2] [i_3] [i_3] [i_2] [i_2]) ? ((1 ? 255 : (arr_4 [i_0] [i_0] [i_0]))) : var_6));
                        var_17 = 1958410552;
                    }
                }
            }
        }
        var_18 = (arr_0 [i_0] [i_0]);

        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_19 |= (1259095697221213103 + var_11);
                        arr_25 [i_5] = (!1);
                    }
                }
            }
            var_20 = ((arr_3 [i_5]) * (((28316 ? var_1 : var_7))));
        }
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            var_21 ^= ((-((255 ? var_6 : 308946623))));
            var_22 += ((((14288206765714944381 >> (var_2 - 22769))) ^ var_6));
            var_23 = ((var_4 ? 19554 : var_8));
        }
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            arr_32 [i_0] [i_0] [1] = (~4158537307994607230);
            var_24 = (1 & 155);
            arr_33 [i_0] [i_0] [i_0] = var_10;
        }
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_38 [i_10] = (((~(min(var_1, (arr_34 [i_10]))))));
        arr_39 [i_10] [13] = (71 | var_6);
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_43 [i_11] = (min(((min((arr_37 [i_11]), (arr_36 [i_11] [i_11])))), ((4294967295 + (arr_37 [i_11])))));
        arr_44 [6] = var_6;
        var_25 = (min(var_25, -28921));
    }
    var_26 = 2610432663;
    var_27 = (~var_4);
    #pragma endscop
}

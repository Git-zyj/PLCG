/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (max(var_4, (((((arr_1 [i_0]) ? var_9 : (arr_1 [i_0]))) ^ (var_3 && var_2)))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_11 &= (((((((2359428977 != -407434620) && var_4)))) < ((-(((arr_1 [i_1]) ^ 7680265244957377163))))));
            var_12 = (max(var_12, (((((!(((35831 ? 407434619 : 18350043868263908466))))) ? (((((((arr_3 [i_0]) ^ (arr_0 [i_1])))) ? ((((arr_1 [i_1]) && 4339960968153222544))) : 13349))) : (min(56331, (arr_4 [i_1] [i_1]))))))));
            var_13 += (((max((-70 || 9204), (max(12288, 4190208)))) << (var_8 + 1459050637)));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_14 = (max(var_14, ((((((((var_9 ? var_0 : (arr_8 [1] [i_0]))) > -8910766756035690777))) * (!var_8))))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_15 = (arr_1 [i_0]);
                            arr_16 [i_0] [10] [i_3] [i_2] [i_0] = ((((((var_6 || (arr_14 [i_4 - 2] [i_4 - 2] [i_5 - 3] [i_5] [i_5]))))) ^ (min((arr_14 [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_5] [i_5 - 2]), var_1))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_16 += ((var_2 ? (((var_6 & (arr_2 [i_3] [i_3])))) : ((~((var_3 ? 33641 : var_9))))));
                    arr_19 [i_0] [i_3] [i_0] = (((((!(arr_1 [i_0])))) - (arr_7 [i_6] [i_2])));
                }
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_17 += (((arr_9 [i_7 - 1]) != (arr_9 [i_0])));
                    arr_23 [i_0] [i_0] [i_3] [i_7] = (min(1, 1));
                }
                var_18 = (((((((-(arr_4 [i_0] [i_3]))) % (arr_1 [i_0])))) || ((var_2 || ((((arr_9 [i_3]) << (var_5 - 55647))))))));
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
            {
                var_19 &= (min((((var_2 >= (min(var_4, var_1))))), (min((arr_6 [i_0] [i_8] [i_8]), var_6))));
                var_20 ^= (!((((arr_2 [i_8] [i_8]) ? (arr_1 [i_8]) : var_9))));
            }

            for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
            {
                arr_30 [i_0] [i_0] [i_0] [i_9 - 2] = (((((min(8910766756035690776, 1)))) ? 8181097195771847224 : 1));
                var_21 = ((+((2586359502497739542 ? (arr_15 [i_9 + 2] [i_9] [i_9 + 2]) : ((var_3 ? var_9 : var_3))))));
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
            {
                var_22 -= var_9;
                arr_35 [i_0] [1] &= ((var_6 < (arr_21 [i_10] [i_10] [i_10] [i_10 - 3] [9] [i_10 - 1])));
                arr_36 [i_0] [i_0] [i_0] = (arr_26 [i_0] [i_0]);
            }
        }
    }
    for (int i_11 = 4; i_11 < 20;i_11 += 1)
    {
        var_23 = ((min(var_7, (arr_37 [i_11 - 1] [i_11 + 1]))));
        var_24 = (max((arr_37 [i_11 - 2] [i_11 - 2]), ((~((var_7 ? var_3 : var_0))))));
        var_25 &= (!33);
        arr_39 [i_11] = (max(0, 890719181));
    }
    var_26 &= var_6;
    var_27 = (min(890719181, -566078142));
    #pragma endscop
}

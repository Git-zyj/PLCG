/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_11);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                var_19 = (((((~(((arr_3 [i_0] [i_1]) ? (arr_0 [i_2]) : (arr_5 [i_2] [i_1] [i_2 + 1])))))) ? (15513151403374675679 * var_1) : ((~((var_6 ? (arr_7 [i_1] [i_1] [i_1]) : (arr_3 [i_1] [i_2])))))));
                arr_8 [i_0] [i_1] [i_1] [i_2] = ((var_10 & (arr_0 [4])));
                var_20 = var_9;
                var_21 -= (min(((((arr_6 [i_1]) ? (max((arr_4 [i_0] [i_0] [i_0]), var_17)) : var_16))), (((((-(arr_6 [i_2])))) ? 27866 : ((2933592670334875945 ? var_4 : (arr_3 [i_1] [i_1])))))));
                arr_9 [i_1] [i_1] [i_1] = ((~((~(arr_1 [i_2 - 1] [i_2 - 4])))));
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_22 = ((((arr_6 [i_0]) / (arr_6 [i_0]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_3] [i_4] = ((((min((arr_18 [i_0] [12] [i_0] [i_4] [i_1]), (min((arr_7 [i_5] [i_1] [i_0]), var_11))))) ? var_11 : ((((min((arr_11 [i_1] [13] [i_4] [i_5]), -27867)) | (var_15 != 2924103576))))));
                            var_23 = (!-var_12);
                        }
                    }
                }
                var_24 = (max(((27866 * (arr_5 [i_3] [i_3] [i_3]))), ((((arr_1 [i_0] [i_0]) >> (((arr_6 [i_0]) - 141)))))));
            }
            var_25 = (max(var_25, ((min((((((-(arr_10 [i_0] [i_0] [2])))) ? var_13 : var_10)), (min((var_17 - var_17), (~-593152292991236559))))))));
            var_26 ^= (arr_11 [i_0] [i_0] [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_22 [i_0] [i_6] [i_6] = (--29252);
            var_27 = (min(var_27, ((((arr_7 [i_0] [i_6] [i_6]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_6]))))));
            arr_23 [i_0] [i_6] = var_2;
            arr_24 [i_0] = arr_16 [4] [i_6] [i_6] [i_6] [i_6] [i_0] [i_0];
        }
        var_28 += (arr_13 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    arr_31 [i_0] [i_0] &= var_5;
                    arr_32 [i_0] [i_7] [i_0] = ((~(((!62) ? 14685865738470666968 : 84))));
                    arr_33 [i_7] [i_7] = ((~(8632783367537697353 & -8503055992369088784)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_39 [15] [15] [i_8] [i_9] [i_7] = (arr_38 [i_7 + 1] [6] [i_10 - 3] [i_10] [i_10]);
                                var_29 -= (((+(((arr_29 [i_10] [i_8] [i_10 - 3]) + (arr_16 [i_9] [i_9] [i_9] [i_8] [i_0] [i_7] [i_0]))))));
                            }
                        }
                    }
                    arr_40 [i_7] [i_7] = ((((min((max(9854480457923997853, -6252)), (-13 && -9223372036854775786)))) ? (~var_14) : ((((((arr_16 [i_0] [1] [i_0] [i_7 + 1] [i_8] [i_8] [i_8]) ? 236 : var_5))) ? (arr_0 [i_7 + 1]) : var_14))));
                }
            }
        }
        var_30 -= (((((((max(var_1, (arr_28 [i_0] [i_0])))) % ((-27867 ? (arr_1 [i_0] [i_0]) : (arr_12 [i_0] [i_0])))))) ? ((~(var_8 > var_10))) : (((((var_11 ? var_0 : -27877))) ? (arr_26 [i_0] [i_0]) : var_8))));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        var_31 *= 1;
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 7;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 7;i_13 += 1)
            {
                {
                    var_32 = (min(var_32, ((((~((max(var_2, var_13)))))))));
                    var_33 += ((((arr_6 [i_13 + 3]) ? (((arr_51 [i_11]) ? 15206721216413644233 : 2933592670334875939)) : (((min(var_2, var_8)))))));
                    arr_52 [i_11] [i_11] [i_11] = ((~(arr_49 [8] [i_13] [i_11])));
                    arr_53 [i_11] [2] [i_13] = var_14;
                }
            }
        }
        var_34 = (max(((!((!(arr_15 [i_11] [i_11]))))), var_12));
        var_35 += (min(var_4, ((min((arr_2 [i_11]), (arr_2 [i_11]))))));
    }
    var_36 = -3723586531858733120;
    var_37 = var_7;
    var_38 = (((((var_9 ? ((var_10 ? var_4 : var_3)) : 60))) ? var_4 : var_13));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (((var_8 > var_9) ? ((min((!var_14), (max(26755, 508))))) : (!26759)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_21 = var_14;
            arr_7 [0] [i_1 + 1] |= (((((var_12 ? (arr_4 [i_1 + 1]) : ((var_18 ? (arr_3 [i_0]) : var_13))))) ? (arr_1 [i_0] [8]) : ((((arr_2 [i_1]) ? (arr_0 [i_1]) : var_0)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_15 [i_4] [i_3] [i_0] [4] [i_0] [i_0] [i_0] = 26755;
                            var_22 = 26748;
                            var_23 = var_1;
                            var_24 ^= (min(((-(var_9 - 13))), (((!(arr_1 [i_1 + 1] [i_1 - 2]))))));
                        }
                        var_25 ^= var_11;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_26 = ((((26745 ? 65039 : 26767)) >= (arr_18 [i_0] [i_0] [i_5])));
            var_27 = (var_7 < var_2);
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_28 ^= (((max(var_3, 501))));
            var_29 -= ((1 ? 1435573546 : 2828));
        }
        var_30 = ((-(max(var_0, (((486 << (-26745 + 26758))))))));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_31 = 191627870;
        arr_26 [1] [i_7] = min(6684541581595493899, (127 - -26764));
        var_32 ^= (min(-271473990601676153, (min(var_8, 1454385233045067313))));
    }
    for (int i_8 = 2; i_8 < 22;i_8 += 1)
    {
        var_33 ^= var_11;
        arr_29 [i_8] [i_8 + 2] |= (min((((var_1 < var_6) ? (~0) : (arr_28 [i_8] [i_8 + 1]))), (((((2827 ? var_3 : var_4)) == var_11)))));
    }
    var_34 -= var_16;
    var_35 ^= ((-((var_15 ? (5232027913666872718 | var_13) : 4912144642772999868))));
    var_36 = ((((var_11 ? (((var_6 ? var_12 : 2836))) : ((var_8 ? var_9 : var_13)))) << ((((~(var_19 | var_8))) + 32657))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219863
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_7))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((int) ((arr_1 [i_0]) | (1749434418)))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_1))));
        var_16 = ((/* implicit */short) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */short) var_8);
    }
    for (short i_1 = 2; i_1 < 8; i_1 += 1) 
    {
        arr_5 [i_1 - 2] [i_1] = ((/* implicit */short) (+(min((var_2), (-1931001775)))));
        var_17 = ((/* implicit */short) ((((((/* implicit */unsigned int) arr_1 [i_1 + 2])) * (arr_4 [i_1]))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148)))));
        var_18 = min((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_3)) / (arr_0 [i_1]))) : (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_1]) : (((/* implicit */int) (signed char)-2)))))), (((int) ((((/* implicit */int) var_4)) - (var_2)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((-1749434419) <= (((max((var_6), (arr_3 [i_1]))) / (((/* implicit */int) ((arr_4 [i_1]) <= (((/* implicit */unsigned int) -813230368)))))))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) var_12)) - (((/* implicit */int) min((var_4), (arr_11 [i_2] [i_3])))))));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_0))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (short i_5 = 1; i_5 < 22; i_5 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((min((12328432645864535831ULL), (((/* implicit */unsigned long long int) -1983424068)))) == (((/* implicit */unsigned long long int) 1453263978U)))))));
                        arr_19 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_2] [i_5 - 1] [i_5 + 1] [i_4])) : (((/* implicit */int) arr_17 [i_3] [i_5 - 1] [i_4] [i_5 - 1]))))));
                        arr_20 [i_2] [1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5] [13] [i_5 - 1])) ? (((/* implicit */int) arr_17 [i_5 - 1] [(signed char)18] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_5 - 1] [i_5] [i_5] [i_5 - 1])))) <= (((/* implicit */int) ((signed char) var_5)))));
                        arr_21 [i_2] [i_2] [i_2] [13ULL] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_1)) ? (var_0) : (arr_14 [i_2] [(signed char)6] [11U]))) - (((/* implicit */int) ((signed char) (short)32617))))) <= (((((/* implicit */_Bool) min((((/* implicit */int) (short)-22814)), (var_0)))) ? (arr_18 [i_4] [15U] [i_2] [i_5 + 2] [i_5 + 1] [i_5 - 1]) : (((((/* implicit */int) arr_11 [i_3] [6])) / (arr_16 [10] [i_4])))))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_10))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            arr_24 [i_2] = ((/* implicit */unsigned long long int) arr_18 [i_6 - 1] [i_6 + 1] [i_2] [i_6] [i_6] [i_6]);
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                for (unsigned char i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((unsigned int) 1749434418)))));
                        var_23 ^= ((/* implicit */short) ((((unsigned long long int) var_8)) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-14563)) > (arr_8 [i_8])))))));
                        var_24 = ((/* implicit */unsigned int) var_6);
                        var_25 = ((((/* implicit */int) (short)26660)) / (-1749434419));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 1) 
        {
            arr_32 [i_2] [i_9] = arr_18 [i_9 + 2] [i_9 + 2] [i_2] [9] [i_9 + 2] [i_9 + 1];
            arr_33 [i_2] = (~(((((/* implicit */_Bool) arr_26 [i_2])) ? (((-1931001783) - (((/* implicit */int) var_1)))) : (2067348291))));
            var_26 = max((((/* implicit */int) ((short) 1040384))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1749434418)) ? (((/* implicit */unsigned int) -1749434411)) : (12U)))) ? (1725811055) : (2147483136))));
            arr_34 [i_2] [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_15 [i_2] [i_9 + 2])) ? (arr_15 [i_2] [i_9 - 1]) : (arr_15 [i_2] [i_9 + 2]))), (arr_15 [i_2] [i_9 - 1])));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                for (unsigned int i_12 = 1; i_12 < 22; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_43 [i_13] [i_12] [i_2] [i_10] [i_2]))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((unsigned long long int) arr_38 [i_13] [i_12] [i_11] [(short)7])))));
                        }
                    } 
                } 
            } 
            arr_44 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1931001775)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) arr_22 [i_2] [i_10] [i_2])))) : (((-1148438250) / (((/* implicit */int) var_7))))));
            /* LoopSeq 3 */
            for (unsigned char i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 24; i_16 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */int) (short)20379)) <= (((((/* implicit */int) var_1)) / (arr_26 [i_2])))));
                            var_30 -= ((/* implicit */unsigned char) var_5);
                            arr_54 [i_2] [i_2] [i_10] [i_2] [i_2] [i_16] = -1148438250;
                            var_31 ^= ((/* implicit */int) ((short) arr_30 [i_14] [i_16] [(signed char)20]));
                        }
                    } 
                } 
                arr_55 [(unsigned char)1] [i_10] [i_2] = ((arr_13 [i_14] [i_2] [i_2]) + (((((/* implicit */_Bool) 58906077)) ? (1730761155) : (-1931001776))));
            }
            for (int i_17 = 1; i_17 < 22; i_17 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_18 = 1; i_18 < 21; i_18 += 4) 
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (arr_50 [i_2] [i_2] [i_10] [i_17] [i_18])));
                    var_33 = (~(arr_57 [i_2] [i_2] [i_18 + 1] [i_18]));
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(signed char)0])))))));
                }
                arr_60 [i_2] = (-(((/* implicit */int) (short)28873)));
                var_35 = ((/* implicit */unsigned int) ((((233251515) / (arr_16 [i_2] [i_2]))) - (arr_57 [i_2] [i_10] [i_17 + 2] [i_17 - 1])));
            }
            for (int i_19 = 0; i_19 < 24; i_19 += 1) 
            {
                var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) arr_46 [i_2] [i_10] [i_19])) ? (-1983424068) : ((+(arr_48 [(signed char)7])))))));
                arr_65 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((arr_46 [i_19] [i_19] [i_10]) == (arr_46 [i_2] [i_19] [i_19])));
            }
        }
        var_37 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_7 [4ULL]), (arr_7 [18])))) ? ((+(((/* implicit */int) arr_9 [i_2] [(short)7] [i_2])))) : (((((/* implicit */_Bool) arr_64 [i_2] [12])) ? (arr_36 [(unsigned char)4]) : (arr_62 [i_2] [i_2] [i_2])))));
    }
}

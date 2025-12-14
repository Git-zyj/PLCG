/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204276
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3 - 2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_5))))))));
                        var_18 = var_3;
                        arr_11 [i_0] [i_1] [(short)1] [i_0] [i_2 - 1] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */int) arr_0 [i_0] [i_0])), ((~(((/* implicit */int) var_3)))))), (((((/* implicit */int) (short)-22296)) + (((/* implicit */int) (short)28006))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 3; i_4 < 8; i_4 += 2) 
        {
            var_19 = ((/* implicit */short) (+(((/* implicit */int) (short)14428))));
            var_20 = ((/* implicit */short) arr_13 [i_0]);
            arr_16 [7ULL] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_4 - 3])))))));
            var_21 = ((/* implicit */unsigned long long int) (short)-1);
            var_22 = ((/* implicit */unsigned long long int) var_7);
        }
        var_23 |= ((/* implicit */short) ((((((/* implicit */int) (short)-28023)) / ((-(((/* implicit */int) (short)-27997)))))) - (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)10]))))) : (((/* implicit */int) arr_13 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        var_24 ^= ((/* implicit */signed char) (+(max((min((var_9), (((/* implicit */unsigned long long int) arr_13 [i_0])))), ((-(2995120028951423043ULL)))))));
                        arr_25 [i_0] = ((/* implicit */short) (~(((/* implicit */int) max((arr_1 [i_5] [i_6]), (arr_1 [i_0] [i_6]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)28)) << (((((/* implicit */int) (short)16383)) - (16370))))) + (((((/* implicit */int) (signed char)-1)) - (((/* implicit */int) (short)-1))))));
                            var_26 ^= arr_4 [i_8];
                            var_27 = ((/* implicit */short) arr_1 [i_5] [i_0]);
                        }
                        for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            arr_30 [i_6] [i_5] [i_6] [i_7] [i_0] [i_7] [i_0] = ((/* implicit */short) ((min((11207620821732709117ULL), (((/* implicit */unsigned long long int) (short)-28006)))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))));
                            var_28 = ((/* implicit */short) min((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0]))) & (5496987738242506675ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)14882), (arr_7 [i_0] [i_0] [i_6] [i_0]))))))), (var_12)));
                        }
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            arr_34 [i_0] = arr_4 [i_0];
                            arr_35 [i_0] [i_0] [i_6] [i_0] [i_0] = var_14;
                            arr_36 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_1)) / (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [(short)3])))), (((((/* implicit */int) arr_22 [i_10] [i_7] [i_6] [i_5])) * (((/* implicit */int) arr_22 [i_10] [i_7] [i_5] [i_0]))))));
                            arr_37 [i_0] [i_5] [i_6] [i_0] [i_5] = ((/* implicit */short) var_4);
                        }
                        var_29 *= ((/* implicit */short) max((((((/* implicit */_Bool) (short)-16383)) ? (arr_28 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_5] [i_6] [i_7]))))), (((((((/* implicit */int) (short)-8112)) >= (((/* implicit */int) (short)-16365)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) : (min((((/* implicit */unsigned long long int) (short)-28213)), (arr_28 [i_7])))))));
                        var_30 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (signed char)-61)) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) max((arr_21 [i_0]), (arr_21 [i_0]))))));
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-71)) ? (9919384393314747201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16383)))));
                        arr_41 [i_11] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_23 [i_0] [i_5] [i_11] [(short)10] [i_0] [(short)10]))));
                    }
                    arr_42 [i_6] [i_0] [i_0] = ((/* implicit */short) ((signed char) max((arr_7 [(signed char)2] [(signed char)2] [(short)2] [i_6]), ((short)-28035))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 2) 
                    {
                        var_32 ^= ((/* implicit */signed char) arr_39 [i_5] [(short)3] [i_6] [i_12 - 1]);
                        var_33 = ((unsigned long long int) arr_4 [i_12 + 1]);
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0] [i_0] [i_6] [i_0]))) | (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16395)) ? (((/* implicit */int) arr_29 [i_0] [i_5] [(short)10] [2ULL] [i_12])) : (((/* implicit */int) arr_7 [i_0] [i_12 - 1] [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 11; i_13 += 4) 
                        {
                            var_35 = ((/* implicit */short) (~((-(((/* implicit */int) arr_15 [(short)6]))))));
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_0] [i_5] [i_6] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_47 [i_5] [i_5] [i_0] [i_12 - 1] [(short)5] [i_13] [i_13])));
                            arr_50 [i_0] [i_5] [i_0] [i_12] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-512)) ? (((((/* implicit */_Bool) (short)19813)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)-16364)))) : (((/* implicit */int) ((arr_28 [i_0]) >= (var_12))))));
                            arr_51 [i_12] [i_0] = ((/* implicit */unsigned long long int) (short)-28006);
                        }
                    }
                    for (short i_14 = 1; i_14 < 9; i_14 += 1) 
                    {
                        var_37 = ((/* implicit */short) max((max((((/* implicit */int) arr_23 [i_14] [i_14 + 2] [i_6] [i_6] [i_6] [i_0])), ((+(((/* implicit */int) arr_2 [i_0])))))), ((-(((/* implicit */int) ((short) arr_33 [i_14])))))));
                        arr_54 [i_5] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)0))));
                        var_38 = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_40 [i_0] [i_0])), (min((((/* implicit */int) var_7)), ((+(((/* implicit */int) arr_38 [i_0] [i_5] [i_0]))))))));
                    }
                    arr_55 [(short)6] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5]))) / (arr_33 [i_0])))));
                }
            } 
        } 
    }
    var_39 = ((/* implicit */signed char) min((var_8), ((short)-30684)));
    var_40 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_14)))) && (((/* implicit */_Bool) max(((short)-25926), (var_0))))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))))), (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
    var_41 = ((/* implicit */short) (~(((/* implicit */int) (signed char)77))));
}

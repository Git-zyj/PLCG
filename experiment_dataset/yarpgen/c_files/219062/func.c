/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219062
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) == (arr_1 [i_0]))))));
        var_17 += arr_2 [i_0] [i_0];
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            var_18 += ((/* implicit */signed char) (-(arr_4 [i_1] [i_1 - 1])));
            arr_10 [i_2] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 2])) >= (((/* implicit */int) arr_2 [i_1] [i_1 + 2]))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1 - 1] [i_1]))));
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 - 2] [i_3])) / (((/* implicit */int) arr_13 [i_1 + 2])))))));
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~((+(((/* implicit */int) arr_11 [i_1] [i_1])))))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_5] [i_1])) - (((/* implicit */int) arr_11 [i_5] [i_5]))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((arr_20 [i_1] [i_1 - 1] [i_1 - 2] [i_5] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 2])))))));
                            arr_21 [(_Bool)1] [i_3] [(_Bool)1] [i_5] [i_5] [4U] [i_5] = ((/* implicit */signed char) ((unsigned char) arr_1 [i_1 - 1]));
                        }
                    } 
                } 
                var_24 -= (+(((/* implicit */int) arr_13 [i_1 + 1])));
                var_25 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_5 [(_Bool)1] [i_3]))))));
                var_26 = ((/* implicit */_Bool) (((+(arr_17 [i_3] [i_3]))) / (((/* implicit */int) arr_11 [i_1 + 1] [i_3]))));
            }
        }
        var_27 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) > (arr_1 [i_1])))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [(unsigned char)9])))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) ((signed char) arr_16 [i_1] [(_Bool)1] [i_1 + 2] [i_1] [i_1 + 1]));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_1 + 2])) | (((/* implicit */int) arr_13 [i_1 - 2]))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1])) || (((/* implicit */_Bool) arr_2 [9U] [i_1 - 2]))));
                        var_31 = ((/* implicit */_Bool) min((var_31), ((!(((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_10])) ^ (((/* implicit */int) arr_7 [i_1])))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        arr_33 [i_7] [i_8] [i_7] [8] = ((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_8] [(unsigned char)3] [i_1 - 1] [i_1 - 1]));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            arr_36 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] = (-(((/* implicit */int) arr_7 [i_1 - 1])));
                            arr_37 [8] = ((/* implicit */signed char) ((arr_4 [i_12] [i_1 + 2]) & (arr_4 [i_1] [i_1 - 1])));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) ((int) arr_14 [i_1] [14] [i_1 + 2]));
                            arr_40 [i_1] [i_1] = ((/* implicit */signed char) arr_8 [i_8]);
                            arr_41 [i_1] [i_7] [i_7] [i_11] [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_1] [i_7] [i_7] [i_11] [i_11] [i_1])) >> (((/* implicit */int) arr_13 [i_13])))))));
                            arr_42 [i_13] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] = ((((/* implicit */int) arr_30 [i_8] [6] [i_8] [i_8] [i_8] [i_8])) == (((/* implicit */int) arr_30 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 13; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 3; i_15 < 12; i_15 += 3) 
                        {
                            {
                                var_33 = (!(((/* implicit */_Bool) arr_44 [i_1 - 1] [i_7] [i_8] [i_7])));
                                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((_Bool) arr_5 [i_8] [i_14 + 1])))));
                            }
                        } 
                    } 
                    var_35 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_6 [i_8]) == (((/* implicit */unsigned int) arr_28 [i_1] [i_7] [i_8] [i_1])))))));
                }
            } 
        } 
        var_36 += ((/* implicit */unsigned char) arr_0 [i_1] [i_1 + 1]);
    }
    /* LoopSeq 2 */
    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
    {
        arr_51 [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_50 [i_16 - 1])))))));
        arr_52 [i_16] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_50 [i_16 - 1])))) <= (((/* implicit */int) ((_Bool) arr_50 [i_16 - 1])))));
        arr_53 [14] = ((/* implicit */unsigned char) arr_48 [i_16] [i_16]);
        arr_54 [i_16 - 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_48 [i_16 - 1] [i_16 - 1]))))), (((unsigned int) arr_49 [i_16 - 1] [i_16 - 1]))));
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        arr_59 [i_17] [i_17] = ((/* implicit */signed char) ((arr_56 [i_17]) || (((/* implicit */_Bool) arr_58 [i_17]))));
        arr_60 [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */int) arr_56 [i_17])) * (((/* implicit */int) arr_57 [i_17]))));
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 17; i_18 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_19 = 0; i_19 < 17; i_19 += 2) 
            {
                arr_66 [i_17] = ((((/* implicit */_Bool) arr_58 [i_18])) && (((/* implicit */_Bool) arr_58 [i_17])));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (~(((/* implicit */int) arr_63 [i_19] [i_18] [i_17])))))));
                var_38 = ((/* implicit */_Bool) ((unsigned long long int) arr_49 [i_19] [i_17]));
                arr_67 [i_18] = ((/* implicit */_Bool) arr_55 [(signed char)11]);
            }
            for (unsigned char i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                var_39 = ((/* implicit */signed char) (-(((/* implicit */int) arr_65 [i_17] [(unsigned char)7] [i_20]))));
                var_40 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_58 [i_18])))) + (2147483647))) << ((((((~(((/* implicit */int) arr_57 [i_17])))) + (14))) - (12)))));
                arr_71 [i_20] [i_17] [i_17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_64 [i_17] [15ULL] [i_17]))));
            }
            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
            {
                var_41 = arr_63 [i_21] [i_21] [i_21 + 1];
                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((/* implicit */int) arr_65 [i_21 + 1] [i_18] [4U])) ^ (arr_75 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1]))))));
            }
            var_43 = ((/* implicit */_Bool) min((var_43), (((((/* implicit */int) arr_50 [i_17])) == (((/* implicit */int) arr_69 [i_17] [i_18]))))));
            var_44 &= ((/* implicit */signed char) ((_Bool) (!(arr_63 [i_17] [i_18] [i_18]))));
            arr_76 [i_17] [i_18] = ((/* implicit */unsigned long long int) arr_58 [i_17]);
        }
        arr_77 [i_17] = (((!(arr_63 [i_17] [i_17] [i_17]))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_73 [i_17] [i_17])) ^ (arr_61 [i_17] [i_17])))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 4) 
    {
        for (unsigned int i_23 = 0; i_23 < 18; i_23 += 4) 
        {
            for (unsigned char i_24 = 0; i_24 < 18; i_24 += 1) 
            {
                {
                    var_45 = min(((~(arr_83 [i_23] [i_24] [i_23]))), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_80 [i_24])) || (arr_86 [i_22])))))));
                    arr_87 [i_22] [i_23] [i_23] [i_24] = ((/* implicit */unsigned int) arr_85 [3] [i_23] [i_24]);
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212271
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 3; i_4 < 7; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [(unsigned char)4] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */int) (unsigned char)39)) + (((/* implicit */int) (short)14686)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_4 - 1])) <= (((/* implicit */int) arr_1 [i_0 - 1] [i_4 + 2])))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_11 [2ULL] [i_1] [2ULL] [i_1])) * (arr_5 [i_1] [i_2] [i_4])));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_13 [(unsigned char)2] [i_1] [i_1] [4] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_5 = 2; i_5 < 18; i_5 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5 + 1])) ? (((/* implicit */int) arr_18 [i_5 - 2])) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_5 + 1])) / (((/* implicit */int) arr_18 [i_5 + 1]))))) : (((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 + 1])))))));
        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_16 [i_5 + 1])) ? (arr_16 [i_5 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
        var_21 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) var_17)) ? (arr_16 [i_5]) : (arr_16 [i_5]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-29767)) : (((/* implicit */int) arr_18 [i_5]))))))), (((/* implicit */unsigned long long int) arr_17 [i_5] [i_5]))));
        var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (500703631U)))), (((((/* implicit */long long int) ((/* implicit */int) var_15))) / (var_3)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)1876))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)94)) << (((arr_16 [i_5]) - (7805550579492874411ULL)))))) : (((unsigned long long int) var_9))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            for (unsigned int i_8 = 3; i_8 < 21; i_8 += 1) 
            {
                {
                    arr_25 [6LL] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) min(((((+(((/* implicit */int) var_13)))) / (((/* implicit */int) arr_23 [i_7] [14LL] [i_8 + 1])))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (var_2)))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_8] [(short)6] [i_6])) && (((/* implicit */_Bool) arr_24 [10ULL] [19ULL] [i_6] [i_6]))))))))));
                    arr_26 [i_8] [i_8 - 3] [i_7] [(unsigned short)0] = ((/* implicit */short) ((max((((/* implicit */long long int) ((var_2) >= (((/* implicit */long long int) ((/* implicit */int) var_14)))))), (min((var_3), (((/* implicit */long long int) var_5)))))) == (((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_7 - 2] [i_8 - 1] [i_8])) & (((/* implicit */int) (short)19787)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            for (long long int i_10 = 3; i_10 < 20; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    {
                        var_23 = ((/* implicit */short) ((((arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1]) != (arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1]))) ? (max((arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1]), (((/* implicit */unsigned long long int) arr_23 [i_10 - 3] [i_10 + 1] [i_10 + 1])))) : (((((/* implicit */_Bool) arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10 - 3] [i_10 + 1] [i_10 + 1]))) : (arr_24 [i_10 - 3] [i_10 + 1] [i_10 + 1] [i_10 - 1])))));
                        var_24 = ((/* implicit */short) (-(((((((/* implicit */_Bool) arr_20 [i_6])) || (((/* implicit */_Bool) var_13)))) ? (min((var_12), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((var_5) * (var_9))))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_6] [i_9] [i_9] [i_10 - 1] [i_6])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_11] [i_6] [i_6]))) - (((14386059633547518494ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(signed char)11] [i_9] [13LL]))))))) : ((-(((((/* implicit */_Bool) -1152377188)) ? (arr_29 [(short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                        arr_33 [i_6] [i_9] [i_9] [15ULL] [20ULL] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_24 [i_6] [(unsigned char)10] [i_10] [i_10])) ? (arr_32 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) << (((((/* implicit */int) var_8)) + (117)))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) == (arr_29 [i_6]))) ? (((((/* implicit */_Bool) arr_29 [i_6])) ? (arr_29 [i_10]) : (((/* implicit */unsigned long long int) arr_20 [i_9])))) : ((-(arr_24 [i_6] [i_9] [i_10] [i_11]))))) : (arr_29 [i_6])));
                        var_26 = ((((((/* implicit */_Bool) arr_31 [i_10 + 2] [i_10 + 1] [i_10 - 2] [i_10 - 3] [i_10 + 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10 - 2] [i_10 - 3] [i_10 - 3] [i_10 + 1] [i_10 - 2]))))) / (((/* implicit */long long int) (+(((/* implicit */int) var_4))))));
                    }
                } 
            } 
        } 
    }
    for (int i_12 = 2; i_12 < 22; i_12 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_35 [i_12 - 1] [i_12 + 1])) ? ((+(((/* implicit */int) arr_36 [i_12])))) : (min((((/* implicit */int) var_15)), (-1152377188))))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)21705))) == (var_3))))));
        arr_37 [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(signed char)8] [i_12])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) && (((/* implicit */_Bool) arr_36 [i_12 - 1])))))));
        /* LoopSeq 2 */
        for (short i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
        {
            arr_40 [i_12] [i_12] [i_13] = arr_35 [i_12] [i_13];
            var_28 = var_2;
            arr_41 [i_12] [i_13] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_36 [i_12]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_12] [i_13]))) + (var_6)))))));
        }
        for (short i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
        {
            arr_44 [i_12] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12 - 1]))) - (max((var_16), (min((var_6), (((/* implicit */unsigned int) arr_36 [0]))))))));
            var_29 = ((/* implicit */unsigned int) (-((-((-(-6691869950875339830LL)))))));
            var_30 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_12]))) * (var_6)))), (var_2)));
            var_31 = ((/* implicit */long long int) var_7);
            var_32 = ((/* implicit */unsigned char) arr_38 [i_12 + 2] [i_12 + 1]);
        }
        var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1576))))) / (3794263664U)));
        var_34 = ((/* implicit */int) var_17);
    }
    var_35 = ((/* implicit */signed char) var_11);
    var_36 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29840))) == (var_9))))) : (var_9)))));
}

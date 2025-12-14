/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223752
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) -669009518)) ? (((/* implicit */unsigned long long int) -1768366241)) : (var_11)))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) var_9))))) ? ((~(((/* implicit */int) var_10)))) : (((int) var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 669009517)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))));
                arr_6 [i_1] [i_1] = min(((~(((/* implicit */int) var_7)))), ((~(669009517))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_14 = (~((~(((/* implicit */int) (unsigned short)9873)))));
                                arr_14 [i_1] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_7)), (var_5)))))), ((-(var_11)))));
                                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */short) min((13251504211979451362ULL), (4598156630025224642ULL)));
                                var_15 = ((/* implicit */short) max((max(((-(((/* implicit */int) var_10)))), ((-(((/* implicit */int) (unsigned char)1)))))), ((+(((/* implicit */int) ((unsigned char) var_3)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
                {
                    var_16 = ((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 1])) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (short)26174)) : (((/* implicit */int) arr_18 [i_5 - 1] [i_1])))) : ((-(((/* implicit */int) arr_18 [i_5 + 1] [i_0])))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 3; i_6 < 22; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            {
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_7 - 1] [i_7] = ((/* implicit */int) ((max((max((((/* implicit */unsigned long long int) (unsigned char)0)), (15971138046320344068ULL))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_5] [i_6 - 3])))) | (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) (short)5505)))))));
                                var_17 = ((/* implicit */unsigned int) (short)-28579);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_11 [i_1] [i_8] [i_1] [i_8] [i_1])))) : (((arr_1 [i_8]) - (((/* implicit */unsigned int) -1997848142))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            arr_29 [i_9] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((int) 15971138046320344064ULL)) << (((((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_11 [i_9] [i_0] [i_1] [i_0] [i_0])))) - (219)))))) : (((/* implicit */unsigned char) ((((int) 15971138046320344064ULL)) << (((((((((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_11 [i_9] [i_0] [i_1] [i_0] [i_0])))) - (219))) + (105))) - (23))))));
                            arr_30 [i_9] [i_9] [i_9] [i_9] [i_9] [i_1] [i_9] = ((/* implicit */short) 15971138046320344064ULL);
                            var_19 = ((/* implicit */unsigned int) 10335230928857864640ULL);
                        }
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) (signed char)-61);
                            arr_35 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_0] [i_0] [i_1] [i_0]));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned char) var_0);
                        var_22 += ((/* implicit */short) ((((/* implicit */unsigned int) arr_33 [10ULL] [i_1] [i_5 + 1] [i_11])) >= (((16352U) - (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [(short)12] [i_5 + 1] [i_11]))))));
                        var_23 += ((/* implicit */unsigned char) arr_1 [i_1]);
                    }
                    for (int i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) 606092504)), (min((((/* implicit */unsigned int) arr_31 [i_12] [(unsigned short)2] [i_12] [i_12 + 3] [i_12])), (var_1)))))), (min((min((((/* implicit */long long int) (signed char)-1)), (arr_13 [i_12] [i_12 + 3] [i_5 - 1] [i_1] [i_0]))), (((/* implicit */long long int) arr_38 [i_5] [i_5 - 1] [i_5 - 1] [i_12 + 1])))))))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((unsigned long long int) 15971138046320344068ULL))));
                        arr_41 [i_0] [i_12] [i_5 - 1] [i_1] = ((/* implicit */int) 482579990617122828ULL);
                        arr_42 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_4) : (arr_32 [i_0] [i_1] [i_12 + 3])))), (max((((unsigned long long int) (signed char)-5)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14778)) >= (((/* implicit */int) arr_5 [i_0] [i_1] [i_5 - 1])))))))));
                    }
                    for (int i_13 = 2; i_13 < 22; i_13 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_3))));
                        var_27 = ((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_13 - 1]);
                        arr_46 [i_5] [i_5] [i_0] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((int) (signed char)-1))) >= (min((((/* implicit */unsigned long long int) var_9)), (16904350686277746273ULL)))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)50758)) / (((/* implicit */int) (unsigned char)166))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) / (var_9)))))));
                    }
                    var_28 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 13412237079107898824ULL)) ? ((+(var_8))) : (((/* implicit */int) ((short) arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] [i_5] [i_5 - 1]))))));
                }
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230799
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min(((~(((arr_4 [i_0 - 1]) + (arr_6 [(_Bool)1]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) >= ((+(arr_4 [i_0 - 1])))));
                var_16 = ((/* implicit */unsigned int) (short)7544);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 7; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) (~((-(-9223372036854775805LL)))));
                                arr_21 [i_2] [i_5] [i_4] [i_2] [i_6] [i_5] = ((/* implicit */unsigned short) ((max((arr_5 [i_3 - 1] [i_5 + 1] [i_5 + 2]), (arr_5 [i_3 - 1] [i_5 + 1] [i_5 + 2]))) ? (((arr_5 [i_3 - 1] [i_5 + 1] [i_5 + 2]) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_5 + 1] [i_5 + 2])) : (((/* implicit */int) arr_5 [i_3 - 1] [i_5 + 1] [i_5 + 2])))) : ((~(((/* implicit */int) arr_5 [i_3 - 1] [i_5 + 1] [i_5 + 2]))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (unsigned short)54085))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        arr_25 [i_7] [i_7] [0ULL] [0ULL] [6U] [i_2] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_23 [i_2] [i_3 + 1] [6U] [6U] [i_2] [(_Bool)1]))));
                        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_14 [i_2] [i_3] [i_3])))) * ((+(((/* implicit */int) (short)(-32767 - 1)))))))) >= (max((((/* implicit */unsigned long long int) arr_17 [i_3] [i_3 - 1])), (arr_0 [i_3 - 2])))));
                        arr_26 [i_2] [2ULL] &= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)19837))));
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min(((unsigned short)43027), ((unsigned short)57748)));
                            arr_29 [i_3] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2115232816))));
                            arr_30 [i_2] [i_2] [i_7] [i_7] [3U] = ((/* implicit */_Bool) (~(4503049871556608LL)));
                            arr_31 [i_2] [i_7] [i_4] [i_3] [i_2] = ((/* implicit */int) arr_18 [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3]);
                            arr_32 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((-9223372036854775805LL), (((/* implicit */long long int) (unsigned short)65535)))))));
                        }
                        for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_21 &= ((/* implicit */int) (((-(((/* implicit */int) arr_12 [(signed char)4] [i_4] [i_7])))) > (((/* implicit */int) (((-(((/* implicit */int) arr_15 [i_2] [i_4] [(short)0])))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (signed char)-109))))))))));
                            arr_36 [i_2] [(short)4] [(short)4] [i_2] [i_3 - 2] &= (+((~(arr_16 [i_3 - 2]))));
                            arr_37 [i_9] [i_3] [i_4] [i_2] [i_9] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((+(1358992501))) - (((((/* implicit */_Bool) 2932944676U)) ? (((/* implicit */int) arr_18 [i_2] [(unsigned short)9] [9U] [(unsigned short)9] [i_9])) : (((/* implicit */int) arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))), ((+(((((/* implicit */long long int) 1495659965)) - (4503049871556613LL)))))));
                        }
                        /* LoopSeq 3 */
                        for (short i_10 = 1; i_10 < 9; i_10 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned int) (-(1099511627775ULL)));
                            var_23 = ((/* implicit */int) max((arr_8 [i_10 + 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_10 + 1])))))));
                            arr_42 [i_2] [i_4] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_2] [i_3] [i_2] [i_4] [i_7] [i_3] [i_10 - 1])) ? (((/* implicit */int) (short)-13247)) : (((/* implicit */int) arr_14 [i_2] [i_4] [i_10]))))), (((((/* implicit */_Bool) -1052110485)) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1] [i_3 - 1])))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            var_24 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))));
                            arr_45 [i_2] [i_3] [8] [i_4] [i_2] [i_11] = ((/* implicit */unsigned char) -9223372036854775805LL);
                            var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */int) 17761715042239115342ULL);
                            var_28 = ((/* implicit */signed char) (-(((arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                        }
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_52 [i_3] [i_2] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_39 [i_13] [i_2] [i_2] [i_2] [3])))) >= (((((/* implicit */_Bool) arr_39 [i_3] [i_2] [i_3] [i_2] [i_2])) ? (((/* implicit */int) arr_39 [(unsigned short)7] [i_2] [i_3] [i_2] [i_3 - 2])) : (((/* implicit */int) arr_39 [i_13] [i_2] [i_2] [i_2] [i_2]))))));
                        arr_53 [i_2] [i_3] [i_2] [3ULL] [i_3] [i_2] = ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
                        var_29 = arr_17 [i_2] [i_3 - 2];
                    }
                }
                arr_54 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)41546)) || (((/* implicit */_Bool) 6117957493130993383ULL))));
                arr_55 [i_2] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28139)) ? (arr_22 [i_2] [i_2] [i_2] [i_2] [i_2]) : (1034120659)))) ? (((/* implicit */int) arr_38 [i_3] [i_3 - 2] [i_3] [i_3] [i_3])) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)126)), ((unsigned short)54058)))))), (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_9 [i_3 - 1] [i_2])) : (((/* implicit */int) arr_33 [i_2] [(unsigned short)8] [i_2] [(_Bool)1]))))));
            }
        } 
    } 
}

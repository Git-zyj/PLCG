/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240824
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
    var_16 = ((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (2147483643)));
    var_17 -= ((/* implicit */short) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */_Bool) min((((arr_5 [i_1] [i_1] [i_0]) - (2147483647))), ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-37))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_0] [(unsigned char)18] [i_0] [(unsigned char)3] = ((/* implicit */unsigned char) (-(max((((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */unsigned short) (_Bool)1))))), (arr_5 [i_4 + 2] [5ULL] [i_1])))));
                                arr_16 [i_0] = ((/* implicit */short) max(((-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))))), (((/* implicit */int) (_Bool)1))));
                                arr_17 [i_0] [(short)14] [i_0] [16] = ((/* implicit */unsigned long long int) arr_4 [i_3] [i_4]);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [(unsigned char)8] [i_0] [i_0] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) arr_8 [4U] [(unsigned char)4] [i_2] [i_2] [i_3] [(signed char)11])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_5] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) (((((~(((((((/* implicit */int) var_13)) + (2147483647))) << (((((-11LL) + (32LL))) - (21LL))))))) + (2147483647))) << (((((var_14) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))) - (254)))))) : (((/* implicit */unsigned short) (((((~(((((((/* implicit */int) var_13)) + (2147483647))) << (((((-11LL) + (32LL))) - (21LL))))))) + (2147483647))) << (((((((var_14) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))) - (254))) + (219))))));
                                var_20 *= ((/* implicit */_Bool) var_10);
                                var_21 = (-(arr_10 [i_6] [i_6] [i_6] [i_5] [i_6]));
                            }
                        } 
                    } 
                    var_22 = ((min((((/* implicit */int) arr_1 [i_1] [i_2])), ((+(var_11))))) >= (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) (+(var_15))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_27 [i_0] [14ULL] [13ULL] [i_0] [i_7] = ((/* implicit */unsigned long long int) (-(((unsigned int) arr_0 [i_0]))));
                        var_23 = ((/* implicit */long long int) (~((+(((arr_20 [i_2] [i_0] [i_2] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                        arr_28 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((((/* implicit */int) arr_19 [i_0])) + (2147483647))) >> (((arr_10 [i_2] [i_2] [i_2] [i_2] [1ULL]) + (185170892)))))))) ? (max((((/* implicit */unsigned long long int) var_0)), (arr_20 [i_0] [i_0] [i_2] [i_7]))) : (((((/* implicit */unsigned long long int) min((arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) (_Bool)1))))) | (max((arr_20 [i_0] [i_0] [i_2] [i_7]), (((/* implicit */unsigned long long int) var_12))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_32 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(max(((-(((/* implicit */int) arr_19 [i_0])))), (((/* implicit */int) ((var_11) <= (((/* implicit */int) (_Bool)1)))))))));
                        arr_33 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)30021))))) % (((/* implicit */int) ((unsigned short) (unsigned short)12673)))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        arr_36 [i_0] [(_Bool)1] [i_1] [(_Bool)1] [(short)18] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (arr_9 [i_9] [i_9] [i_0] [i_0] [17LL])))), ((+(((/* implicit */int) var_13))))));
                        arr_37 [i_1] [i_0] [i_9] = ((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_2] [(_Bool)1]);
                        arr_38 [i_0] [i_0] [17LL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_9] [i_2])) - (var_15))) ^ (arr_21 [i_1] [i_1] [i_9 + 1] [(unsigned short)9] [i_0])))) ? (((((/* implicit */_Bool) max((var_11), (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (_Bool)1)))))) : ((~(((/* implicit */int) arr_8 [i_0] [8LL] [i_1] [i_2] [14ULL] [i_9 + 1]))))));
                    }
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        arr_41 [i_0] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-29810)) ? ((-(((((/* implicit */int) arr_26 [i_0] [(signed char)14] [(unsigned short)1] [i_0])) + (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [11LL] [i_0])))))) : (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) var_14)))) - ((+(((/* implicit */int) (short)0))))))));
                        arr_42 [i_0] [i_1] [i_0] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [7ULL] [i_10])), (arr_22 [i_0] [i_0] [i_0] [i_0] [(signed char)8])))) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) (signed char)-73)))) : (((/* implicit */int) (short)32767))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (max((536870911LL), (max((2936128133809247253LL), (((/* implicit */long long int) 1579268777)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_11] [i_2])))))))))));
                            var_25 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min(((-(var_9))), (((((/* implicit */int) var_14)) + (((/* implicit */int) var_0))))))), (max((((((/* implicit */_Bool) 469147545026084313ULL)) ? (((/* implicit */unsigned long long int) arr_45 [i_11] [8] [i_2] [i_0] [i_0])) : (arr_7 [i_2] [i_2] [i_2] [(signed char)5]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))));
                        }
                        arr_46 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
                arr_47 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_5 [i_0] [i_1] [8LL]) : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
}

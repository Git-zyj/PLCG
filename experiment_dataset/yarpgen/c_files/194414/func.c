/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194414
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (arr_2 [i_3 + 2]) : (arr_2 [i_3 - 2]))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
                        var_15 = ((/* implicit */long long int) ((-1067344761) > (1067344761)));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */short) 15227849648614159997ULL);
                            var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            var_18 -= ((/* implicit */unsigned int) ((long long int) (-((-(((/* implicit */int) (unsigned short)48010)))))));
                            var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (-(1067344761)))) ? (((((/* implicit */unsigned long long int) -1067344769)) % (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3] [i_2] [i_1] [i_0])))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (-(arr_13 [i_6]))))));
                            var_21 &= ((/* implicit */int) var_9);
                            var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2 - 2] [i_6] [i_2]))) != (arr_3 [i_2 - 1] [i_3 - 1]))))));
                            arr_19 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((short) min((min((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) arr_7 [i_3 + 1] [i_1] [i_1] [i_1])))));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_8] [i_8] [i_1] [i_8] = ((/* implicit */unsigned int) arr_26 [6ULL] [0U] [i_1] [i_2 - 2] [i_7] [i_7] [6ULL]);
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)177)))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_9] [i_9] [i_9] [i_1] [i_7])) ? (((((/* implicit */_Bool) arr_7 [i_0] [8ULL] [8ULL] [i_7])) ? (var_3) : (((/* implicit */unsigned int) (-2147483647 - 1))))) : (((/* implicit */unsigned int) -1067344769))));
                            arr_32 [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */int) arr_24 [i_0] [i_0] [i_2 - 2] [i_1] [i_9]);
                        }
                        var_25 += ((/* implicit */short) ((int) 686805754487544989ULL));
                        var_26 = ((var_1) << (((arr_11 [i_2] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2] [i_7] [i_7]) - (11200671051130906796ULL))));
                        /* LoopSeq 2 */
                        for (long long int i_10 = 1; i_10 < 11; i_10 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)207))));
                            arr_35 [(unsigned char)6] [i_1] [i_1] [i_7] [i_10] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_0] [i_1] [i_2 - 1] [i_1] [i_2 - 1])) >> ((((+(-1067344769))) + (1067344793)))));
                        }
                        for (long long int i_11 = 1; i_11 < 11; i_11 += 3) /* same iter space */
                        {
                            arr_38 [i_0] [i_1] [i_2 + 1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((arr_17 [i_0] [i_0] [i_2 - 1] [i_7] [i_2 + 2] [i_11 - 1] [i_2]) >> (((arr_24 [i_0] [i_1] [(short)5] [i_1] [i_2 + 2]) + (5807352692895207391LL)))))) : (((/* implicit */unsigned char) ((arr_17 [i_0] [i_0] [i_2 - 1] [i_7] [i_2 + 2] [i_11 - 1] [i_2]) >> (((((arr_24 [i_0] [i_1] [(short)5] [i_1] [i_2 + 2]) + (5807352692895207391LL))) - (4533721829071192506LL))))));
                            arr_39 [i_11] [i_1] [i_7] [i_7] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (unsigned char)119);
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 17759938319222006627ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_2 - 1] [i_11 - 1] [i_2 - 1] [i_11 - 1]))) : (arr_4 [i_0] [i_11 + 2]))))));
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2843967616177711494LL)) ? (((/* implicit */int) arr_26 [i_0] [i_2 - 1] [i_2] [5U] [(short)5] [i_0] [i_2 + 1])) : (((/* implicit */int) arr_26 [i_0] [i_2 - 2] [i_1] [i_12] [i_13] [i_0] [i_13]))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)69))) < (3432193381U)));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_31 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((arr_9 [i_2 - 1] [i_2 - 1] [i_1]) << (((7437795066178631431ULL) - (7437795066178631431ULL)))))) : (((/* implicit */unsigned char) ((((arr_9 [i_2 - 1] [i_2 - 1] [i_1]) + (9223372036854775807LL))) << (((7437795066178631431ULL) - (7437795066178631431ULL))))));
                            var_32 = ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_2 + 1] [i_2] [i_1]) : (arr_9 [i_2 - 1] [i_2 - 1] [i_1]));
                        }
                        var_33 = ((short) ((((/* implicit */int) arr_34 [i_0] [i_1] [(unsigned char)9] [1ULL] [i_0] [i_1])) * (((/* implicit */int) (unsigned short)0))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 1; i_15 < 12; i_15 += 2) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 2) 
                        {
                            {
                                var_34 = min(((+(((/* implicit */int) (unsigned short)17508)))), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)32)))))))));
                                arr_53 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2781440756034959874ULL))), (((((/* implicit */_Bool) 469067150)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_1] [i_2 - 2] [i_15] [i_16]))) : (18410715276690587648ULL))))) / (var_10)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_35 *= ((/* implicit */short) (+((+(min((var_2), (((/* implicit */unsigned long long int) var_8))))))));
}

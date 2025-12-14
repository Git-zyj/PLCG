/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220072
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        var_13 -= ((/* implicit */_Bool) arr_1 [i_0]);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) (~(2089617446843771372ULL))))) | (((var_10) ^ (min((((/* implicit */unsigned long long int) var_12)), (18446744073709551615ULL))))))))));
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((min((var_9), (0ULL))) / (((/* implicit */unsigned long long int) (-(arr_3 [i_2] [i_2] [i_2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3]))) : (((unsigned int) ((arr_6 [i_4]) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_2])))))))))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] = ((((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_1] [i_2]))) : (16357126626865780243ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))));
                        }
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_12 [i_0 + 4] [i_3 + 2] [i_3 + 2])))) ? ((-(33822867456ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-14722))))) ? (((((/* implicit */_Bool) arr_3 [i_2] [i_1] [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)73)))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                        var_17 = ((/* implicit */short) arr_6 [i_2]);
                    }
                    for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_0 - 2] [i_0] [i_0 + 1] [i_2])))))));
                        var_19 = (+((((((_Bool)1) ? (2097152U) : (arr_1 [i_0 + 1]))) - (arr_1 [i_0]))));
                        var_20 -= ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (min((((/* implicit */unsigned int) arr_14 [1ULL] [6LL])), (arr_1 [i_1]))))))));
                        arr_20 [i_1] [i_1] = ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((int) arr_22 [i_1])) > (((/* implicit */int) (unsigned char)73))));
                        /* LoopSeq 1 */
                        for (int i_8 = 4; i_8 < 13; i_8 += 3) 
                        {
                            var_23 ^= ((/* implicit */long long int) (unsigned char)255);
                            arr_26 [i_7] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_1])) || (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_0])))) ? (max((arr_25 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 2] [i_0] [i_0 + 3]), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!((_Bool)1))))));
                            arr_27 [i_1] [i_7] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)73);
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (short i_10 = 3; i_10 < 12; i_10 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73)))))))), (max((((/* implicit */long long int) min((arr_9 [i_1]), (var_1)))), (((9223372036854775807LL) << (((arr_8 [i_0] [i_1] [i_1]) - (7045428353631757005ULL)))))))));
                                arr_32 [i_1] [i_1] = max((((/* implicit */unsigned int) ((int) var_1))), (arr_12 [i_0 + 1] [i_10 - 2] [i_0 + 1]));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 3; i_11 < 14; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_18 [i_1] [i_1] [i_2] [i_12 - 1] [i_12])));
                            arr_40 [i_1] [i_1] [14LL] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(var_10)));
                            arr_41 [i_0] [i_1] [i_1] [i_1] [i_12 - 1] = ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (var_6)));
                            var_26 = ((/* implicit */int) (((((_Bool)1) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) + (((((/* implicit */_Bool) (short)14721)) ? (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_2] [i_11] [i_1])) : (16357126626865780244ULL)))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 2) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (var_1)));
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 4] [i_1]))));
                            var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                        }
                        arr_45 [i_1] [i_1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_6 [i_1])), (arr_34 [i_0] [i_0 - 2] [i_1] [i_0] [i_0] [i_11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -466425486))))) : (((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_1] [i_1] [i_2] [i_11 + 1] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_0 + 2] [i_2] [i_2] [(short)6] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_11])) || (((/* implicit */_Bool) 16357126626865780243ULL))))))) : (((((/* implicit */_Bool) -1333566614194023621LL)) ? (max((var_5), (((/* implicit */unsigned long long int) 8568477992690990659LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    }
                    for (long long int i_14 = 3; i_14 < 14; i_14 += 1) 
                    {
                        arr_48 [i_0] [i_0 + 2] [i_1] [i_0] [i_0] [6ULL] = ((/* implicit */long long int) var_11);
                        arr_49 [i_14] [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_0 - 1]);
                    }
                }
            } 
        } 
    } 
    var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) (short)14722))));
    var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) var_1))), ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7191))) & (var_11)))))));
    var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
}

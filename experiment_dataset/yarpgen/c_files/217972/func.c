/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217972
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
    var_20 = ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_19)))) % (var_2));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967273U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123)))));
        var_21 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        var_22 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) max((var_0), (var_12)))), (var_15)))));
                /* LoopNest 2 */
                for (short i_3 = 3; i_3 < 11; i_3 += 3) 
                {
                    for (short i_4 = 2; i_4 < 14; i_4 += 4) 
                    {
                        {
                            arr_13 [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744065119617024ULL)) ? (var_8) : (-9223372036854775807LL)))) ? (min((-4801670568594238187LL), (((/* implicit */long long int) 3153163254U)))) : ((+(var_8)))))));
                            /* LoopSeq 3 */
                            for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                            {
                                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~((~(4542083323796646514LL))))))));
                                arr_16 [i_1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_4 - 2] [i_3 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 - 3] [i_3 - 1] [i_3 + 2]))) : (arr_10 [i_1 - 1] [i_4 - 2] [i_3 + 3])))));
                                arr_17 [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_4] [i_4])) ? (max((max((arr_6 [i_5] [i_4] [i_1]), (var_14))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_5)))))) : (((long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_10 [i_1 - 1] [i_3] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_3] [i_5])))))));
                            }
                            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 3) 
                            {
                                arr_21 [i_1] [i_3] [i_6] = var_19;
                                var_25 = min((min((arr_6 [i_1] [0LL] [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_6] [i_1] [i_1]))))))), (((/* implicit */long long int) var_13)));
                                arr_22 [i_1 + 2] [i_2] [8U] [i_4] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
                            {
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)45748)) ? (13909371041129443446ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                                var_27 = (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)41106)) || (((/* implicit */_Bool) var_8))))));
                            }
                            var_28 = ((/* implicit */unsigned int) arr_1 [6U] [i_2]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                {
                    for (long long int i_9 = 1; i_9 < 14; i_9 += 3) 
                    {
                        for (short i_10 = 2; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_29 -= ((/* implicit */unsigned int) arr_4 [2LL] [2LL]);
                                var_30 = min((var_11), (min((((((/* implicit */_Bool) var_11)) ? (var_15) : (arr_3 [i_8]))), (arr_30 [i_10 + 3] [i_8] [i_2] [i_1 - 1]))));
                                var_31 = ((/* implicit */long long int) arr_27 [i_10 + 2] [i_9 - 1] [i_9 - 1] [i_1 + 2]);
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (((~(2934236351U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_8] [i_9] [i_2])) ? (var_6) : (((/* implicit */int) var_4)))))))) ^ (12585402688522781921ULL)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                {
                    arr_37 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) var_16);
                    arr_38 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_29 [i_1] [i_2] [9LL]);
                    arr_39 [i_1] [i_1] [i_1] = ((/* implicit */int) max((-4527890130283956696LL), (((((/* implicit */_Bool) 14914856883444543555ULL)) ? (5389946725149608102LL) : (min((((/* implicit */long long int) 1164878311)), (var_8)))))));
                    arr_40 [9U] [9U] [i_1 + 1] = ((/* implicit */unsigned long long int) arr_9 [i_11] [i_2] [i_1]);
                    var_33 = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) var_16))))), (max((((/* implicit */unsigned long long int) 4799848309387875471LL)), (18446744073709551610ULL)))))));
                }
                for (int i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                {
                    arr_43 [i_12] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21805)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12616))) : (3604574712U)));
                    var_34 |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 1002900914)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_23 [i_2] [i_12]), (((/* implicit */short) var_4))))))))));
                    var_35 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) - (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [2LL] [2LL]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_1 + 2] [i_1]))) + (36011204832919552ULL)))))));
                }
                for (int i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
                {
                    arr_47 [i_1] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_14 [i_1] [i_13] [i_1] [i_2] [i_1] [i_1]), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2] [i_1] [i_13] [(short)11])) : (((var_9) ? (((/* implicit */unsigned long long int) (~(arr_42 [i_2] [i_2] [i_2])))) : (max((arr_19 [i_13] [i_2] [i_2] [i_1]), (((/* implicit */unsigned long long int) var_12))))))));
                    var_36 = ((/* implicit */unsigned int) (-(var_15)));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */long long int) max((((/* implicit */unsigned short) max((arr_9 [i_1 - 1] [13LL] [i_1 - 1]), (arr_9 [i_1 - 1] [i_1 - 1] [i_13])))), (min((var_18), (((/* implicit */unsigned short) arr_1 [i_1 + 2] [i_1 + 2]))))));
                                arr_52 [1LL] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_2))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)0)) ? (var_7) : (((/* implicit */unsigned long long int) var_3))))));
                        arr_58 [i_1] [i_1] [i_16] [i_17] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_17] [i_16] [i_17]))));
                        var_39 = ((/* implicit */int) arr_50 [i_16] [i_16] [3] [i_16] [i_16]);
                    }
                    var_40 = ((/* implicit */unsigned short) var_14);
                }
                var_41 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1 + 2] [i_1 + 2])), (arr_19 [i_1 + 2] [i_1 + 1] [i_2] [i_2]))), (((/* implicit */unsigned long long int) ((unsigned int) max((281474968322048LL), (((/* implicit */long long int) (_Bool)0))))))));
            }
        } 
    } 
}

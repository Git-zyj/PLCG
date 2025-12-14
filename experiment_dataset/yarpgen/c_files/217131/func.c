/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217131
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] &= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42760))) : (4258628446U)))));
            var_14 &= ((/* implicit */short) arr_0 [i_1]);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] |= ((/* implicit */unsigned long long int) (!(var_8)));
                    var_15 = ((/* implicit */short) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_2)));
                    arr_12 [i_1] [(_Bool)1] [(short)13] [(unsigned short)3] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)87)) | (((/* implicit */int) ((unsigned short) min((var_10), (((/* implicit */unsigned long long int) 673309385))))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */_Bool) ((int) 36338850U));
                    arr_16 [i_1] [i_2] [i_0] = ((/* implicit */short) ((long long int) arr_0 [i_2 - 2]));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((int) arr_9 [i_0] [i_1] [i_5 - 3] [i_4 + 2]));
                        arr_20 [i_0] [i_0] [i_1] [i_0] [i_1] [i_4] [i_1] = ((/* implicit */int) arr_2 [i_1] [i_2] [i_4]);
                        var_17 += ((/* implicit */unsigned char) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_5 - 3])))));
                        var_18 = ((/* implicit */int) arr_8 [i_0] [i_0]);
                        var_19 *= ((/* implicit */_Bool) var_1);
                    }
                    for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7481189109451615145ULL)) ? (((/* implicit */int) (signed char)87)) : (-753215762)))) >= (arr_13 [i_0] [i_0] [i_2] [i_1] [i_6])));
                        arr_23 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_2] [i_1])) >= (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))));
                    }
                    var_21 += ((/* implicit */signed char) (-(-461788128)));
                }
                for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))) >> (((((((/* implicit */int) ((signed char) (unsigned short)65535))) ^ (673309385))) + (673309434)))));
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_0] [i_7] [i_7 - 3] [i_2 + 2]) * (((/* implicit */int) ((_Bool) arr_9 [i_8] [i_1] [i_8] [i_7])))))) ? (7481189109451615145ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11))))));
                        arr_31 [i_1] [i_1] [i_1] [i_7] [i_7] [i_0] [i_2] = ((/* implicit */short) var_2);
                        var_23 = ((/* implicit */int) ((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)23)) ? (383164950) : (((/* implicit */int) (signed char)23))))))) ^ (var_9)));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_24 += ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [i_7] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (arr_15 [i_0] [i_1] [i_0] [i_0] [(_Bool)1]) : (((((/* implicit */int) arr_33 [i_7] [i_2] [i_1])) << (((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [13ULL] [i_1] [i_1])))))) <= (((((/* implicit */int) ((signed char) (signed char)-88))) ^ (((/* implicit */int) var_11))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_6 [i_1]), (var_2))), (((/* implicit */long long int) ((_Bool) arr_17 [1] [1] [i_2] [1] [1] [1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)9848), (((/* implicit */unsigned short) var_11)))))))) : ((~(-178915703)))));
                    }
                    arr_35 [i_2] [i_1] = max((min((((unsigned long long int) 6724228886119051674LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_1]))) : (var_12)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_2] [4] [i_7] [i_7]))))), (((/* implicit */long long int) var_7))))));
                    arr_36 [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_13 [i_2 - 2] [i_2] [i_2] [i_1] [i_7 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        arr_39 [i_1] [i_7] [i_2] [i_1] [i_1] = ((/* implicit */int) (unsigned char)92);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17303)))))) ? (arr_14 [i_0] [i_0] [i_0] [i_10 + 3]) : (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))) : (((((/* implicit */_Bool) arr_10 [i_7 - 3] [i_7 - 3] [i_10 + 1] [(short)5])) ? (((/* implicit */unsigned long long int) var_2)) : (min((((/* implicit */unsigned long long int) var_6)), (16802591055292940329ULL)))))));
                        var_27 = ((/* implicit */unsigned int) (signed char)-24);
                    }
                }
                for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 1) /* same iter space */
                {
                    arr_42 [i_11 - 2] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)-111))))) * (arr_14 [i_11 + 1] [i_2 + 2] [i_2 + 1] [i_0]))) * (((/* implicit */unsigned long long int) var_12))));
                    var_28 = ((/* implicit */unsigned short) 6025749026947127172ULL);
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)87))) || (var_8))))));
                    arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (~((~(var_0)))));
                }
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (min((((/* implicit */unsigned int) arr_37 [i_0] [i_1] [i_1] [i_1] [i_0])), (((((/* implicit */_Bool) 1331346785U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_1] [i_1]))) : (2963620510U)))))));
                var_31 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_29 [i_1] [i_2 - 1] [i_2 + 4] [i_2] [i_2 - 2] [i_2])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))), ((-(var_0)))));
            }
        }
        /* vectorizable */
        for (short i_12 = 2; i_12 < 13; i_12 += 2) 
        {
            var_32 = ((/* implicit */unsigned char) ((short) var_12));
            arr_48 [i_0] [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_37 [(unsigned char)10] [i_0] [i_0] [i_0] [(unsigned char)10]))))) ? (arr_40 [i_12] [i_12]) : (((((/* implicit */_Bool) (unsigned short)18556)) ? (var_1) : (((/* implicit */int) var_7))))));
        }
        var_33 = ((((/* implicit */_Bool) min((((short) 881269136U)), (((/* implicit */short) (!(((/* implicit */_Bool) 398483381505290740LL)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)90))))) : (((arr_14 [i_0] [i_0] [i_0] [(signed char)11]) + (((/* implicit */unsigned long long int) var_2)))));
    }
    for (unsigned short i_13 = 4; i_13 < 12; i_13 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) << ((((((-2147483647 - 1)) - (-2147483643))) + (7)))))) ? (((/* implicit */int) (unsigned short)48876)) : (((/* implicit */int) (unsigned char)2)))))));
        arr_51 [i_13] [i_13] = ((/* implicit */unsigned long long int) max((((1331346785U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53361))))), (((/* implicit */unsigned int) arr_10 [i_13 + 1] [i_13 - 3] [i_13] [i_13]))));
    }
    for (unsigned short i_14 = 4; i_14 < 12; i_14 += 3) /* same iter space */
    {
        var_35 &= ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_40 [i_14] [10])), (10754308977558130953ULL)))))) && (((/* implicit */_Bool) (~(((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))))))))));
        var_36 += (~(((min((((/* implicit */unsigned long long int) arr_49 [6] [6])), (var_10))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-1)) : (arr_15 [i_14] [i_14] [(signed char)6] [i_14] [i_14])))))));
    }
    var_37 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned long long int i_15 = 4; i_15 < 7; i_15 += 3) 
    {
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_15 - 4] [i_15] [i_15 - 3] [i_15] [i_15] [9])) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_26 [i_15 + 2] [i_15] [i_15 - 1] [1LL] [i_15] [10])))))))));
        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) 4258628446U))));
    }
    /* LoopSeq 1 */
    for (long long int i_16 = 1; i_16 < 9; i_16 += 1) 
    {
        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) var_1))));
        /* LoopNest 3 */
        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            for (int i_18 = 1; i_18 < 11; i_18 += 1) 
            {
                for (unsigned char i_19 = 2; i_19 < 11; i_19 += 1) 
                {
                    {
                        var_41 &= ((/* implicit */unsigned long long int) ((short) (-((-(1331346785U))))));
                        var_42 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_45 [i_19 - 1] [i_18 + 1])))) ? (((/* implicit */int) ((short) arr_32 [i_18] [i_18] [i_18 - 1] [i_19] [i_19]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)30941)) : (((/* implicit */int) var_4))))));
                        var_43 &= ((/* implicit */short) max((min((((/* implicit */unsigned short) var_8)), (arr_62 [i_18 + 1] [i_17] [i_18 + 1] [i_19] [i_16]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_62 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_17] [i_17])))))));
                        var_44 &= ((/* implicit */unsigned short) arr_52 [i_16]);
                    }
                } 
            } 
        } 
    }
}

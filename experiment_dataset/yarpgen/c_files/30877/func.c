/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30877
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
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_15)) >= (((int) min(((signed char)-77), ((signed char)-2))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)32767))));
        var_17 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [(unsigned char)4])) ? (((((/* implicit */_Bool) var_4)) ? (417987250U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)7052)))) ? (((((/* implicit */_Bool) arr_2 [(unsigned char)10])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [0U])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) arr_3 [(_Bool)0]))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 += ((/* implicit */long long int) var_5);
        var_19 *= ((/* implicit */unsigned char) var_7);
    }
    for (int i_2 = 3; i_2 < 22; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) max((((unsigned long long int) (unsigned short)7052)), (((((/* implicit */_Bool) var_15)) ? (arr_1 [i_2 - 2]) : (arr_9 [i_2 + 1])))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_5))));
            arr_14 [i_3] = (~(arr_1 [i_2]));
            var_21 = ((((/* implicit */_Bool) min((arr_9 [i_2 - 3]), (((/* implicit */unsigned long long int) (unsigned short)7052))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned char)4] [(unsigned char)4] [i_3]))) - (var_10)))) - (((((/* implicit */_Bool) (unsigned short)7052)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(signed char)22]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3] [i_3])) - (((/* implicit */int) (short)-10412))))) ? (((((/* implicit */_Bool) (signed char)-86)) ? (arr_9 [(unsigned char)4]) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)58483)))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 3; i_4 < 20; i_4 += 3) 
        {
            var_22 = ((/* implicit */_Bool) max((var_22), ((!(((/* implicit */_Bool) arr_2 [(unsigned char)0]))))));
            /* LoopSeq 4 */
            for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_13 [i_2 - 1] [i_4 - 2] [i_5 - 4]))));
                arr_23 [i_2] [i_2] [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_1 [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_2 [i_5])) : (var_8))))));
            }
            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        {
                            arr_31 [7] [i_7] [(short)3] [i_6] [(short)3] [i_4 - 2] [i_2 - 3] = ((/* implicit */short) arr_20 [i_4] [i_4 + 1] [i_4]);
                            arr_32 [i_8] [(unsigned char)7] [i_2] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_28 [i_2 - 2] [i_2 - 2] [i_6] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7]))) : (68719476734ULL))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)16382)) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2]))))) : (((arr_9 [i_6]) / (((/* implicit */unsigned long long int) arr_24 [i_6] [(unsigned char)16] [i_2]))))));
                /* LoopSeq 3 */
                for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_28 [i_2] [i_4 + 2] [i_6] [2LL]))));
                    var_26 *= ((/* implicit */unsigned short) (((((-(((/* implicit */int) arr_16 [i_2] [i_6] [i_2])))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_9] [i_9])) ? (var_4) : (arr_20 [i_2] [i_2] [i_2]))) - (1080374313)))));
                    var_27 *= ((/* implicit */int) arr_3 [i_2]);
                }
                for (unsigned int i_10 = 4; i_10 < 20; i_10 += 3) 
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1677098745U))))) << (((((arr_30 [i_2] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58483))) : (var_0))) - (58475U))))))));
                    arr_40 [i_2 - 1] [i_2 - 1] [(unsigned short)9] [i_10] = ((/* implicit */short) arr_39 [i_2] [i_4] [i_6 - 2] [i_6 - 2] [i_10]);
                    arr_41 [(signed char)14] [6U] [(signed char)14] [i_6] [6U] [(unsigned char)6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)7053)) ? (arr_34 [i_10] [(unsigned char)10] [i_10 + 3] [i_10] [i_10 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        arr_45 [i_6] [16U] [(_Bool)1] [16U] [(unsigned char)12] |= ((/* implicit */unsigned char) arr_43 [i_11] [6] [12U] [6]);
                        var_29 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_11])))))));
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    arr_48 [i_4] [i_4] [i_4] [i_4] [(signed char)16] [i_4 + 1] = ((/* implicit */short) var_9);
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_12))));
                    arr_49 [i_12] [i_6] [i_4 - 2] [i_2] = ((/* implicit */short) ((arr_43 [i_2 - 3] [i_4 + 3] [i_6 - 1] [i_6 - 1]) > (arr_43 [i_2 - 3] [i_4 + 2] [i_6 - 1] [i_6 + 1])));
                }
            }
            for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 21; i_14 += 3) 
                {
                    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) arr_52 [i_2] [i_2] [i_2] [i_2] [i_2]);
                            var_32 *= ((/* implicit */short) arr_39 [(short)6] [(short)6] [i_15 + 1] [i_15 + 1] [i_15 + 1]);
                            var_33 = ((/* implicit */signed char) arr_56 [i_15 + 2] [i_2] [i_13] [i_2] [i_2] [i_2] [i_2]);
                            var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((int) arr_38 [i_14] [i_13] [i_2] [i_2])))));
                        }
                    } 
                } 
                var_35 |= ((/* implicit */int) ((arr_34 [i_13] [i_4 - 3] [i_2] [i_2 + 1] [i_2]) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            }
            for (signed char i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)10754)) ? (arr_35 [i_4 + 1] [i_4 - 2]) : (((/* implicit */int) var_5))));
                /* LoopNest 2 */
                for (long long int i_17 = 2; i_17 < 20; i_17 += 2) 
                {
                    for (short i_18 = 2; i_18 < 21; i_18 += 4) 
                    {
                        {
                            arr_66 [i_4] [i_17] [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)58479))));
                            arr_67 [i_2] [9U] [9U] [i_17 - 2] [i_18] [4ULL] [19U] = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_5))));
                            var_37 += ((/* implicit */short) (+(((/* implicit */int) arr_28 [(unsigned char)13] [i_18] [i_18 + 1] [i_2 - 2]))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_2] [i_2] [i_2 - 2] [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_55 [i_2] [i_2 - 1] [i_2 - 1] [i_4 - 2] [(unsigned char)2])) : (((/* implicit */int) arr_55 [i_2] [i_2] [i_2 + 1] [i_4 - 1] [i_2 + 1]))));
                var_39 *= ((((/* implicit */_Bool) arr_62 [i_2])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_6))))));
            }
            arr_68 [(_Bool)1] [i_2 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2459394908740286173LL) * (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_2] [(_Bool)0] [(_Bool)1] [i_4] [(signed char)8])))))) ? (arr_62 [i_2 - 1]) : (((/* implicit */int) var_15))));
            arr_69 [i_2] = ((/* implicit */int) arr_1 [i_2]);
        }
        arr_70 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [0U] [i_2] [i_2 - 3] [i_2])) ? (((/* implicit */int) arr_65 [i_2] [i_2] [i_2] [i_2] [19] [i_2] [i_2 - 1])) : (((/* implicit */int) var_14))))))))));
        /* LoopSeq 1 */
        for (long long int i_19 = 3; i_19 < 22; i_19 += 1) 
        {
            arr_75 [i_2] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_10 [i_2 - 3] [i_2 - 3]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((2535654345U), (arr_74 [12])))) ? (((((/* implicit */_Bool) arr_71 [i_2] [i_2] [i_2])) ? (arr_60 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_19 - 3] [9]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_20 = 3; i_20 < 21; i_20 += 3) 
            {
                arr_78 [i_19] [i_19 - 2] [i_19] [i_19] = ((/* implicit */unsigned char) arr_63 [i_2] [i_2] [i_19] [i_2] [i_2] [i_2]);
                arr_79 [8U] [8U] [i_20 + 2] [16ULL] |= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) var_13))))));
                arr_80 [i_19] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1614174736)) ? (((/* implicit */int) arr_38 [7U] [i_2] [i_2 + 1] [i_2])) : (((((/* implicit */_Bool) 13943191034736077059ULL)) ? (((/* implicit */int) (short)-10754)) : (((/* implicit */int) (short)10754))))));
            }
        }
    }
}

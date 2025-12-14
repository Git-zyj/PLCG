/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221347
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)20] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_0]))))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_16))))));
        var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */unsigned long long int) (unsigned char)255)), (14431527212994876676ULL))) : ((~(4015216860714674939ULL))))), (((/* implicit */unsigned long long int) var_1))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2097171706837573487LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)767)))) + (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 580294938U)) ? (((/* implicit */int) arr_1 [2LL] [4LL])) : (((/* implicit */int) (signed char)93)))))))) : (((((14431527212994876676ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_13))))));
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(1205186549161443438ULL))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (short)-12246);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_1] [i_2])) > (((/* implicit */int) arr_0 [i_1]))));
            var_24 -= ((/* implicit */short) -1LL);
            var_25 = ((/* implicit */signed char) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_7)));
            var_26 += ((/* implicit */unsigned long long int) arr_1 [i_2] [i_1]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */_Bool) var_6);
            var_27 &= ((/* implicit */unsigned short) max((arr_10 [i_1] [(_Bool)1] [i_3]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_17)))))));
            var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_3])))));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                var_29 = ((/* implicit */_Bool) min((var_29), ((!(((/* implicit */_Bool) max(((signed char)-7), (arr_0 [i_3]))))))));
                var_30 = ((/* implicit */_Bool) arr_13 [(_Bool)1] [(_Bool)1]);
            }
            /* vectorizable */
            for (short i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
            {
                var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_6 [i_3])))) ? (arr_15 [3ULL] [4U]) : (((/* implicit */long long int) ((unsigned int) arr_14 [7U] [i_3] [17LL] [i_1])))));
                /* LoopSeq 2 */
                for (short i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    var_32 *= ((/* implicit */unsigned char) arr_0 [(unsigned short)5]);
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_16 [i_1] [i_6 + 1] [18U] [i_6]))));
                }
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 3; i_8 < 22; i_8 += 2) 
                    {
                        arr_27 [i_1] [i_8] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_3] [(unsigned short)14] [(unsigned short)17] [i_8 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_10 [i_8 - 3] [i_8 - 3] [i_8 - 3])));
                        var_34 = ((/* implicit */int) ((arr_10 [i_3] [i_7] [i_8]) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_1])) <= (((/* implicit */int) arr_14 [(_Bool)1] [i_5] [(_Bool)1] [(signed char)21]))))))));
                    }
                    var_35 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) arr_9 [i_1] [(short)9] [3U])) : (arr_15 [i_7] [i_7])));
                    arr_28 [i_3] [(short)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17342181466903092833ULL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))));
                    var_36 = ((/* implicit */short) var_1);
                }
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_5] [i_3] [i_1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)12245))))) : (var_5)));
                arr_29 [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)0)) & (((/* implicit */int) arr_24 [i_1] [i_1] [i_3] [i_3] [(unsigned short)21]))));
                var_38 = ((/* implicit */unsigned short) 8260979048608038806LL);
            }
            for (short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
            {
                arr_33 [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2241200731788482596ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10))) : (4015216860714674939ULL)))) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [5U] [i_3] [i_3] [i_9]))) : (arr_19 [i_9] [i_3]))) : (min((((/* implicit */unsigned long long int) arr_17 [i_1] [i_3] [i_3] [i_3])), (arr_19 [i_3] [i_9])))));
                var_39 = ((((/* implicit */_Bool) max(((-(var_15))), (var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [13U]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))) & (var_3)))) ? (((/* implicit */unsigned long long int) arr_25 [i_9])) : (max((var_12), (((/* implicit */unsigned long long int) (unsigned char)255)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    var_40 = arr_10 [i_1] [i_1] [i_10];
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        arr_39 [1U] [i_3] [i_3] [9ULL] [22U] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_3] [i_9])) ? (((/* implicit */int) arr_1 [i_10] [i_3])) : (((/* implicit */int) arr_1 [18] [i_10]))));
                        arr_40 [i_3] = ((/* implicit */_Bool) var_5);
                        var_41 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [i_11]))));
                    }
                    arr_41 [i_3] = ((((/* implicit */_Bool) arr_9 [i_1] [i_9] [i_10])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34790))) & (arr_38 [i_10] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                    var_42 = ((/* implicit */unsigned int) (unsigned short)20722);
                }
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                {
                    var_43 += ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) var_4)))) ? (arr_22 [i_1] [i_3] [i_9] [i_1]) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) (-(((140737488355327LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)60))))))))));
                    var_44 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_24 [i_1] [i_3] [i_9] [i_3] [i_12])), (arr_4 [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [22U] [18U])))))));
                    var_45 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (3595533664U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (unsigned short)11203)) ? (((/* implicit */unsigned long long int) 2523459649U)) : (((((/* implicit */_Bool) arr_5 [i_1] [22U])) ? (((/* implicit */unsigned long long int) var_2)) : (arr_19 [i_3] [i_12])))))));
                }
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
                {
                    var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) var_7))));
                    var_47 = ((/* implicit */unsigned int) arr_8 [i_1] [i_13]);
                }
            }
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    {
                        var_48 += ((/* implicit */unsigned long long int) min((min((arr_26 [(_Bool)1] [i_3] [11ULL] [i_14] [(short)20]), (arr_26 [i_1] [i_1] [i_1] [10LL] [i_1]))), (min((arr_26 [i_1] [i_3] [i_3] [i_1] [i_15]), (arr_26 [i_1] [i_1] [i_1] [i_14] [i_1])))));
                        var_49 = ((/* implicit */unsigned int) ((6576434509317496333LL) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        var_50 = ((/* implicit */_Bool) var_5);
                        arr_54 [i_3] [i_1] [13ULL] [(_Bool)1] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_35 [i_3] [(unsigned short)11] [(unsigned short)11] [i_15])), (arr_5 [i_14] [i_3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -270441861)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60))) : (arr_35 [i_3] [i_3] [i_14] [i_15]))))));
                    }
                } 
            } 
        }
        arr_55 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_1] [i_1] [i_1] [i_1]))) / (3959227035U)))) ? (min((var_15), (((/* implicit */unsigned int) arr_51 [i_1] [i_1] [i_1] [i_1])))) : (max((var_15), (var_2)))));
    }
    var_51 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_7))))))));
}

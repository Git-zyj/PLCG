/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229778
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_1 [i_0 - 1]))) ? ((+(((var_12) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (min((((((/* implicit */_Bool) var_8)) ? (7228820753165330011LL) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) (~(2101946049U))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) arr_1 [i_0 + 2])) + (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 3]))))));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) min((arr_1 [i_0]), (arr_1 [i_0]))))) <= (((/* implicit */int) max(((short)23940), (((/* implicit */short) ((signed char) arr_1 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_9 [i_1])))) | (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1]))) : (2101946049U))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [i_1]))))))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 3; i_5 < 7; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_5])) / (((/* implicit */int) (unsigned char)147))))) / (min((var_9), (((/* implicit */unsigned int) var_13))))))) ? ((-(((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_1])))))) : (((/* implicit */int) arr_0 [i_1])))))));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) var_6)), (arr_12 [i_3 + 1] [i_5 + 3]))))))));
                            arr_21 [i_1] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */_Bool) min((min((arr_15 [i_5] [i_5 + 3] [i_3] [i_3 + 1] [i_1 - 1]), (((/* implicit */unsigned int) arr_11 [i_1 - 1])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_1 - 1])))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 9; i_6 += 4) 
                        {
                            arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55621)) ? (((/* implicit */int) arr_22 [i_1] [i_1 + 1] [i_3] [i_1 + 1] [i_6 - 1])) : (((/* implicit */int) (unsigned char)108))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9))))));
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (~(((/* implicit */int) var_0)))))));
                        }
                        arr_27 [i_1] [i_2] [i_3] [i_4] = (unsigned char)0;
                        var_19 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (((((arr_14 [i_2] [i_3 - 1] [i_4]) >= (((/* implicit */unsigned long long int) 2193021262U)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (arr_16 [i_1 + 3] [i_2] [i_3] [i_3])))) : ((+(1042309515)))))));
                        var_20 = ((/* implicit */long long int) (-(var_10)));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 8; i_7 += 1) 
        {
            var_21 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [i_1] [(short)6] [i_1] [i_1] [i_1 + 3] [i_1 + 3]))))) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : ((~((+(((/* implicit */int) var_12)))))));
            var_22 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_1] [i_7] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1 + 3] [i_1] [i_1])) : (arr_19 [2ULL] [(short)2] [2ULL] [(_Bool)1] [i_7]))))), ((((!(((/* implicit */_Bool) var_1)))) ? (arr_29 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_24 [i_1] [i_1] [i_7 + 2] [i_7] [i_7 - 2] [(unsigned char)2])))))))));
            var_23 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_28 [i_1 + 2]))))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) 10U))));
        }
        for (int i_8 = 1; i_8 < 8; i_8 += 3) 
        {
            arr_34 [i_1] [i_8] [i_1] = ((/* implicit */int) arr_7 [i_8]);
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) arr_1 [i_1 - 1]))))) ^ (((unsigned long long int) arr_1 [i_1 + 1]))));
            arr_35 [i_1] [i_8] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_8] [i_1] [i_8] [i_8])))))));
            arr_36 [i_8] = ((/* implicit */unsigned int) var_11);
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                arr_39 [i_8] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (short)19570)) && (((/* implicit */_Bool) arr_19 [i_1] [i_8] [i_9] [i_1] [i_8 - 1]))))))), (arr_30 [i_1])));
                var_26 |= (~(((unsigned long long int) min((((/* implicit */short) arr_9 [i_1])), (arr_13 [i_1 + 3] [i_1 + 3] [8LL])))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                {
                    arr_45 [i_1] [i_8] [i_10] [i_11] [i_8] [i_10] = ((/* implicit */short) arr_6 [i_1] [i_1]);
                    arr_46 [i_8] [i_8] [i_10] [i_11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (unsigned char)82)))) : (((/* implicit */int) arr_0 [i_1 - 1]))))), ((+((+(16078850930307311580ULL)))))));
                }
                for (long long int i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                {
                    arr_50 [i_8] = ((/* implicit */short) ((long long int) (-(((/* implicit */int) arr_37 [i_12] [i_8] [i_10] [i_12])))));
                    arr_51 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(3795722448U)))) ? (((/* implicit */int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_10] [i_1] [i_1] [i_1])))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)12447))))))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (arr_14 [i_1 + 2] [i_1] [i_1 + 3])))))) : (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) (unsigned char)57))))) ? (((/* implicit */int) arr_23 [i_1] [i_8] [(unsigned short)5] [i_12] [i_12] [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)128)) || (((/* implicit */_Bool) 18446744073709551608ULL)))))))));
                    arr_52 [i_8] [i_10] [i_8] [i_1] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) ((signed char) arr_7 [i_10]))))));
                    arr_53 [i_8] [i_8 + 2] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((((((/* implicit */_Bool) (unsigned char)147)) || (((/* implicit */_Bool) 4294967295U)))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2193021247U)))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned char)253)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_8] [i_8] [i_10]))))) : (((/* implicit */int) arr_49 [i_1 + 3] [i_1 + 3] [i_8] [(unsigned char)6] [i_1])))))));
                }
                arr_54 [i_8] [i_8] [i_10] [i_1] = var_9;
            }
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                arr_58 [i_8] [i_13] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34826))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_1] [i_8] [i_8] [i_1])) ? (((/* implicit */int) arr_25 [i_1] [i_8 + 2] [i_8 + 1] [i_8 + 2] [4ULL])) : (((/* implicit */int) (unsigned char)190))))) : (min((((/* implicit */long long int) var_12)), (var_2)))))));
                var_27 = arr_42 [(short)8] [i_8] [i_8] [i_8 + 2] [i_8] [i_13];
                arr_59 [i_8 + 1] [i_8] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_7 [i_1]))))))));
                arr_60 [i_8] [i_8 + 2] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 2])) | (((/* implicit */int) arr_1 [i_1 + 3]))))) ? ((-(((((/* implicit */_Bool) 562915593682944LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) (short)1416)), (var_1)))))));
            }
        }
    }
    var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6)))))) ? (min((var_2), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_10)))))) : (((/* implicit */long long int) var_10))));
    var_29 |= ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-8028))))) != (((/* implicit */int) (short)1416)))))));
}

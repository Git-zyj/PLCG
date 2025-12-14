/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42798
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
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((var_10) + (((/* implicit */int) (_Bool)1)))) : ((-(var_13))))) - (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_4 [(unsigned char)15] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_3 [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 86487540880425601LL)) ? (((((/* implicit */int) var_0)) | (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_1 [i_0])) - (133))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */long long int) min(((+(arr_3 [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) arr_0 [i_1])))))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_16 += ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1])) ^ (((/* implicit */int) arr_9 [i_1] [i_1]))))) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [20U])), (var_7)))))) == (((/* implicit */int) var_6))));
            arr_12 [i_1] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_1])) / (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_1 [i_1]))))) : (max((((/* implicit */unsigned long long int) arr_10 [i_2])), (var_11))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? ((~(((/* implicit */int) (unsigned char)235)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_0 [i_2]))))))))));
            arr_13 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) <= (max((86487540880425601LL), (((/* implicit */long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_6 [i_1])))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) ((arr_2 [i_3]) <= (((/* implicit */int) var_0)))))))));
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_3 [i_3]))));
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) & (arr_3 [i_1])))) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_3])) < (((/* implicit */int) var_14))))))));
            arr_17 [i_1] = ((/* implicit */short) var_10);
        }
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            arr_21 [i_4] = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((var_8) == (((/* implicit */int) arr_15 [i_1] [i_4]))))))), (((/* implicit */int) var_9))));
            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_4])), ((+(var_8))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        arr_29 [i_1] [i_6] [i_5] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_5 - 2] [i_4])) || (((/* implicit */_Bool) arr_14 [i_5 + 1] [i_4]))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_22 [i_1] [i_4] [(short)18])))))));
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        arr_33 [i_1] [(unsigned char)9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_1] [i_4])) < ((+(((/* implicit */int) arr_14 [i_5] [i_1]))))));
                        var_21 = ((/* implicit */signed char) arr_7 [i_1]);
                    }
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                    {
                        var_22 += ((/* implicit */short) arr_32 [i_1]);
                        arr_37 [i_9] [i_4] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_22 [i_1] [i_5 + 1] [i_9])) | (((/* implicit */int) arr_6 [i_1])))));
                    }
                    var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 164223293)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) arr_10 [8U]))))) ? (((((/* implicit */_Bool) arr_30 [i_6] [i_5 + 1] [i_4] [i_1] [i_1])) ? (arr_28 [i_1] [i_4] [i_5] [i_5 - 1] [i_6]) : (((/* implicit */int) arr_23 [i_1])))) : (((((var_13) + (2147483647))) >> (((((/* implicit */int) var_5)) + (105)))))));
                    arr_38 [i_1] [i_4] [i_5] [i_6] &= ((/* implicit */signed char) (-(((arr_25 [i_1] [i_1] [i_1]) ? (arr_27 [i_1] [i_5 - 1] [(unsigned short)14] [i_6] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                }
                var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_5]))))) < (((unsigned long long int) arr_9 [i_4] [i_5]))));
            }
        }
    }
    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
    {
        var_25 = arr_11 [i_10];
        var_26 = ((/* implicit */unsigned long long int) arr_18 [i_10] [i_10] [i_10]);
    }
    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) arr_9 [i_11] [i_11]);
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11]))) ^ (max((arr_20 [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_40 [i_11])) & (((unsigned long long int) arr_40 [i_11]))));
        /* LoopSeq 4 */
        for (unsigned char i_12 = 1; i_12 < 20; i_12 += 2) 
        {
            var_30 &= ((/* implicit */signed char) arr_35 [i_11] [i_12 + 1] [i_12 + 2] [i_11] [i_12 + 2]);
            var_31 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_11 [(unsigned short)11]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_12 - 1]))))) : (((/* implicit */int) arr_43 [i_11]))))) | (max((((/* implicit */unsigned long long int) -1108161410)), (((((/* implicit */_Bool) var_11)) ? (6744087198724199810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)107)))))))));
            var_32 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_34 [i_11] [i_12]))))));
        }
        for (signed char i_13 = 3; i_13 < 19; i_13 += 1) 
        {
            var_33 = (!(((/* implicit */_Bool) arr_47 [i_13] [i_13 + 1])));
            /* LoopNest 3 */
            for (unsigned short i_14 = 1; i_14 < 19; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_34 ^= ((/* implicit */_Bool) var_3);
                            var_35 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_34 [i_14] [i_14 + 2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((arr_47 [i_15] [i_16]) > (((/* implicit */int) arr_10 [i_14 + 3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_13 + 2])))))))));
                            var_36 = ((/* implicit */short) min((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_10 [i_11])) / (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_22 [i_11] [i_14 - 1] [i_15])))), (((/* implicit */int) max(((short)22407), (((/* implicit */short) arr_57 [i_13 + 2] [i_13 - 2] [2U] [i_13 + 2] [i_13 + 2] [i_13])))))));
                            var_37 = ((/* implicit */short) arr_28 [i_13 - 2] [i_13 - 3] [i_13] [i_13 - 2] [i_13 + 3]);
                        }
                    } 
                } 
            } 
            arr_59 [i_11] = ((/* implicit */unsigned short) arr_10 [i_11]);
            var_38 = ((/* implicit */_Bool) min((var_38), (((((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_11] [i_13] [i_13 + 3])) % (((/* implicit */int) arr_45 [i_11] [i_13 - 1] [i_13 + 1]))))) > (((((/* implicit */_Bool) ((var_10) * (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_11] [i_11])) >> (((arr_30 [i_11] [i_11] [i_11] [i_13 + 1] [14ULL]) - (7310226743351611275ULL)))))) : ((~(arr_18 [i_11] [i_13] [i_13 + 1])))))))));
        }
        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */long long int) (~((~((~(((/* implicit */int) arr_23 [i_11]))))))));
            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_54 [i_17])) ? (((arr_46 [i_11] [i_17] [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_17] [4U] [i_11] [i_11])) && (((/* implicit */_Bool) arr_36 [(unsigned char)20] [18U] [i_11] [i_11] [i_11] [i_11] [12U])))))))))))));
        }
        for (unsigned char i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
        {
            var_41 = arr_6 [i_11];
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) min(((short)23438), ((short)-30119)))) ? (((((/* implicit */int) arr_15 [i_11] [i_11])) * ((+(((/* implicit */int) (short)15757)))))) : (((((/* implicit */_Bool) arr_46 [i_18] [i_11] [i_11])) ? (((/* implicit */int) arr_44 [i_11] [i_18])) : (((/* implicit */int) ((((/* implicit */int) arr_56 [i_11])) <= (((/* implicit */int) var_2))))))))))));
            var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) ((((((/* implicit */int) arr_7 [i_11])) << (((min((((/* implicit */unsigned long long int) arr_39 [i_11])), (arr_27 [i_11] [i_11] [i_11] [i_18] [i_18]))) - (2861664469ULL))))) < (((((/* implicit */_Bool) arr_49 [i_18] [i_18])) ? (arr_49 [i_11] [i_11]) : (((/* implicit */int) arr_24 [i_11] [i_18])))))))));
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218775
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0 - 2]) ? (((6615511364561663682ULL) >> (((-2147483635) + (2147483641))))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned long long int) var_2)) : (11831232709147887906ULL)))))) ? (arr_3 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? ((+(-3001483300720484366LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2]))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_6 [i_2] [i_1] [i_2] |= ((/* implicit */short) (-(max((max((arr_4 [i_0 + 1] [i_1] [i_1] [i_1]), (((/* implicit */int) (unsigned char)172)))), (max((((/* implicit */int) var_8)), (arr_5 [i_0] [i_2] [i_0] [i_2])))))));
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) max((6615511364561663682ULL), (1665024500455181998ULL)))) && (((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) var_14))))))), (((((/* implicit */_Bool) max((6647421996930048638ULL), (((/* implicit */unsigned long long int) (unsigned short)23566))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)146)) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_12 [i_0] [(unsigned char)17] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((4U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2])))));
                        arr_13 [i_0 - 3] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_4 - 1]))));
                        arr_14 [i_4 - 1] [i_1] [i_4] [i_4 - 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_3] [i_4 - 1])) ? (((/* implicit */int) (unsigned short)26755)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_7))));
                        var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) > (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1])))))));
                    }
                    for (short i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        arr_17 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
                        arr_18 [i_0] [i_1] [i_3] [i_5] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)38781)))) ^ (max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26755)))), (max((arr_4 [i_0 - 2] [i_1] [i_3] [i_5]), (((/* implicit */int) var_1))))))));
                        arr_19 [8ULL] [i_0] [i_1] [i_3] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4742998646574694119ULL), (((/* implicit */unsigned long long int) 1134907106097364992LL))))) ? (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_5])) ? (((/* implicit */int) (unsigned short)13159)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) min(((unsigned short)38780), (((/* implicit */unsigned short) (unsigned char)234)))))))) ? (min((((/* implicit */int) max((var_14), (((/* implicit */unsigned char) arr_1 [i_0 - 3]))))), ((~(arr_5 [i_0] [(unsigned short)6] [i_3] [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_1])) > (((/* implicit */int) var_1)))))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        arr_24 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_3] [i_3] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 1] [i_0]))) : (((unsigned int) (unsigned short)65535))));
                        arr_25 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) ? (arr_16 [i_0] [i_1] [i_3] [i_0 - 2] [i_1] [i_0 + 1]) : (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_3] [i_6]))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 11831232709147887933ULL)) ? (9589798030560864556ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1])))))))))));
                    }
                    var_19 = ((/* implicit */int) 1250571584U);
                }
            }
        } 
    } 
    var_20 = ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)120)) > (((/* implicit */int) (unsigned short)1563)))))) : (((((/* implicit */unsigned int) -1542254556)) - (2232097785U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_7 = 2; i_7 < 17; i_7 += 4) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned long long int) var_5);
        arr_29 [i_7] = ((((/* implicit */_Bool) (unsigned short)38476)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (2297257283U));
        arr_30 [i_7 - 2] = ((/* implicit */short) ((unsigned char) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            for (unsigned short i_9 = 1; i_9 < 18; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_40 [i_9] = ((/* implicit */unsigned long long int) ((arr_1 [i_7 - 2]) ? (((/* implicit */int) arr_1 [i_7 + 3])) : (((/* implicit */int) (unsigned char)255))));
                        arr_41 [i_10] [i_9] [i_9] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_7 + 1] [i_9] [i_9 + 1])) ? (((/* implicit */int) arr_2 [i_9 - 1])) : (((/* implicit */int) arr_2 [i_9 + 1]))));
                        arr_42 [i_7] [i_9] [i_9] [i_10] [i_9] [i_8] = ((/* implicit */long long int) ((_Bool) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7] [i_8] [(short)16]))))));
                        arr_43 [i_7] [i_9] [i_8] [3ULL] [i_9] [i_10] = ((/* implicit */unsigned short) arr_31 [i_7 + 1] [i_8] [(signed char)2]);
                    }
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_7 - 1] [i_8] [i_8] [i_8] [i_9 - 1] [i_9 + 2])) ? (arr_16 [i_7 + 3] [i_8] [(unsigned short)0] [i_7] [i_9 + 2] [i_9 - 1]) : (arr_16 [i_7 - 2] [i_7] [i_9] [i_9] [i_9 + 2] [i_9 + 2]))))));
                        arr_47 [i_9] [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7 - 2] [i_7 + 1] [i_7 + 2] [i_7] [i_7])) ? (((/* implicit */int) arr_23 [(unsigned short)4] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 2])) : (((/* implicit */int) arr_23 [i_7] [i_7 - 2] [i_7 + 2] [(short)8] [i_7]))));
                    }
                    arr_48 [i_9 - 1] [i_9] [i_7 + 2] = ((/* implicit */_Bool) (~(11328125492204494421ULL)));
                    arr_49 [i_9] = ((/* implicit */unsigned short) ((arr_4 [(unsigned char)13] [i_8] [i_7] [i_7]) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16711)))))));
                }
            } 
        } 
        var_22 = ((((((/* implicit */int) var_3)) < (arr_22 [i_7] [i_7] [i_7] [i_7]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7]))) : ((+(arr_36 [i_7 + 2] [i_7 + 3] [i_7]))));
    }
    for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) /* same iter space */
    {
        arr_52 [i_12] [7] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_12] [6ULL] [i_12] [i_12]))) : (((((/* implicit */_Bool) var_8)) ? (arr_36 [i_12] [(unsigned char)15] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_12]))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)20949))))));
        /* LoopNest 3 */
        for (unsigned char i_13 = 2; i_13 < 16; i_13 += 4) 
        {
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                for (long long int i_15 = 1; i_15 < 15; i_15 += 4) 
                {
                    {
                        arr_59 [i_12] [15U] [i_12] [(_Bool)1] [i_12] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_50 [i_14])))) ? (((/* implicit */int) max((arr_56 [i_15 + 2] [i_15 + 2]), (arr_56 [i_13] [i_14])))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)100)), (arr_50 [i_12]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_16 = 4; i_16 < 14; i_16 += 4) 
                        {
                            arr_63 [i_12] [i_13] [i_14] [i_14] [12LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_13] [i_15 - 1] [i_15 + 2] [i_13])) ? (((long long int) (unsigned char)49)) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_15 + 1] [i_14] [i_14])))));
                            arr_64 [i_12] [i_13] [i_14] [i_15] [i_16 + 1] = var_14;
                        }
                        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 4) 
                        {
                            arr_67 [i_12] |= ((/* implicit */unsigned long long int) 2850125220U);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_65 [i_17] [i_17] [i_17] [16] [i_17])) ? (((/* implicit */int) arr_32 [i_12] [i_15 - 1] [i_17])) : (((/* implicit */int) arr_1 [i_14]))))))));
                        }
                        var_24 = ((/* implicit */unsigned int) arr_0 [i_14]);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */int) arr_58 [i_18] [i_18] [i_18] [i_18]);
        arr_70 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))))) + (((/* implicit */int) var_3))));
    }
}

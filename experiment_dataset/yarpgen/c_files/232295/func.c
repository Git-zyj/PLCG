/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232295
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_10 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0]))))) ^ (((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (-2147483633)))));
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (min((((/* implicit */long long int) ((unsigned char) (unsigned short)14336))), (-3390794534623047299LL))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1 + 1] [5] = ((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_1])))) + (((int) arr_0 [i_1]))))) & (((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (arr_1 [(unsigned short)11]))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))));
        var_12 |= ((/* implicit */unsigned long long int) arr_4 [(short)0] [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_2 [i_1 - 2])))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) arr_2 [(_Bool)1]);
        /* LoopNest 2 */
        for (short i_2 = 3; i_2 < 11; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                {
                    var_13 += ((/* implicit */_Bool) (unsigned char)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_20 [3U] [3U] [i_3] [i_2] [(unsigned char)9] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned char)3] [i_2 - 2] [i_2] [i_3] [i_1 - 2])) ? (arr_17 [i_1 - 2] [i_2 + 2] [i_1 - 2] [i_3] [i_1 - 1]) : (arr_17 [(unsigned char)2] [i_2 - 2] [i_3 - 2] [i_3] [i_1 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-112))) || (((/* implicit */_Bool) arr_10 [i_1] [i_1])))))));
                        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_3 - 2])) >= (((/* implicit */int) arr_9 [i_1 + 1] [(signed char)11] [i_1 + 1])))))));
                        var_15 += ((/* implicit */unsigned int) ((((((/* implicit */int) arr_9 [i_3 - 3] [i_3] [7LL])) | (((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 2] [i_3 - 1])))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 2] [i_3 - 3])) : (((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))));
                    }
                }
            } 
        } 
    }
    var_16 = ((/* implicit */signed char) (((((+(var_9))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20182)) ^ (((/* implicit */int) var_1))))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)51186)) : (((/* implicit */int) (signed char)-124)))) + (((((/* implicit */int) var_1)) + ((-2147483647 - 1)))))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)14336)) | (((/* implicit */int) var_8)))) & (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        arr_23 [i_5] = ((/* implicit */long long int) (((_Bool)0) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) & ((~(2316424306U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) arr_12 [i_5] [i_5]))))) ? (((/* implicit */int) arr_3 [i_5])) : (((((/* implicit */_Bool) arr_9 [(short)3] [i_5] [i_5])) ? (arr_11 [i_5] [i_5] [i_5]) : (((/* implicit */int) arr_10 [i_5] [i_5])))))))));
        arr_24 [(_Bool)1] [(_Bool)1] |= min((((/* implicit */int) ((short) arr_4 [i_5] [4LL]))), (arr_17 [8] [(short)4] [i_5] [(signed char)10] [i_5]));
        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */int) var_1)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (346430838789356734ULL))))))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_6] [i_6] [i_6])) % (((/* implicit */int) ((((/* implicit */int) arr_13 [i_6] [i_6] [i_6])) <= (((/* implicit */int) arr_2 [i_6])))))));
        /* LoopSeq 3 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-75))))) ? ((~(((/* implicit */int) arr_5 [i_6])))) : (((/* implicit */int) arr_10 [i_6] [i_6]))));
                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_6]))));
                /* LoopSeq 3 */
                for (int i_9 = 2; i_9 < 9; i_9 += 3) 
                {
                    arr_35 [(short)0] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-84))));
                    arr_36 [8LL] [i_7] [i_6] [8LL] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-3390794534623047286LL)));
                    arr_37 [i_7] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51199)))))));
                    arr_38 [(unsigned char)8] [i_7] [i_7] [i_6] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_3)))) - (((((/* implicit */int) arr_13 [i_6] [i_6] [i_6])) + (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6])))));
                }
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_6])) || (((/* implicit */_Bool) arr_1 [i_6])))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_32 [i_6] [i_10]) ? (arr_41 [i_6] [i_6] [i_6] [i_6] [6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_8])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_18 [i_8] [i_7] [i_6])));
                    var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_26 [i_10] [i_6]))) ? (((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_17 [i_6] [i_6] [i_6] [i_8] [12])) : (arr_39 [i_7] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_2 [i_10])) : (((/* implicit */int) arr_10 [13U] [13U])))))));
                    arr_42 [i_6] [4ULL] [8] [i_6] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_25 [i_6] [7LL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((arr_18 [i_6] [3U] [i_8]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)26331)))))) : ((+(((/* implicit */int) (unsigned char)1))))));
                }
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    arr_45 [i_6] [i_6] [i_6] [(short)6] [i_6] = ((/* implicit */int) arr_1 [i_6]);
                    var_26 |= ((/* implicit */_Bool) ((((/* implicit */int) (short)84)) & (((/* implicit */int) (unsigned short)5060))));
                    var_27 = ((/* implicit */unsigned short) (~(arr_1 [i_6])));
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((7473665198845292799ULL) - (((/* implicit */unsigned long long int) 0)))))));
                    var_29 = ((/* implicit */unsigned int) var_0);
                }
            }
            arr_46 [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 281474976710528LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49152))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((arr_1 [i_7]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_7]))))))));
            arr_47 [i_6] [i_6] = ((/* implicit */signed char) (+(arr_17 [i_7] [i_6] [i_7] [i_6] [1ULL])));
        }
        for (short i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_31 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)7576)) ? (((/* implicit */int) arr_14 [i_6] [i_12] [i_6] [i_12])) : (((/* implicit */int) arr_13 [i_6] [(_Bool)1] [(_Bool)1]))))));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((arr_19 [i_6]) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) arr_19 [i_6])))))));
        }
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_14 = 1; i_14 < 7; i_14 += 1) /* same iter space */
            {
                var_33 += ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_6] [(unsigned char)0] [i_6] [i_6] [i_6])) ? (arr_31 [i_6] [i_6] [i_14 + 3] [i_14 + 3]) : (arr_44 [i_14 + 1] [i_14] [i_13] [i_14])));
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_6] [i_6] [7U] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [2])) >= (((/* implicit */int) (_Bool)1)))))) : ((~(arr_22 [i_6] [i_6])))));
                    var_35 = ((/* implicit */unsigned char) (~(arr_30 [i_6] [i_13] [i_6])));
                }
            }
            for (long long int i_16 = 1; i_16 < 7; i_16 += 1) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned char) var_0);
                arr_60 [i_6] [i_6] [i_13] &= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
            }
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                for (int i_18 = 1; i_18 < 7; i_18 += 3) 
                {
                    {
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_18 + 3] [i_17] [i_13] [i_6])) ? (((/* implicit */int) arr_12 [(unsigned char)3] [i_13])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_14 [i_13] [i_13] [i_17] [i_13])) : (((/* implicit */int) ((arr_57 [i_17] [i_17] [i_13] [i_17]) && (((/* implicit */_Bool) arr_43 [i_6] [i_6] [i_6] [i_13]))))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
                        {
                            var_38 = ((/* implicit */_Bool) arr_58 [i_6]);
                            arr_70 [i_17] [(unsigned short)2] [i_6] [6] [5ULL] = ((((/* implicit */int) arr_55 [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18 + 1])) ^ (((/* implicit */int) arr_14 [i_18 + 3] [i_18 + 1] [i_18 + 1] [4ULL])));
                        }
                        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 1) 
                        {
                            arr_74 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_17])) ^ ((-(((/* implicit */int) (_Bool)1))))));
                            var_39 -= ((/* implicit */short) ((arr_41 [i_18 + 2] [i_18] [(unsigned char)8] [(unsigned char)8] [i_18]) == (arr_66 [(_Bool)1] [(unsigned char)7] [i_17] [i_18 + 1] [i_18 + 1] [i_18 + 2])));
                            arr_75 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_17] [i_18 + 3] [i_20]))) ^ (arr_25 [i_6] [i_6])));
                            var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_54 [i_6] [i_13] [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_17] [i_18] [i_18]))) : (arr_25 [i_18] [i_18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13] [i_18 + 1] [i_18] [i_6])))));
                        }
                        arr_76 [i_6] [i_6] [i_6] [1ULL] [1ULL] = ((/* implicit */unsigned short) arr_1 [i_13]);
                        arr_77 [i_17] [i_17] [i_6] [i_17] [i_17] = ((/* implicit */_Bool) arr_63 [i_18] [(unsigned char)5] [1LL] [(unsigned char)5]);
                        arr_78 [(_Bool)1] [i_17] [i_17] [i_6] = ((/* implicit */unsigned char) (short)16990);
                    }
                } 
            } 
        }
        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) arr_50 [0ULL] [(unsigned short)4] [0ULL])) ? (((unsigned long long int) 2751362919151233318LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
        /* LoopSeq 3 */
        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 1) 
        {
            var_42 = arr_11 [i_6] [i_6] [i_6];
            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (arr_18 [i_21] [i_6] [(signed char)11])));
        }
        for (unsigned int i_22 = 0; i_22 < 10; i_22 += 1) 
        {
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 10; i_23 += 1) 
            {
                for (int i_24 = 3; i_24 < 7; i_24 += 1) 
                {
                    for (unsigned char i_25 = 0; i_25 < 10; i_25 += 1) 
                    {
                        {
                            var_44 += ((/* implicit */short) ((((/* implicit */_Bool) (short)28353)) || (((/* implicit */_Bool) arr_27 [4]))));
                            arr_93 [i_6] [i_6] = (+(((/* implicit */int) arr_80 [i_6] [i_22])));
                            var_45 |= ((/* implicit */unsigned char) ((arr_86 [i_6] [9U] [i_24 - 3] [i_24]) ? (((/* implicit */int) arr_90 [i_6] [i_22] [i_24 - 3] [i_24] [i_23])) : (((/* implicit */int) arr_86 [i_6] [3] [i_24 - 3] [i_24]))));
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-37))));
            var_47 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
        for (unsigned char i_26 = 3; i_26 < 7; i_26 += 4) 
        {
            var_48 = (!(((/* implicit */_Bool) arr_33 [i_26 + 3] [5ULL] [i_6])));
            var_49 |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)13783)) ? (((/* implicit */int) arr_89 [i_26] [i_26] [(unsigned short)6] [(unsigned char)6] [(unsigned short)0])) : (((/* implicit */int) arr_57 [i_6] [i_6] [8LL] [i_26])))));
            var_50 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_6])) && (((/* implicit */_Bool) arr_54 [2] [i_6] [2])))) ? (arr_44 [i_26 - 2] [i_6] [i_6] [i_26 + 3]) : (((/* implicit */int) (unsigned char)106))));
        }
    }
    var_51 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)2426))))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) var_9))))))));
}

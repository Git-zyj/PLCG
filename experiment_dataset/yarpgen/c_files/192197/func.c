/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192197
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
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_3] [i_2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_3])) || (((/* implicit */_Bool) arr_12 [i_3])))) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3])) : (((((/* implicit */int) (signed char)-122)) * (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))));
                        arr_14 [i_3] = ((signed char) ((7666058908718200855ULL) >> (((((/* implicit */int) arr_2 [i_2])) + (95)))));
                        arr_15 [i_3] = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) <= (528482304U))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_16 &= arr_2 [i_6];
                            arr_28 [i_0] [i_4 - 2] [i_5] [i_6] [i_7] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)14002)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (unsigned short)24576))))), (((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_4 + 1] [i_4 + 1])) ? (arr_22 [i_4 + 1] [i_4 + 1] [i_4 - 2]) : (arr_22 [i_4 + 1] [i_4 - 1] [i_4 + 1])))));
                        }
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1381838350U)))) ? (((/* implicit */int) ((unsigned short) (signed char)86))) : (1056964608)))) ? (1531567711) : (((/* implicit */int) (unsigned short)11927))));
                    }
                } 
            } 
        } 
        arr_29 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(3458764513820540928ULL)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)48662)) : (102060031))) : (((((/* implicit */_Bool) 14987979559889010688ULL)) ? (((/* implicit */int) (unsigned short)54619)) : (((/* implicit */int) (unsigned short)10932))))))), (arr_0 [i_0])));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -13LL)) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [(signed char)6] [i_0] [(signed char)3] [i_0])) ? ((+(((/* implicit */int) (short)24859)))) : (((/* implicit */int) ((signed char) arr_6 [1ULL] [i_0] [i_0] [1ULL]))))) : (((/* implicit */int) (short)9363))));
    }
    for (signed char i_8 = 3; i_8 < 19; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_9 = 1; i_9 < 19; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                for (short i_11 = 3; i_11 < 16; i_11 += 4) 
                {
                    {
                        arr_39 [i_11] [i_11] [(short)2] [(short)2] [i_9] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11))) : (arr_32 [i_10] [(signed char)10])));
                        arr_40 [i_11] [i_8] [i_8] [i_8 - 2] = ((/* implicit */signed char) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -568305864))) ? (((((/* implicit */_Bool) arr_30 [i_10])) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (unsigned short)6414)))) : (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (short)8167)) : (((/* implicit */int) (short)24859)))))))));
                        arr_41 [i_8] [i_9 + 1] [i_8] [(unsigned short)16] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_32 [i_9] [i_8])) ? (((/* implicit */unsigned long long int) arr_34 [i_9 + 1] [i_8 - 3])) : (18446744073709551615ULL)))));
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                        {
                            arr_45 [i_8] [i_10] [i_10] [i_11] [i_12] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_12] [i_9 + 1] [i_8])) | (((/* implicit */int) arr_35 [i_9] [i_9 + 1] [i_10]))))) ? ((-(((((/* implicit */int) (unsigned short)54606)) | (((/* implicit */int) (short)-8192)))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)105)) >> (((((/* implicit */int) arr_38 [i_8] [i_9] [i_10] [i_8])) - (57445)))))))));
                            arr_46 [i_8] [i_8] [i_8] [i_10] [(signed char)7] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) >= (((unsigned int) (signed char)122)))))) >= (arr_34 [i_8 - 2] [i_11])));
                            arr_47 [(unsigned short)15] [i_8] [i_10] [i_11] [15ULL] = ((/* implicit */unsigned int) (short)-9364);
                        }
                        for (short i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                        {
                            arr_50 [i_8] [i_11] [i_10] [i_9] [i_8] = ((/* implicit */short) 1495500057);
                            arr_51 [i_8] = ((/* implicit */unsigned long long int) (!(((arr_32 [i_11 - 3] [i_8]) == (arr_32 [i_11 + 1] [i_8])))));
                            var_19 = ((/* implicit */signed char) arr_43 [i_11] [i_11] [i_11] [i_11] [i_11] [i_8] [i_11]);
                            arr_52 [i_8] [i_9] [i_10] [(signed char)1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_30 [i_10]))) ? (((((/* implicit */_Bool) arr_36 [10ULL] [i_11] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9] [i_11] [i_13]))) : (3015068627186028167LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-83))))))) ? (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-10750)) || (((/* implicit */_Bool) (short)-4090))))) : (((/* implicit */int) (short)-32762)))) : (((/* implicit */int) (unsigned short)3584))));
                        }
                        for (short i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                        {
                            arr_57 [i_14] [i_9] [i_10] [i_11] [(signed char)10] [i_9] [i_14] |= ((/* implicit */int) ((((/* implicit */int) (signed char)124)) == (((/* implicit */int) (signed char)99))));
                            arr_58 [(unsigned char)11] [i_8] [(signed char)2] [i_11] [(signed char)13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_8] [i_10] [i_11] [i_8])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)54619))))) ? (269126999) : (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_30 [i_11 + 1]))))))) : ((~(((((((/* implicit */int) (signed char)-64)) + (2147483647))) >> (((-206185717) + (206185720)))))))));
                            arr_59 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) -4611686018427387904LL);
                            arr_60 [i_8] [i_14] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_32 [i_8] [i_8])) && (((/* implicit */_Bool) arr_32 [i_8] [i_8]))))));
                            arr_61 [i_8] [i_10] [i_10] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_31 [i_11 - 1])) : (((/* implicit */int) arr_31 [i_11 - 3])))), (((((/* implicit */_Bool) arr_31 [i_11 - 3])) ? (((/* implicit */int) arr_31 [i_11 - 1])) : (((/* implicit */int) arr_31 [i_11 - 1]))))));
                        }
                    }
                } 
            } 
        } 
        arr_62 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -269127001)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1920))) : (-4611686018427387893LL)));
    }
    /* LoopSeq 1 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_15] [i_15] [i_15] [i_15] [i_15] [(unsigned short)10] [i_15])) ? (((/* implicit */int) ((((/* implicit */int) arr_30 [i_15])) == (((/* implicit */int) ((((/* implicit */_Bool) 1402966610)) && (((/* implicit */_Bool) (signed char)-121)))))))) : (((/* implicit */int) arr_30 [i_15])))))));
        /* LoopNest 3 */
        for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                for (int i_18 = 1; i_18 < 9; i_18 += 1) 
                {
                    {
                        var_21 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((140868488U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_15] [i_16] [i_17] [i_18] [i_18])) ? (((/* implicit */int) (unsigned short)20358)) : (((/* implicit */int) (unsigned short)3584))))))))));
                        var_22 = ((int) (!(((/* implicit */_Bool) ((short) 6022076657398221340ULL)))));
                        arr_74 [7LL] [i_16] [i_17] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_67 [i_18 + 1])) ? (((/* implicit */int) ((unsigned short) 140868468U))) : (((/* implicit */int) arr_73 [i_15] [i_16] [(signed char)7] [i_18 + 2] [8ULL] [i_18])))) < (((/* implicit */int) (unsigned short)61974))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 25; i_19 += 4) 
    {
        for (short i_20 = 0; i_20 < 25; i_20 += 4) 
        {
            {
                arr_80 [i_19] [i_20] [i_19] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_76 [i_19]))) >= (max((arr_78 [i_20] [i_19]), (arr_78 [i_19] [i_20])))));
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_75 [i_19] [5LL]))));
                /* LoopNest 3 */
                for (long long int i_21 = 1; i_21 < 22; i_21 += 2) 
                {
                    for (unsigned char i_22 = 0; i_22 < 25; i_22 += 4) 
                    {
                        for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_89 [i_21 + 1] [i_21 + 2] [i_21] [i_21] [i_21 + 2] [i_21 + 2] [i_21 - 1])) * (((/* implicit */int) arr_83 [i_21 + 3] [i_21 - 1] [i_21] [i_21])))));
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_79 [i_21 + 3] [i_21 + 2]))));
                                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((long long int) ((arr_82 [i_20]) / (-741091840)))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_24 = 0; i_24 < 25; i_24 += 4) 
                {
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_77 [i_20])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_83 [i_24] [i_20] [i_20] [i_19])))))))) ? (((/* implicit */int) (short)4271)) : (((/* implicit */int) ((((((/* implicit */_Bool) 988730259U)) ? (((/* implicit */int) (short)-21120)) : (((/* implicit */int) arr_83 [i_19] [i_20] [(signed char)2] [i_24])))) < (((/* implicit */int) (short)16376))))));
                    var_28 = ((/* implicit */signed char) (unsigned short)48643);
                }
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190812
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
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 4])) || (((/* implicit */_Bool) var_1)))) ? (arr_0 [i_0] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)21)) || (((/* implicit */_Bool) (short)-6188))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
        arr_3 [(signed char)20] = ((unsigned short) (unsigned short)56989);
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_4 [i_1] [8U] [(unsigned short)17])))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (arr_4 [i_0 - 3] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [(unsigned char)19] [i_0 - 4])))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32276)) ? (((/* implicit */int) (signed char)63)) : (-544862622))))));
            arr_7 [i_0 - 4] [i_0] = arr_4 [i_1] [i_1] [i_0 - 1];
        }
        for (long long int i_2 = 2; i_2 < 24; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 22; i_3 += 4) 
            {
                arr_14 [i_0] [i_3] [i_2 - 1] = ((/* implicit */unsigned long long int) (!(arr_8 [i_0] [i_0] [(unsigned char)16])));
                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 16777215)) % (((unsigned int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) ((short) var_12))), ((+(arr_4 [i_0] [i_0] [15ULL])))))));
                var_22 = ((/* implicit */long long int) var_14);
                var_23 = (+((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [(signed char)21] [i_0])) : (arr_4 [i_0] [i_2] [i_3]))))));
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                arr_17 [i_0] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) min((max((((/* implicit */short) ((_Bool) (_Bool)1))), ((short)-26886))), (((/* implicit */short) ((signed char) var_4)))));
                var_24 |= (-2147483647 - 1);
            }
            for (short i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)192)) <= (((/* implicit */int) (unsigned char)213))));
                var_26 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)57550))))) % (((arr_16 [i_0] [i_0] [i_2]) >> (((((/* implicit */int) var_16)) - (6292))))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_0 [i_0 - 3] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) > (min((arr_12 [i_0] [i_0] [i_0 - 1]), (((/* implicit */unsigned int) var_15))))))))));
                arr_20 [i_5] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (((-(arr_4 [i_0] [i_0] [14]))) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) % (var_13))))))) <= (((/* implicit */int) (_Bool)0))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_18 [i_0] [i_6] [14U]);
                /* LoopSeq 3 */
                for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    arr_29 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2307866766U)) && (((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 + 3] [i_2] [i_2 - 2]))));
                    arr_30 [21ULL] [(unsigned short)17] [i_6] [i_7] = var_10;
                    arr_31 [i_0] = ((/* implicit */short) var_17);
                    var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_28 [i_0] [i_2] [i_6] [i_2])))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 4])))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) arr_22 [(unsigned char)1])))) : (((/* implicit */int) arr_8 [19U] [(signed char)5] [i_2 + 1]))));
                }
                for (int i_8 = 1; i_8 < 24; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        arr_36 [i_0 + 4] [23LL] [i_0 - 2] [i_0] [5] = ((/* implicit */unsigned short) arr_33 [i_2] [2LL] [i_9] [i_8 + 1]);
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3330723752U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_34 [(short)21] [i_9] [i_8 - 1] [i_2 + 1] [i_0 - 2]))));
                        arr_37 [i_2 + 1] [(unsigned char)21] &= ((/* implicit */_Bool) ((unsigned char) (~(3170015576U))));
                    }
                    for (long long int i_10 = 2; i_10 < 23; i_10 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) (-(((/* implicit */int) arr_33 [i_0 + 4] [i_6] [i_8] [i_6]))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) arr_27 [i_0] [i_0] [(unsigned short)8]))) : (((/* implicit */int) ((((/* implicit */int) arr_34 [(_Bool)1] [i_8] [i_6] [i_0] [i_0])) > (((/* implicit */int) arr_9 [i_2])))))));
                        arr_41 [6] [(unsigned char)14] [(unsigned char)24] [(unsigned char)14] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)3)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0 + 3] [i_0 - 4] [i_6] [(unsigned char)21] [i_0 - 4]))))) >> (((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned short)35354))))));
                    }
                    for (long long int i_11 = 2; i_11 < 23; i_11 += 4) /* same iter space */
                    {
                        var_32 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [21] [i_8] [i_11]))) : (arr_12 [24U] [i_0 - 3] [i_0 - 3])))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) arr_39 [i_8] [i_8 + 1] [i_8] [i_0] [i_0 - 2]))));
                        arr_44 [4] [i_6] [i_6] [i_8] [i_11] = ((/* implicit */unsigned int) ((unsigned char) 10103732707091675500ULL));
                    }
                    arr_45 [i_0] [i_2 - 2] [i_6] [i_8] [i_0 - 2] [12] = ((/* implicit */signed char) ((((/* implicit */_Bool) 459029510)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)27556)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [8] [i_6] [i_8])) || ((_Bool)1))))));
                }
                for (int i_12 = 1; i_12 < 24; i_12 += 4) /* same iter space */
                {
                    arr_50 [i_0] [(unsigned short)13] [i_0 + 4] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) & (var_13))));
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-15))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_2] [i_0]))) : (((arr_12 [i_0] [i_2] [i_12]) + (((/* implicit */unsigned int) var_4))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 3; i_13 < 23; i_13 += 4) 
                    {
                        var_35 &= ((/* implicit */unsigned short) ((unsigned int) arr_35 [i_0 + 1] [i_2 + 1] [i_2 + 1] [i_13 - 1]));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4022610068U)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (2070915511571591975LL))) : (((/* implicit */long long int) ((2846283273U) % (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (unsigned char)226))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))))));
                        var_38 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                }
                arr_55 [i_0] &= ((/* implicit */_Bool) ((unsigned int) arr_33 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 2]));
            }
            var_39 = max((min((((/* implicit */long long int) (_Bool)1)), (-7770720087499663621LL))), (((/* implicit */long long int) min((arr_39 [i_2] [i_0 + 3] [i_2 - 1] [i_0 + 2] [i_0 + 3]), (arr_39 [6] [i_2] [i_2 - 2] [i_0 + 3] [i_0 + 2])))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_40 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) var_0)))));
            var_41 = ((/* implicit */short) (+(((int) arr_39 [(_Bool)1] [i_14] [i_14] [(_Bool)1] [i_0]))));
        }
    }
    var_42 = ((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))));
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 15; i_15 += 4) 
    {
        for (unsigned short i_16 = 2; i_16 < 14; i_16 += 4) 
        {
            {
                var_43 = ((/* implicit */unsigned long long int) min((var_43), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_51 [i_16] [i_16 - 1] [i_16 - 1] [i_15] [i_15])))) : (((((/* implicit */_Bool) (~(arr_18 [i_15] [i_16 - 2] [i_15])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)25924)), (4844359371712199110LL)))) : (min((arr_47 [i_15]), (((/* implicit */unsigned long long int) var_3))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    arr_66 [12ULL] [4LL] = ((/* implicit */unsigned short) arr_13 [i_15] [i_16 - 1] [i_17]);
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (((((/* implicit */_Bool) var_5)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) (~(var_14))))));
                    var_45 += ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)-29027)) : (((/* implicit */int) arr_10 [i_15] [i_16 - 1] [i_15]))));
                }
            }
        } 
    } 
}

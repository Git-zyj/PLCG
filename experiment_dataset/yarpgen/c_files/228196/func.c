/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228196
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
    var_19 = var_0;
    var_20 = ((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_21 = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) / (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */signed char) var_9);
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) var_8);
            var_22 = ((/* implicit */short) (+(((((/* implicit */_Bool) 473474895U)) ? (227420237) : (227420243)))));
        }
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_23 = ((/* implicit */int) ((unsigned char) arr_8 [i_0] [3] [(short)14]));
            var_24 *= ((/* implicit */signed char) ((int) (-(var_10))));
            /* LoopSeq 2 */
            for (short i_3 = 4; i_3 < 22; i_3 += 2) 
            {
                arr_12 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((16326640688896520240ULL), (((/* implicit */unsigned long long int) arr_4 [i_3 - 2] [i_3] [i_3 + 1]))))) ? (((((/* implicit */_Bool) var_15)) ? (arr_4 [i_3 - 2] [i_3 - 1] [i_3 - 3]) : (arr_4 [i_3 - 1] [i_3] [i_3 + 1]))) : (((((arr_4 [i_3 + 1] [i_3] [i_3 - 2]) + (2147483647))) << (((((/* implicit */int) var_3)) - (12056)))))));
                arr_13 [i_0] = ((/* implicit */unsigned char) var_13);
            }
            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-6373)), (((unsigned short) var_12))))) ? (min((arr_14 [i_4] [(unsigned short)10] [i_4]), (((/* implicit */unsigned long long int) ((473474895U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((int) arr_4 [i_0] [i_2] [i_4]))) : (var_10))))));
                arr_16 [i_0] [(signed char)10] [i_4] [i_0] = arr_15 [i_4];
            }
            arr_17 [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)29), (((/* implicit */unsigned char) (_Bool)1)))))));
            var_26 -= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_2] [7LL]))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_20 [i_0] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((unsigned char) ((short) var_8)));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 919996313)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19480)))));
            arr_21 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) min(((short)13629), (((/* implicit */short) (signed char)84)))))));
            arr_22 [i_0] = ((((((/* implicit */_Bool) 473474902U)) ? (((/* implicit */int) (short)-19473)) : (((/* implicit */int) (unsigned short)65535)))) / (var_17));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_28 *= ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned long long int) ((unsigned char) max(((_Bool)1), (arr_18 [i_6] [i_6])))))));
            var_29 = ((/* implicit */unsigned int) arr_1 [i_7] [i_6]);
            arr_29 [i_6] [i_6] = ((/* implicit */unsigned long long int) -59960972);
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) 18446744073709551605ULL))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 1; i_8 < 10; i_8 += 3) 
            {
                for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            arr_36 [i_6] [i_10] [i_8] [i_8] [i_9] [i_10] |= ((/* implicit */long long int) var_1);
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)16383))));
                            arr_37 [i_6] [i_7] [i_9] [i_6] = ((/* implicit */_Bool) (unsigned short)1984);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            arr_40 [i_6] [i_6] = ((/* implicit */signed char) var_17);
            var_32 *= ((/* implicit */short) arr_23 [(unsigned char)8]);
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_28 [i_6]))));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    var_34 = ((/* implicit */short) arr_44 [i_6] [1LL] [4ULL] [i_12] [i_12] [(_Bool)1]);
                    var_35 = ((/* implicit */short) max((max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_4 [i_11] [i_11] [i_13])) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) arr_33 [i_6] [i_6] [i_12])))))), ((+(((/* implicit */int) arr_33 [i_11] [i_6] [i_13]))))));
                }
                /* LoopSeq 1 */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    arr_48 [i_6] [i_6] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 1639391417809028726ULL))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_43 [7LL] [7LL] [i_12] [i_12])), (((((/* implicit */_Bool) (unsigned short)45951)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14)))))) : (var_1)));
                    var_36 *= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)198))));
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_6] [i_11]))))) ? ((~(((/* implicit */int) (unsigned short)32768)))) : (((((/* implicit */int) var_16)) & (((/* implicit */int) arr_1 [i_6] [i_14]))))));
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) var_16))));
                        arr_52 [i_6] [1] [i_6] [i_6] [i_15] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)75))));
                    }
                    /* vectorizable */
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        arr_55 [i_6] [i_12] [i_6] [(signed char)3] [i_6] = (-(((/* implicit */int) arr_2 [i_16])));
                        arr_56 [i_6] [i_16] [i_16] [i_14] [i_16] &= ((/* implicit */short) var_14);
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 4; i_17 < 8; i_17 += 2) 
                    {
                        var_39 = ((/* implicit */short) ((unsigned short) (signed char)-101));
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_47 [i_6] [i_6] [(unsigned short)3] [(unsigned short)3] [i_6] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61312))) : (var_7))))))));
                        arr_59 [i_6] [i_6] [i_11] [i_12] [i_6] [i_17] = var_4;
                        arr_60 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_6])) && (((/* implicit */_Bool) var_4))));
                        var_41 = ((/* implicit */int) ((signed char) var_0));
                    }
                    arr_61 [i_6] [i_11] [i_12] [i_11] [i_6] [6U] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15347))) : (0ULL)));
                }
            }
        }
        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_20 = 0; i_20 < 11; i_20 += 4) 
                {
                    arr_71 [i_20] [i_19] [i_18] [i_18] [i_20] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) - (((/* implicit */unsigned long long int) arr_19 [i_6] [19ULL] [i_19]))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))))));
                    arr_72 [i_6] [i_6] [i_19] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) max(((signed char)29), (((/* implicit */signed char) arr_1 [i_6] [i_18]))))) * (((/* implicit */int) min((arr_1 [i_20] [i_6]), (arr_1 [i_18] [i_20]))))));
                }
                var_42 -= ((/* implicit */int) ((unsigned short) ((2120103384813031372ULL) << (((((/* implicit */int) arr_11 [i_6] [i_6] [i_19])) - (79))))));
                arr_73 [(short)2] [i_18] [i_6] [1ULL] = ((signed char) (!(((/* implicit */_Bool) 4868154936387936939LL))));
                var_43 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_24 [i_19])) <= (((/* implicit */int) arr_50 [i_6] [i_18] [i_19] [i_19] [i_6])))))));
            }
            var_44 = ((/* implicit */unsigned char) var_13);
        }
        /* vectorizable */
        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 4) 
        {
            var_45 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_6] [i_6])) ? (var_17) : ((-(var_17)))));
            arr_76 [i_6] [i_6] = ((/* implicit */unsigned short) (~(var_4)));
            arr_77 [i_6] [i_6] [1U] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) | (((((/* implicit */_Bool) arr_47 [i_6] [i_21] [i_6] [(unsigned short)7] [i_6] [(signed char)9])) ? (((/* implicit */int) (unsigned short)20512)) : (((/* implicit */int) var_2))))));
        }
        var_46 = ((/* implicit */long long int) min((arr_45 [i_6] [i_6] [i_6] [2]), (((/* implicit */unsigned long long int) ((((arr_67 [i_6] [i_6] [i_6]) + (9223372036854775807LL))) >> (((arr_67 [i_6] [3ULL] [i_6]) + (1379952652553300771LL))))))));
    }
    for (long long int i_22 = 0; i_22 < 20; i_22 += 1) 
    {
        arr_81 [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((-(((unsigned int) 5955378521412745990ULL)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)28479)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) (unsigned char)240)))))));
        var_47 = ((/* implicit */short) arr_5 [i_22]);
        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4103020663502718155LL)) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (unsigned short)65414))));
    }
    var_49 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_0)) : (max((((/* implicit */unsigned long long int) (_Bool)1)), ((~(var_5)))))));
}

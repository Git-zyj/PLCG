/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221346
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
    /* vectorizable */
    for (int i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        var_15 += ((/* implicit */unsigned short) ((var_12) ? (arr_0 [i_0 + 1] [i_0 - 3]) : (arr_0 [i_0 + 1] [i_0 - 2])));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [8LL] [i_1] [i_0 - 2] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_10 [13ULL] [i_3] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] [(unsigned char)17])))))));
                            var_17 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1 + 1] [i_0 + 1] [i_0 - 2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        {
                            arr_19 [3ULL] [(unsigned char)16] [(unsigned char)16] [3ULL] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) (+(((int) var_11))));
                            arr_20 [i_1] [i_1] [i_1] [(short)6] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))));
                            var_18 = ((/* implicit */int) var_11);
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] = var_6;
                arr_22 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 2] [(unsigned short)23]))) + (arr_10 [i_2] [i_1 + 1] [i_1 + 1] [i_1] [i_0] [i_0 + 1])));
            }
            for (short i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                arr_26 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_8);
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_1))))))))));
                arr_27 [i_1] = ((/* implicit */signed char) (!(arr_24 [i_1] [i_0 - 3] [i_1 - 1] [i_7])));
            }
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                arr_31 [(unsigned char)17] [(unsigned short)12] [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-3483))) < (arr_2 [i_1]));
                arr_32 [i_1] [i_1] [i_8] = ((/* implicit */unsigned char) arr_13 [i_1 - 1]);
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        arr_37 [i_1] [i_1] = arr_11 [i_1] [i_1 - 1];
                        var_22 &= ((/* implicit */unsigned short) arr_3 [i_10] [i_9] [i_8]);
                        var_23 += ((/* implicit */int) (_Bool)1);
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_13 [i_9]))));
                        var_25 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)223)) > (((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_38 [i_0] [i_1] [i_8] [12] [i_0] [i_8] = ((/* implicit */short) (!(arr_30 [i_1 + 1])));
                }
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                    arr_41 [i_1] [i_1] [i_11] = ((/* implicit */_Bool) arr_11 [i_8] [i_8]);
                    var_27 = ((/* implicit */short) (+(arr_23 [i_1] [(signed char)18] [i_0 - 1])));
                }
                arr_42 [i_1] [2U] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_0)) * (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))))));
            }
            /* LoopNest 2 */
            for (short i_12 = 1; i_12 < 24; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 2; i_14 < 21; i_14 += 4) 
                        {
                            arr_50 [(unsigned short)5] [i_1] [i_1] [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-21171)) ? (((/* implicit */int) (unsigned short)26683)) : (480)));
                            var_28 = ((/* implicit */unsigned char) (signed char)127);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_13] [23U] [4LL] [i_1 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_48 [i_15] [(unsigned char)12] [i_15] [i_1 - 1]))));
                            var_30 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_44 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                            arr_53 [i_15] [i_1] [i_13] [i_12] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((arr_25 [i_0] [i_1 + 1] [i_1] [i_15]) / (arr_25 [i_0] [i_1 - 1] [i_1] [i_13])));
                            arr_54 [i_0 - 3] [i_1] [(_Bool)1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (14779715311210425667ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))));
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 467626905U)) / (var_10)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [(unsigned short)24] [i_13] [i_13] [i_0]))) - (3827340399U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0] [i_0] [i_1] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))));
                        }
                        for (int i_16 = 2; i_16 < 24; i_16 += 2) 
                        {
                            var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0 + 1] [i_1]))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(var_14)))) > (((((/* implicit */_Bool) arr_29 [i_13] [i_13] [i_16 + 1])) ? (arr_28 [i_0]) : (arr_23 [i_16] [i_1] [i_1]))))))));
                            arr_57 [i_1] [i_13] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_16 - 1]))));
                            arr_58 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_12 - 1] [i_12 - 1] [i_12] [i_12] [i_12] [i_12] [i_12])) && (((/* implicit */_Bool) arr_17 [i_12 - 1] [i_12] [i_12] [i_12] [i_12] [6] [i_12]))));
                        }
                        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) arr_49 [i_0] [i_0] [(_Bool)1] [i_0 - 2] [i_0] [i_0]))));
                        var_35 -= ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_13] [i_0 - 2] [i_13] [i_12] [i_0 - 2] [i_0 - 2]))) / (var_4)))));
                        arr_59 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)28672))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_17 = 3; i_17 < 23; i_17 += 4) 
            {
                var_36 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [(_Bool)1] [i_17 + 2] [(_Bool)1] [i_17] [i_0 - 2] [i_0 - 1])) ? (((arr_29 [(short)18] [(short)2] [i_17]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 3]))))))));
                arr_63 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) arr_56 [i_0] [i_1] [(short)19]);
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    var_37 = ((/* implicit */unsigned short) (~(((long long int) 1021001986U))));
                    /* LoopSeq 2 */
                    for (short i_19 = 2; i_19 < 22; i_19 += 4) 
                    {
                        var_38 &= ((/* implicit */short) ((((/* implicit */int) var_12)) / (((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1] [i_17])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))))));
                        arr_70 [i_19] [i_17] [i_19] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_19] [i_19 - 2] [i_19] [i_17 - 2] [i_1 + 1])) << (((((/* implicit */int) arr_36 [i_19] [i_19 + 3] [i_19] [i_17 - 3] [i_17 - 2])) - (18738)))));
                    }
                    for (unsigned char i_20 = 3; i_20 < 23; i_20 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) ^ (arr_51 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1])))));
                        arr_75 [i_0] [i_1] [i_18] [i_20] = ((/* implicit */unsigned char) ((short) (_Bool)1));
                        var_40 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_73 [i_0 - 2] [i_1] [i_18] [i_18] [3]))));
                        var_41 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_69 [i_1] [i_1] [(unsigned short)7] [i_1] [i_1 - 1] [i_1]))));
                    }
                    arr_76 [i_18] [(short)20] [i_18] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_66 [i_18] [i_1 - 1] [i_17 - 1] [9] [i_1 - 1] [i_0 - 2])) || (((/* implicit */_Bool) arr_61 [i_0 - 2] [i_0 + 1] [(unsigned short)17] [i_1 - 1]))));
                }
            }
            for (short i_21 = 0; i_21 < 25; i_21 += 3) 
            {
                arr_79 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [(short)22])) ? (((/* implicit */int) (unsigned short)24000)) : (((/* implicit */int) arr_40 [(unsigned char)10]))));
                /* LoopNest 2 */
                for (short i_22 = 2; i_22 < 24; i_22 += 4) 
                {
                    for (short i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((_Bool) arr_25 [i_22 - 1] [i_22] [i_22] [i_0 + 1])))));
                            arr_84 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_1))));
                            var_43 = ((/* implicit */unsigned short) arr_67 [i_1] [i_1]);
                            var_44 = ((/* implicit */short) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_8))));
                        }
                    } 
                } 
                arr_85 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)10628))));
            }
            arr_86 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_47 [i_0] [i_1] [i_1 + 1]))));
            var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)22683)) + (var_9)))) & (arr_73 [i_0 + 1] [i_0 - 3] [i_0] [i_1 + 1] [i_1 - 1]))))));
        }
    }
    var_46 = ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((/* implicit */int) (signed char)19))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)16835)) ? (((/* implicit */int) (short)26181)) : (((/* implicit */int) (short)-31459))))))) : (var_11));
    var_47 &= ((/* implicit */unsigned short) var_10);
    var_48 = ((/* implicit */unsigned int) var_11);
}

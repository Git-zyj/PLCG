/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219994
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_0)))))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_11 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_7))))))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_13 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) var_7)))));
        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_2 [i_0] |= ((/* implicit */unsigned short) (((((~(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_0 [i_0 + 1])))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) (short)19972))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 12; i_1 += 3) 
    {
        var_15 = ((/* implicit */signed char) arr_4 [i_1 + 1] [i_1 + 1]);
        var_16 = var_1;
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_3 = 3; i_3 < 12; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_13 [(_Bool)0] [i_5 - 1] = ((/* implicit */short) (~(((/* implicit */int) ((short) (_Bool)1)))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) >> (((/* implicit */int) var_3))))) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_9 [i_2] [i_3 - 1] [i_4 + 2] [i_4])))))));
                            arr_14 [i_1] [i_1] [i_1] [(_Bool)1] [i_1 - 3] [10ULL] [(_Bool)1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-23837)) : (((/* implicit */int) (unsigned short)21071))))));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3] [i_3 + 1] [i_3 - 3] [i_4 + 2])) && (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_7 [i_1] [i_3 - 1] [i_4 + 2] [i_5 + 1]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1 - 2] [i_3 - 1])) ? (((/* implicit */int) arr_0 [i_3 + 1])) : ((-(((/* implicit */int) (short)23837)))))))));
                arr_15 [i_2] [(_Bool)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23419)) ? (((/* implicit */int) (short)24183)) : (((/* implicit */int) (_Bool)1))));
                var_20 += ((/* implicit */_Bool) ((unsigned short) arr_3 [i_1 - 3]));
                var_21 = ((/* implicit */short) var_4);
            }
            for (signed char i_6 = 4; i_6 < 12; i_6 += 2) 
            {
                arr_18 [i_1] [i_2] [i_6] = ((/* implicit */unsigned long long int) arr_16 [(short)6] [i_2] [i_6 + 1] [i_6]);
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((arr_16 [i_1 - 3] [i_6 - 4] [i_6 - 3] [(short)8]) ? (((/* implicit */int) arr_16 [i_1 - 3] [i_6 - 4] [i_1] [i_6])) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned int i_7 = 1; i_7 < 12; i_7 += 3) 
            {
                arr_21 [i_1] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) arr_16 [i_2] [i_7 - 1] [i_2] [i_7 - 1])) : (((/* implicit */int) var_8))))) >= ((-(var_9)))));
                arr_22 [i_2] [i_7] = ((/* implicit */unsigned char) ((short) arr_12 [i_1 - 4] [i_2] [i_7] [i_7 - 1]));
                var_23 = ((/* implicit */short) min((var_23), (var_8)));
                var_24 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_7]))));
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                arr_25 [i_8] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                var_25 = arr_19 [i_1] [i_1] [i_1];
                /* LoopSeq 2 */
                for (short i_9 = 1; i_9 < 12; i_9 += 1) 
                {
                    var_26 = ((arr_4 [i_1 - 3] [i_8 - 1]) == (arr_4 [i_1 - 2] [i_8 - 1]));
                    var_27 -= ((/* implicit */unsigned char) ((((unsigned int) var_0)) > (((var_5) << (((var_6) - (1280080657587334430ULL)))))));
                    arr_28 [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1 - 2]))));
                }
                for (unsigned int i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    arr_33 [i_8] [i_8] [i_8 - 1] [i_10 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_8] [i_8 - 1] [i_10 - 1])) ^ (((/* implicit */int) arr_20 [i_1 - 1]))));
                    arr_34 [i_10] [i_10] [i_8] [i_10] [(_Bool)1] [(_Bool)1] = var_4;
                    arr_35 [i_1] [i_2] [i_8] [i_8] [i_10 - 1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_31 [i_8] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_20 [(_Bool)1]))))));
                }
                arr_36 [i_8] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_1 - 3]))));
            }
            var_28 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_10 [i_1 - 2] [(short)3] [i_1 + 1]))));
        }
        for (unsigned int i_11 = 1; i_11 < 12; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 3; i_12 < 11; i_12 += 2) 
            {
                var_29 = ((/* implicit */signed char) ((((var_6) >> (((var_6) - (1280080657587334411ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_12] [i_1] [i_1 - 4] [i_1 - 1] [i_11 + 1] [i_12 - 1])) ? (((/* implicit */int) arr_38 [3U] [i_1] [i_1])) : (((/* implicit */int) var_3))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_12 - 3] [i_12] [i_12 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_12 - 1] [i_12] [i_12]))) : (var_2)));
                var_32 = ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_12] [i_11] [i_12 - 3]))) + (var_9)));
                var_33 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_42 [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1 - 2] [i_1])))))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)23820)) : (((/* implicit */int) arr_8 [i_1]))))));
            }
            /* LoopNest 2 */
            for (signed char i_13 = 1; i_13 < 10; i_13 += 2) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_34 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_1 - 2]))));
                        arr_50 [(unsigned short)6] [(unsigned short)6] [i_13] [i_14] [(signed char)0] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                        /* LoopSeq 4 */
                        for (short i_15 = 2; i_15 < 9; i_15 += 2) 
                        {
                            arr_53 [i_1] [i_11] [i_1] [i_1] [i_14] [i_13] = ((/* implicit */unsigned char) ((signed char) var_3));
                            var_35 = ((/* implicit */signed char) var_7);
                            var_36 = ((/* implicit */signed char) ((short) arr_37 [i_13 - 1] [i_11 - 1] [i_1 - 3]));
                        }
                        for (short i_16 = 4; i_16 < 9; i_16 += 2) 
                        {
                            var_37 = ((/* implicit */short) arr_47 [i_1] [i_16 + 1] [i_16] [i_13] [(_Bool)1]);
                            arr_56 [i_1] [i_11 - 1] [i_13] [i_14] [i_11 - 1] [i_16] &= ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                            var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (~(((/* implicit */int) arr_47 [i_16] [i_11] [i_13 + 3] [i_16] [i_16])))))));
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1] [5ULL])) << (((/* implicit */int) arr_5 [i_11 - 1] [i_13] [i_14]))));
                        }
                        for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 2) 
                        {
                            arr_59 [i_1] [i_1] [i_11 - 1] [(_Bool)1] [i_14] [i_13] [i_17 + 2] = ((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_52 [i_1] [(unsigned short)7] [i_13] [i_17 - 1] [i_17] [10ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13] [i_13] [i_13]))));
                            arr_60 [11ULL] [i_13] [(short)10] [i_14] [i_17 - 1] [(short)10] [(short)10] = ((((((/* implicit */_Bool) (short)-23837)) ? (((/* implicit */int) arr_26 [i_13] [i_13] [(short)6])) : (((/* implicit */int) arr_41 [i_1] [i_13] [(_Bool)1] [i_14])))) >= (((/* implicit */int) var_0)));
                            arr_61 [i_13] [i_13] [i_13 - 1] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_37 [i_1] [i_11] [i_14])))))));
                        }
                        for (unsigned long long int i_18 = 4; i_18 < 10; i_18 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned short) ((13353811810722810458ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (short)3)))))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_43 [i_1 - 3] [i_13 + 1] [i_18 - 3]))));
                        }
                        var_42 = ((/* implicit */unsigned char) arr_16 [i_1] [i_1 + 1] [i_14] [i_13]);
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)21071)) : (((/* implicit */int) (unsigned char)29)))))));
                    }
                } 
            } 
            var_44 = ((/* implicit */_Bool) ((short) arr_1 [i_1 + 1] [i_11 - 1]));
            var_45 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) arr_20 [i_1])))))) - (arr_9 [i_1 - 1] [i_1 + 1] [(unsigned short)2] [(unsigned short)2])));
            var_46 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_11] [i_1] [i_11 + 1]))) : (var_9))));
        }
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            arr_67 [i_1] [i_19] [(_Bool)1] = ((/* implicit */signed char) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_1 - 2] [(short)9] [i_19])))));
            arr_68 [i_19] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)29505)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (short)25493))));
            /* LoopSeq 1 */
            for (unsigned long long int i_20 = 2; i_20 < 12; i_20 += 1) 
            {
                arr_73 [i_19] [i_19] = ((((/* implicit */_Bool) (+(var_9)))) ? (arr_57 [i_1] [i_1 - 4] [i_1 + 1] [i_1 - 4] [i_1 - 4]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_46 [(signed char)1] [i_1] [i_19 - 1] [i_20])) : (((/* implicit */int) arr_44 [i_19] [i_19]))))));
                var_47 = ((/* implicit */short) arr_12 [i_20] [i_20] [(short)9] [i_1]);
                arr_74 [(short)6] [(_Bool)1] [(_Bool)1] |= ((/* implicit */short) ((((/* implicit */int) arr_55 [i_1 - 1] [(short)10])) <= (((/* implicit */int) arr_55 [i_1 + 1] [8ULL]))));
            }
        }
        arr_75 [i_1 - 4] = ((unsigned long long int) ((arr_9 [i_1 - 2] [i_1 - 2] [i_1] [(short)9]) < (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    }
    for (unsigned short i_21 = 3; i_21 < 11; i_21 += 2) 
    {
        var_48 = ((/* implicit */short) (signed char)32);
        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((unsigned int) min((var_0), (((/* implicit */unsigned short) arr_30 [i_21 + 1] [i_21 - 2]))))))));
        var_50 += ((/* implicit */_Bool) ((((((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_37 [i_21] [i_21] [i_21]))))) - (((/* implicit */int) arr_54 [i_21] [i_21] [6ULL] [i_21] [i_21] [(short)9] [6ULL])))) + (2147483647))) << (((((((((/* implicit */int) var_7)) < (((/* implicit */int) arr_78 [i_21 - 3])))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)29866)) >= (((/* implicit */int) (short)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_69 [(_Bool)1] [(signed char)2])) || (((/* implicit */_Bool) arr_76 [i_21]))))))) - (1)))));
    }
    var_51 = ((/* implicit */signed char) ((unsigned char) ((min((((/* implicit */unsigned long long int) var_3)), (var_6))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234479
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
    var_19 = ((/* implicit */unsigned int) ((unsigned char) var_10));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+(((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)48421)))) >> (((((var_13) >> (((var_14) - (3927362397U))))) - (53095530ULL))))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0 + 1] [i_1] [i_0 + 1])), ((unsigned short)3))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [(unsigned char)5] [i_1] = ((/* implicit */short) (unsigned short)17114);
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (12130333593342879344ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3)))))) ? (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1147995330U)), (5585805907381434723LL)))) : (min((arr_1 [i_4]), (3334796988742447052ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [6U] [(signed char)2])) ? (((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) (unsigned short)34072)))))));
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((short) 16U)))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 4; i_5 < 15; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_2]);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_25 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_0 + 1] [i_1] [i_2] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [0LL] [i_5 - 1] [i_2 - 1] [i_1] [i_0 - 1]))) : (arr_1 [i_1]))) - (((((/* implicit */_Bool) ((short) var_12))) ? (3287544233866602444ULL) : (((/* implicit */unsigned long long int) arr_15 [i_0 - 1] [i_1] [i_5 + 1] [i_0 - 1]))))));
                            var_26 ^= ((/* implicit */unsigned long long int) -1911911927);
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) 2802784775U))));
                            var_28 *= ((/* implicit */unsigned short) (signed char)3);
                            arr_25 [i_0] [12U] [12U] [i_0 - 1] [12U] [12U] [i_0] = ((/* implicit */signed char) ((3075743541260326370ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 + 1] [i_5 + 1])))));
                            var_29 *= ((/* implicit */unsigned short) 9601790579052449164ULL);
                        }
                        arr_26 [(unsigned short)16] [i_5 + 2] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35049)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)4774))))))) ? (max((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [10LL])) ? (((/* implicit */int) (signed char)29)) : (var_7))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18061))))))) : (((/* implicit */int) (unsigned short)47475))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) arr_22 [i_2] [i_2] [i_2] [i_2]))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((signed char) min(((unsigned short)4763), (((/* implicit */unsigned short) (short)15880))))))));
    /* LoopSeq 3 */
    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    {
                        arr_38 [i_8] [i_9] [i_8] [i_10] [i_8] [i_11] = ((/* implicit */unsigned int) (_Bool)0);
                        arr_39 [4] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)200)))))));
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) max((max((((unsigned long long int) arr_32 [i_8])), (((/* implicit */unsigned long long int) arr_27 [i_8])))), (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -1191054282)), (4294967286U)))), (arr_0 [i_8]))))))));
                        arr_40 [i_8] [i_8] [i_10] [i_11] |= ((/* implicit */int) max((((/* implicit */unsigned long long int) 27U)), (max((arr_0 [i_9 + 2]), (((/* implicit */unsigned long long int) max((1200912750U), (1195729067U))))))));
                    }
                } 
            } 
        } 
        arr_41 [i_8] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_28 [i_8]))))))) - (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned int) arr_27 [i_8])) : (16U)))));
    }
    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
    {
        var_33 = max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_12] [i_12])) || (((/* implicit */_Bool) arr_36 [i_12] [i_12] [i_12] [i_12]))))), (arr_12 [i_12] [i_12]));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
            {
                {
                    var_34 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) -1191054282)) ^ (((unsigned long long int) ((arr_16 [5U] [i_13] [i_13] [5U]) - (((/* implicit */int) (unsigned short)21485)))))));
                    var_35 = ((/* implicit */long long int) arr_11 [i_12] [i_14] [i_13 - 1] [i_12]);
                    var_36 *= ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_12] [i_12] [i_14]))) | (max((((/* implicit */unsigned long long int) var_17)), (arr_20 [i_14] [8LL] [8LL] [6] [i_12] [i_12])))))));
                    var_37 = ((/* implicit */long long int) min((var_37), (((((/* implicit */_Bool) ((((/* implicit */int) min((arr_13 [i_12] [i_14]), (((/* implicit */unsigned char) (signed char)-9))))) >> (((((/* implicit */int) var_9)) - (11930)))))) ? (((((/* implicit */_Bool) arr_35 [i_13] [i_13 + 3] [i_13 + 3] [i_13 + 1] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_13] [10U] [10U] [i_13 - 1]))) : (max((((/* implicit */long long int) (_Bool)1)), (-6985991259637913449LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_12] [i_13] [i_12])))))));
                    var_38 = max((((/* implicit */signed char) (_Bool)1)), (var_1));
                }
            } 
        } 
    }
    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
    {
        var_39 += ((/* implicit */unsigned char) ((2076069599U) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_15]))))))));
        /* LoopNest 2 */
        for (long long int i_16 = 1; i_16 < 14; i_16 += 3) 
        {
            for (unsigned short i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_18 = 3; i_18 < 13; i_18 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(4294967295U)))) || (((/* implicit */_Bool) (short)-28144))));
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 15; i_19 += 2) 
                        {
                            arr_61 [i_16] [i_16] [i_17] [(signed char)2] [i_17] = ((/* implicit */unsigned long long int) arr_34 [i_19]);
                            arr_62 [i_15] [i_15] [i_15] [(signed char)4] [i_15] [i_19] [i_15] &= ((/* implicit */signed char) ((unsigned short) var_5));
                            var_41 = ((/* implicit */unsigned long long int) ((unsigned int) arr_6 [i_16 + 1] [i_17] [i_18 - 1]));
                            arr_63 [5ULL] [i_16 - 1] [5ULL] [5ULL] [(signed char)14] [i_16] = ((/* implicit */unsigned short) ((unsigned long long int) var_10));
                        }
                    }
                    for (unsigned int i_20 = 1; i_20 < 14; i_20 += 2) 
                    {
                        arr_67 [i_20] [i_20] [i_16] [i_20] [(signed char)11] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_0))))));
                        var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_20 + 1]))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 4294967272U))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (arr_16 [i_16 + 1] [i_20] [i_20] [i_20 - 1])))) : (((((/* implicit */_Bool) arr_15 [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_20 - 1])) ? (11424860810925188373ULL) : (((/* implicit */unsigned long long int) arr_15 [i_20 + 1] [i_20 - 1] [i_20 - 1] [i_20 + 1]))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_21 = 2; i_21 < 13; i_21 += 2) 
                    {
                        for (long long int i_22 = 0; i_22 < 15; i_22 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (signed char)-9))));
                                var_45 &= ((/* implicit */signed char) (-(((/* implicit */int) arr_8 [10U] [10U]))));
                            }
                        } 
                    } 
                    arr_73 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_5 [i_16 - 1] [i_16 + 1] [i_16 - 1]))) << (((((/* implicit */int) ((signed char) 4294967267U))) + (35)))));
                    arr_74 [i_15] [i_16] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_16] [i_16])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(short)3] [i_16] [(short)3] [i_16 + 1])) ? (arr_15 [i_15] [i_15] [i_15] [i_16 - 1]) : (arr_15 [i_15] [i_16 - 1] [(signed char)16] [i_16 - 1]))))));
                }
            } 
        } 
        var_46 = ((/* implicit */unsigned char) 3099238229U);
    }
}

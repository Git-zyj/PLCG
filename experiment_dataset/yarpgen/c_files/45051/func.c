/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45051
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_4 [i_1] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) var_14)) >= (arr_2 [i_0 + 1])));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [(signed char)7] [i_2] [i_3] [i_2] = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) var_3)))));
                            arr_14 [i_0] [0LL] [i_1] [i_2] [i_2] [i_3] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 + 3] [i_0 - 1])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) 0ULL)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_18 [i_5] [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) ((unsigned short) 0ULL));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_23 [i_1] [i_1] [i_1] |= ((/* implicit */long long int) ((-8076132600077912695LL) == (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 1] [5LL] [i_6] [i_6])))));
                    var_21 -= ((/* implicit */unsigned long long int) ((-5706790352206952219LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-2097)))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5656482056168526612ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-106))));
                }
                for (long long int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) min((var_23), (((_Bool) var_11))));
                    arr_26 [i_0] [i_1] [i_5] [i_7] [i_7] = ((/* implicit */long long int) var_12);
                    /* LoopSeq 4 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (-1915804969)));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((signed char) (_Bool)1)))));
                    }
                    for (long long int i_9 = 2; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) var_8);
                        arr_32 [i_9] [i_5] [i_5] [i_1] = (short)-19730;
                    }
                    for (long long int i_10 = 2; i_10 < 12; i_10 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((signed char) var_15));
                        var_28 = ((/* implicit */short) var_1);
                    }
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        var_29 = ((/* implicit */long long int) var_17);
                        var_30 |= ((/* implicit */unsigned long long int) var_7);
                        var_31 = ((/* implicit */short) var_19);
                        arr_39 [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                    }
                    var_32 ^= ((/* implicit */short) var_8);
                    arr_40 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_7)))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    arr_44 [i_5] [i_1] = ((/* implicit */int) ((signed char) var_15));
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) (signed char)-21)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [6LL] [i_1] [(short)2] [i_5]))) ^ (arr_21 [i_0] [i_0] [i_1] [i_5] [i_12] [(signed char)12]))) : (((/* implicit */unsigned long long int) 8345195303717018242LL))))));
                }
                for (short i_13 = 4; i_13 < 12; i_13 += 4) 
                {
                    arr_47 [0LL] [i_5] [i_5] = ((/* implicit */unsigned int) 1915804970);
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        arr_51 [i_0] [2LL] [(signed char)1] [i_5] [i_14] = ((/* implicit */unsigned int) -2916064830560938586LL);
                        arr_52 [i_13] [i_1] [i_5] [i_13] [10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [i_5] [i_13 - 2]))));
                        var_34 = ((/* implicit */long long int) (~(var_10)));
                    }
                    for (short i_15 = 1; i_15 < 11; i_15 += 3) 
                    {
                        arr_57 [i_0] [i_1] [i_5] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (_Bool)1))));
                        var_35 = ((/* implicit */signed char) ((short) var_13));
                    }
                    for (long long int i_16 = 2; i_16 < 10; i_16 += 4) 
                    {
                        arr_60 [i_5] [i_13] [(signed char)10] [i_1] [i_5] = ((/* implicit */long long int) (_Bool)1);
                        arr_61 [i_0] [i_5] [12LL] [1ULL] [i_16] = ((long long int) (short)(-32767 - 1));
                        arr_62 [1ULL] [i_5] [(signed char)8] = ((/* implicit */_Bool) (~(var_6)));
                        arr_63 [i_0] [i_1] [i_1] [i_5] [i_5] [i_16] = ((/* implicit */long long int) var_7);
                    }
                }
            }
            for (long long int i_17 = 2; i_17 < 13; i_17 += 4) 
            {
                arr_67 [i_0] [i_1] [i_17] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_11))))));
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_36 = ((/* implicit */signed char) (+(228743074)));
                    var_37 = ((/* implicit */int) (+(3495307283255696081ULL)));
                }
            }
            for (short i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                var_38 = ((/* implicit */signed char) ((long long int) (unsigned char)30));
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 14; i_20 += 4) 
                {
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                    {
                        {
                            var_39 &= ((/* implicit */long long int) arr_3 [(_Bool)1]);
                            arr_78 [i_0] [i_1] |= ((/* implicit */unsigned int) ((signed char) (~(var_19))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_22 = 2; i_22 < 11; i_22 += 4) 
                {
                    for (signed char i_23 = 0; i_23 < 14; i_23 += 2) 
                    {
                        {
                            arr_84 [i_0] [(signed char)11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-7190734456691615255LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-98)))))) % (var_8)));
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7190734456691615249LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12691))) : (var_10))))));
                            arr_85 [i_0] [(signed char)9] [i_1] [i_19] [i_22] [i_23] [i_23] = ((/* implicit */int) (((!(((/* implicit */_Bool) 8345195303717018259LL)))) ? (arr_54 [i_22] [i_22 + 2] [i_22] [i_22] [i_22] [i_22] [i_22]) : (((/* implicit */long long int) (+(((/* implicit */int) var_17)))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_24 = 4; i_24 < 11; i_24 += 4) 
        {
            arr_90 [i_0] [11U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-26144))));
            var_41 = ((/* implicit */short) ((unsigned long long int) var_12));
            arr_91 [i_0] [i_24] [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)204)) ? (14288105247507461656ULL) : (((/* implicit */unsigned long long int) 3974194257U))));
            /* LoopNest 2 */
            for (unsigned char i_25 = 2; i_25 < 10; i_25 += 4) 
            {
                for (unsigned long long int i_26 = 2; i_26 < 13; i_26 += 2) 
                {
                    {
                        var_42 = ((/* implicit */_Bool) 14288105247507461674ULL);
                        arr_96 [i_26] [i_25] [i_24] [i_0] &= ((/* implicit */int) 8345195303717018242LL);
                    }
                } 
            } 
            arr_97 [i_24] = ((/* implicit */short) (_Bool)1);
        }
        /* LoopNest 3 */
        for (unsigned short i_27 = 0; i_27 < 14; i_27 += 4) 
        {
            for (long long int i_28 = 3; i_28 < 13; i_28 += 2) 
            {
                for (short i_29 = 2; i_29 < 13; i_29 += 2) 
                {
                    {
                        var_43 += ((/* implicit */long long int) (unsigned char)33);
                        arr_105 [i_0] [i_0] [i_0] [i_28] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)229))));
                        arr_106 [i_0] [i_27] [i_28] [2U] [i_29] [i_28] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)124))));
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (-(7876166305542469267LL))))));
                        arr_107 [(signed char)3] [i_28] [i_28] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_29 + 1] [i_27] [i_0] [i_28 + 1] [(unsigned char)12] [i_0 - 2]))));
                    }
                } 
            } 
        } 
        var_45 = ((short) (_Bool)1);
    }
    for (int i_30 = 2; i_30 < 11; i_30 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_31 = 0; i_31 < 14; i_31 += 2) 
        {
            for (unsigned int i_32 = 0; i_32 < 14; i_32 += 4) 
            {
                {
                    arr_118 [i_30] [i_31] [i_31] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)38))))))))));
                    arr_119 [i_30] [i_31] [i_32] [i_32] = (+(min((var_10), (((/* implicit */unsigned int) var_13)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_33 = 0; i_33 < 14; i_33 += 4) 
                    {
                        var_46 = var_4;
                        var_47 &= ((/* implicit */short) ((unsigned long long int) -5169087732716967LL));
                    }
                }
            } 
        } 
        arr_122 [2LL] [i_30] |= ((839088345U) == (((/* implicit */unsigned int) -1220347351)));
        arr_123 [i_30] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) arr_73 [i_30] [i_30] [i_30] [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234))) : (arr_20 [(short)13] [i_30] [i_30]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_65 [i_30] [i_30] [i_30] [i_30])), (var_14)))))));
        var_48 = ((/* implicit */int) (-((-(14341047292944062422ULL)))));
    }
    var_49 = max((var_0), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) (short)-21563)))))));
    var_50 = ((/* implicit */unsigned long long int) ((unsigned int) var_13));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231820
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_18 -= ((/* implicit */short) var_7);
                            var_19 &= ((/* implicit */unsigned char) (~(max((arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (var_6)))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned char) ((var_11) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                                arr_11 [i_4] [i_4] [i_4] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [(unsigned char)10]);
                            }
                            /* vectorizable */
                            for (long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)168)) >> (((((/* implicit */int) (unsigned char)168)) - (168)))));
                                var_22 &= (unsigned char)56;
                                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [9LL] [9LL] [9LL] [9LL] [9LL]))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) -9199844645156816899LL);
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)78)) ? (arr_9 [i_5] [i_5 + 3] [i_5] [i_5] [i_5 + 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) 9199844645156816899LL)))))));
                            }
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0])) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [(signed char)16])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) var_16))))), (arr_3 [i_1 - 1]))) : (((unsigned long long int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_6 = 3; i_6 < 13; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88)))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21306)) ? (((/* implicit */int) arr_5 [i_0])) : (var_6)))) ? (((((/* implicit */_Bool) var_8)) ? (arr_9 [i_7] [i_6 + 4] [i_1] [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_7] [i_6] [i_1 - 1] [i_0])))) : (((/* implicit */int) arr_8 [(short)6] [i_1 - 1] [(_Bool)1] [i_6 - 3] [(unsigned short)1]))));
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            var_28 ^= ((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_6] [i_7] [i_8]);
                            var_29 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)-21306)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned char)192))))));
                        }
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            var_30 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_15 [i_1 - 1] [i_6] [i_6 + 1] [6U] [10ULL])));
                            arr_28 [i_6] [i_1] [i_6] [i_9] = ((/* implicit */int) ((unsigned short) 396730272U));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                        {
                            {
                                arr_37 [i_6] [i_6] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-21306)) : (((/* implicit */int) (unsigned char)122))));
                                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((signed char) arr_29 [i_6] [i_10 - 2])))));
                                arr_38 [i_6] [1ULL] [i_6 - 2] = ((/* implicit */_Bool) ((unsigned int) 3898237024U));
                                var_32 = ((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_6]);
                                arr_39 [i_10] [i_10] [i_6] [i_6] [i_6] [i_0] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-21306)) - (((/* implicit */int) (short)25146))))) ? (arr_31 [i_6] [i_6 + 1] [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_6 - 3] [i_6 - 3] [10] [i_6] [i_10 - 1] [i_10])))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_2 [i_6] [i_1])) : (((/* implicit */int) var_7))))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_6])) ? (((/* implicit */int) (unsigned short)12273)) : (((/* implicit */int) arr_4 [i_6] [i_1] [(_Bool)1])))))));
                }
                /* vectorizable */
                for (signed char i_12 = 3; i_12 < 13; i_12 += 1) 
                {
                    arr_42 [11U] [i_1] [i_1] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)11842))));
                    arr_43 [i_12] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_12 - 2] [i_12 - 2] [i_12] [i_12 - 3] [i_1 - 1] [i_1 - 1]))));
                }
                for (short i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) max((9199844645156816899LL), (((/* implicit */long long int) 1387479664U))));
                    var_35 = ((/* implicit */long long int) 2392351103U);
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_15 = 1; i_15 < 15; i_15 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
                        {
                            var_36 = ((/* implicit */long long int) (+(arr_40 [15ULL] [i_15 - 1] [i_15] [i_1 - 1])));
                            arr_53 [i_0] [i_1] [0ULL] [i_15] [i_16] = ((/* implicit */unsigned char) (signed char)-64);
                        }
                        for (long long int i_17 = 3; i_17 < 16; i_17 += 3) /* same iter space */
                        {
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31965)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)390))) : (396730262U)));
                            var_38 = ((/* implicit */int) arr_24 [i_17]);
                            arr_57 [i_0] [i_1 - 1] [i_17] [13U] [i_17 - 2] [i_1 - 1] = ((/* implicit */short) arr_54 [i_17] [1U] [i_14] [i_17]);
                        }
                        for (long long int i_18 = 3; i_18 < 16; i_18 += 3) /* same iter space */
                        {
                            arr_60 [i_0] [i_0] [i_0] [i_18] [(unsigned char)13] = ((/* implicit */unsigned short) var_11);
                            arr_61 [i_18] = ((/* implicit */signed char) var_8);
                            var_39 = ((/* implicit */_Bool) arr_30 [i_0] [(short)11] [(short)14] [i_18] [i_0] [i_0]);
                            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) 13262388565796502976ULL))));
                        }
                        arr_62 [i_15] [(unsigned short)16] [(unsigned short)10] [(unsigned short)10] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [(_Bool)1] [i_14] [i_0] [i_0] [i_0]);
                        var_41 = ((/* implicit */long long int) ((unsigned char) (short)17157));
                    }
                    arr_63 [i_14] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 396730273U)) : (-9087373592187323595LL)));
                }
                var_42 ^= ((/* implicit */short) (~(((/* implicit */int) min(((signed char)-37), (((signed char) arr_32 [i_0])))))));
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */long long int) (_Bool)0)), (955423061469039384LL))));
    var_44 = ((/* implicit */signed char) max(((-(var_17))), (var_17)));
    /* LoopNest 3 */
    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 3) 
    {
        for (unsigned int i_20 = 1; i_20 < 16; i_20 += 4) 
        {
            for (unsigned char i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                {
                    arr_71 [14ULL] [i_20 + 2] [13U] = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned long long int) arr_67 [i_20] [i_20 + 2] [i_20]))));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 18; i_22 += 4) 
                    {
                        for (int i_23 = 3; i_23 < 17; i_23 += 4) 
                        {
                            {
                                var_45 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_23]))) < (var_3)));
                                var_46 += ((/* implicit */_Bool) (unsigned short)28191);
                                arr_78 [i_23] [i_22] [i_21] [i_20] [8U] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) (short)-7888)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned long long int) 0U)) : (((((/* implicit */_Bool) 3898237024U)) ? (5043134584832868533ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53693)))))));
                                var_47 += (!(((/* implicit */_Bool) ((((/* implicit */int) arr_73 [i_20] [i_21] [i_22] [i_23 - 2])) % (arr_65 [i_21])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_48 = var_1;
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190965
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
    var_12 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = var_7;
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min(((signed char)124), (((/* implicit */signed char) (_Bool)1)))))) : (max((((/* implicit */long long int) (_Bool)1)), (var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5)));
    }
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 8; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 4; i_5 < 9; i_5 += 1) 
                        {
                            var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)231)) ? (8566223998052032101ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_12 [i_3] [i_2] [i_3] [i_3] [i_5]))));
                            arr_16 [i_1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_1] [i_3 - 2] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1 - 3] [i_2] [i_1] [i_4] [i_5] [i_2]))) : (arr_13 [i_1 - 2] [i_1 - 2] [i_3] [i_4] [i_5]))) < (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_9 [i_1] [i_1] [i_3])), (arr_0 [i_1])))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            arr_19 [i_1] [i_2] [i_3] [i_4] [i_1] [i_6 + 1] [i_6] = var_7;
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
                            arr_20 [i_1] [i_1] [i_1] [i_4] [i_4] [9ULL] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7732561033267908926ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1]))) : (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        }
                        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_16 = ((/* implicit */signed char) var_4);
                            var_17 = ((/* implicit */unsigned short) var_1);
                            arr_23 [i_1] [i_1] [i_3] [i_4] [i_7] = ((/* implicit */short) var_6);
                            arr_24 [i_1] [i_3] = ((/* implicit */unsigned char) var_2);
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */signed char) var_3);
                        }
                        arr_26 [i_1] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_12 [i_1 + 2] [(signed char)7] [(signed char)7] [i_4] [i_4])), (4294967295U)));
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_10 [i_1] [i_1] [i_3] [i_4]))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) var_10);
        arr_27 [i_1] = ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) var_4))))))) == (max((max((((/* implicit */unsigned long long int) (unsigned char)236)), (9880520075657519504ULL))), (((/* implicit */unsigned long long int) min((arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]), (arr_14 [i_1 - 2] [i_1] [i_1 + 2] [i_1 - 2] [i_1 + 2] [i_1])))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_8 = 2; i_8 < 17; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_35 [i_8] [i_9 - 4] [i_8] [i_8] = ((/* implicit */signed char) (+(arr_0 [i_8])));
                var_20 = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_29 [i_8 - 2])) : (((/* implicit */int) arr_29 [i_8 - 2]))));
            }
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(var_3))))));
                            arr_43 [i_8] = ((/* implicit */unsigned long long int) (~(arr_41 [i_8] [i_8] [i_8] [i_8 + 1] [i_8] [i_8])));
                        }
                    } 
                } 
                arr_44 [i_8] [i_9] [i_8 + 1] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_8]))));
            }
            for (unsigned int i_14 = 0; i_14 < 19; i_14 += 1) 
            {
                arr_48 [i_8 + 1] [i_8 + 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_8 + 2] [i_8 + 2] [i_8 - 2] [i_8 + 2] [i_8])) ? (arr_42 [i_8] [i_8] [i_8 - 2] [i_8] [i_8]) : (arr_1 [i_8])));
                var_22 = ((/* implicit */unsigned short) arr_29 [i_8]);
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_54 [i_15] [i_9] [i_8] [i_15] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3615196681U)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (unsigned char)100))));
                            arr_55 [i_8] [i_8] [i_8] [i_15] [i_8] = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_51 [i_8])) : (((/* implicit */int) arr_32 [i_8])))) | (arr_46 [i_14] [i_15] [i_8]));
                            var_23 = ((/* implicit */short) (~(arr_52 [i_9 - 2] [i_16 - 1] [i_8] [i_15] [i_16])));
                        }
                    } 
                } 
                var_24 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_8] [(short)12] [(short)12])) - (((/* implicit */int) arr_36 [i_8] [(_Bool)1] [(_Bool)1]))));
                arr_56 [i_8] [i_9 - 2] = ((/* implicit */unsigned short) arr_34 [i_9 - 3] [i_8] [i_14]);
            }
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                for (int i_18 = 3; i_18 < 18; i_18 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) arr_62 [i_8 + 1] [i_9 - 4] [i_18]);
                        arr_63 [i_8] = ((/* implicit */unsigned long long int) arr_42 [i_8] [i_17] [i_8] [i_9] [i_8]);
                        var_26 = ((/* implicit */_Bool) arr_37 [i_8]);
                    }
                } 
            } 
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_27 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
            /* LoopSeq 2 */
            for (unsigned int i_20 = 3; i_20 < 18; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 19; i_21 += 1) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 3) 
                    {
                        {
                            arr_78 [i_8] [i_8] [i_19] [i_19] [i_20 - 1] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_11);
                            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                            var_29 *= arr_45 [i_8] [(unsigned short)16];
                        }
                    } 
                } 
                var_30 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_8 - 2] [i_20]))))) ? (((/* implicit */int) arr_28 [i_20 - 1] [i_19])) : (((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_29 [i_8 + 2])))));
                arr_79 [i_8] = ((/* implicit */unsigned long long int) arr_37 [i_8]);
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 19; i_23 += 3) 
                {
                    var_31 += ((/* implicit */unsigned long long int) (+(arr_67 [(unsigned short)18])));
                    var_32 = ((/* implicit */int) arr_49 [i_19] [i_8] [i_19] [i_23]);
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_5))));
                }
            }
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
            {
                var_34 = ((/* implicit */short) 9880520075657519525ULL);
                /* LoopSeq 3 */
                for (unsigned short i_25 = 3; i_25 < 16; i_25 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_26 = 0; i_26 < 19; i_26 += 1) 
                    {
                        var_35 = ((/* implicit */short) arr_81 [i_8 - 2] [i_19] [i_24 + 1] [i_25] [i_26] [i_26]);
                        var_36 = ((/* implicit */unsigned long long int) 3307610613U);
                    }
                    var_37 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-50)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    var_38 += ((/* implicit */unsigned char) arr_84 [i_8] [i_8] [i_8 + 1] [i_8 + 2] [i_25 + 1]);
                    var_39 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_2)))) - (((/* implicit */int) var_4))));
                }
                for (unsigned int i_27 = 0; i_27 < 19; i_27 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_28 = 0; i_28 < 19; i_28 += 3) 
                    {
                        var_40 += ((/* implicit */unsigned long long int) var_4);
                        var_41 = ((/* implicit */short) arr_75 [i_8] [i_19] [i_8] [i_27] [i_28]);
                    }
                    for (unsigned char i_29 = 0; i_29 < 19; i_29 += 3) 
                    {
                        var_42 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_24 + 1] [(unsigned short)2] [i_27]))));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_29] [i_19] [i_24 + 1] [i_8] [i_29] [i_8 + 2])) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 1978463884)) ? (((/* implicit */long long int) arr_31 [i_24] [i_27] [i_8])) : (var_1)))));
                    }
                    for (signed char i_30 = 2; i_30 < 18; i_30 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_80 [i_8 + 2] [i_8] [i_8 + 2] [i_27]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) arr_71 [i_8] [i_19] [i_24 + 1] [i_27])) : (arr_89 [i_24])));
                        var_45 = ((/* implicit */unsigned int) arr_92 [i_30]);
                        var_46 += ((/* implicit */signed char) arr_80 [i_8] [(short)14] [(short)14] [(short)14]);
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8 + 1])) ? (((/* implicit */int) arr_38 [i_8] [i_30 - 2] [i_8 - 2])) : (((/* implicit */int) arr_38 [i_8] [i_30 - 2] [i_8 - 1]))));
                        arr_100 [i_19] [i_19] [i_24] [i_27] [i_8] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_69 [i_8 + 2] [i_30 - 1] [i_24 + 1])) ? (arr_69 [i_8 + 2] [i_30 - 1] [i_24 + 1]) : (arr_69 [i_8 + 2] [i_30 - 1] [i_24 + 1])));
                    }
                    var_48 += ((/* implicit */unsigned short) var_6);
                }
                for (unsigned char i_31 = 1; i_31 < 15; i_31 += 3) 
                {
                    arr_104 [i_8] [i_19] [i_19] [i_8] = ((/* implicit */unsigned char) (+((-(arr_45 [i_8] [i_8])))));
                    var_49 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_8] [(short)8] [i_24] [i_31 + 2])) ? (((/* implicit */int) arr_39 [i_31] [i_19] [i_8] [16LL] [i_24] [i_19])) : (((/* implicit */int) arr_95 [i_8 + 1] [i_8 + 1] [i_24] [i_24 + 1] [i_19]))))) ? ((+(arr_84 [i_8 + 2] [i_8] [i_8] [i_8 + 1] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_65 [i_8] [i_19])) || (var_4)))))));
                }
                arr_105 [i_24] [i_19] [i_8] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_88 [i_8] [i_8] [i_8 - 1] [i_8 + 2] [i_8])) ? (3583395492971024289ULL) : (arr_101 [i_8])))));
            }
        }
        arr_106 [i_8] = ((/* implicit */unsigned long long int) (-(arr_46 [i_8] [i_8] [i_8])));
    }
    var_50 = ((var_4) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)100), (((/* implicit */unsigned char) var_10)))))));
    var_51 = var_0;
}

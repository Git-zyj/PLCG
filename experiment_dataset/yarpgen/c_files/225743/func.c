/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225743
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (2522283825U)))) && (((/* implicit */_Bool) 1772683491U))))) >= (max((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                var_15 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (unsigned short)32)))))), (((/* implicit */int) ((arr_4 [i_2] [i_2] [i_1 - 1] [i_1 + 1]) != (((/* implicit */unsigned long long int) -2862176155619883649LL)))))));
                var_16 = ((/* implicit */unsigned char) max(((-(max((arr_4 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) (short)-11941)))))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) >> (((-681847887) + (681847889))))), (min((((/* implicit */int) var_1)), (var_12))))))));
                var_17 = ((/* implicit */int) max((((/* implicit */long long int) var_10)), (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5084))) * (var_9))))));
                var_18 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) -563408465)) ? (4792921237877228881ULL) : (((/* implicit */unsigned long long int) 2199023255551LL))))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_4 = 4; i_4 < 17; i_4 += 3) 
                {
                    var_19 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_3] [i_4 + 1]))));
                    var_20 = arr_6 [i_0] [i_0] [i_0] [i_0];
                    arr_12 [i_0] [i_1] [i_3] [i_4 - 3] = ((((/* implicit */int) ((short) arr_7 [i_1 - 1] [2U] [9]))) - (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_7 [i_1 + 1] [i_0] [i_0]))))));
                }
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) var_13)) : (min((((/* implicit */unsigned int) (unsigned short)11)), (0U)))))) ? (((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (min((var_3), (-311195459443515320LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_22 = ((311195459443515319LL) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) (_Bool)0))), (arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1]))))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_5 + 2]);
                        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_14 [i_1] [2U] [(unsigned char)16] [i_1] [i_1] [i_1]))));
                        var_24 = ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_5 + 3] [i_3] [i_5] [(unsigned short)3] [i_6])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1 + 1] [i_5 - 1] [(unsigned short)0] [i_5] [i_5] [i_5]))))) : (((/* implicit */int) min((arr_17 [i_1 + 1] [i_5 + 2] [i_1 + 1] [(_Bool)0] [i_6] [i_6]), (arr_17 [i_1 - 1] [i_5 + 2] [i_3] [i_5] [(_Bool)1] [i_1])))));
                    }
                }
                var_25 ^= ((/* implicit */unsigned short) 16777215U);
                arr_20 [(unsigned char)1] [17] = ((/* implicit */short) min((max((((/* implicit */long long int) 1317927735)), (311195459443515319LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
            }
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1 - 1] [i_1] [i_7] [i_7] [i_1 - 1] [i_7]))) <= (16777215U)));
                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
            }
        }
        for (long long int i_8 = 1; i_8 < 17; i_8 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 3) 
            {
                for (unsigned int i_10 = 2; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned char)16)), (1242390023U))) << (((min((arr_32 [i_9 - 2] [i_9] [i_9] [i_9 - 1] [12ULL]), (arr_32 [i_9 - 1] [i_9] [i_9 - 1] [i_9 + 2] [i_9 - 2]))) + (2062876257)))));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (_Bool)1))));
                            arr_36 [i_8] [9LL] [i_9] [i_8 - 1] [i_11] [i_8] = ((/* implicit */short) ((unsigned long long int) ((unsigned char) -681847887)));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (signed char)-1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    {
                        var_31 ^= ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1494129361U)), (var_2)))) ? (max((var_8), (1317927722))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                        arr_41 [i_12] = ((/* implicit */long long int) -1433347911);
                    }
                } 
            } 
        }
        for (long long int i_14 = 1; i_14 < 17; i_14 += 3) /* same iter space */
        {
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((int) max((max((((/* implicit */int) var_11)), (arr_13 [i_14] [i_14] [i_0] [i_14]))), (((((/* implicit */_Bool) arr_43 [i_0] [i_14 + 1])) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) var_6))))))))));
            var_33 = ((((/* implicit */_Bool) (-(arr_5 [i_14 - 1] [i_14] [i_14] [3ULL])))) ? ((-(arr_21 [i_14 - 1] [i_14 + 1]))) : (((/* implicit */int) max((arr_14 [i_14 - 1] [i_14] [i_0] [i_14 - 1] [i_0] [i_14]), (arr_14 [i_14 - 1] [i_14] [i_14 - 1] [i_0] [i_14] [i_0])))));
        }
        /* LoopNest 2 */
        for (unsigned int i_15 = 3; i_15 < 17; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 1; i_17 < 16; i_17 += 3) 
                    {
                        for (int i_18 = 2; i_18 < 15; i_18 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) min((arr_52 [14] [i_18 - 2] [i_16] [i_15] [i_18 - 2]), (((/* implicit */unsigned short) ((unsigned char) 581241762))))))));
                                var_35 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_10 [i_16] [i_16] [i_16] [i_18 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62660))) : (var_3)))))));
                                var_36 = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)60)), (1362967325)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (int i_20 = 1; i_20 < 16; i_20 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */long long int) (+(arr_13 [i_15] [i_15 - 2] [i_20 - 1] [i_20 - 1])));
                                var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) arr_58 [i_20] [i_19] [i_16] [i_16] [i_0] [i_0]))));
                                var_39 = ((/* implicit */signed char) (+(-1724647291)));
                                var_40 = ((/* implicit */signed char) (-(((/* implicit */int) arr_35 [i_20] [i_20] [i_20] [i_20] [i_20 + 1] [i_15 - 3]))));
                            }
                        } 
                    } 
                    arr_60 [i_0] [i_15] [i_15] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min(((-(1362967325))), (((/* implicit */int) min(((signed char)7), (((/* implicit */signed char) (_Bool)1)))))))), (((min((268435455ULL), (((/* implicit */unsigned long long int) var_13)))) * (((/* implicit */unsigned long long int) ((arr_55 [(unsigned short)11] [i_0] [(unsigned short)11] [i_16]) ? (((/* implicit */int) (unsigned short)62723)) : (((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    }
    for (short i_21 = 0; i_21 < 21; i_21 += 3) 
    {
        arr_65 [i_21] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_63 [i_21]))))) + (((17175460977603381479ULL) / (((/* implicit */unsigned long long int) arr_61 [i_21]))))));
        /* LoopSeq 1 */
        for (signed char i_22 = 0; i_22 < 21; i_22 += 3) 
        {
            arr_70 [i_21] [0U] [(_Bool)1] = ((/* implicit */unsigned short) var_10);
            /* LoopNest 2 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (unsigned int i_24 = 0; i_24 < 21; i_24 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */long long int) (signed char)6);
                            var_42 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_69 [i_23] [(unsigned char)4] [i_25])))));
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                        {
                            var_43 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_77 [i_24] [i_24] [i_24] [i_24] [i_24])) ? (((/* implicit */int) arr_67 [i_22] [i_21])) : (((((/* implicit */_Bool) 5561408592661457879LL)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (short)3840))))))));
                            var_44 = var_6;
                            var_45 = -5634057739585414670LL;
                        }
                        for (unsigned int i_27 = 0; i_27 < 21; i_27 += 3) 
                        {
                            arr_82 [i_27] [i_22] [5] [i_24] [i_27] [20] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_21]))) : (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_74 [i_24] [13LL])) ? (((/* implicit */int) arr_78 [0] [i_23])) : (((/* implicit */int) arr_71 [i_21] [i_22] [i_23] [i_24])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (1866838223) : (((/* implicit */int) (short)-14510)))))))) : (((/* implicit */int) ((_Bool) var_7)))));
                            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) -180458232)) ? ((-2147483647 - 1)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (-311195459443515320LL) : (((/* implicit */long long int) 1048287475U))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [2ULL] [9ULL] [9ULL] [i_24])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)3840))))))))));
                            var_47 = ((/* implicit */unsigned char) var_12);
                        }
                        /* vectorizable */
                        for (long long int i_28 = 0; i_28 < 21; i_28 += 3) 
                        {
                            var_48 = ((/* implicit */long long int) (~(((/* implicit */int) arr_72 [i_21] [i_22] [i_23] [i_24]))));
                            var_49 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_22]))) : (arr_64 [i_23])))));
                            var_50 = ((/* implicit */unsigned int) ((9434838727638186812ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_21] [i_23] [i_24] [i_28]))) : (3061481513U))))));
                        }
                        var_51 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 16777215U)) >= (((0ULL) + (((/* implicit */unsigned long long int) -5103605087066321812LL)))))))));
                        var_52 -= ((/* implicit */unsigned int) 268435455ULL);
                        /* LoopSeq 1 */
                        for (long long int i_29 = 1; i_29 < 20; i_29 += 3) 
                        {
                            var_53 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (arr_83 [i_21] [i_22] [i_29 + 1]))))));
                            arr_90 [i_21] [i_22] [i_21] [i_23] [(short)18] [i_24] = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((-(-2147483620))) : (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-21))))));
                            arr_91 [i_29] [i_24] [(unsigned short)17] [i_23] [i_22] [i_21] = ((/* implicit */_Bool) arr_78 [i_21] [i_22]);
                            arr_92 [3LL] [i_22] [3LL] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */_Bool) ((unsigned int) (signed char)-123));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_30 = 1; i_30 < 18; i_30 += 3) 
            {
                for (unsigned long long int i_31 = 0; i_31 < 21; i_31 += 3) 
                {
                    {
                        var_54 = ((/* implicit */unsigned int) var_6);
                        var_55 = (!(((/* implicit */_Bool) ((long long int) ((arr_79 [i_21] [i_22] [i_22] [i_30] [i_31] [i_31]) >= (((/* implicit */int) (signed char)-21)))))));
                    }
                } 
            } 
        }
        var_56 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned char) (((+(var_3))) == (((((/* implicit */_Bool) arr_80 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-6155582284395583281LL))))))));
        arr_98 [(unsigned char)13] [(unsigned short)4] = ((/* implicit */int) max((((/* implicit */long long int) arr_64 [i_21])), (max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)20))))), (max((((/* implicit */long long int) var_11)), (-1541812042899432326LL)))))));
    }
    var_57 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23799))))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
}

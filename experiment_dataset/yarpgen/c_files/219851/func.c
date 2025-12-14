/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219851
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)45059))))) ? (var_6) : (((/* implicit */unsigned long long int) 1397274333)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) 353925614U)))) ? (399749387) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min(((short)22679), (var_10)))) : ((+(((/* implicit */int) var_2)))))))));
        arr_6 [i_0] [5U] = ((/* implicit */short) (+((-(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)246)), ((unsigned short)18730))))))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) (-(var_4)));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (signed char i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_18 [i_3] [i_2 - 2] [i_3] &= ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                        arr_19 [i_2] [i_2] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) var_2))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (short)-26977)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 2684825095U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)83)))))))));
            arr_20 [i_2] = ((/* implicit */signed char) var_12);
            arr_21 [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!((_Bool)1))))));
        }
        for (short i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
        {
            arr_26 [(short)4] [(short)4] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)18730))));
            /* LoopNest 3 */
            for (signed char i_6 = 2; i_6 < 14; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_16 |= ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                            arr_33 [i_1] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) (-(max((var_6), (((/* implicit */unsigned long long int) min((arr_16 [i_1 - 1] [i_1 - 1] [i_6] [i_6 - 1] [i_6]), (((/* implicit */short) var_8)))))))));
                            var_17 = ((/* implicit */long long int) ((var_2) ? ((~(((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6))))) : (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3))), (((/* implicit */long long int) (signed char)-28)))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
        {
            arr_38 [i_9] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)2520))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-952833189), (-399749388)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-17)), (arr_11 [i_9])))) : (min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) arr_28 [i_1] [i_1] [i_9]))))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_19 = ((/* implicit */unsigned char) var_8);
                /* LoopSeq 4 */
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
                {
                    arr_44 [i_1] &= ((/* implicit */long long int) 9908978815955180257ULL);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)22906)) : (((/* implicit */int) (signed char)54))));
                        arr_47 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(var_12)))))) ? (((var_2) ? ((((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)-3756))))) : ((-(var_3))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (3164259651U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_11])))))), (min((arr_29 [i_12] [i_11] [i_9] [i_9] [i_1 + 1]), (((/* implicit */long long int) var_5))))))));
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-20567))));
                        var_22 = ((/* implicit */unsigned long long int) arr_10 [i_11] [i_11]);
                    }
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        var_23 += ((/* implicit */int) (~(max((((/* implicit */unsigned int) arr_36 [i_1] [i_1] [i_10 - 1])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2798860524U)))))));
                        arr_51 [i_1] [i_9] [i_10] [i_10] [i_10] [i_13] [i_13] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)20961))));
                        var_24 &= ((/* implicit */int) (unsigned char)85);
                    }
                    for (short i_14 = 3; i_14 < 13; i_14 += 3) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)18730))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10330)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8606)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1))) : (((((/* implicit */_Bool) (~(arr_39 [i_11] [(signed char)14] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_49 [i_1] [(unsigned char)2] [i_10] [i_10] [i_14]), (((/* implicit */short) (_Bool)1)))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9747))) : (4072339067U)))))));
                        arr_56 [i_1] [9ULL] [i_10 - 1] [i_14] [i_14] = ((/* implicit */unsigned int) arr_42 [i_1] [(unsigned short)1]);
                        var_26 = ((/* implicit */unsigned short) var_0);
                    }
                    for (unsigned long long int i_15 = 2; i_15 < 14; i_15 += 2) 
                    {
                        var_27 = var_11;
                        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) (short)22857))));
                        var_29 = max((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), (arr_57 [i_1 + 1] [i_1 + 1] [i_10] [i_10] [(unsigned short)9] [i_15]));
                        arr_59 [i_10] [6ULL] [i_10] [i_1] [i_1] = ((/* implicit */signed char) 340864854U);
                    }
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_1] [i_9] [i_1] [i_1] [i_9])) ? (((/* implicit */int) var_10)) : ((~((~(((/* implicit */int) (short)-9690))))))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-((-(var_12)))))), (arr_29 [11] [11] [11] [i_16] [i_1])));
                    var_32 = (((_Bool)1) ? (954703828U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20567))));
                    var_33 = ((/* implicit */unsigned short) max((((/* implicit */long long int) 1384210114)), (min((arr_29 [i_1 - 1] [i_10] [i_10] [(unsigned char)4] [i_1 - 1]), (((/* implicit */long long int) (signed char)-81))))));
                }
                for (long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [(signed char)6] [i_17])))))) : (((/* implicit */int) max((max((var_10), (((/* implicit */short) (signed char)18)))), (arr_37 [i_1] [i_9] [1U]))))));
                    arr_66 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-61)), ((unsigned char)95)))), (var_1)))) ? (var_6) : (((/* implicit */unsigned long long int) arr_27 [i_9]))));
                    var_35 += ((/* implicit */unsigned short) var_2);
                    var_36 *= arr_24 [i_9] [i_10] [i_17];
                }
                for (signed char i_18 = 0; i_18 < 15; i_18 += 2) 
                {
                    arr_70 [i_1] [i_1] [(short)4] [i_18] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) var_9))))));
                    arr_71 [i_1] [i_1] = ((/* implicit */signed char) min((var_3), (((/* implicit */long long int) arr_23 [i_1] [i_9] [i_10]))));
                }
            }
            var_37 |= ((/* implicit */long long int) arr_10 [i_1] [(unsigned char)2]);
        }
        arr_72 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)22857))))) ? (929364302U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-121)))))) : ((+(12726871761878296375ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 2; i_19 < 22; i_19 += 3) 
    {
        var_38 = ((/* implicit */unsigned char) var_4);
        arr_76 [i_19] = ((/* implicit */unsigned long long int) arr_74 [i_19]);
    }
    for (unsigned int i_20 = 0; i_20 < 23; i_20 += 3) 
    {
        var_39 &= ((/* implicit */int) arr_73 [i_20] [i_20]);
        var_40 = ((/* implicit */signed char) (unsigned char)51);
        var_41 &= ((/* implicit */short) arr_74 [i_20]);
        var_42 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_73 [i_20] [i_20])))))))), (2646338081U)));
        var_43 = (~(var_1));
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 22; i_21 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_22 = 0; i_22 < 22; i_22 += 3) 
        {
            arr_84 [i_22] [i_22] = ((/* implicit */unsigned short) 1710477148U);
            var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) 1260849998432536923LL))));
            arr_85 [i_22] [i_22] [i_21] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_81 [i_21])) ? (((/* implicit */int) arr_73 [i_21] [i_21])) : (((/* implicit */int) (unsigned char)45))))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_24 = 0; i_24 < 22; i_24 += 4) /* same iter space */
            {
                var_45 = ((/* implicit */signed char) (+(arr_87 [i_21])));
                var_46 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_81 [i_21])) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)185))))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_2))))));
                /* LoopNest 2 */
                for (unsigned int i_25 = 0; i_25 < 22; i_25 += 2) 
                {
                    for (unsigned int i_26 = 1; i_26 < 20; i_26 += 2) 
                    {
                        {
                            var_47 += ((/* implicit */int) arr_94 [i_24] [i_26] [i_24] [(signed char)10] [i_26 - 1] [20ULL]);
                            var_48 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                            arr_95 [i_21] [i_23] [i_23] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_93 [i_26] [i_21] [i_25] [i_25] [i_21] [9ULL] [i_21])) ? (var_12) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_80 [i_21])) : (((/* implicit */int) var_2)))))));
                            var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) arr_93 [i_21] [i_21] [i_21] [i_25] [i_21] [i_25] [i_23]))))));
                        }
                    } 
                } 
            }
            for (long long int i_27 = 0; i_27 < 22; i_27 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_28 = 3; i_28 < 20; i_28 += 3) 
                {
                    for (unsigned int i_29 = 0; i_29 < 22; i_29 += 4) 
                    {
                        {
                            var_50 += ((/* implicit */short) -8275165137889673977LL);
                            var_51 = ((/* implicit */_Bool) (unsigned char)94);
                            var_52 = ((/* implicit */signed char) ((arr_94 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]) ? ((+(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_96 [i_21] [i_27] [i_29])))));
                            var_53 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned short)6870)) ? (((/* implicit */int) arr_78 [i_21])) : (((/* implicit */int) var_10))))));
                        }
                    } 
                } 
                var_54 |= ((/* implicit */_Bool) var_9);
                arr_103 [i_27] [i_23] [i_23] [i_21] = ((/* implicit */int) 4245783355U);
            }
            for (long long int i_30 = 0; i_30 < 22; i_30 += 4) /* same iter space */
            {
                var_55 = ((/* implicit */long long int) max((var_55), (((((/* implicit */_Bool) 2995864485903186902LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 13249460393104397727ULL)) ? (arr_82 [(unsigned short)1] [i_23] [i_30]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) arr_99 [i_30])) ? (((/* implicit */long long int) arr_97 [i_21] [i_23] [i_21])) : (arr_87 [i_21])))))));
                var_56 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)103))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (832544544U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : ((+(arr_98 [i_30])))));
                var_57 = ((/* implicit */int) arr_74 [i_21]);
                arr_106 [i_21] [10U] [i_23] [i_30] = ((/* implicit */unsigned long long int) var_3);
            }
            var_58 = ((((/* implicit */_Bool) arr_83 [(unsigned char)16] [i_23] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((+(arr_74 [i_21]))));
            /* LoopNest 3 */
            for (unsigned long long int i_31 = 0; i_31 < 22; i_31 += 3) 
            {
                for (unsigned char i_32 = 2; i_32 < 21; i_32 += 4) 
                {
                    for (unsigned char i_33 = 0; i_33 < 22; i_33 += 3) 
                    {
                        {
                            var_59 = ((/* implicit */unsigned int) var_8);
                            var_60 = ((/* implicit */short) max((var_60), (((/* implicit */short) -8841778196944002708LL))));
                            var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_109 [i_21] [i_32] [i_32])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_107 [i_21] [i_21] [i_31] [i_33])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-16217))))) : (var_1)));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
        {
            var_62 = ((/* implicit */unsigned short) (signed char)-24);
            arr_118 [i_34] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (unsigned short)27342))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3223))) : (var_1))) : (3331406761U)));
            var_63 ^= ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)97))) : (8841778196944002716LL));
            var_64 = ((/* implicit */long long int) arr_86 [i_21] [i_21] [i_21]);
            var_65 = ((/* implicit */unsigned long long int) ((var_2) ? (arr_112 [i_21] [i_34] [i_34] [i_21] [i_21] [i_21] [i_21]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
        }
        var_66 = ((/* implicit */_Bool) arr_87 [i_21]);
        var_67 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (5730645832683468023ULL) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
    }
    var_68 = ((/* implicit */unsigned char) var_6);
    var_69 = ((/* implicit */signed char) min((var_69), (((/* implicit */signed char) var_6))));
    var_70 = ((/* implicit */signed char) max((var_70), (((/* implicit */signed char) var_7))));
}

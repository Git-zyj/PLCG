/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53047
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */_Bool) ((unsigned char) max((max((var_4), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_1])))), (((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)))))));
            var_18 = ((/* implicit */unsigned char) max((((_Bool) arr_6 [i_0] [i_1] [i_0])), ((((_Bool)1) || (((/* implicit */_Bool) 0))))));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_2 [i_2]);
            arr_13 [i_0] [i_0] |= ((/* implicit */int) max((min((min((arr_1 [i_0] [i_0]), (var_15))), (((/* implicit */unsigned long long int) arr_0 [i_0] [8U])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_2])) && (((/* implicit */_Bool) arr_12 [i_0]))))) >= ((~(((/* implicit */int) (_Bool)1)))))))));
            var_20 = ((/* implicit */unsigned short) min((arr_3 [i_0]), (arr_0 [i_0] [i_0])));
            var_21 = max(((short)-1), (max((((/* implicit */short) (_Bool)1)), ((short)-1))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_18 [10] [(unsigned short)0] = ((/* implicit */int) arr_1 [i_3] [i_0]);
            arr_19 [i_3] = ((/* implicit */short) var_6);
        }
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_7 [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_4 = 2; i_4 < 7; i_4 += 4) 
    {
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((var_1), (((/* implicit */short) arr_15 [i_4 + 2])))))))))))));
        arr_22 [i_4 + 2] [(unsigned short)5] = ((/* implicit */unsigned short) arr_15 [i_4]);
        var_24 = ((/* implicit */short) arr_21 [i_4]);
    }
    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_25 [i_5] = ((/* implicit */unsigned short) min((min((min((((/* implicit */unsigned long long int) (unsigned char)3)), (arr_24 [i_5]))), (((/* implicit */unsigned long long int) (+(var_13)))))), (min((((/* implicit */unsigned long long int) ((arr_23 [11LL]) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) (short)-30940))))), (arr_24 [i_5])))));
        var_25 = ((/* implicit */unsigned char) arr_24 [i_5]);
    }
    var_26 += ((/* implicit */unsigned short) min((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopSeq 3 */
    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) 
        {
            var_27 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */short) arr_23 [i_6]))))), (((arr_28 [i_6] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7]))) : (var_10)))))));
            var_28 = ((/* implicit */int) ((((/* implicit */long long int) var_12)) / (min((((/* implicit */long long int) var_9)), (var_8)))));
            arr_33 [i_7] [i_6] = ((/* implicit */unsigned char) min(((((~(var_4))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7 - 1] [i_7 + 2]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_7 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_7]))))), (arr_24 [i_6])))));
        }
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            var_29 = ((/* implicit */int) var_13);
            var_30 *= ((/* implicit */unsigned long long int) var_5);
            arr_38 [i_6] [i_6] = var_8;
            /* LoopSeq 3 */
            for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                var_31 = ((/* implicit */unsigned char) var_9);
                var_32 = ((/* implicit */unsigned short) (_Bool)1);
                var_33 = ((/* implicit */int) arr_37 [i_8 + 3] [i_8] [i_8 + 1]);
                var_34 = ((/* implicit */unsigned char) var_8);
            }
            for (int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                arr_44 [(short)7] [i_8 - 1] [i_10] = ((/* implicit */unsigned short) var_8);
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((arr_23 [i_8]) ? (var_3) : (((/* implicit */int) var_11)))))));
            }
            for (int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_46 [i_6] [i_6] [i_6]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))) ? (((/* implicit */int) arr_45 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_39 [(_Bool)1]))));
                arr_47 [i_8 + 4] [i_8 + 4] [(_Bool)0] = ((/* implicit */unsigned short) 8388607);
                var_37 = ((/* implicit */int) arr_37 [i_6] [i_8 + 2] [i_11]);
                arr_48 [i_6] [i_6] [i_6] [i_11] = ((/* implicit */unsigned long long int) var_13);
            }
            var_38 = ((/* implicit */unsigned int) arr_23 [i_6]);
        }
        for (unsigned int i_12 = 1; i_12 < 11; i_12 += 4) 
        {
            var_39 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_3), (((/* implicit */int) arr_31 [i_6]))))) ? (((/* implicit */unsigned long long int) arr_36 [i_12])) : (max((var_15), (((/* implicit */unsigned long long int) arr_27 [i_12])))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_36 [i_12])), (((arr_34 [i_6] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_6] [i_12 - 1]))))))))));
            arr_51 [i_12] [(short)10] [i_12] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
            var_40 -= ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_9)))))))), (var_16)));
            arr_52 [i_6] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_41 [i_6] [2] [i_12 + 3])), (arr_31 [i_12])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (_Bool)1))))))) : (min((((/* implicit */unsigned long long int) max((-8388607), (-740562756)))), (var_4)))));
            arr_53 [i_6] [i_12] = ((/* implicit */_Bool) arr_39 [i_6]);
        }
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            arr_56 [i_6] [i_13] [i_13] = ((/* implicit */int) var_14);
            var_41 = (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_32 [i_6] [i_13])), (arr_42 [i_6] [i_6] [i_6] [i_13]))))))));
        }
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_50 [i_6] [i_6]))));
            /* LoopNest 2 */
            for (unsigned short i_15 = 1; i_15 < 10; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    {
                        var_43 = ((long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (4503599627370368LL) : (var_16))) : (min((var_13), (((/* implicit */long long int) arr_29 [i_14]))))));
                        arr_65 [i_15] [i_14] [i_15] [i_16] = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
        }
    }
    for (int i_17 = 3; i_17 < 17; i_17 += 4) 
    {
        arr_69 [i_17 - 2] = ((/* implicit */signed char) var_4);
        var_44 |= ((/* implicit */int) arr_67 [i_17 - 1]);
        arr_70 [i_17] = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-1LL)));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_45 += ((/* implicit */short) arr_71 [i_18]);
        /* LoopSeq 3 */
        for (signed char i_19 = 3; i_19 < 20; i_19 += 2) 
        {
            arr_76 [i_19] [i_18] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_71 [i_19 - 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_71 [i_19 - 3])))), (((/* implicit */long long int) ((arr_75 [i_19 - 3] [i_19 - 3] [i_19 - 3]) < (arr_71 [i_19 - 3]))))));
            var_46 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-9)), (arr_71 [i_18])))) ? (min((((/* implicit */unsigned int) (-2147483647 - 1))), (var_7))) : (((/* implicit */unsigned int) arr_75 [i_18] [i_19] [(short)12])))), (((/* implicit */unsigned int) ((-8388607) / (((/* implicit */int) (unsigned short)59336)))))));
            /* LoopSeq 3 */
            for (int i_20 = 0; i_20 < 21; i_20 += 4) /* same iter space */
            {
                var_47 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (~(arr_72 [i_20])))), (min((((/* implicit */unsigned long long int) var_9)), (var_10))))), (((/* implicit */unsigned long long int) var_8))));
                var_48 = ((/* implicit */signed char) max((13680596146917826482ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_72 [i_20])) ? (arr_74 [i_18] [i_18] [i_18]) : (arr_75 [i_19] [i_19] [i_19])));
                var_50 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                var_51 = ((/* implicit */long long int) ((arr_72 [i_18]) % (max((max((arr_74 [i_20] [14] [i_18]), (arr_71 [i_20]))), (((/* implicit */int) var_17))))));
            }
            for (int i_21 = 0; i_21 < 21; i_21 += 4) /* same iter space */
            {
                arr_81 [i_19] = ((/* implicit */short) ((((/* implicit */long long int) min((arr_72 [i_18]), (max((((/* implicit */int) var_17)), (arr_74 [i_18] [i_21] [i_21])))))) & (max((-1813156822439476273LL), (((/* implicit */long long int) var_3))))));
                /* LoopNest 2 */
                for (signed char i_22 = 3; i_22 < 19; i_22 += 1) 
                {
                    for (short i_23 = 1; i_23 < 19; i_23 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */int) arr_84 [i_22] [i_18]);
                            var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) arr_88 [i_18] [i_19] [i_21] [i_22] [i_23]))));
                            arr_90 [i_19] [i_19 - 3] [i_19 + 1] = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_5)), (2251250057871360ULL))), (((/* implicit */unsigned long long int) arr_78 [i_21] [i_21]))))) ? (arr_71 [i_18]) : (((/* implicit */int) var_9)));
                            arr_91 [i_19] [6] = ((/* implicit */unsigned short) var_10);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_24 = 3; i_24 < 18; i_24 += 4) 
                {
                    var_54 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_2)), (2251250057871341ULL))), (max((((/* implicit */unsigned long long int) var_7)), (min((var_15), (((/* implicit */unsigned long long int) var_0))))))));
                    arr_96 [i_19] [i_19] [(short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (max((arr_71 [i_18]), (((/* implicit */int) arr_83 [i_19 - 1] [i_19] [i_19] [i_19 - 3])))) : (((/* implicit */int) min((arr_77 [i_18] [i_19 + 1] [(unsigned char)17] [i_24]), (((/* implicit */short) (_Bool)1)))))));
                }
                var_55 = (+(((((/* implicit */int) arr_79 [i_19] [i_19 - 3] [i_19 - 1])) / (((/* implicit */int) arr_79 [i_19] [i_19 - 1] [i_19])))));
            }
            /* vectorizable */
            for (unsigned short i_25 = 0; i_25 < 21; i_25 += 3) 
            {
                var_56 = ((/* implicit */int) var_9);
                arr_99 [i_19] [(unsigned short)12] [2LL] &= (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)65535)))));
            }
            var_57 *= ((/* implicit */unsigned long long int) max((max((arr_93 [i_18]), (((((/* implicit */int) arr_77 [i_18] [i_18] [i_18] [i_18])) >= (((/* implicit */int) arr_87 [i_18] [i_18] [i_18] [i_19 - 3] [(unsigned short)14])))))), (var_17)));
        }
        for (long long int i_26 = 0; i_26 < 21; i_26 += 1) 
        {
            arr_102 [i_18] [i_18] [i_26] = ((/* implicit */long long int) ((unsigned int) var_4));
            /* LoopSeq 1 */
            for (int i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                arr_107 [i_18] [i_18] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_77 [i_27] [i_27] [i_26] [i_18])) ? (var_12) : (((/* implicit */int) arr_106 [(short)20] [i_26] [(short)20]))))))), (max((var_4), (((/* implicit */unsigned long long int) arr_85 [i_18] [i_26] [i_27]))))));
                var_58 = ((/* implicit */unsigned char) arr_83 [i_18] [i_18] [4LL] [i_27]);
                var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (arr_104 [i_18] [i_26]))), (min((((/* implicit */int) arr_85 [18] [i_26] [18])), (arr_82 [(_Bool)1] [i_26] [i_26] [i_26] [i_27])))))) ? (max((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) arr_103 [i_27] [i_27] [i_26] [(short)9])), (arr_105 [i_27] [i_27] [i_27] [i_27]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_14)) : (var_2))), (max((((/* implicit */long long int) arr_74 [i_18] [i_26] [i_27])), (var_13))))))));
            }
        }
        for (int i_28 = 0; i_28 < 21; i_28 += 3) 
        {
            var_60 ^= ((/* implicit */unsigned char) arr_101 [i_18] [i_28]);
            var_61 = ((/* implicit */int) var_15);
            var_62 = ((/* implicit */int) arr_108 [i_18] [i_28]);
            arr_112 [i_28] = (-(var_12));
        }
    }
    /* LoopNest 3 */
    for (short i_29 = 3; i_29 < 12; i_29 += 4) 
    {
        for (unsigned int i_30 = 0; i_30 < 13; i_30 += 2) 
        {
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                {
                    arr_123 [i_29] [i_29] |= ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) -1LL))));
                    var_63 = ((/* implicit */unsigned int) arr_120 [i_29]);
                    /* LoopNest 2 */
                    for (int i_32 = 1; i_32 < 12; i_32 += 3) 
                    {
                        for (unsigned short i_33 = 4; i_33 < 12; i_33 += 4) 
                        {
                            {
                                var_64 = ((/* implicit */signed char) ((short) (unsigned short)65535));
                                var_65 = ((/* implicit */unsigned short) -1813156822439476273LL);
                                var_66 += ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) var_3)) * (max((((/* implicit */unsigned long long int) arr_32 [i_29] [i_31])), (arr_67 [i_31]))))), (((/* implicit */unsigned long long int) -1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}

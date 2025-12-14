/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50963
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((((unsigned long long int) (short)-22005)), (((/* implicit */unsigned long long int) 3952956055U))));
                    var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)55))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned long long int) (unsigned short)5705)))));
                        arr_11 [i_2] [i_1] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_11)))));
                        arr_12 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)42)), ((unsigned short)59843))))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) min((max((var_10), (var_10))), (((/* implicit */long long int) max(((+(((/* implicit */int) var_12)))), ((+(((/* implicit */int) (signed char)-127)))))))));
                    }
                }
            } 
        } 
        var_16 += ((/* implicit */signed char) arr_4 [4ULL] [9] [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                var_17 += ((/* implicit */unsigned char) (+(((int) (unsigned short)896))));
                var_18 += ((/* implicit */_Bool) var_5);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_6 = 3; i_6 < 9; i_6 += 2) 
                {
                    arr_21 [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) arr_7 [i_6] [i_6 + 1] [i_4] [i_4]);
                    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)113)))));
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */_Bool) (~(arr_6 [i_6 + 1] [i_6 + 1])));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned char) (short)-24679)))));
                        var_21 |= ((/* implicit */_Bool) (short)24684);
                        var_22 = ((/* implicit */signed char) arr_25 [i_0] [(_Bool)1] [(unsigned char)0] [i_6 - 3] [i_6 - 2]);
                        var_23 |= (!(((/* implicit */_Bool) ((short) var_8))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) var_9))));
                        var_25 = ((/* implicit */short) ((signed char) (_Bool)1));
                        var_26 = ((signed char) (short)24668);
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 2) 
                    {
                        arr_33 [i_0] [i_4] [i_0] [i_6] [i_4] |= ((/* implicit */short) var_2);
                        arr_34 [i_9 - 2] [i_4] [i_5 + 1] [i_4] [i_0] = ((/* implicit */int) var_8);
                        arr_35 [i_0] [i_0] [i_4] = ((/* implicit */signed char) var_0);
                    }
                }
                /* vectorizable */
                for (int i_10 = 3; i_10 < 10; i_10 += 1) 
                {
                    var_27 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1816004037)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    var_28 = ((/* implicit */_Bool) 10792012776823921721ULL);
                    arr_38 [i_5] [i_4] [i_5] [i_0] |= ((/* implicit */unsigned char) var_9);
                    arr_39 [i_0] [i_0] [i_4] [9ULL] [i_10 - 1] [i_10] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_4))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((var_9) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_4 [i_5 + 1] [i_4] [i_5 + 1]))))) ? (min((((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)20226)))), (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9)))))));
                    var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)28203)) ? (12727690471010829200ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) ? ((~(((((/* implicit */int) (signed char)-11)) * (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_0))));
                }
            }
            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_8))));
        }
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((~(2413117120U)))));
        /* LoopSeq 2 */
        for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            var_33 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_12])) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_2)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                var_34 = ((/* implicit */short) (+(var_2)));
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (short)-28204)) : (((/* implicit */int) (_Bool)1)))))));
            }
        }
        for (unsigned short i_14 = 2; i_14 < 7; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_15 = 1; i_15 < 10; i_15 += 3) 
            {
                var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(0U)))))))));
                /* LoopSeq 4 */
                for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    var_37 -= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)112)) == (((/* implicit */int) min((var_7), (((/* implicit */short) arr_51 [i_14 - 2] [4] [4])))))));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 2; i_17 < 10; i_17 += 2) 
                    {
                        var_38 = ((/* implicit */long long int) min((var_38), (min((max((min((-2862329216579298311LL), (((/* implicit */long long int) (unsigned char)235)))), ((~(var_5))))), (((/* implicit */long long int) var_1))))));
                        arr_58 [i_0] [i_0] [i_15] = ((/* implicit */unsigned long long int) (unsigned short)58766);
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (signed char)121))), ((+(((/* implicit */int) var_0))))))) ? (16297463611982007395ULL) : (((((/* implicit */_Bool) arr_41 [i_16] [i_17 + 1] [i_17 + 1] [i_17] [i_17])) ? (var_8) : (((/* implicit */unsigned long long int) var_1)))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 1; i_18 < 10; i_18 += 3) 
                    {
                        var_40 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) (unsigned short)47684))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_44 [i_15] [i_15])) : (((/* implicit */int) (unsigned short)1369)))) : ((~(((/* implicit */int) (unsigned char)199)))))));
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) var_10))));
                        arr_63 [i_0] [i_0] [(signed char)6] [(signed char)6] [i_15] = ((/* implicit */long long int) var_11);
                    }
                    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (~(max((var_2), (((/* implicit */unsigned long long int) arr_32 [i_0] [i_14] [i_15 - 1] [i_16] [i_15 + 1])))))))));
                        arr_68 [i_0] [i_15] = ((/* implicit */unsigned char) (unsigned short)57807);
                    }
                    var_43 = ((/* implicit */short) (unsigned char)8);
                    var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_14 [i_14 + 3] [i_15 - 1]), (arr_14 [i_14 + 1] [i_15 - 1])))))))));
                }
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    var_45 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_14 + 3] [i_15 - 1]))))) ? (4294967295U) : (((/* implicit */unsigned int) ((var_12) ? (var_6) : ((~(((/* implicit */int) (signed char)7)))))))));
                    var_46 -= ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3338))) : (13153354190398528600ULL));
                }
                for (short i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    arr_74 [4U] [4U] [i_0] [i_21] |= ((/* implicit */unsigned long long int) var_5);
                    var_47 = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) var_5)));
                }
                /* vectorizable */
                for (unsigned char i_22 = 0; i_22 < 11; i_22 += 2) 
                {
                    arr_77 [i_15] [i_14] [i_15] [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_53 [i_14 - 2] [i_15 - 1] [i_15 - 1] [i_15 + 1]))));
                    var_48 = ((/* implicit */int) var_9);
                    /* LoopSeq 1 */
                    for (long long int i_23 = 0; i_23 < 11; i_23 += 1) 
                    {
                        var_49 = ((/* implicit */signed char) arr_36 [i_0] [i_0]);
                        arr_80 [i_15] [i_14] [i_15] [i_22] [i_23] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                        var_50 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_0] [i_14] [i_14] [i_14 + 1] [i_15 + 1]))) - (var_8)));
                        var_51 ^= ((/* implicit */unsigned long long int) -2091221520);
                    }
                    var_52 = ((((/* implicit */_Bool) 4074365601318099639ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_14 + 4] [i_14 - 1] [i_14 - 2] [8ULL] [i_14 - 2] [i_14 + 4]))) : (18006997951360200076ULL));
                    /* LoopSeq 1 */
                    for (signed char i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) arr_61 [i_0] [i_14 - 1] [i_15] [i_14 + 4] [i_24] [i_15 + 1]))));
                        var_54 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) var_6)) / (arr_6 [i_14 - 1] [i_15 - 1])));
                        var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) (~(((/* implicit */int) (_Bool)1)))))));
                    }
                }
                arr_83 [i_15] [i_14] [i_14] [i_15] = ((/* implicit */_Bool) var_1);
            }
            var_56 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) arr_73 [i_0] [i_14 + 4] [i_14 + 4] [i_14 + 3] [i_14])), (var_2))));
            /* LoopNest 2 */
            for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
            {
                for (unsigned long long int i_26 = 2; i_26 < 10; i_26 += 3) 
                {
                    {
                        var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) max((max((2340968665951397513ULL), (((/* implicit */unsigned long long int) (short)-16045)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))))))));
                        var_58 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((var_11) - (13885453292342418718ULL)))))) ? (min((((/* implicit */unsigned int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])), (4294967290U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))))));
                        var_59 = ((/* implicit */unsigned int) (short)21);
                        var_60 = ((/* implicit */_Bool) 4466325051824288567LL);
                        var_61 = ((unsigned char) (_Bool)1);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_27 = 1; i_27 < 7; i_27 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_28 = 0; i_28 < 11; i_28 += 2) /* same iter space */
                {
                    var_62 = ((/* implicit */long long int) (+(var_2)));
                    var_63 = ((/* implicit */signed char) ((_Bool) max((var_11), (((/* implicit */unsigned long long int) arr_81 [i_14 + 4] [i_14] [i_14 + 4] [i_27 + 2])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_29 = 1; i_29 < 10; i_29 += 1) 
                    {
                        var_64 ^= ((/* implicit */unsigned char) (~(var_11)));
                        var_65 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)209))));
                        arr_97 [i_0] [i_27] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                    }
                    var_66 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)-3337)) ? (((((/* implicit */_Bool) 15759288897092089558ULL)) ? (((((/* implicit */_Bool) (signed char)-5)) ? (-3665329034920570821LL) : (((/* implicit */long long int) 746366236U)))) : (((/* implicit */long long int) ((/* implicit */int) (short)3339))))) : ((+(var_5)))));
                }
                for (unsigned int i_30 = 0; i_30 < 11; i_30 += 2) /* same iter space */
                {
                    var_67 = ((/* implicit */unsigned char) (~(((unsigned long long int) (short)960))));
                    var_68 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((arr_53 [i_14 + 4] [i_14 + 3] [i_14 + 3] [i_14 + 1]), (arr_53 [i_14 + 4] [i_14 + 3] [i_14 + 3] [i_14 - 1])))) : (((/* implicit */int) (_Bool)1))));
                    var_69 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) (signed char)(-127 - 1)))), (123145302310912ULL)))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned char) var_2)))));
                    var_70 = ((/* implicit */short) max((var_70), (((/* implicit */short) 7194034911011745461ULL))));
                }
                /* vectorizable */
                for (unsigned int i_31 = 0; i_31 < 11; i_31 += 2) /* same iter space */
                {
                    arr_103 [i_14] [i_27] [i_31] = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
                    var_71 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
                    var_72 = ((/* implicit */long long int) var_9);
                }
                arr_104 [i_0] [i_0] [i_27 + 2] |= ((/* implicit */_Bool) ((unsigned char) (+(var_2))));
            }
            /* vectorizable */
            for (unsigned int i_32 = 0; i_32 < 11; i_32 += 2) 
            {
                arr_107 [i_0] [i_14 + 1] [i_32] [i_32] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3185680647U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-982))) : (var_5))))));
                var_73 = ((/* implicit */_Bool) (+(arr_106 [i_0] [i_14 + 1] [i_32] [i_0])));
                var_74 = ((/* implicit */unsigned long long int) min((var_74), (((/* implicit */unsigned long long int) (short)-10503))));
                var_75 = ((/* implicit */_Bool) min((var_75), (((/* implicit */_Bool) 4466325051824288567LL))));
                arr_108 [i_0] [i_0] [i_14] [i_32] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1109286648U)) ? (((/* implicit */int) (unsigned short)14468)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_101 [i_0] [i_0] [(unsigned char)7] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_14 - 1]))));
            }
        }
    }
    for (signed char i_33 = 0; i_33 < 15; i_33 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_34 = 0; i_34 < 15; i_34 += 1) 
        {
            var_76 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 5293389883311023016ULL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_110 [(_Bool)1] [i_34]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_109 [i_33] [i_34])))));
            arr_116 [i_34] [i_34] = ((/* implicit */unsigned short) var_2);
            var_77 += ((/* implicit */unsigned char) var_7);
            var_78 ^= ((/* implicit */short) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3))) : (4294967295U)));
        }
        var_79 -= ((/* implicit */unsigned short) ((long long int) arr_114 [i_33] [(unsigned char)8]));
    }
    var_80 = ((/* implicit */unsigned short) -7588993975474634948LL);
    var_81 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) max((2209954601U), (((/* implicit */unsigned int) (unsigned short)29375))))) : (var_5)));
}

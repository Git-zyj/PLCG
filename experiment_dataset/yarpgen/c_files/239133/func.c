/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239133
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (arr_5 [i_0] [i_1 + 2] [i_1 + 2])));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned int) ((((((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_2 + 2])) > (((/* implicit */int) arr_5 [i_2 - 2] [i_1] [i_0])))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1 + 1])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 4) 
    {
        var_21 -= ((/* implicit */signed char) var_4);
        var_22 -= ((/* implicit */short) ((_Bool) max((min((var_6), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [11U])) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) arr_10 [i_3 - 2]))))))));
    }
    for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        arr_13 [i_4] |= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) max((arr_10 [i_4]), (((/* implicit */short) var_3))))), (arr_9 [i_4] [(unsigned short)16]))), (min((max((arr_11 [12]), (arr_11 [10]))), (((/* implicit */unsigned short) var_13))))));
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            arr_17 [i_4] [i_5] = (~((((+(arr_14 [i_4] [i_4] [i_4]))) & (((/* implicit */unsigned int) (~(-1226691576)))))));
            arr_18 [i_4] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5]))) : (arr_12 [i_4]))), (var_2))), (min((((/* implicit */unsigned long long int) min(((signed char)117), (((/* implicit */signed char) var_13))))), (arr_12 [i_4])))));
        }
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((short) var_6)))));
            arr_21 [i_4] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_6])) | (((/* implicit */int) arr_16 [i_4]))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_14 [i_4] [i_4] [i_6])) : ((+(var_0)))));
        }
        for (long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
        {
            arr_26 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_19 [i_4] [i_7]))) ? (((unsigned int) -836261650)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_4]))))))) ? (((/* implicit */long long int) ((((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))))) ? (max((arr_19 [i_4] [i_7]), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) : (((long long int) ((arr_22 [i_7]) ? (((/* implicit */unsigned long long int) var_12)) : (arr_20 [i_7]))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 4) 
            {
                arr_30 [i_4] [i_7] [i_8] = ((unsigned short) arr_20 [i_7]);
                arr_31 [i_4] [i_4] [i_7] [i_8] = ((/* implicit */long long int) ((unsigned char) min((arr_27 [11LL] [i_8] [i_8 - 3] [i_8 - 2]), (((/* implicit */unsigned short) arr_24 [i_8 - 1] [i_8] [i_8 - 3])))));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((-(var_5))) - (((/* implicit */unsigned int) var_7)))))));
            }
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : (var_12))))));
                var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((int) arr_16 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_9] [i_4])))))))));
                arr_34 [i_9] [i_7] [i_4] = ((/* implicit */unsigned int) (signed char)-118);
                arr_35 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) arr_24 [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_11 [i_7]))));
            }
            for (unsigned short i_10 = 3; i_10 < 15; i_10 += 4) 
            {
                var_28 += ((/* implicit */long long int) var_5);
                arr_38 [i_4] [i_7] [i_10] = ((/* implicit */_Bool) var_12);
                var_29 = ((/* implicit */int) var_16);
                arr_39 [i_4] [i_4] [i_10] [i_10] = ((/* implicit */signed char) (~(((int) (signed char)-117))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
                arr_42 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_25 [i_4] [i_7]) / (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_4] [i_7] [i_7] [i_11])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_4])) || (((/* implicit */_Bool) arr_15 [i_11])))))) : (((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */long long int) 34151978U)) : (var_16)))))) ? (((/* implicit */int) arr_36 [i_4] [i_4] [i_11])) : (((int) ((((/* implicit */_Bool) var_2)) ? (12172081133417952163ULL) : (((/* implicit */unsigned long long int) var_15)))))));
            }
            for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 4) 
            {
                arr_47 [i_12] [i_7] [i_12] = max((arr_11 [i_4]), (((/* implicit */unsigned short) (signed char)115)));
                var_31 = min((((((long long int) var_11)) - (((/* implicit */long long int) ((unsigned int) var_4))))), (((/* implicit */long long int) var_17)));
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        var_32 = ((long long int) 18446744073709551613ULL);
                        var_33 = ((/* implicit */long long int) ((unsigned int) min((((long long int) var_10)), (((/* implicit */long long int) (+(((/* implicit */int) arr_48 [i_4] [i_7] [i_12] [i_13]))))))));
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_12 + 2])) ? (((/* implicit */unsigned long long int) min((arr_40 [(unsigned short)1] [i_13] [(signed char)9]), (((/* implicit */long long int) var_13))))) : (arr_43 [i_4] [i_12])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_41 [i_4] [i_4] [i_13]))) + (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_7] [i_7]))))))) : (max((arr_49 [i_12] [i_14] [i_12] [i_12]), (arr_49 [7LL] [i_7] [i_7] [i_7])))))));
                    }
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
                    {
                        arr_58 [i_4] [i_12] [i_12] [i_13] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_12)))), (min((arr_12 [i_15]), (((/* implicit */unsigned long long int) var_13))))))) ? (((((/* implicit */long long int) var_11)) + (((long long int) var_17)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((long long int) var_10)))))));
                        var_35 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_55 [i_4] [i_7] [i_12] [i_13] [i_12] [i_15]) != (((/* implicit */int) arr_56 [i_4] [i_4] [i_4] [i_4] [i_7] [i_4] [i_4])))))) * ((~(4260815310U)))))), (((long long int) arr_41 [i_12 + 1] [i_12 + 1] [i_12]))));
                        var_36 = min((((long long int) arr_24 [i_4] [i_12 + 2] [i_12])), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_24 [i_4] [i_4] [i_12 + 2])), (var_9)))));
                    }
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
                    {
                        var_37 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_56 [i_12 + 2] [i_12] [i_16] [i_12] [i_16] [i_12 - 1] [i_12]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_56 [i_12 - 1] [i_12] [i_4] [i_7] [i_4] [i_7] [i_4]), (arr_56 [i_12 - 1] [i_12] [i_4] [i_12] [i_4] [i_7] [i_7]))))) : (((((/* implicit */_Bool) arr_19 [i_12 - 1] [i_12 - 1])) ? (arr_19 [i_12 + 1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
                        arr_62 [i_4] [i_7] [i_12] [i_12] [i_12] [6LL] = ((/* implicit */unsigned short) arr_45 [i_4]);
                    }
                    for (unsigned short i_17 = 1; i_17 < 15; i_17 += 4) 
                    {
                        arr_66 [i_4] [i_12] [i_12] [i_13] [i_17 + 1] = ((/* implicit */unsigned char) ((var_10) ? (max((var_1), (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) (unsigned short)38709))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_12])))));
                        var_38 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_4] [i_4] [(unsigned short)2] [(signed char)2] [i_13] [i_17]))) >= (((((/* implicit */_Bool) 1915935978U)) ? (1091451685U) : (arr_49 [i_7] [i_12] [i_13] [i_17]))))))) <= ((~(((unsigned int) arr_19 [i_7] [i_12]))))));
                        arr_67 [(signed char)11] [i_7] [(signed char)11] [i_12] [i_4] [i_4] = ((/* implicit */signed char) var_15);
                        arr_68 [i_17] [i_12] [13] [i_12] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_32 [i_4]), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) (~(arr_32 [i_4])))) ? (((long long int) (unsigned short)0)) : (var_4))) : ((+(var_12)))));
                        var_39 |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 886547105)), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_56 [i_4] [i_4] [i_4] [i_4] [i_7] [i_4] [i_4]), (((/* implicit */unsigned char) (_Bool)1)))))) : (min((((/* implicit */unsigned long long int) var_3)), (arr_12 [i_4])))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 1) 
                    {
                        arr_71 [i_4] [i_12] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_12])) ? (arr_51 [i_18] [i_12] [i_12] [i_12] [10U]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) arr_70 [i_12] [i_7] [i_12] [i_13] [i_18])) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) arr_49 [i_12] [i_12] [i_12] [i_12 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_8))))) : (arr_40 [i_18] [i_12] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        arr_74 [i_12] [i_7] [i_12] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((max((arr_55 [i_12 - 1] [i_12] [i_12] [i_12] [i_12] [i_4]), (arr_55 [i_12 + 1] [i_12] [i_12 + 2] [i_12] [i_12] [i_4]))) + (2147483647))) >> (((((long long int) max((((/* implicit */long long int) arr_57 [i_12] [i_7] [i_12] [i_13] [i_13])), (var_12)))) - (8790982613763402954LL)))));
                        var_41 = ((/* implicit */unsigned short) ((unsigned char) arr_22 [i_12]));
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_19])) ? ((~(((/* implicit */int) arr_9 [i_4] [i_4])))) : (((/* implicit */int) var_13))))))));
                        var_43 = ((/* implicit */unsigned short) arr_40 [i_12 + 1] [i_12 + 2] [i_12 + 2]);
                    }
                }
                var_44 = ((/* implicit */long long int) min((var_44), (max((((/* implicit */long long int) max((arr_49 [i_12 + 1] [i_12 + 2] [i_12 + 1] [i_12 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)117)) && (((/* implicit */_Bool) arr_9 [i_4] [i_7])))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_73 [i_7])) ? (var_11) : (var_7)))), (arr_70 [i_4] [i_7] [i_7] [i_7] [i_7])))))));
            }
            for (unsigned int i_20 = 0; i_20 < 16; i_20 += 3) 
            {
                arr_78 [i_4] [i_4] [i_4] [i_4] &= ((/* implicit */unsigned short) min(((((!(var_13))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (4294967292U)))) : (min((((/* implicit */long long int) var_15)), (var_12))))), (((/* implicit */long long int) arr_41 [i_4] [i_7] [i_4]))));
                var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) arr_49 [i_4] [i_20] [i_20] [i_4]))));
            }
        }
        arr_79 [i_4] [i_4] = ((/* implicit */unsigned short) arr_60 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
        var_46 = ((/* implicit */unsigned char) (signed char)103);
    }
    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
    {
        arr_82 [i_21] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_21])))))) >= (var_15)));
        var_47 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_23 [i_21] [i_21]), (arr_23 [i_21] [i_21])))), (((long long int) (unsigned short)36911))));
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_87 [i_22] = ((/* implicit */int) ((((var_10) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_85 [i_22]))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_15)))) || (((/* implicit */_Bool) ((int) var_12)))))))));
        /* LoopSeq 2 */
        for (int i_23 = 0; i_23 < 17; i_23 += 2) 
        {
            arr_90 [i_22] [i_22] [i_23] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((unsigned long long int) var_17))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_4)))));
            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((((((var_13) && (((/* implicit */_Bool) arr_9 [i_23] [i_22])))) ? (((/* implicit */int) arr_10 [i_23])) : (min((arr_83 [i_22]), (var_7))))) + (2147483647))) << (((max((arr_83 [i_23]), (((/* implicit */int) var_14)))) - (141))))))));
            var_49 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_85 [i_23])))))) == (((long long int) arr_10 [i_23]))));
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_25 = 0; i_25 < 17; i_25 += 2) 
            {
                for (unsigned short i_26 = 3; i_26 < 15; i_26 += 4) 
                {
                    for (int i_27 = 0; i_27 < 17; i_27 += 3) 
                    {
                        {
                            arr_104 [i_22] [i_22] [i_25] [i_26] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_99 [i_22] [i_26 - 1] [i_25] [i_26])) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (arr_96 [i_22] [i_24])))) : (((/* implicit */int) arr_92 [i_24]))))) || (((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_98 [i_22] [i_22] [i_22] [i_22] [i_22]))) : (max((arr_100 [i_27] [i_22] [i_27] [i_27]), (((/* implicit */unsigned long long int) -1337007895)))))))));
                            arr_105 [i_22] [i_22] [i_25] [i_26] [i_22] = arr_91 [i_22] [i_22];
                        }
                    } 
                } 
            } 
            arr_106 [i_22] [i_24] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) arr_99 [i_22] [i_24] [i_24] [i_24]))), ((+(((/* implicit */int) arr_99 [(unsigned short)3] [i_22] [i_24] [i_24]))))));
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 17; i_28 += 4) 
            {
                for (long long int i_29 = 3; i_29 < 14; i_29 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_30 = 0; i_30 < 17; i_30 += 4) 
                        {
                            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((arr_108 [(signed char)16] [i_24] [i_28] [i_30]) ? (((/* implicit */int) arr_84 [i_22])) : (((/* implicit */int) arr_91 [i_28] [i_30]))))) - (max((((/* implicit */unsigned int) var_9)), (var_15))))), (min((((/* implicit */unsigned int) var_3)), (arr_95 [i_22] [i_24] [i_28] [i_29]))))))));
                            var_51 -= ((/* implicit */unsigned int) arr_98 [i_22] [i_24] [i_30] [i_22] [i_30]);
                            var_52 = ((/* implicit */short) max((var_52), (((/* implicit */short) var_4))));
                            var_53 = ((/* implicit */unsigned char) 540061271);
                        }
                        arr_115 [3LL] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_101 [i_29] [i_22] [i_22] [i_22] [i_22])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_96 [i_29 - 3] [i_24]))) : (((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_22])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_29 + 3]))) != (min((var_1), (((/* implicit */unsigned long long int) var_0)))))))) : (((unsigned int) ((unsigned short) (unsigned short)33612)))));
                    }
                } 
            } 
        }
        var_54 = ((/* implicit */int) ((signed char) ((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_99 [i_22] [i_22] [i_22] [i_22]))))));
        arr_116 [i_22] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)39938))));
    }
}

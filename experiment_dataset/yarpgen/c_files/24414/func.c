/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24414
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] [i_1] [i_2] [i_2] [(signed char)5] [i_0] [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (-(arr_10 [(_Bool)1] [i_2] [i_1]))))) ? (((/* implicit */int) arr_2 [i_1] [i_4])) : (((/* implicit */int) var_2))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)51142)) * (((/* implicit */int) (unsigned short)14376)))))) / (((((((/* implicit */int) arr_7 [i_2] [i_2] [i_3 - 1])) * (((/* implicit */int) (unsigned short)33624)))) / (((/* implicit */int) arr_7 [i_2] [i_1] [i_1]))))));
                                arr_12 [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_10 [0LL] [i_1] [(unsigned short)5]), (((/* implicit */unsigned int) (signed char)123))))) ? (((/* implicit */int) arr_2 [i_3 + 3] [i_3 + 3])) : ((+(((/* implicit */int) var_3)))))) * (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_2))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_10 [i_0] [(short)2] [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)14393)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (arr_10 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)26408), ((unsigned short)26408)))) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : ((~(((/* implicit */int) var_6)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned int) ((_Bool) min((((var_15) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))))), (((_Bool) arr_3 [i_1])))));
                                var_21 = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                                var_22 += arr_8 [i_0];
                            }
                        } 
                    } 
                    arr_18 [(unsigned char)2] [i_1] [i_1] &= ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26408)) / (var_4)))), (((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(short)3] [(short)3] [(short)3])))))))));
                }
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        var_23 *= ((/* implicit */int) var_5);
                        arr_25 [(short)2] [i_1] [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_8 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))) : (((long long int) arr_21 [i_8]))));
                        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)26408))));
                    }
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_29 [(signed char)4] [i_7] = ((/* implicit */short) max(((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_15)))))), (((((/* implicit */_Bool) (unsigned short)46960)) && (((/* implicit */_Bool) ((int) arr_20 [i_0] [i_1] [i_7] [i_9])))))));
                        arr_30 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) arr_4 [i_1])))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_34 [(signed char)4] [i_1] [i_1] [i_1] |= ((/* implicit */signed char) ((int) arr_16 [i_0] [(short)6] [i_7]));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */long long int) arr_17 [i_0] [i_0])) & (arr_9 [i_0] [i_7] [i_10])))))));
                        arr_35 [(signed char)6] [0U] [10] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_7] [i_10])) ? (((/* implicit */int) ((unsigned short) arr_20 [i_0] [i_1] [i_7] [i_10]))) : ((-(arr_19 [i_0] [i_7] [i_0])))));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [8U]))) : (2265472744U)))) : ((+(arr_9 [i_1] [i_7] [(short)7]))))))));
                        var_27 = ((/* implicit */short) ((long long int) ((short) var_4)));
                    }
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_10))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [10ULL] [i_0] [(unsigned short)6] [i_1] [i_12])) ? (((((/* implicit */_Bool) ((signed char) 2882947100U))) ? (((unsigned int) arr_40 [i_0] [i_1] [i_1])) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-125)) / (((/* implicit */int) (signed char)-121))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21237))))))));
                    arr_42 [i_0] [i_1] [i_0] [i_0] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_12]))) ? (arr_40 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((int) ((unsigned char) var_2))))));
                    arr_43 [(_Bool)1] [i_1] [i_12] [i_1] = ((unsigned short) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_12] [i_0])) ? (arr_28 [i_1]) : (((/* implicit */int) (unsigned short)26419))));
                    var_30 ^= ((/* implicit */unsigned int) (+((-(arr_16 [i_0] [i_1] [(unsigned short)1])))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_14 = 1; i_14 < 9; i_14 += 3) 
                    {
                        var_31 *= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_38 [i_14] [i_1] [i_1] [i_0])) / (((/* implicit */int) var_10)))) * (((/* implicit */int) arr_15 [i_0] [6ULL] [3] [(unsigned short)7] [2U]))));
                        arr_48 [i_14] [i_0] [i_13] [i_1] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1412020195U)) || (((/* implicit */_Bool) arr_36 [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_14 + 1]))));
                    }
                    var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((var_14) + (((/* implicit */int) arr_47 [i_1] [(unsigned short)4] [(unsigned short)4])))), (((/* implicit */int) max((arr_46 [i_1] [(signed char)0] [i_0] [i_1]), (((/* implicit */short) var_9)))))))), ((+(min((((/* implicit */unsigned int) var_2)), (2599683317U)))))));
                    var_33 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_44 [i_0] [i_1] [i_13] [i_13])), ((unsigned short)51142)))) : (((/* implicit */int) ((signed char) (unsigned char)107))))), (var_14)));
                    var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_0] [i_0] [2LL] [i_1] [i_13])) - (((/* implicit */int) (signed char)123))));
                }
                arr_49 [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) 1412020195U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 3) 
    {
        for (signed char i_16 = 2; i_16 < 22; i_16 += 1) 
        {
            {
                var_35 = (+(((/* implicit */int) arr_50 [(unsigned short)8] [(unsigned short)8])));
                /* LoopSeq 3 */
                for (short i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    arr_59 [i_15] [(unsigned short)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_56 [i_16 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) var_1))))))) : (max((((/* implicit */unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) arr_50 [i_15] [6]))))), (max((((/* implicit */unsigned int) (unsigned short)61666)), (2882947100U)))))));
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61666)) ? (2343977313U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39134)))));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 24; i_19 += 3) 
                        {
                            {
                                var_37 = (unsigned short)65535;
                                var_38 &= ((/* implicit */signed char) ((unsigned short) min((((long long int) var_5)), (((/* implicit */long long int) var_10)))));
                                var_39 = ((/* implicit */int) var_2);
                                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */unsigned int) ((((_Bool) var_10)) ? ((+(((/* implicit */int) arr_55 [i_15] [i_17])))) : (((int) arr_55 [i_15] [(_Bool)1]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_15] [i_15])) % (((/* implicit */int) var_6))))) ? (((2882947100U) + (((/* implicit */unsigned int) 53955370)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_16 - 2])))))));
                            }
                        } 
                    } 
                    arr_65 [(_Bool)1] [i_15] = (_Bool)0;
                }
                for (unsigned int i_20 = 1; i_20 < 20; i_20 += 3) 
                {
                    var_41 = ((/* implicit */unsigned short) 1977839848U);
                    var_42 *= ((/* implicit */signed char) 8U);
                    var_43 = ((/* implicit */int) ((short) (-(((/* implicit */int) arr_62 [i_15] [i_16 - 2] [(unsigned short)8] [16U] [i_20])))));
                }
                for (unsigned int i_21 = 0; i_21 < 24; i_21 += 3) 
                {
                    var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_51 [i_15] [i_16 + 2]))))) ? ((+(((/* implicit */int) arr_51 [i_15] [i_16 + 2])))) : (((((/* implicit */int) arr_51 [i_15] [i_16 + 1])) / (((/* implicit */int) (unsigned short)3863))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 0; i_22 < 24; i_22 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) max((((/* implicit */int) var_3)), (((((/* implicit */int) var_16)) * (((/* implicit */int) arr_63 [(unsigned char)12] [i_16 + 2] [i_16] [6ULL] [i_16 + 2] [i_16 - 1])))))))));
                        arr_73 [i_15] [i_16] [i_16] [(unsigned char)23] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned short)14394)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27319))) : (arr_67 [i_15] [i_21] [i_15]))))), (min((27LL), (-1402624223480348889LL)))));
                        var_46 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) max((arr_68 [i_15] [i_15] [i_15] [i_15]), (arr_68 [i_15] [i_16] [i_15] [i_15])))))) ^ (max((((/* implicit */long long int) ((short) (signed char)124))), (arr_67 [i_15] [i_15] [i_15])))));
                        var_47 += ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-22))));
                    }
                    var_48 -= (~(((/* implicit */int) (unsigned char)31)));
                }
                arr_74 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_15] [i_15] [i_16] [i_15] [i_16 - 1] [i_16])) ? (((/* implicit */int) ((_Bool) (short)28230))) : (((/* implicit */int) arr_63 [i_15] [i_15] [(unsigned short)11] [i_15] [i_15] [(short)23]))));
                var_49 = ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_23 = 1; i_23 < 22; i_23 += 4) 
                {
                    var_50 = ((/* implicit */_Bool) min((var_50), (((((/* implicit */int) (unsigned short)3870)) != (((/* implicit */int) (unsigned short)21085))))));
                    var_51 = ((/* implicit */unsigned short) ((((arr_67 [i_15] [i_15] [i_15]) / (((/* implicit */long long int) ((/* implicit */int) var_2))))) & (((/* implicit */long long int) arr_53 [i_16 - 2]))));
                }
                for (long long int i_24 = 0; i_24 < 24; i_24 += 3) 
                {
                    var_52 &= ((/* implicit */_Bool) arr_53 [i_15]);
                    arr_81 [i_15] [(signed char)9] [22ULL] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_79 [i_15] [i_15])) ? (arr_57 [i_16] [i_16 + 2] [(unsigned char)7]) : (((/* implicit */int) arr_78 [i_16] [i_15]))))));
                }
                for (unsigned int i_25 = 0; i_25 < 24; i_25 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_53 *= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) min(((unsigned short)0), (((/* implicit */unsigned short) arr_79 [i_25] [i_25]))))))));
                        var_54 *= ((/* implicit */unsigned short) ((((max((431665060U), (((/* implicit */unsigned int) (signed char)-53)))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)3584))))) ^ (((/* implicit */unsigned int) 1581779339))));
                    }
                    var_55 += (+(((/* implicit */int) (signed char)-52)));
                    var_56 *= ((/* implicit */short) ((((/* implicit */int) arr_52 [i_15])) - ((+(((/* implicit */int) ((_Bool) arr_70 [i_15] [i_15] [i_16] [i_15])))))));
                    var_57 *= ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(var_15)))), ((-(arr_72 [i_25] [i_16] [i_16 + 1])))));
                    var_58 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) var_8)) : (((unsigned long long int) (signed char)21))))) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [(short)12] [8] [i_15] [i_15]))) & (arr_58 [i_15] [i_16] [i_15]))))) : (((/* implicit */unsigned long long int) max((16320), (((/* implicit */int) (signed char)119))))));
                }
            }
        } 
    } 
    var_59 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-26))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_27 = 0; i_27 < 19; i_27 += 3) 
    {
        var_60 = ((/* implicit */signed char) min((var_60), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) 2882947100U))) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (signed char)-9)))))));
        var_61 = ((/* implicit */unsigned long long int) arr_63 [i_27] [i_27] [i_27] [(unsigned char)20] [i_27] [i_27]);
        var_62 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (((unsigned long long int) var_4)));
    }
}

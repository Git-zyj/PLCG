/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48760
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
    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (max((((/* implicit */unsigned int) ((_Bool) var_2))), (var_5)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_2 [(_Bool)1])))) ? (var_9) : (((/* implicit */long long int) 2310721690U)))), (((/* implicit */long long int) ((((1984245611U) * (((/* implicit */unsigned int) 470202684)))) * (arr_2 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (_Bool)1))));
                    arr_11 [i_3] [i_2] [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))) >= (((long long int) ((var_19) * (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        arr_16 [i_4] [i_1] = ((/* implicit */unsigned char) ((int) 814282820));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_1] [(unsigned short)9] [(unsigned short)9] [i_1] [i_5] [i_4] [i_2] = ((/* implicit */_Bool) ((2004651294U) & (((/* implicit */unsigned int) 434985321))));
                            var_22 *= ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_13 [i_1] [i_2] [i_4] [i_5])) : (((/* implicit */int) ((signed char) var_3))));
                        }
                    }
                    for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        arr_23 [i_1] [i_6] [i_2] [i_6] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) ((unsigned short) arr_9 [i_1]))) : (((/* implicit */int) ((((/* implicit */long long int) 470202684)) >= (arr_9 [i_6 + 2]))))));
                        arr_24 [i_6] = ((/* implicit */_Bool) arr_15 [i_6] [i_3] [i_3] [i_3]);
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        arr_27 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_3])) ? (var_10) : (-7908240118263077821LL)));
                        var_23 = ((/* implicit */short) arr_8 [6U] [6U] [i_7]);
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [4LL] [i_1]);
        arr_28 [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_8 [4U] [4U] [i_1])))) * (((/* implicit */int) ((unsigned short) arr_8 [i_1] [7LL] [i_1])))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            arr_32 [i_8] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) min((((/* implicit */unsigned short) (signed char)-81)), (arr_26 [i_1] [i_1] [i_1] [i_1] [i_8] [5LL])))));
            arr_33 [i_1] [i_1] = max((((((long long int) arr_1 [i_1] [i_1])) >> (((/* implicit */int) ((2290315993U) > (((/* implicit */unsigned int) 2082646106))))))), (((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned int) var_3)), (268435452U))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_25 = ((/* implicit */signed char) ((1222357406U) >> (((min((((/* implicit */int) ((_Bool) arr_36 [i_1]))), ((~(((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) + (32208)))));
            var_26 ^= ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_9] [i_1] [i_1] [i_1])), (var_19))))));
        }
        for (long long int i_10 = 3; i_10 < 8; i_10 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)16789)) * (((/* implicit */int) arr_10 [i_1] [i_10 + 1])))) * (((((/* implicit */int) arr_7 [i_1] [i_10 + 4])) - (((/* implicit */int) arr_10 [(unsigned char)2] [i_10 + 1]))))));
            var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (3158531215U)));
        }
    }
    /* LoopSeq 4 */
    for (unsigned char i_11 = 1; i_11 < 12; i_11 += 4) /* same iter space */
    {
        var_29 *= ((/* implicit */signed char) max((((/* implicit */int) arr_40 [i_11 - 1])), (((((/* implicit */int) arr_40 [i_11 + 3])) + (470202684)))));
        var_30 = ((unsigned short) max((((var_1) <= (((/* implicit */long long int) arr_2 [i_11 + 3])))), (arr_40 [i_11 + 4])));
    }
    for (unsigned char i_12 = 1; i_12 < 12; i_12 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) -434985302)), (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) 24U)) : (8495830198210647486ULL))))), (((/* implicit */unsigned long long int) var_10)))))));
        var_32 += ((/* implicit */unsigned short) min((min((((239320599154205492ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(signed char)11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) var_19))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 3; i_13 < 15; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                {
                    arr_50 [i_12 - 1] [(unsigned short)5] [(unsigned short)5] [i_12] = ((arr_45 [i_12 + 1] [i_12]) ? (max((((arr_45 [i_12 + 1] [i_13]) ? (arr_2 [i_14 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_12] [i_12] [i_14]))))), (((/* implicit */unsigned int) arr_43 [i_12 + 2] [i_12 + 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12] [i_13 - 1]))));
                    /* LoopSeq 4 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_16 = 0; i_16 < 16; i_16 += 2) 
                        {
                            arr_56 [i_12] [(_Bool)1] [14ULL] [i_14] [i_13] [i_13] [i_12] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_40 [i_13 - 3])) / (((/* implicit */int) (_Bool)1)))), (((arr_41 [i_12]) ? (((arr_54 [i_12]) ? (((/* implicit */int) var_18)) : (-1701973870))) : (((/* implicit */int) var_7))))));
                            arr_57 [i_16] [i_12] [i_15] [(_Bool)1] [i_12 + 2] [i_12] [i_12 + 2] = arr_0 [i_12];
                        }
                        for (long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 2147483647)), (2290315996U)))) ? (((((/* implicit */_Bool) arr_55 [i_17] [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 - 3] [i_13] [i_17])) ? (((/* implicit */int) arr_58 [i_12 + 1] [i_12] [(_Bool)1] [i_12 + 3])) : (((/* implicit */int) arr_45 [i_13 - 3] [i_15])))) : (((/* implicit */int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_13 - 3] [i_13 - 3])))))))))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_13 - 3]))) % (arr_0 [i_14 + 1]))) * (((/* implicit */long long int) ((((/* implicit */int) arr_40 [i_13 - 1])) >> (((arr_0 [i_14 + 1]) + (6329242252412857175LL)))))))))));
                        }
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) arr_55 [0ULL] [i_12] [4ULL] [i_13 - 1] [i_13 - 1] [12U] [0ULL]))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        arr_64 [i_12 + 3] [i_12 + 4] [i_12] [i_12] [11ULL] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_14 + 1] [i_14] [i_14 + 1] [0ULL] [i_14 + 1]))) : (((((/* implicit */_Bool) 1662049684U)) ? (arr_39 [i_18] [i_13]) : (var_1))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (((((/* implicit */_Bool) 8495830198210647485ULL)) ? (3995690410U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                        var_36 = ((/* implicit */long long int) ((unsigned short) var_19));
                        var_37 -= ((/* implicit */unsigned short) min((9950913875498904116ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_38 = ((/* implicit */unsigned int) arr_49 [i_12 + 4] [i_13] [i_12]);
                    }
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 4) 
                    {
                        arr_67 [i_12] [i_12] [i_14] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_63 [i_12 + 3] [i_12 + 3] [i_12 + 3] [i_19] [i_12 + 2]), (arr_58 [i_19] [i_14 + 1] [i_13 + 1] [3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_19] [i_14 + 1] [i_13] [i_13] [2ULL]))) : (min((((/* implicit */long long int) arr_2 [i_12])), (arr_39 [(_Bool)1] [i_13 - 1])))));
                        arr_68 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6635494043935276452LL)) ? (13600763573426169582ULL) : (((/* implicit */unsigned long long int) 3497231363U))));
                        var_39 = ((/* implicit */short) var_17);
                        arr_69 [(unsigned char)5] [i_12] [i_14] [i_19] = ((/* implicit */unsigned short) arr_46 [(_Bool)1] [i_13 - 1] [i_13]);
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_42 [i_12] [i_19])), (1135440930U)))) ? (((arr_48 [i_12]) + (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_19] [i_13] [3U] [i_14]))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_46 [(short)2] [i_13] [0U]), (((/* implicit */short) (_Bool)1)))))))) : (((/* implicit */long long int) arr_47 [i_12] [i_12]))));
                    }
                    for (unsigned char i_20 = 2; i_20 < 15; i_20 += 4) 
                    {
                        var_41 *= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4674)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_12 - 1] [i_13 - 3] [i_13 - 3] [(_Bool)1]))) : (9950913875498904121ULL)))) ? (((/* implicit */int) max(((unsigned short)22632), (((/* implicit */unsigned short) (_Bool)0))))) : (((((/* implicit */_Bool) arr_58 [i_12] [i_13] [i_14] [i_20 - 1])) ? (434985339) : (((/* implicit */int) var_3)))))));
                        var_42 -= arr_53 [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 1] [i_14];
                    }
                    arr_72 [i_12] [i_12] [i_12] [15] = ((/* implicit */unsigned short) ((int) (unsigned short)32639));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((((/* implicit */int) min((((/* implicit */unsigned short) var_17)), (var_8)))) <= (((/* implicit */int) var_11)))) && (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((unsigned char) var_2))))))))));
                    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) arr_39 [i_13] [6U]))));
                }
            } 
        } 
    }
    for (unsigned char i_21 = 4; i_21 < 9; i_21 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_22 = 2; i_22 < 9; i_22 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_23 = 0; i_23 < 11; i_23 += 2) 
            {
                for (int i_24 = 0; i_24 < 11; i_24 += 2) 
                {
                    for (unsigned char i_25 = 0; i_25 < 11; i_25 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned short) -920870705537701430LL);
                            var_46 = ((/* implicit */short) ((((((((/* implicit */int) arr_42 [i_23] [i_22])) < (((/* implicit */int) (short)-2048)))) ? (max((var_19), (((/* implicit */int) arr_41 [i_23])))) : (((/* implicit */int) arr_44 [i_24] [i_22 - 2] [i_24])))) >> (((max((((((/* implicit */int) arr_79 [i_23])) - (((/* implicit */int) (unsigned short)32894)))), (((/* implicit */int) ((short) var_15))))) - (31912)))));
                            arr_88 [i_21] [(unsigned short)3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned char) var_2))))), (arr_73 [i_21])));
                            arr_89 [(unsigned char)4] [i_22 + 1] [i_22 + 1] [i_25] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_34 [i_21 - 1] [i_22 + 1] [i_21 - 1])) : (((((/* implicit */_Bool) arr_21 [11U] [i_22 - 1] [(unsigned short)7] [i_24])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (_Bool)1))))))) != (min((((/* implicit */unsigned long long int) -8778555311321418273LL)), (7741993669204865875ULL))));
                            arr_90 [i_23] [(short)8] [(_Bool)1] [5LL] [i_23] [i_24] = ((/* implicit */unsigned int) ((long long int) ((((arr_61 [i_21] [i_22 - 2] [(unsigned char)8] [i_24] [(unsigned char)8]) + (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_21 - 2] [i_22 - 1]))))) & (((/* implicit */long long int) ((int) arr_76 [i_23] [i_25]))))));
                        }
                    } 
                } 
            } 
            arr_91 [i_21] [i_22] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_22 - 2] [i_22] [i_22] [i_22])) << (((18446744073709551599ULL) - (18446744073709551573ULL)))))) ? (((/* implicit */int) ((_Bool) arr_42 [i_21] [i_22 + 1]))) : (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166))) <= (2290315996U)))), (((((/* implicit */_Bool) (unsigned short)20542)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))))));
        }
        var_47 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -434985341)) ? (((/* implicit */int) arr_59 [i_21 + 2] [i_21 + 2] [i_21] [(_Bool)1] [i_21 - 3])) : (((/* implicit */int) arr_10 [(unsigned short)8] [i_21 + 2])))), ((-(((/* implicit */int) min(((unsigned char)169), (((/* implicit */unsigned char) var_13)))))))));
        arr_92 [i_21] = ((/* implicit */unsigned short) arr_73 [i_21 - 4]);
    }
    for (long long int i_26 = 0; i_26 < 15; i_26 += 2) 
    {
        arr_95 [i_26] = ((/* implicit */_Bool) min((((((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (797735907U)))) % (arr_39 [i_26] [i_26]))), (((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_26]))) % (arr_0 [i_26])))));
        /* LoopNest 2 */
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            for (int i_28 = 0; i_28 < 15; i_28 += 4) 
            {
                {
                    var_48 ^= ((/* implicit */short) arr_52 [i_28] [i_28] [i_27] [i_27] [i_27] [0U]);
                    var_49 ^= ((/* implicit */unsigned int) ((int) 1368499619));
                    arr_100 [14U] [i_26] [14U] = ((/* implicit */short) 3497231374U);
                    arr_101 [i_26] [4LL] = ((((unsigned int) 8495830198210647472ULL)) | (((/* implicit */unsigned int) ((arr_60 [i_26] [i_26] [i_26] [i_28]) ? (var_15) : (((/* implicit */int) arr_60 [i_28] [i_28] [i_27] [i_26]))))));
                }
            } 
        } 
        var_50 ^= ((/* implicit */short) 9950913875498904121ULL);
    }
}

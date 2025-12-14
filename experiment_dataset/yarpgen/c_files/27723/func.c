/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27723
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) var_9))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) min((((/* implicit */int) var_2)), (((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_18 &= ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
        var_19 = ((/* implicit */short) min((var_19), (arr_4 [i_1] [i_1])));
        arr_5 [i_1] = ((/* implicit */short) var_8);
        var_20 = ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */int) var_9)) >> (((var_8) - (104138762))))) & ((~(((/* implicit */int) arr_4 [i_1] [i_1])))))) : (((/* implicit */int) ((signed char) arr_3 [i_1]))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) max(((~(-33042302))), (((-1246040535) % (((/* implicit */int) var_15)))))))));
    }
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2] [i_3 + 1])) | (((/* implicit */int) arr_10 [i_3] [i_3 + 1])))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((2019372674U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_2] [i_2]))))))) >= (max((((((/* implicit */int) (short)-5351)) ^ (((/* implicit */int) arr_6 [i_2] [i_3 + 1])))), ((~(((/* implicit */int) var_9))))))));
            arr_11 [i_2] = ((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_6 [i_2] [i_2]))))), (arr_8 [i_2] [i_3 - 1]))));
            var_24 = ((/* implicit */long long int) (~(((((((/* implicit */int) var_3)) + (2147483647))) >> (((arr_7 [i_3 - 1]) + (1204790319)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned int) arr_15 [i_3] [i_5]);
                    arr_16 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned int) (~(arr_3 [i_2])));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 4; i_7 < 8; i_7 += 3) 
                    {
                        arr_21 [(unsigned short)0] [i_4] &= ((/* implicit */int) arr_18 [(unsigned short)7] [i_3] [i_3] [i_3] [i_3]);
                        var_26 = ((/* implicit */unsigned char) var_1);
                    }
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */int) ((unsigned short) (_Bool)1));
                        var_28 = ((/* implicit */long long int) var_0);
                        arr_24 [i_2] [i_3] [i_4] [i_6] [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_15)) * (((/* implicit */int) arr_20 [i_6] [i_4] [i_2]))))));
                        arr_25 [i_2] [i_4] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) (signed char)7)))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-17)) + (((((/* implicit */int) var_12)) | (((/* implicit */int) (signed char)-7))))));
                        var_30 = ((/* implicit */unsigned char) var_1);
                        var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                    }
                    for (signed char i_10 = 1; i_10 < 10; i_10 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_10 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_8 [i_2] [i_4])));
                        arr_31 [i_2] [i_2] [i_2] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(signed char)7] [(unsigned short)1] [i_4] [i_4] [i_4]))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (arr_13 [i_4] [(unsigned char)3] [i_10]))));
                        var_33 = ((((/* implicit */int) var_14)) % (((/* implicit */int) arr_14 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10] [(unsigned short)0])));
                    }
                    arr_32 [i_2] [i_3] [i_2] [i_6] = ((/* implicit */unsigned short) arr_22 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] [i_3 - 1]);
                }
                var_34 = ((/* implicit */short) ((_Bool) (signed char)5));
            }
            for (unsigned short i_11 = 2; i_11 < 9; i_11 += 3) 
            {
                arr_36 [i_2] [i_2] = ((/* implicit */short) ((6328478037876504665LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35672)))));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_14 [i_11] [i_3] [i_3] [(signed char)11] [i_2] [i_2]), (var_9)))) >= (((/* implicit */int) var_7))));
            }
        }
        for (unsigned char i_12 = 1; i_12 < 11; i_12 += 2) /* same iter space */
        {
            var_36 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_2] [i_2] [i_2])) % (((/* implicit */int) var_14))))))))));
            var_37 = ((/* implicit */int) ((arr_15 [i_12 + 1] [i_12 + 1]) ^ (((/* implicit */unsigned long long int) ((6328478037876504663LL) & (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
        }
        for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            var_38 *= ((/* implicit */long long int) ((((/* implicit */int) var_6)) >= ((+(((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_13] [i_13] [i_13]))))));
            /* LoopSeq 3 */
            for (unsigned short i_14 = 3; i_14 < 10; i_14 += 2) 
            {
                var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_29 [i_14 + 2] [i_14] [i_14 - 1] [i_14 + 2]))) ^ (((/* implicit */int) ((arr_29 [i_14 - 2] [i_14] [i_14 - 1] [i_14]) < (arr_29 [i_14 - 1] [i_14] [i_14 - 3] [(unsigned short)9]))))));
                var_40 = ((((/* implicit */_Bool) 576460752303423487LL)) ? (((/* implicit */long long int) 961622370U)) : (6328478037876504657LL));
                var_41 *= ((/* implicit */short) var_4);
            }
            /* vectorizable */
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_43 [i_2] [i_13] [i_15])))))));
                /* LoopSeq 1 */
                for (unsigned char i_16 = 2; i_16 < 11; i_16 += 3) 
                {
                    var_43 = ((arr_22 [i_16] [i_16 - 1] [i_15] [i_15] [10U] [i_15]) | (((/* implicit */int) arr_45 [i_2] [i_13] [i_15])));
                    arr_51 [i_2] [i_13] [i_15] [i_16] = ((/* implicit */unsigned long long int) arr_44 [i_15]);
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-63))));
                        arr_55 [i_2] [i_13] [i_15] [i_16] [i_2] = ((/* implicit */short) var_7);
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)41))) ? (((/* implicit */int) ((unsigned short) arr_26 [i_2] [i_13] [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_2] [i_13] [i_15] [i_2] [i_18])))))));
                        var_46 = ((((/* implicit */int) (short)-17995)) - (((/* implicit */int) arr_26 [i_2] [i_13] [i_18])));
                        arr_60 [i_2] [i_13] [i_15] [7LL] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) arr_40 [i_2]))));
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_16 - 2] [i_16 - 2])) ? (((/* implicit */long long int) arr_17 [i_16 + 1] [i_16 - 2])) : (-6328478037876504657LL)));
                        var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) var_6))));
                    }
                    for (signed char i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        arr_63 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_2] [i_13]))) >= (7414806214613867004LL)));
                        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_61 [i_16 + 1] [i_16 + 1]))));
                        arr_64 [i_2] [i_19] [i_16] [i_15] [11ULL] [i_2] [i_2] = ((/* implicit */int) var_3);
                    }
                }
                var_50 ^= ((/* implicit */unsigned long long int) var_8);
            }
            for (unsigned long long int i_20 = 2; i_20 < 9; i_20 += 1) 
            {
                var_51 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_62 [i_2] [i_13] [i_20] [i_2])) ? (((/* implicit */int) arr_62 [i_2] [i_2] [2] [i_13])) : (((/* implicit */int) var_12)))), ((~(((/* implicit */int) arr_62 [i_2] [i_13] [(_Bool)1] [6LL]))))));
                arr_67 [i_2] [i_2] [i_2] [i_20] = ((signed char) (((!(((/* implicit */_Bool) (signed char)-106)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23)) || (((/* implicit */_Bool) var_1)))))) : (((unsigned long long int) arr_35 [i_2] [i_2] [i_13] [i_20]))));
                /* LoopSeq 2 */
                for (unsigned short i_21 = 3; i_21 < 10; i_21 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_22 = 0; i_22 < 12; i_22 += 3) 
                    {
                        var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)204)))))));
                        var_53 = ((/* implicit */short) ((arr_57 [(signed char)5] [i_2] [i_20] [i_21] [i_22]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */unsigned int) arr_54 [i_2] [i_2] [i_20 - 2] [2LL] [i_22])), (arr_8 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18002))))))));
                        var_54 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */unsigned long long int) -974239485)) < (arr_48 [i_2] [i_20] [i_2] [i_22])))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_13 [i_20 + 2] [i_21 + 2] [i_21 - 2])))))));
                        var_55 = ((((/* implicit */int) max((((/* implicit */unsigned short) max((var_10), (((/* implicit */signed char) arr_27 [i_2] [i_2] [i_2] [i_13] [i_20 + 2] [i_21 - 3] [i_22]))))), (max(((unsigned short)35484), ((unsigned short)33569)))))) <= (((/* implicit */int) arr_14 [i_2] [i_13] [i_20] [i_20] [i_22] [10U])));
                    }
                    var_56 = ((/* implicit */signed char) ((int) ((((8589934591ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26311))))));
                    arr_75 [i_2] [i_2] = ((/* implicit */int) ((unsigned char) arr_62 [i_2] [i_21] [(unsigned short)7] [i_21]));
                    /* LoopSeq 2 */
                    for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        arr_79 [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (((arr_71 [i_2] [9U] [1U] [i_21] [i_23]) ? (min((arr_57 [6U] [i_2] [i_2] [i_21] [9LL]), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15))))))));
                        var_57 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) arr_66 [i_2] [i_21 + 2] [i_23])))));
                        arr_80 [(unsigned short)7] [i_13] [i_20 + 2] [9] [i_23] [i_2] = var_11;
                        var_58 = ((/* implicit */unsigned short) max((((/* implicit */short) ((signed char) -576460752303423488LL))), (((short) arr_17 [i_20 - 1] [i_20 + 3]))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_59 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) arr_44 [i_20 - 1])) & (((/* implicit */int) (unsigned short)35484)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_20 + 1]))))));
                        var_60 = ((/* implicit */unsigned short) arr_33 [i_2]);
                        var_61 = ((/* implicit */signed char) min((((min((arr_13 [i_2] [(signed char)1] [i_20]), (((/* implicit */unsigned int) arr_6 [i_2] [i_2])))) >> (((/* implicit */int) arr_20 [i_2] [i_13] [i_24])))), (((/* implicit */unsigned int) ((unsigned short) ((18446744065119617024ULL) << (((6328478037876504668LL) - (6328478037876504605LL)))))))));
                    }
                }
                for (int i_25 = 0; i_25 < 12; i_25 += 3) 
                {
                    var_62 = ((/* implicit */unsigned short) (((~(((((/* implicit */int) (unsigned short)23118)) >> (((((/* implicit */int) var_11)) - (45640))))))) >= (((/* implicit */int) var_10))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 1; i_26 < 10; i_26 += 1) 
                    {
                        var_63 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) -1096892102)), (arr_15 [i_20 + 1] [i_26]))), (((/* implicit */unsigned long long int) (~(arr_52 [i_2] [i_13] [i_26 - 1] [i_25] [i_26] [i_13] [i_13]))))));
                        var_64 = ((/* implicit */int) arr_3 [i_2]);
                        var_65 = ((/* implicit */unsigned short) (!(((arr_73 [i_2] [i_13] [i_20 + 1] [i_2] [i_26]) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_59 [i_2] [i_2] [i_2] [i_2] [i_2])))))))));
                    }
                    var_66 = ((/* implicit */unsigned char) var_9);
                    var_67 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((((/* implicit */int) arr_44 [i_13])) << (((((/* implicit */int) var_9)) - (46554)))))));
                    var_68 = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) < (min((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (((arr_42 [i_2] [i_13] [i_20] [i_25]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_61 [i_25] [i_13]))))))));
                }
                /* LoopSeq 1 */
                for (signed char i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_69 = ((/* implicit */long long int) min((var_69), (((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) arr_43 [i_27] [i_13] [i_27])) + (arr_3 [i_2]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_90 [i_2] [i_27] [(signed char)2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) var_10)))))))))));
                        arr_95 [i_2] [i_2] [i_2] [i_2] [(signed char)2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) (!(((/* implicit */_Bool) var_10))))))))));
                        var_70 = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) var_12)))));
                        arr_96 [2U] [i_2] [i_2] [i_13] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-116)) >= (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_37 [i_20 + 2] [i_20 + 3])))))));
                    }
                    var_71 = ((/* implicit */long long int) max((var_71), (((/* implicit */long long int) arr_66 [i_13] [i_13] [i_20]))));
                    arr_97 [i_2] [i_13] [i_20] [(short)6] [i_2] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) 6009603030070626125LL)) : (18446744065119617037ULL)));
                }
            }
        }
        for (signed char i_29 = 0; i_29 < 12; i_29 += 4) 
        {
            var_72 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-103))));
            arr_100 [i_2] [i_29] [i_29] = ((/* implicit */long long int) var_8);
        }
        var_73 -= (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_26 [6U] [i_2] [(unsigned short)0])) >= (((/* implicit */int) var_13)))))));
    }
    for (unsigned int i_30 = 0; i_30 < 17; i_30 += 2) 
    {
        var_74 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (short)0)) * (((/* implicit */int) var_14)))));
        var_75 |= ((/* implicit */unsigned short) ((((((/* implicit */int) var_12)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)244))))))) * (((((/* implicit */_Bool) (unsigned char)27)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_103 [i_30] [i_30]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_30] [i_30]))))))));
        var_76 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1248585615)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_5))));
    }
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
    {
        arr_106 [i_31] = ((/* implicit */int) arr_104 [i_31]);
        var_77 = ((/* implicit */unsigned short) min((((var_15) ? (arr_104 [i_31]) : (arr_104 [i_31]))), (((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) var_6))))))));
        var_78 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -6328478037876504667LL))));
    }
}

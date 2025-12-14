/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35380
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
    var_10 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */int) var_4))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)11)), ((short)-15209)))) : (((2147483647) / (var_0))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (13040339237528982392ULL)))) ? (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [(short)3] = ((/* implicit */signed char) min(((~(-266214800))), (((/* implicit */int) var_5))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)48891)) < (((/* implicit */int) arr_1 [i_0]))))) < (((/* implicit */int) arr_0 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned char) arr_6 [i_1]))), (min((4032ULL), (((/* implicit */unsigned long long int) (unsigned char)253)))))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (signed char)105)), (13040339237528982392ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((arr_1 [4LL]), ((short)-30796))), (max((arr_1 [i_1]), (((/* implicit */short) var_1))))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) 5406404836180569224ULL);
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)148)), (-1)))), (max((17899205661747576376ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))))))));
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 4; i_3 < 11; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_14 = ((/* implicit */long long int) var_8);
                /* LoopSeq 1 */
                for (long long int i_5 = 2; i_5 < 12; i_5 += 3) 
                {
                    arr_19 [i_4] [(unsigned char)7] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) ((unsigned char) var_0))) : (((((/* implicit */int) arr_12 [i_3 + 2] [i_5 - 1])) / (((/* implicit */int) arr_12 [i_3 - 2] [i_5 - 2]))))));
                    arr_20 [i_2] [i_2] [i_4] [i_4] [i_3 - 1] [i_5 + 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2768884405916446066LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)-17083)))), (((/* implicit */int) var_3))));
                }
            }
            for (long long int i_6 = 3; i_6 < 11; i_6 += 1) 
            {
                var_15 ^= ((/* implicit */short) var_1);
                arr_23 [i_2] [i_2] [5] [(short)11] = max((((16777215LL) & (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) (unsigned char)0)));
                var_16 = ((/* implicit */signed char) arr_13 [i_2] [i_3] [i_6 + 1]);
            }
            var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_17 [i_2] [4U] [i_3] [i_3])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? ((~(var_8))) : ((~(((/* implicit */int) arr_13 [i_2] [i_3] [i_2]))))))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */int) max((((/* implicit */unsigned char) arr_12 [i_2] [i_3])), ((unsigned char)239)))) / (arr_9 [i_2]))) < (((/* implicit */int) arr_10 [i_2])))))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_3 + 1])) / (((/* implicit */int) min((((/* implicit */short) var_3)), (arr_1 [i_3 - 4]))))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
        {
            arr_27 [i_2] [i_7] = ((/* implicit */unsigned char) ((((int) 2768884405916446091LL)) & (((/* implicit */int) ((short) var_4)))));
            var_20 = ((/* implicit */long long int) var_8);
            arr_28 [i_7] [i_7] [i_7] = ((/* implicit */signed char) (short)14391);
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_21 ^= ((/* implicit */unsigned char) var_9);
                var_22 = ((/* implicit */unsigned int) ((int) (_Bool)1));
            }
        }
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) var_3);
            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_31 [i_2] [i_2]))));
            var_25 ^= ((/* implicit */signed char) max(((short)14365), (((/* implicit */short) (unsigned char)187))));
        }
        arr_33 [i_2] [(unsigned char)7] = ((/* implicit */int) max(((_Bool)1), (((((/* implicit */unsigned long long int) max((-1373636360), (((/* implicit */int) (unsigned char)0))))) <= (((((/* implicit */_Bool) 1615202063U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209))) : (9223369837831520256ULL)))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            arr_36 [i_2] [i_10] = (!(arr_12 [i_2] [i_2]));
            var_26 *= ((/* implicit */unsigned long long int) min(((unsigned char)78), (((/* implicit */unsigned char) (_Bool)0))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_39 [i_11] |= ((/* implicit */long long int) ((((((/* implicit */int) max(((unsigned short)65530), (((/* implicit */unsigned short) var_3))))) & (((/* implicit */int) arr_17 [i_2] [i_2] [i_11] [6U])))) <= (((/* implicit */int) min((max((var_4), (((/* implicit */unsigned short) arr_29 [i_2] [i_11])))), (((/* implicit */unsigned short) var_5)))))));
            var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_2] [(signed char)2]))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    arr_48 [i_13] [i_12] [i_13] [i_14] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)253)) : (var_8))), (((/* implicit */int) var_1)))) <= (((/* implicit */int) var_1))));
                    var_28 &= ((/* implicit */_Bool) max((((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) arr_37 [i_2] [i_2])) : (((/* implicit */int) arr_10 [i_12])))))))), (max((((/* implicit */int) ((_Bool) arr_15 [i_12] [(unsigned short)11]))), ((~(((/* implicit */int) (unsigned char)8))))))));
                    var_29 = ((/* implicit */long long int) var_6);
                }
                for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) /* same iter space */
                {
                    arr_51 [i_13] [i_13] [i_13] [i_15] [i_15] [i_15] = ((/* implicit */long long int) var_4);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_55 [i_2] [i_15] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_13 - 1] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) 8U)))));
                        var_30 = ((/* implicit */long long int) var_8);
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [i_2] [i_15]))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (((+(arr_42 [i_2] [i_12]))) <= (((/* implicit */long long int) 1077846634)))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_59 [i_2] [i_12] [6] [i_15] [i_15] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) arr_17 [i_17] [i_13] [i_13 - 1] [i_15])), (arr_50 [i_12] [i_2] [i_13 - 1] [i_15]))), (arr_50 [i_2] [(unsigned short)1] [i_13 - 1] [i_15])));
                        arr_60 [i_15] [i_12] [i_12] [i_13 - 1] [i_13 - 1] [i_15] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_2))), (((/* implicit */unsigned int) var_3)))))));
                        arr_61 [5] [5] [i_2] [i_2] [i_15] = ((((/* implicit */_Bool) ((112296322U) & (3551973492U)))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) var_7)));
                        var_33 *= ((/* implicit */_Bool) (+(9223372036854775807LL)));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) / (min((((((/* implicit */_Bool) arr_30 [(unsigned char)5] [i_15] [(unsigned char)5])) ? (((/* implicit */int) var_1)) : (var_0))), ((+(((/* implicit */int) var_5))))))));
                        var_35 += ((/* implicit */_Bool) ((((/* implicit */int) min((arr_41 [10LL] [i_12] [(_Bool)1]), (arr_41 [i_15] [i_15] [i_13])))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_41 [i_2] [i_12] [i_13])) : (arr_54 [(unsigned char)8] [i_12] [(unsigned char)8] [i_13 - 1] [i_18] [(unsigned char)0] [6ULL])))));
                    }
                }
                for (unsigned char i_19 = 0; i_19 < 13; i_19 += 1) /* same iter space */
                {
                    arr_67 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7)) ? ((~(((/* implicit */int) (unsigned char)253)))) : ((~(var_0)))));
                    /* LoopSeq 4 */
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)15)), (8ULL)))) ? (((/* implicit */int) (unsigned char)254)) : ((+(((/* implicit */int) (unsigned char)8))))))));
                        var_37 ^= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) arr_10 [i_13 - 1])), (arr_44 [i_20 + 1]))), ((+(var_9)))));
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */unsigned int) var_8)) / (arr_66 [(unsigned char)3] [i_12] [i_19] [i_20 + 1]))) & (var_2)))), (min((arr_38 [i_12]), (((/* implicit */long long int) arr_57 [i_20] [10ULL] [i_20] [i_20 + 1])))))))));
                    }
                    for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) var_7))));
                        var_40 = ((/* implicit */int) max((var_40), (((int) min((arr_64 [i_21 + 1] [i_21] [i_21 + 1] [8LL] [i_21 + 1]), (((/* implicit */unsigned long long int) arr_71 [i_13 - 1] [i_13 - 1] [(unsigned char)10] [6] [i_21 + 1])))))));
                        var_41 = ((/* implicit */unsigned char) arr_73 [i_2] [i_12] [(unsigned char)11] [i_19] [i_13] [i_2]);
                        var_42 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-3604)) & (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_58 [(unsigned char)11] [i_21] [9LL] [i_19] [i_19] [i_19])) < (arr_45 [i_12] [i_13 - 1] [i_19] [i_21])))))) / (min((((/* implicit */int) arr_5 [i_2])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) arr_1 [i_13]))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_22 = 3; i_22 < 12; i_22 += 3) 
                    {
                        arr_76 [5] [i_12] [i_12] [i_12] [5] = ((/* implicit */unsigned long long int) arr_26 [i_2]);
                        arr_77 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_9);
                        arr_78 [(_Bool)1] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) arr_74 [i_2] [i_12] [i_13] [i_12] [i_22 - 1]);
                    }
                    for (short i_23 = 3; i_23 < 12; i_23 += 4) 
                    {
                        var_43 = ((/* implicit */_Bool) ((arr_26 [(unsigned char)7]) ? (-8936257437908618499LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_2] [i_12] [i_13])))));
                        var_44 *= ((/* implicit */int) var_9);
                    }
                    var_45 = ((/* implicit */int) arr_57 [i_13] [i_13 - 1] [i_13 - 1] [i_13 - 1]);
                    var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                }
                arr_83 [i_2] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (((((/* implicit */_Bool) arr_68 [8] [i_12] [i_13] [i_13 - 1])) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [(unsigned char)12] [i_13 - 1] [(unsigned char)9] [i_13 - 1])))))));
                var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)82)))) ? (((/* implicit */int) arr_25 [i_2] [(unsigned char)3] [i_2])) : (((/* implicit */int) arr_81 [i_13 - 1]))))) ? (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_2])) : (arr_45 [i_2] [(signed char)9] [(signed char)6] [(signed char)6]))))));
            }
            arr_84 [i_2] [i_2] [i_12] = ((/* implicit */int) ((_Bool) var_9));
            arr_85 [(unsigned short)12] [i_12] [i_2] = ((/* implicit */unsigned long long int) (((+(arr_38 [i_2]))) < (((/* implicit */long long int) (+((~(388496467))))))));
        }
        for (signed char i_24 = 3; i_24 < 11; i_24 += 4) 
        {
            arr_90 [i_2] = arr_54 [(_Bool)1] [i_24] [i_24] [i_24] [(signed char)2] [i_24] [i_24];
            var_48 = min((140737219919872ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)157)) * (((/* implicit */int) (short)(-32767 - 1)))))));
            arr_91 [i_2] [(signed char)2] [(unsigned char)10] = ((/* implicit */unsigned long long int) arr_63 [i_24] [i_24 + 1] [(_Bool)1] [i_24] [i_24]);
        }
        var_49 = ((/* implicit */long long int) min((18446744073709551602ULL), (((/* implicit */unsigned long long int) (short)32761))));
    }
    for (short i_25 = 2; i_25 < 14; i_25 += 1) 
    {
        var_50 = ((/* implicit */unsigned char) ((int) arr_93 [i_25] [i_25]));
        var_51 = ((/* implicit */unsigned short) 1117103813820416LL);
        arr_94 [i_25] [i_25] = ((/* implicit */_Bool) (+(max((arr_93 [i_25] [i_25]), ((~(arr_93 [i_25] [i_25])))))));
    }
}

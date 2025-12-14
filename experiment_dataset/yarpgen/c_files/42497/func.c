/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42497
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (unsigned char)51);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_0 [i_0]))));
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) 1543431036U)), (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 15; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2751536290U)) ? (7634460568245425238ULL) : (((/* implicit */unsigned long long int) 2852696341U))));
                    arr_16 [i_4] [i_3 + 1] = arr_11 [i_4] [i_0] [i_0];
                    var_22 *= ((/* implicit */unsigned int) (-(((unsigned long long int) ((unsigned char) arr_14 [i_3 + 1] [i_3 - 1])))));
                    arr_17 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_10 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (_Bool)1)))))) : (arr_6 [i_4] [(_Bool)1] [(unsigned char)6] [i_4])))) ? (((/* implicit */long long int) arr_3 [3U] [i_3 + 1] [i_4])) : (min((min((((/* implicit */long long int) arr_7 [i_0] [i_3 - 1] [2LL] [i_4])), (arr_6 [(_Bool)1] [i_0] [i_3 - 1] [i_0]))), (((/* implicit */long long int) (_Bool)1))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) 9223372036854775792LL)) ? (((/* implicit */int) (short)9)) : (((/* implicit */int) arr_18 [i_5]))))))));
        arr_21 [2LL] = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1543431058U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))) ? (1543431055U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51293))))));
    }
    var_25 = ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (signed char i_6 = 2; i_6 < 22; i_6 += 4) 
    {
        arr_26 [21] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)56)) != ((-(((/* implicit */int) (unsigned char)255))))));
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                var_26 = ((/* implicit */signed char) 3856461759713238860LL);
                arr_32 [i_6] [(unsigned short)10] = ((/* implicit */long long int) arr_22 [3LL]);
                arr_33 [i_6] [i_7] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)1))))), ((-(arr_22 [i_6 - 1])))));
            }
            var_27 = (((-(((/* implicit */int) max((arr_28 [i_6] [i_7] [i_7]), ((_Bool)1)))))) | (((/* implicit */int) ((arr_24 [i_6] [10]) >= (((/* implicit */int) var_13))))));
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                var_28 = ((/* implicit */unsigned long long int) var_14);
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((int) ((arr_28 [i_9] [(unsigned char)23] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29389))) : (2751536253U)))) * (((/* implicit */int) max((arr_30 [i_6 + 1] [i_6 - 1] [i_6 + 1]), (arr_23 [i_6 - 2])))))))));
                arr_37 [i_6 - 1] [i_7] [i_7] &= ((/* implicit */unsigned int) var_2);
            }
            for (short i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                arr_41 [i_6] [(unsigned char)1] [i_6] [11U] = 2751536259U;
                arr_42 [23ULL] = ((/* implicit */unsigned char) arr_35 [i_6 + 1] [i_7] [i_6 + 1]);
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        {
                            var_30 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_40 [i_12] [i_11] [i_10] [i_6 + 2])), (var_5)));
                            arr_49 [i_11] [i_6 - 2] [i_11] = ((/* implicit */unsigned short) arr_47 [(_Bool)1] [12ULL] [12ULL] [i_6 - 1] [12ULL] [i_6] [i_6 - 2]);
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned short i_13 = 2; i_13 < 22; i_13 += 2) 
            {
                var_31 -= ((/* implicit */_Bool) (-((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)22783)) < (arr_39 [i_6] [(unsigned short)15] [(_Bool)1]))))))));
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    arr_54 [i_6 + 2] [(_Bool)1] [i_13 - 1] [i_13 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_6 - 1] [i_6 - 1] [i_13 + 1] [i_13 + 1])) ? (((/* implicit */int) ((short) var_14))) : (((int) (unsigned short)29814))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((arr_27 [(_Bool)1] [i_7]) - (1109663907940517740LL))))))));
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) max(((unsigned char)244), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << (((-271893483) + (271893508)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-107)))))))))))));
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                    {
                        arr_57 [i_6] [i_6] [i_6 + 2] [i_15] [i_6] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) var_13)) == (((/* implicit */int) ((unsigned char) (signed char)9)))))), (((((/* implicit */_Bool) arr_35 [i_6 - 1] [i_6 - 1] [i_6 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((764559061438780868LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))))) : (arr_27 [i_6 + 1] [i_6 - 1])))));
                        var_33 = ((/* implicit */_Bool) arr_45 [i_6] [i_7] [i_6] [0LL] [i_6] [9]);
                        arr_58 [i_6] [i_6] [i_6] [i_15] [i_6 - 2] [i_6] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(arr_52 [i_6] [(unsigned char)0] [i_13 + 1] [i_6 + 2])))) ? (((/* implicit */int) ((3568085115U) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : ((~(((/* implicit */int) arr_35 [i_6 - 1] [i_6 + 1] [i_6])))))) <= (1814683646)));
                        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (~(max((((long long int) (unsigned short)35722)), (((/* implicit */long long int) 2751536239U)))))))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                    {
                        arr_61 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
                        var_35 = ((/* implicit */signed char) arr_52 [i_16] [i_16] [i_16] [i_16]);
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) var_8);
                        arr_65 [(_Bool)1] [i_6] [(_Bool)1] [i_6] [i_17] [i_17] [i_17] &= ((/* implicit */short) (~(((/* implicit */int) (((+(((/* implicit */int) (signed char)-68)))) < (((/* implicit */int) arr_25 [i_6 + 2])))))));
                        var_37 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_55 [i_6 + 1] [i_7] [i_7] [i_7] [i_13] [i_14] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_50 [i_13 - 2] [i_13 + 1] [i_13]))) << (((arr_48 [i_6] [i_6] [i_6] [i_6] [(_Bool)1] [i_6]) - (750329784)))));
                        arr_66 [i_6] [i_6] [i_6] &= ((/* implicit */unsigned int) arr_48 [12U] [i_7] [(_Bool)1] [i_13] [(_Bool)1] [(_Bool)1]);
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_11)));
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)46104))))) ? ((+(((((/* implicit */_Bool) arr_48 [i_6 + 1] [10] [i_13] [i_14] [i_18] [i_18])) ? (arr_52 [i_7] [i_13 - 1] [i_14] [i_18]) : (arr_45 [(unsigned short)17] [(unsigned short)17] [(_Bool)1] [10ULL] [19U] [(unsigned short)17]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(_Bool)1] [i_14] [i_7])))));
                        var_40 = ((/* implicit */_Bool) arr_38 [i_14] [i_13 + 2] [i_6]);
                        var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_23 [13LL])))))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        var_42 = ((/* implicit */long long int) (~((-(max((((/* implicit */int) (unsigned char)0)), (arr_48 [i_6] [i_6] [i_13 - 1] [i_13] [i_14] [i_19])))))));
                        var_43 = ((/* implicit */int) (+((+((-(1543431054U)))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_29 [i_13 + 2] [(short)19] [i_20 + 1]), ((short)-11012)))))))) ^ ((+(max((((/* implicit */unsigned int) (unsigned short)46097)), (1543431055U))))))))));
                        arr_76 [i_20 + 1] [i_14] [i_6] [i_6] = ((/* implicit */unsigned short) max((((min((((/* implicit */unsigned int) arr_43 [i_6] [(unsigned char)2] [(unsigned char)2])), (586052863U))) << (((((/* implicit */int) var_14)) + (77))))), (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_67 [3U])))))))));
                        var_45 -= arr_24 [i_20] [(unsigned char)4];
                        arr_77 [i_6] [(_Bool)1] [i_13] [(_Bool)1] [i_20] = ((/* implicit */unsigned char) (signed char)71);
                    }
                    arr_78 [i_6] [i_7] [i_13 - 1] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_6 + 1] [i_7] [i_6 + 1])) && (((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_56 [i_6]))))))));
                }
                var_46 = ((/* implicit */short) arr_46 [i_6] [4] [i_13 + 2] [(unsigned char)10] [(short)0]);
            }
            for (int i_21 = 0; i_21 < 24; i_21 += 2) 
            {
                var_47 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [i_6] [(unsigned short)12] [i_21]))));
                /* LoopSeq 3 */
                for (unsigned short i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) arr_62 [i_23] [i_6] [i_21] [i_21] [i_7] [i_6]);
                        var_49 = ((/* implicit */int) ((arr_50 [1ULL] [i_6] [i_6]) % (((/* implicit */unsigned int) (-(arr_71 [i_23] [i_7] [i_6] [i_23] [i_23]))))));
                        var_50 += ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_36 [(unsigned char)20] [(unsigned char)20] [22]), (((/* implicit */unsigned long long int) (unsigned char)150)))))))), (max(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)1))))));
                        arr_85 [i_7] [i_22] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [9LL] [14U] [10LL])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)216))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) (unsigned char)1)) >> (((((/* implicit */int) (signed char)63)) - (34))))))) : (var_7)));
                    }
                    for (signed char i_24 = 4; i_24 < 22; i_24 += 1) 
                    {
                        var_51 += min((var_11), (((/* implicit */unsigned int) max(((~(arr_80 [(unsigned short)14] [(_Bool)1] [i_24 + 2]))), (arr_80 [i_6] [i_6] [3ULL])))));
                        var_52 = ((/* implicit */unsigned short) (-(((175904937U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_53 += ((/* implicit */int) (signed char)-27);
                    }
                    for (unsigned int i_25 = 4; i_25 < 21; i_25 += 1) 
                    {
                        arr_91 [(unsigned short)9] [i_25] [18] [i_21] [7U] [(unsigned short)9] [i_25 - 2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_39 [i_22] [i_22] [(_Bool)1])))))))));
                        arr_92 [i_6] [i_7] [i_6] [i_6] [i_22] [i_25] = ((/* implicit */unsigned short) 12059674571633101836ULL);
                        var_54 = arr_51 [i_6] [i_6 - 1] [i_6 - 1];
                    }
                    var_55 = ((/* implicit */unsigned int) (((((-((+(((/* implicit */int) arr_64 [i_6] [i_7] [i_21] [(_Bool)1] [(_Bool)1])))))) + (2147483647))) << ((((+(((/* implicit */int) (_Bool)1)))) - (1)))));
                    var_56 = ((/* implicit */short) max((min((((/* implicit */unsigned int) (short)18487)), (max((((/* implicit */unsigned int) (_Bool)1)), (1543431055U))))), (((/* implicit */unsigned int) (_Bool)1))));
                    var_57 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_86 [i_21] [i_7] [i_21] [i_6 - 2] [i_21] [i_6] [i_7]), (arr_86 [i_6] [i_7] [i_21] [i_6 + 2] [i_6] [i_6 + 2] [i_6 + 2])))) || (((((/* implicit */_Bool) arr_86 [i_6] [(signed char)21] [i_6] [i_6 - 2] [i_6 - 2] [i_21] [(signed char)20])) && (((/* implicit */_Bool) arr_86 [i_6] [i_6] [20] [i_6 - 2] [i_6 - 1] [i_21] [i_21]))))));
                }
                /* vectorizable */
                for (int i_26 = 2; i_26 < 21; i_26 += 4) 
                {
                    arr_95 [i_26] [i_26] [i_26] [(signed char)5] = (!(((/* implicit */_Bool) arr_30 [i_6 + 2] [i_6 - 1] [i_6 - 2])));
                    var_58 -= ((/* implicit */unsigned char) ((long long int) 3270975157304544858ULL));
                    arr_96 [i_6] [i_6] [i_21] [i_21] [i_7] [(unsigned short)19] &= ((/* implicit */unsigned short) 15175768916405006757ULL);
                }
                /* vectorizable */
                for (unsigned short i_27 = 0; i_27 < 24; i_27 += 4) 
                {
                    var_59 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_94 [i_6] [i_6 + 2]))));
                    var_60 = ((/* implicit */unsigned int) max((var_60), (((/* implicit */unsigned int) arr_43 [i_27] [(_Bool)1] [i_27]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_28 = 0; i_28 < 24; i_28 += 2) 
                    {
                        arr_104 [(signed char)12] [i_27] [(signed char)12] [i_7] [i_6] = ((/* implicit */int) ((((/* implicit */int) arr_31 [i_6 + 2] [i_6 + 2] [i_6 + 2])) != (8386560)));
                        var_61 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6 - 2] [23ULL] [(unsigned short)9])) ? (((/* implicit */int) arr_29 [i_6 - 2] [i_6 - 2] [i_6])) : (((/* implicit */int) arr_29 [i_6 - 2] [19U] [(short)0]))));
                    }
                    for (unsigned int i_29 = 2; i_29 < 20; i_29 += 2) 
                    {
                        var_62 = ((/* implicit */_Bool) ((short) (~(var_17))));
                        var_63 += ((/* implicit */unsigned int) ((arr_27 [i_29 - 2] [23LL]) | (((/* implicit */long long int) ((/* implicit */int) (!(arr_28 [i_6 - 2] [i_21] [(_Bool)1])))))));
                        var_64 -= ((/* implicit */int) arr_89 [(unsigned short)9] [i_6 + 2] [i_21] [i_6 + 2] [i_6 + 2]);
                    }
                    for (unsigned int i_30 = 2; i_30 < 21; i_30 += 2) 
                    {
                        arr_110 [i_6] [i_6] [i_6] [(signed char)3] [i_30 - 2] = ((/* implicit */unsigned int) var_9);
                        var_65 = ((/* implicit */short) var_6);
                        var_66 = ((/* implicit */long long int) (+(268268806)));
                    }
                    var_67 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 17059369035509911029ULL))));
                    /* LoopSeq 2 */
                    for (signed char i_31 = 0; i_31 < 24; i_31 += 2) 
                    {
                        var_68 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18487)) ? (1045605694U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1023)))));
                        arr_114 [i_31] [i_27] [i_21] [9LL] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_6 + 2] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_43 [i_6 - 2] [i_6 + 2] [i_6 + 1])) : (((/* implicit */int) arr_43 [i_6 - 1] [i_6 + 1] [i_6 - 2]))));
                        var_69 = ((/* implicit */int) 15175768916405006765ULL);
                    }
                    for (unsigned long long int i_32 = 1; i_32 < 22; i_32 += 4) 
                    {
                        arr_119 [i_6] [i_6 - 2] [i_6] [1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_100 [i_32] [i_32 + 1] [i_32] [i_32 - 1] [(unsigned char)9])) != (((/* implicit */int) arr_100 [(short)16] [5U] [(short)16] [i_32 + 1] [(short)16]))));
                        arr_120 [i_6 - 1] [i_6 - 1] [i_6] [i_27] [15ULL] [15U] [i_27] = ((/* implicit */unsigned char) 8388607);
                        var_70 += ((/* implicit */unsigned int) arr_63 [i_6] [i_6] [i_6] [i_6 - 2]);
                    }
                }
                var_71 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((min((arr_23 [i_21]), (var_12))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_56 [i_21])) <= (-1635313556)))))))));
            }
        }
        arr_121 [i_6] = ((/* implicit */int) arr_101 [i_6 + 1]);
        var_72 = ((/* implicit */short) max((((/* implicit */unsigned int) var_2)), (min((15U), (((/* implicit */unsigned int) ((int) (short)32767)))))));
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242985
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
    var_19 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_13)))) ^ (((((/* implicit */int) var_5)) << (((((var_1) + (8589075106977434906LL))) - (11LL))))))))));
    var_20 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_14))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_1 [i_0]))));
        var_21 += ((/* implicit */signed char) (_Bool)1);
        var_22 = ((/* implicit */unsigned int) min((7844043509659807140LL), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1 + 1]))));
        var_23 += ((/* implicit */signed char) ((unsigned short) var_10));
    }
    for (long long int i_2 = 2; i_2 < 22; i_2 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), ((unsigned short)26719)));
        var_25 &= ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_18)) < (((/* implicit */int) (short)30158)))))) * (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_8 [i_2 + 1])))))));
    }
    for (long long int i_3 = 2; i_3 < 22; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
        {
            var_26 &= ((/* implicit */unsigned char) 13820075231572725705ULL);
            arr_13 [(_Bool)1] [i_4] [i_3 + 2] &= ((35184372023296LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_7 [0] [i_3 + 1]))));
            var_27 ^= ((/* implicit */_Bool) arr_9 [i_3 + 2]);
            var_28 = ((/* implicit */_Bool) ((int) arr_4 [i_3 + 2]));
            var_29 = ((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_3 - 2]))));
        }
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            arr_16 [(_Bool)1] [i_5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3 - 2])) & ((+(((/* implicit */int) var_14))))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                var_30 = arr_11 [i_6 - 1];
                var_31 ^= ((/* implicit */signed char) ((unsigned long long int) arr_14 [i_5]));
            }
            for (unsigned long long int i_7 = 3; i_7 < 23; i_7 += 3) 
            {
                arr_23 [(_Bool)0] [i_5] [i_5] = ((/* implicit */unsigned long long int) (~(-1996680630732763092LL)));
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 1]))))))));
                /* LoopSeq 3 */
                for (int i_8 = 2; i_8 < 22; i_8 += 3) /* same iter space */
                {
                    arr_28 [i_3] [(unsigned short)13] [i_7 - 3] [i_8 - 2] [i_8] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (short)27927)) : (((/* implicit */int) arr_1 [i_3 + 2]))));
                    arr_29 [i_8] = arr_18 [i_8] [i_8];
                }
                for (int i_9 = 2; i_9 < 22; i_9 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (+(((/* implicit */int) arr_19 [i_7 - 2] [i_3 + 1] [i_9 + 1])))))));
                    arr_33 [i_3] [i_3] [i_3] [i_9] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [(_Bool)1] [i_3 - 2] [i_9 - 1] [i_7 - 2]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 4; i_10 < 21; i_10 += 3) /* same iter space */
                    {
                        arr_38 [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_12 [i_3 + 2] [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_30 [i_3])))));
                        var_34 += ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_3 + 2] [i_3 + 2] [i_3 + 2])) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (_Bool)0))));
                        var_35 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_3] [(unsigned short)11] [(short)14]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [i_5]))) | (-1LL)))));
                        var_36 += ((/* implicit */unsigned short) (+(70368744177663LL)));
                    }
                    for (unsigned short i_11 = 4; i_11 < 21; i_11 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7 - 1]))) <= (arr_21 [i_3 + 2]))))));
                        var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) 715236546U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_15 [i_3] [i_3 + 2] [i_3 + 1])))));
                        var_39 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_11 - 3] [i_5] [i_7] [i_9] [i_7])) ? (((/* implicit */int) arr_34 [i_11 + 2] [i_11 + 2] [(unsigned short)11] [i_9] [i_11])) : (((/* implicit */int) arr_34 [i_11 - 1] [(unsigned short)21] [i_7] [i_9 + 1] [i_11 - 2]))));
                    }
                }
                for (int i_12 = 2; i_12 < 22; i_12 += 3) /* same iter space */
                {
                    arr_45 [i_3 - 1] [i_5] [i_7] [i_12] [i_5] = ((long long int) arr_22 [(signed char)20] [i_7 - 2] [i_12]);
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8161))) : (2794982931U)));
                    arr_46 [i_3] [(unsigned short)13] [i_3 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_26 [(unsigned short)10] [i_5] [(unsigned short)10] [i_12 + 2]));
                    arr_47 [(_Bool)1] [(_Bool)1] [i_7] [i_7] [i_7] &= (+(((/* implicit */int) (signed char)(-127 - 1))));
                    arr_48 [i_3] [i_5] [i_3] [i_12 - 1] [i_5] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_39 [i_3 - 2]))));
                }
                arr_49 [i_3] [i_5] [i_7] &= ((/* implicit */long long int) ((unsigned short) arr_35 [i_3] [i_5] [i_7 - 2] [i_3 - 2] [i_7] [i_7] [i_3]));
            }
            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (((((~(arr_41 [14] [i_3] [i_3] [i_5] [i_5]))) + (9223372036854775807LL))) << (((arr_17 [i_3] [i_3] [i_3]) - (808932994))))))));
            /* LoopSeq 2 */
            for (long long int i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
            {
                arr_52 [i_3] [i_5] [i_13] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) -150051926)) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) var_14))));
                var_42 *= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_13))) / ((-(((/* implicit */int) arr_42 [i_3] [i_3] [i_3 + 2] [i_3]))))));
                arr_53 [i_3] [i_3] [i_13] = (_Bool)0;
            }
            for (long long int i_14 = 0; i_14 < 24; i_14 += 4) /* same iter space */
            {
                var_43 ^= ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_15)))));
                arr_58 [i_14] [(signed char)9] [i_5] [i_3 - 1] = ((/* implicit */unsigned char) arr_14 [i_3]);
            }
        }
        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
        {
            var_44 -= ((/* implicit */unsigned short) max((min(((+(0ULL))), (((/* implicit */unsigned long long int) 1143418010)))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_55 [4LL] [i_15] [i_15] [i_15])) != (((/* implicit */int) (unsigned char)71)))) ? (((/* implicit */int) ((unsigned short) arr_11 [(unsigned char)14]))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)33880)))))))));
            var_45 ^= ((/* implicit */int) (+(((((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) arr_40 [(unsigned short)7] [(_Bool)1] [2ULL] [(unsigned short)7] [(unsigned char)16] [(signed char)1] [i_15])))) ? (arr_21 [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
            arr_63 [i_3] [(short)13] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), ((_Bool)0))))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2807))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (18446462598732840960ULL)))))));
            var_46 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_3 + 2] [i_3 + 2]))));
        }
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 4) 
                    {
                        for (int i_19 = 0; i_19 < 24; i_19 += 3) 
                        {
                            {
                                var_47 &= ((/* implicit */unsigned char) (((_Bool)0) ? ((+(((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0)))))) : ((+(((/* implicit */int) arr_35 [14LL] [14LL] [i_18] [i_17] [i_16] [i_3] [i_3]))))));
                                var_48 = ((/* implicit */signed char) var_1);
                            }
                        } 
                    } 
                    arr_73 [i_3] [(short)3] [i_3 - 1] &= ((short) (+(((/* implicit */int) min(((signed char)-13), ((signed char)-1))))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 2) 
    {
        arr_77 [i_20] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)51889)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 4 */
        for (int i_21 = 0; i_21 < 20; i_21 += 2) 
        {
            var_49 = ((/* implicit */unsigned char) var_12);
            var_50 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_40 [(unsigned char)3] [i_20] [i_20] [i_21] [(signed char)3] [(_Bool)1] [i_21]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_23 = 0; i_23 < 20; i_23 += 3) 
                {
                    arr_85 [i_20] [18] [i_23] [i_20] [12] [10] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
                    var_51 = ((/* implicit */signed char) arr_15 [i_23] [i_22] [i_20]);
                    var_52 = ((/* implicit */long long int) ((arr_27 [i_21] [i_22] [i_23]) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) var_4))));
                    arr_86 [i_23] [i_22] = ((/* implicit */signed char) -1399456922);
                    var_53 += ((/* implicit */unsigned int) ((short) arr_19 [i_21] [i_22] [i_23]));
                }
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 20; i_24 += 4) 
                {
                    for (unsigned char i_25 = 0; i_25 < 20; i_25 += 4) 
                    {
                        {
                            var_54 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)218)))))));
                            arr_93 [i_24] &= ((/* implicit */short) (signed char)64);
                            var_55 = ((/* implicit */signed char) arr_82 [i_20] [i_22] [i_24] [i_25]);
                            var_56 += ((/* implicit */short) var_0);
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) /* same iter space */
                    {
                        arr_99 [i_20] [(unsigned char)0] [i_26] = ((/* implicit */short) (+(((/* implicit */int) var_14))));
                        var_57 = ((((/* implicit */int) (_Bool)0)) ^ ((~(((/* implicit */int) var_16)))));
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        var_58 = ((arr_22 [i_20] [i_21] [i_22]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        arr_103 [i_20] [i_26] [i_26] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (short)15874))));
                        var_59 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_98 [i_20] [i_26] [i_20]))));
                        var_60 = ((/* implicit */_Bool) min((var_60), (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) <= ((+(16ULL)))))));
                    }
                    var_61 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-3525))))) ? (11784111908574741192ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)44615))))));
                    var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_102 [(_Bool)1]))))) ^ (((unsigned long long int) (unsigned char)218)))))));
                }
                for (unsigned short i_29 = 0; i_29 < 20; i_29 += 3) /* same iter space */
                {
                    var_63 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)255))));
                    arr_106 [i_29] [i_21] [(unsigned short)14] [i_21] [i_21] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_82 [i_20] [i_21] [i_20] [i_29])) / (3670575823025864624LL)));
                    arr_107 [i_20] [i_20] [i_29] [i_29] [i_29] [i_29] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) (unsigned char)176))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_30 = 2; i_30 < 18; i_30 += 4) 
                    {
                        var_64 ^= ((/* implicit */unsigned short) arr_64 [i_20] [i_20]);
                        var_65 = ((/* implicit */unsigned short) arr_55 [i_20] [(signed char)8] [15ULL] [(unsigned char)14]);
                        var_66 = ((/* implicit */unsigned long long int) max((var_66), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                        var_67 ^= ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_34 [i_20] [i_30 - 2] [i_30 - 2] [i_30 - 2] [i_30 - 2])));
                        var_68 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) 0U)) < (-1LL)));
                    }
                }
                for (unsigned short i_31 = 0; i_31 < 20; i_31 += 3) /* same iter space */
                {
                    var_69 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_90 [i_20] [i_20] [i_20]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_98 [i_21] [i_22] [i_31]))))))));
                    arr_114 [i_20] [i_20] [i_20] [(_Bool)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                    arr_115 [i_31] [i_22] [(signed char)3] [(unsigned short)0] = ((/* implicit */_Bool) (short)511);
                    var_70 ^= ((((((/* implicit */int) (_Bool)1)) >> (((-879083426) + (879083441))))) > (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))));
                    var_71 += ((/* implicit */_Bool) arr_109 [i_20] [i_20] [i_20] [i_20] [(_Bool)1]);
                }
                for (unsigned short i_32 = 0; i_32 < 20; i_32 += 3) /* same iter space */
                {
                    arr_118 [1LL] [(short)17] [i_22] [(short)6] = ((/* implicit */short) (-(((((/* implicit */int) var_5)) + (arr_17 [i_21] [i_21] [i_32])))));
                    var_72 = ((/* implicit */unsigned char) (+((+(985162418487296ULL)))));
                    arr_119 [i_20] [14ULL] = (+(arr_40 [(signed char)9] [i_21] [(signed char)9] [i_32] [i_21] [(unsigned char)13] [(unsigned char)8]));
                    arr_120 [i_20] [i_21] [i_20] [14ULL] [i_22] [i_32] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_20] [i_22]))) & (18446744073709551615ULL)))));
                }
                var_73 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_20])) - (((/* implicit */int) arr_9 [i_21])))) % (((/* implicit */int) arr_0 [i_20]))));
            }
        }
        for (signed char i_33 = 2; i_33 < 16; i_33 += 2) /* same iter space */
        {
            var_74 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_69 [i_33 + 3] [i_33] [i_33])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_94 [i_20] [i_20] [i_33 - 2] [i_33] [i_20]))) : (arr_50 [i_33 - 2] [i_33] [i_33 + 1] [i_33 + 4]))), (((/* implicit */unsigned long long int) arr_40 [i_20] [(_Bool)1] [i_20] [i_20] [i_20] [i_20] [i_20]))));
            var_75 = ((/* implicit */unsigned long long int) max((var_75), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_5)))) / ((+(((/* implicit */int) var_4)))))))));
            var_76 = ((/* implicit */_Bool) arr_26 [i_20] [i_33] [i_20] [(_Bool)1]);
        }
        for (signed char i_34 = 2; i_34 < 16; i_34 += 2) /* same iter space */
        {
            arr_126 [(unsigned char)6] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_67 [i_34 - 2] [(_Bool)1] [(_Bool)1]))))), (((arr_89 [i_20] [0] [i_20] [i_20] [i_20] [i_20]) >> (((((((/* implicit */_Bool) arr_105 [(unsigned short)12] [i_34 + 3] [i_20] [i_20])) ? (((/* implicit */long long int) arr_75 [i_20])) : (-1266798656736290188LL))) - (1982707536LL)))))));
            arr_127 [i_20] [i_20] [11ULL] = ((/* implicit */unsigned short) (+((+(4428073421877746461LL)))));
        }
        /* vectorizable */
        for (signed char i_35 = 2; i_35 < 16; i_35 += 2) /* same iter space */
        {
            arr_130 [(_Bool)1] [6ULL] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_97 [i_35] [10ULL] [10ULL] [i_20] [i_35 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (arr_80 [i_20] [i_20] [i_20]))))) : (arr_22 [i_20] [i_35] [i_35 - 2])));
            arr_131 [i_20] [i_35 + 3] [i_35 - 2] = ((/* implicit */short) ((((var_0) % (((/* implicit */long long int) ((/* implicit */int) var_10))))) == (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_20] [i_35 - 1])))));
        }
        var_77 = ((/* implicit */unsigned char) var_1);
        var_78 ^= ((/* implicit */short) 0ULL);
    }
    var_79 = ((/* implicit */signed char) 1922092422);
}

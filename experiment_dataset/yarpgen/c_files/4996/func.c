/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4996
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((unsigned long long int) max(((unsigned short)48408), (arr_4 [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_21 = (_Bool)1;
                                var_22 += ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (signed char)-74))))))));
                                var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((arr_7 [i_0] [i_2 + 2]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (arr_8 [i_3] [i_1] [i_1])))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)2)) << (((((/* implicit */int) ((unsigned char) arr_14 [i_0 + 1] [i_1] [i_2] [i_2 + 1] [i_2] [i_1] [i_0 + 1]))) - (85))))))));
                                var_25 += (-(((/* implicit */int) ((unsigned char) (unsigned char)248))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_8))));
    var_27 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) arr_24 [i_5] [i_6] [i_7]))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (var_2)));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(8859816362128390862LL)))) && (((/* implicit */_Bool) var_13))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            var_31 &= ((/* implicit */unsigned char) ((arr_17 [i_6 + 3]) % (arr_17 [i_6 - 1])));
                            var_32 += ((/* implicit */_Bool) (~(((var_18) << (((arr_12 [i_10]) - (3852636712116990636LL)))))));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_6])) & (((((/* implicit */_Bool) arr_20 [i_5 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))));
                            var_34 = ((/* implicit */unsigned int) ((((int) var_12)) >= (((/* implicit */int) (!(((/* implicit */_Bool) 1235986234)))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_35 = ((/* implicit */int) ((signed char) (_Bool)1));
                            var_36 += ((/* implicit */int) ((signed char) var_9));
                            var_37 = ((/* implicit */unsigned short) var_11);
                        }
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6 + 2] [i_6] [i_6])) ? (((/* implicit */int) arr_33 [i_5] [i_5] [i_6] [i_5 - 2] [i_6 + 1])) : (((/* implicit */int) var_0))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        var_39 |= ((/* implicit */unsigned int) (unsigned char)2);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 4) 
                        {
                            var_40 = ((/* implicit */int) ((var_18) - (((/* implicit */unsigned long long int) arr_19 [i_12 + 1]))));
                            var_41 += ((/* implicit */signed char) var_12);
                            var_42 &= ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) arr_28 [i_5] [i_6] [i_7] [i_7])) : (3206781879U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5 + 2]))));
                            var_43 = ((/* implicit */unsigned int) ((9199628964903301495ULL) + (13105591394770708911ULL)));
                        }
                        for (signed char i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            var_44 |= ((unsigned long long int) (!(((/* implicit */_Bool) 1731379398))));
                            var_45 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)26009)) >> (((((/* implicit */int) (unsigned short)15619)) - (15605)))));
                        }
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)1)) - (((/* implicit */int) (signed char)32))));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) arr_25 [i_5] [i_6] [i_6] [i_12])) : (arr_5 [i_5 + 2])))) & (((unsigned long long int) arr_17 [i_5]))));
                    }
                    var_48 -= ((/* implicit */unsigned int) arr_33 [i_5] [i_5] [i_7] [i_6] [i_7]);
                }
            } 
        } 
        var_49 = (+(((((/* implicit */_Bool) arr_3 [i_5])) ? (arr_7 [(unsigned char)12] [i_5 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
        var_50 = (-(((/* implicit */int) (_Bool)1)));
        var_51 = (signed char)-95;
    }
    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
    {
        var_52 -= ((/* implicit */signed char) 15505457802481589706ULL);
        var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) max((1235986234), (((/* implicit */int) (unsigned short)46663))))) != (var_6)))) * (((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) (-(((((((/* implicit */int) (signed char)-46)) + (2147483647))) << ((((((-(((/* implicit */int) arr_4 [(unsigned char)8])))) + (30926))) - (20))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                var_55 = ((/* implicit */unsigned int) (unsigned char)8);
                var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) arr_7 [i_17] [i_17]))));
            }
            for (unsigned short i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                var_57 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)224))));
                /* LoopSeq 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_58 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((short) (_Bool)1))), (((unsigned short) arr_46 [i_15] [i_16]))));
                    var_59 = ((/* implicit */unsigned int) arr_14 [i_15] [i_15] [i_16] [i_18] [i_18] [i_19] [i_19]);
                }
                for (unsigned int i_20 = 0; i_20 < 15; i_20 += 4) 
                {
                    var_60 = ((unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)226)), (8128))))));
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 15; i_21 += 3) 
                    {
                        var_61 = ((/* implicit */unsigned char) ((unsigned long long int) var_6));
                        var_62 += ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)19)) + (((/* implicit */int) ((signed char) arr_1 [i_15] [i_20]))))), (((/* implicit */int) (unsigned short)5825))));
                        var_63 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_20] [i_20]))))) ? (max((arr_2 [i_20]), (((/* implicit */long long int) arr_62 [i_15] [i_16] [i_16] [i_18] [i_20] [i_21])))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_15])))));
                    }
                    var_64 = ((/* implicit */signed char) arr_7 [i_15] [i_16]);
                }
                var_65 = ((/* implicit */signed char) 4U);
            }
            /* vectorizable */
            for (unsigned int i_22 = 2; i_22 < 14; i_22 += 4) 
            {
                var_66 += ((/* implicit */_Bool) var_17);
                var_67 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_22 - 1] [i_22] [i_22 - 1] [i_22] [i_22 - 1] [i_22] [i_22]))) >= (((unsigned long long int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 3) 
                {
                    for (unsigned short i_24 = 0; i_24 < 15; i_24 += 4) 
                    {
                        {
                            var_68 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) % ((~(var_13)))));
                            var_69 = ((/* implicit */unsigned char) (-(arr_54 [i_22 - 2])));
                            var_70 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_18))));
                        }
                    } 
                } 
            }
            var_71 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_54 [i_16])))) * (max((var_2), (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))))));
            var_72 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_51 [i_15] [i_15] [i_16] [i_16]), (((/* implicit */int) arr_14 [i_15] [i_15] [i_16] [i_16] [i_15] [i_16] [i_16]))))) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (short)-220)))), (max((((/* implicit */int) max((((/* implicit */unsigned char) arr_67 [i_15] [i_15])), ((unsigned char)228)))), (((((/* implicit */int) (_Bool)1)) << (((arr_12 [i_15]) - (3852636712116990649LL)))))))));
            var_73 = ((/* implicit */signed char) arr_50 [i_15]);
        }
        /* vectorizable */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            var_74 = ((/* implicit */unsigned short) ((short) (unsigned short)28672));
            var_75 = ((((/* implicit */_Bool) arr_55 [i_15] [i_15] [i_15])) || (((/* implicit */_Bool) arr_55 [i_15] [i_15] [i_15])));
            /* LoopSeq 2 */
            for (unsigned int i_26 = 3; i_26 < 13; i_26 += 4) 
            {
                var_76 *= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_8 [i_15] [i_25] [i_26]))));
                var_77 = ((/* implicit */signed char) max((var_77), ((signed char)-2)));
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                var_78 = ((/* implicit */unsigned long long int) arr_6 [i_15] [i_15]);
                var_79 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_66 [i_15] [i_27]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) - (arr_65 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))));
                /* LoopNest 2 */
                for (int i_28 = 0; i_28 < 15; i_28 += 1) 
                {
                    for (unsigned int i_29 = 1; i_29 < 14; i_29 += 1) 
                    {
                        {
                            var_80 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4294967295U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_15]))))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13529)))));
                            var_81 = ((/* implicit */_Bool) ((unsigned int) arr_48 [i_27] [i_29 + 1] [i_27]));
                            var_82 = ((/* implicit */int) var_18);
                        }
                    } 
                } 
                var_83 = ((/* implicit */signed char) (-(arr_65 [i_15] [i_25] [i_25] [i_25] [i_25] [i_27] [i_25])));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_30 = 0; i_30 < 15; i_30 += 1) 
            {
                for (unsigned short i_31 = 0; i_31 < 15; i_31 += 4) 
                {
                    for (unsigned int i_32 = 0; i_32 < 15; i_32 += 3) 
                    {
                        {
                            var_84 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) & (arr_54 [i_15])));
                            var_85 = ((/* implicit */unsigned int) max((var_85), (var_8)));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
        {
            var_86 = ((/* implicit */signed char) max((var_86), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_46 [(signed char)4] [i_33])), ((unsigned short)58398)))) ? (max((((/* implicit */unsigned int) arr_3 [i_15])), (arr_16 [i_15] [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */unsigned long long int) 17U)) - (2ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) var_1))), (max((((/* implicit */unsigned short) (unsigned char)30)), (var_12))))))))))));
            var_87 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)3413)) : (-2023981157)))))), (12234595238360707903ULL)));
        }
        var_88 = ((/* implicit */int) 4294967285U);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222769
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
    var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((int) 4042013411U))) ? (((((/* implicit */_Bool) var_19)) ? (4042013411U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) <= (((/* implicit */int) (_Bool)0))))))))));
    var_21 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0 - 2] [i_0 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_0]), (((/* implicit */unsigned int) (unsigned char)255))))) ? (min((arr_1 [i_0 + 1] [i_0 - 1]), (arr_1 [i_0 - 2] [i_0 - 1]))) : ((((_Bool)1) ? (4042013411U) : (arr_1 [i_0 - 2] [i_0 + 1])))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_16))))), ((-(252953884U)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2550274630U)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23734)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (var_10)))) : (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) var_14))) / (((/* implicit */int) ((unsigned char) (unsigned short)22099)))))) < (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_13) : (((/* implicit */unsigned long long int) -1606045736)))) << (((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_13))) - (89937976ULL)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            arr_6 [i_1] [i_1] [3LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((4042013411U), (((/* implicit */unsigned int) arr_4 [i_1] [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_1 + 2] [i_1 + 2])) - (-1LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1])))))) : ((~(arr_5 [i_1]))))))));
            var_23 ^= ((/* implicit */long long int) (+(((/* implicit */int) max((arr_4 [i_0] [i_1 + 3]), (((/* implicit */unsigned short) (short)-5866)))))));
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 350291548U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) != (var_19))))) : ((+(arr_1 [i_0] [i_0])))))), (min((((/* implicit */unsigned long long int) ((_Bool) var_17))), (((((/* implicit */_Bool) 4239235564U)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31106))))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned char) arr_0 [i_1 + 1] [i_0 - 2])))));
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_1))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) arr_0 [i_0 - 2] [i_1 - 2]))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 2) 
                    {
                        var_28 = ((((/* implicit */_Bool) arr_10 [i_4 + 1] [i_4] [i_4] [i_1] [i_4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_2] [i_1])))))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_0] [i_3] [i_4 - 1] [i_1] [i_1])) ? (3893265125201113674LL) : (((/* implicit */long long int) var_0)))));
                        arr_13 [i_1] [i_3] [i_2] [i_1 - 3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-28552)) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) arr_7 [8] [i_0] [(short)8] [8])))) : (((int) var_7))));
                    }
                    for (signed char i_5 = 4; i_5 < 10; i_5 += 3) /* same iter space */
                    {
                        var_29 |= ((/* implicit */long long int) (-(4239235572U)));
                        arr_17 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2] [i_1] = ((/* implicit */unsigned short) ((arr_9 [i_3] [i_3] [i_3 - 3]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [i_1] [i_1]))));
                    }
                    for (signed char i_6 = 4; i_6 < 10; i_6 += 3) /* same iter space */
                    {
                        var_30 += ((/* implicit */_Bool) ((unsigned char) arr_8 [i_3 - 2] [i_1 - 2] [i_6] [i_0]));
                        arr_20 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_6] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13732))) : (arr_5 [i_1]))) << ((((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_1])))) + (3)))));
                    }
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (arr_1 [i_1] [i_1 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)4] [i_2] [i_2])) ? (var_2) : (((/* implicit */int) (short)5866)))))));
                }
                arr_21 [(unsigned short)5] [i_1] [i_1] = ((/* implicit */short) ((long long int) arr_14 [i_0 - 1] [i_1] [i_1] [i_1 - 2] [i_1 - 3] [(unsigned short)1]));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_24 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_1 - 3] [i_1])) >= (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 1] [i_1]))));
                    arr_25 [i_7] [(unsigned char)8] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-5872)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)5866)) && ((_Bool)0))))));
                }
            }
        }
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) var_11)))))) & (((/* implicit */int) ((min((var_3), (((/* implicit */unsigned int) (_Bool)1)))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [(short)6] [i_0]))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        arr_28 [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)25)), (var_18)))) ? (arr_26 [i_8]) : (((/* implicit */int) ((short) 127U)))));
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                var_33 = ((/* implicit */unsigned char) var_10);
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (~(var_14))))));
                var_35 ^= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    var_36 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_10]))) + ((-9223372036854775807LL - 1LL)))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        var_37 += ((/* implicit */signed char) (+(((/* implicit */int) arr_38 [i_8] [i_9] [i_8] [i_9] [i_8] [i_10] [i_11]))));
                        var_38 += ((/* implicit */_Bool) ((((long long int) arr_31 [i_8] [i_8])) ^ (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11] [i_10])))));
                    }
                    arr_40 [5U] [i_9] [i_9] [i_11] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) 549999872U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9]))) : (((((/* implicit */_Bool) arr_27 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (3530116850794229744LL)))));
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (short)-23734))));
                }
                for (unsigned int i_13 = 3; i_13 < 15; i_13 += 4) 
                {
                    arr_44 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_8]))));
                    var_40 ^= ((/* implicit */unsigned short) ((unsigned long long int) 2601314206U));
                }
            }
            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                arr_47 [i_9] = (i_9 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) arr_35 [i_8] [i_8] [i_9] [i_14] [i_14])) << (((((((/* implicit */int) ((unsigned char) arr_43 [i_9]))) & (((/* implicit */int) ((unsigned char) arr_26 [i_14]))))) - (47)))))) : (((/* implicit */short) ((((/* implicit */int) arr_35 [i_8] [i_8] [i_9] [i_14] [i_14])) << (((((((((/* implicit */int) ((unsigned char) arr_43 [i_9]))) & (((/* implicit */int) ((unsigned char) arr_26 [i_14]))))) - (47))) + (67))))));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        var_41 ^= ((/* implicit */signed char) ((min((min((arr_29 [i_16]), (((/* implicit */unsigned long long int) 2601314206U)))), (7111339432510380373ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)220)), (98924082)))) ? (((3744967423U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)23734))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))))))));
                        var_42 = ((/* implicit */unsigned long long int) var_11);
                        arr_53 [i_9] = ((/* implicit */unsigned long long int) 6372298660299258042LL);
                        arr_54 [i_16] [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned short) max((arr_39 [i_8] [i_16] [i_16] [i_16] [(short)12] [4]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [(_Bool)1] [i_9] [i_16] [(_Bool)1] [i_16] [i_9]))))) * (((/* implicit */int) ((unsigned char) var_19))))))));
                    }
                    for (unsigned long long int i_17 = 2; i_17 < 14; i_17 += 4) 
                    {
                        arr_58 [i_8] [i_15] |= ((/* implicit */int) max((((unsigned int) (+(((/* implicit */int) var_11))))), (((/* implicit */unsigned int) min((arr_45 [i_15] [(unsigned short)9] [(unsigned short)9]), ((+(((/* implicit */int) var_8)))))))));
                        var_43 = ((/* implicit */int) min((var_43), ((+(((((/* implicit */int) arr_49 [i_17] [i_17 - 1] [i_17] [i_17 - 2])) * (((/* implicit */int) arr_49 [i_17] [i_17 + 1] [i_17 - 2] [i_17 + 1]))))))));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 1) 
                    {
                        arr_62 [i_8] [i_9] [i_14] [i_15] [i_18] = (i_9 % 2 == 0) ? (((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */int) arr_38 [i_8] [i_9] [i_9] [i_9] [i_14] [i_9] [i_18])) + (2147483647))) >> (((((/* implicit */int) arr_59 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) + (9610))))))) : (((/* implicit */unsigned int) ((unsigned char) ((((((/* implicit */int) arr_38 [i_8] [i_9] [i_9] [i_9] [i_14] [i_9] [i_18])) + (2147483647))) >> (((((((/* implicit */int) arr_59 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) + (9610))) - (41679)))))));
                        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) max((((/* implicit */signed char) (_Bool)1)), (var_16))))) ? (min((arr_39 [i_8] [i_9] [i_9] [i_15] [i_18] [i_8]), (arr_39 [i_8] [i_9] [i_9] [i_8] [i_18] [i_9]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5866)) ? ((+(arr_45 [i_18] [i_18] [i_18]))) : (((/* implicit */int) arr_30 [i_9] [i_9])))))));
                        arr_63 [0ULL] [i_9] [i_9] = ((/* implicit */unsigned char) arr_60 [i_18] [i_14] [i_14] [i_9] [i_9] [(unsigned short)9]);
                        var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((int) var_13)) % (arr_45 [i_9] [i_15] [i_18])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (signed char)104))) ? (((/* implicit */int) (short)23746)) : (((int) (short)19672))))) : (((((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (268435455LL))) << (((/* implicit */int) arr_27 [i_8]))))));
                    }
                    var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_15] [(short)10]))) != (arr_31 [i_9] [i_15])))) >= (((/* implicit */int) arr_37 [i_15])))))));
                    var_47 = var_19;
                    arr_64 [(signed char)9] [i_8] [14U] [(signed char)6] [(short)14] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_55 [i_8] [i_8] [i_8] [i_8] [i_8]))) * (((((/* implicit */int) (short)-19672)) & (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)182)), (min((arr_57 [i_8] [i_8] [4LL] [i_15] [8] [i_15] [i_9]), (arr_30 [i_9] [i_8])))))) : (((((/* implicit */_Bool) ((3744967424U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) (short)-23734)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_30 [i_9] [i_15])) : (((/* implicit */int) arr_51 [i_9] [i_14] [i_9] [i_9] [i_9] [i_8]))))))));
                }
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 16; i_19 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 4; i_20 < 14; i_20 += 3) 
                    {
                        arr_71 [i_8] [i_9] [i_14] [i_9] [i_20 - 4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-2947)) ? ((~(((/* implicit */int) arr_70 [13U] [i_9] [i_14] [13U])))) : (((/* implicit */int) (signed char)-105))))));
                        arr_72 [i_9] [i_9] [1LL] [i_9] [i_20 - 1] = ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (unsigned short)64591)))));
                        var_48 ^= ((/* implicit */int) min((((unsigned long long int) ((((/* implicit */_Bool) 549999858U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_50 [(_Bool)1] [i_9] [i_14] [i_19] [i_14])))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_14]))) : (3LL)))))));
                    }
                    arr_73 [i_9] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_52 [i_8] [i_8] [i_14] [i_8] [i_8]))))), (min((var_3), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14023)) >= (((/* implicit */int) (short)23733)))))))));
                    var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)50)) != (((/* implicit */int) arr_70 [i_8] [(_Bool)1] [(_Bool)1] [(_Bool)1]))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_19] [i_9] [i_9] [i_9] [i_8]))) == (-8959852817993940916LL)))))))));
                }
                var_50 ^= ((/* implicit */signed char) -326754051);
            }
            arr_74 [i_9] = ((/* implicit */unsigned char) 3744967414U);
            var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (arr_60 [i_8] [i_8] [i_8] [i_8] [(short)14] [i_8])))), (arr_39 [i_8] [i_9] [(short)12] [i_9] [i_8] [i_8])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_9] [i_8] [11LL] [i_9] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [11U] [11U] [11U] [i_8] [12] [i_9] [i_9]))) : (var_13)))))))));
            var_52 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 549999900U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8571))) : (14293302059184758259ULL))))) ? (((max((((/* implicit */unsigned long long int) arr_70 [i_8] [(unsigned char)10] [i_9] [i_9])), (18446744073709551597ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)23733))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8959852817993940916LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] [i_9] [i_9]))) : (min((((/* implicit */unsigned int) var_2)), (4294967295U))))))));
        }
        for (int i_21 = 3; i_21 < 14; i_21 += 1) 
        {
            var_53 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_3)) : (-1LL)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-23741)) : (((/* implicit */int) var_4))))) : (var_1)))));
            var_54 = ((/* implicit */unsigned long long int) min((var_54), (min((((((((/* implicit */int) (short)23733)) < (((/* implicit */int) (short)23745)))) ? (((/* implicit */unsigned long long int) (+(arr_67 [2ULL] [i_8] [i_8] [2ULL])))) : (((unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) var_7))))));
        }
        var_55 = ((/* implicit */_Bool) var_8);
        arr_78 [i_8] [i_8] = ((/* implicit */long long int) min(((+(arr_67 [i_8] [i_8] [i_8] [(signed char)14]))), (((var_3) ^ (arr_67 [i_8] [i_8] [i_8] [2U])))));
    }
    var_56 = ((/* implicit */long long int) ((short) ((short) ((_Bool) 956299142742095186LL))));
}

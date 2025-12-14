/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196354
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) arr_0 [i_0] [(_Bool)1]);
        var_20 ^= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_1 [i_0] [i_0])))) | (((/* implicit */int) (unsigned short)65524))));
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (0)))) == (1407871182501491872ULL)))) >> (((4095ULL) - (4090ULL)))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_22 += (short)1016;
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                var_23 ^= (short)(-32767 - 1);
                var_24 = ((/* implicit */_Bool) ((((min((arr_5 [i_0] [3U]), (((/* implicit */unsigned long long int) var_14)))) | ((~(18142884498355845726ULL))))) * (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 10670455305674693427ULL)) && (((/* implicit */_Bool) (short)32765))))))) % (arr_4 [i_0])));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) > (303859575353705878ULL)))) | (arr_7 [6] [i_2]))) - (arr_2 [i_1] [(short)8]))))));
            }
        }
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_27 = ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                var_28 ^= ((/* implicit */_Bool) (-(((arr_6 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                arr_16 [i_3] = ((/* implicit */unsigned short) (unsigned char)255);
                arr_17 [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_0] [i_5] [i_5]);
                arr_18 [i_0] [i_0] |= ((/* implicit */unsigned char) arr_9 [i_3 - 1]);
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 10; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        {
                            arr_24 [i_3] [i_3] = ((/* implicit */unsigned int) (-(12776576923512800557ULL)));
                            arr_25 [i_0] [i_3] [i_5 - 1] [i_3] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_7)) * (18142884498355845726ULL))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_6] [5ULL] [i_0])))))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (unsigned short i_9 = 2; i_9 < 10; i_9 += 1) 
                {
                    for (int i_10 = 1; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_29 *= ((/* implicit */short) arr_0 [i_9] [i_3]);
                            var_30 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16128))) ^ (var_11)));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_0]))) & (((11915812215369923703ULL) >> (((var_8) + (8983488257884234559LL)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (short i_12 = 2; i_12 < 8; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 1; i_14 < 8; i_14 += 4) 
                        {
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (short)-17899))));
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                        }
                        for (unsigned short i_15 = 1; i_15 < 8; i_15 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) (short)32738);
                            arr_48 [i_0] [10] [i_0] [i_12 + 2] [i_13] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_46 [i_0] [i_12 - 2] [i_12 - 2] [i_15 - 1] [i_0] [i_0])))));
                        }
                        var_35 += ((/* implicit */unsigned short) (short)18768);
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) 4136702766U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (var_18))))))));
                        var_37 += ((/* implicit */_Bool) arr_47 [i_0] [i_11] [i_0] [i_0] [i_13]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_54 [i_0] |= ((/* implicit */unsigned int) var_10);
                        var_38 += ((/* implicit */unsigned short) ((unsigned int) var_2));
                        arr_55 [i_0] [6LL] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_17] [i_0] [6ULL] [i_0] [i_0]))) % (((((/* implicit */_Bool) (short)-32742)) ? (((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_11] [i_0] [i_16] [i_0])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 1) 
                        {
                            arr_58 [i_17] [(unsigned short)2] [i_11 + 1] [i_0] = ((/* implicit */_Bool) (-(((unsigned int) 4238290793U))));
                            arr_59 [i_0] [i_0] [i_11] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */int) arr_52 [i_0] [i_11] [i_16] [i_16]);
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) var_18))));
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-32763))))) || (((/* implicit */_Bool) ((int) arr_27 [2ULL] [i_17])))));
                        }
                    }
                } 
            } 
            arr_60 [i_0] [i_0] [i_0] = ((/* implicit */int) var_0);
            arr_61 [i_11] &= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(unsigned short)8] [i_0] [i_0] [(unsigned short)8]))))) << (((/* implicit */int) ((744147558U) == (min((arr_6 [i_11]), (arr_20 [i_0] [i_11] [i_11] [i_11] [i_0]))))))));
        }
        arr_62 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) arr_35 [i_0] [i_0])), ((short)(-32767 - 1))))), ((~(((/* implicit */int) (short)32767))))));
    }
    for (short i_19 = 2; i_19 < 16; i_19 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_20 = 0; i_20 < 17; i_20 += 4) 
        {
            var_41 ^= ((/* implicit */unsigned int) (-(((min((((/* implicit */unsigned long long int) var_18)), (11833464953620540542ULL))) & (var_11)))));
            /* LoopNest 3 */
            for (int i_21 = 0; i_21 < 17; i_21 += 1) 
            {
                for (int i_22 = 4; i_22 < 15; i_22 += 4) 
                {
                    for (short i_23 = 0; i_23 < 17; i_23 += 4) 
                    {
                        {
                            var_42 ^= min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_75 [i_19 - 1] [i_22 + 1])) ^ (((/* implicit */int) arr_75 [i_19 - 2] [i_22 + 1]))))), (16426024282829732824ULL));
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32763)) ? (arr_71 [i_19 - 2] [7U] [i_21] [i_22 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_19 - 2] [i_20] [i_21] [i_22 + 2])) || (((/* implicit */_Bool) arr_71 [i_19 - 2] [i_19 - 2] [i_21] [i_22 + 2]))))))));
                            arr_80 [i_19] [i_21] [i_21] [i_22] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_19] [i_19]))) > (max((((/* implicit */unsigned long long int) ((744147558U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((((/* implicit */unsigned long long int) var_1)) & (2900179845550114730ULL))))));
                        }
                    } 
                } 
            } 
            arr_81 [i_19] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_2)), (min((var_6), (((/* implicit */unsigned long long int) (_Bool)0)))))), (max((((/* implicit */unsigned long long int) var_3)), (8522405314141397217ULL)))));
        }
        for (unsigned int i_24 = 3; i_24 < 16; i_24 += 3) 
        {
            arr_84 [i_24] = ((/* implicit */unsigned int) min((((unsigned long long int) ((((/* implicit */int) (short)17899)) ^ (((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) arr_74 [i_24] [i_19] [i_19] [i_24 - 2]))));
            var_44 += ((/* implicit */unsigned int) arr_64 [i_24 + 1]);
            var_45 = ((min((((var_4) / (1865195913U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_24] [i_24] [i_24]))));
            var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) arr_83 [i_19]))));
            /* LoopNest 2 */
            for (unsigned int i_25 = 1; i_25 < 15; i_25 += 3) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_47 += ((/* implicit */short) 1705443189370925873ULL);
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 7776288768034858189ULL)) && (((/* implicit */_Bool) 15701274997588314664ULL)))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (min((1185806595254502861ULL), (((/* implicit */unsigned long long int) arr_67 [i_19]))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_27 = 0; i_27 < 17; i_27 += 1) /* same iter space */
                        {
                            var_49 ^= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_0)), (arr_68 [i_24 + 1] [i_25 + 1] [i_24 + 1]))) > (((((/* implicit */unsigned int) ((/* implicit */int) ((6958875201150454506ULL) != (((/* implicit */unsigned long long int) 2429771383U)))))) / (var_4)))));
                            var_50 += var_12;
                            arr_93 [i_19] [i_19] [i_25 + 2] [i_24] [i_26] [i_19] [i_27] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(11224984649528719508ULL)))) && (((/* implicit */_Bool) min((18014123631575040ULL), (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_70 [i_19] [i_24] [i_19] [i_19]))))) : (arr_66 [i_19] [i_19] [i_19 - 1])));
                            var_51 = arr_83 [i_24];
                        }
                        for (unsigned short i_28 = 0; i_28 < 17; i_28 += 1) /* same iter space */
                        {
                            arr_97 [i_19] [i_19] [i_19 - 2] [i_19] [i_24] = ((/* implicit */unsigned long long int) (short)32767);
                            arr_98 [i_26] [i_24] [i_25] [i_24] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) % (((((/* implicit */unsigned long long int) 3570546046U)) + (18014398509449216ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((10670455305674693425ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [12ULL] [i_26] [i_25 + 2] [i_19] [i_19])))))) << (((((/* implicit */int) (short)-13681)) + (13682)))))));
                            var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_15)), (arr_65 [i_24])))) > (((((/* implicit */int) (unsigned char)179)) * (((/* implicit */int) (short)17899))))))))))));
                            var_53 += ((/* implicit */unsigned int) ((min((((((/* implicit */int) var_12)) | (((/* implicit */int) var_12)))), (((/* implicit */int) arr_78 [(_Bool)1] [i_19])))) >= ((~(((/* implicit */int) (unsigned char)93))))));
                            arr_99 [i_28] [(unsigned char)10] [i_24] [i_25] [i_24] [15U] [i_19] = ((/* implicit */signed char) (short)32767);
                        }
                        /* vectorizable */
                        for (unsigned short i_29 = 0; i_29 < 17; i_29 += 1) /* same iter space */
                        {
                            arr_102 [i_19] [i_24] [(unsigned short)12] [i_25 - 1] [i_25 - 1] [i_26] [i_24] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_24]))) ^ (0U)));
                            var_54 ^= ((/* implicit */short) arr_101 [11ULL] [i_26] [i_25] [i_25] [i_24 - 2] [i_19] [11ULL]);
                            var_55 = ((/* implicit */_Bool) min((var_55), (((arr_64 [13U]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_100 [i_19] [i_19 + 1] [i_19])))))));
                            var_56 ^= ((/* implicit */short) (_Bool)0);
                            var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_68 [i_19 + 1] [i_19 + 1] [i_19 + 1])) ? (3U) : (var_2))))));
                        }
                        arr_103 [i_24] [i_19] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((4294967279U) >> (((13166858039362484279ULL) - (13166858039362484263ULL)))))) + (max((((/* implicit */unsigned long long int) (_Bool)1)), (541900582363297536ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
                        var_58 = ((/* implicit */unsigned int) (_Bool)0);
                    }
                } 
            } 
        }
        for (unsigned char i_30 = 0; i_30 < 17; i_30 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_31 = 0; i_31 < 17; i_31 += 2) 
            {
                for (unsigned long long int i_32 = 4; i_32 < 15; i_32 += 2) 
                {
                    {
                        var_59 = ((((/* implicit */unsigned long long int) ((max((3942137927U), (2252544284U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_1))))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1099281070U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (2252544284U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_104 [(short)9] [(_Bool)1]))) : (((13137268511337333488ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23811))))))));
                        arr_111 [i_19] [i_19] [i_30] [i_19] [i_31] [i_32 - 1] = ((/* implicit */_Bool) ((var_1) >> (((/* implicit */int) ((arr_95 [i_30] [i_30]) > (17904843491346254099ULL))))));
                    }
                } 
            } 
            var_60 ^= ((/* implicit */_Bool) ((1348342745513311618ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((17098401328196239998ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_104 [i_30] [i_30])) || (((/* implicit */_Bool) 4294967295U))))))))))));
            var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) ((((arr_66 [i_19 - 2] [i_19 - 2] [i_19 + 1]) | (((/* implicit */long long int) ((/* implicit */int) (short)5005))))) | (((/* implicit */long long int) 3U)))))));
            var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) arr_83 [i_30]))));
        }
        var_63 = ((/* implicit */unsigned char) (_Bool)0);
    }
    var_64 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_15), (var_15))))) > ((-(var_3))))))));
    var_65 = ((/* implicit */unsigned int) var_13);
    var_66 ^= ((/* implicit */short) ((18428729675200102400ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_67 = ((/* implicit */unsigned int) min((var_67), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47)))))) && (((/* implicit */_Bool) (short)-22139)))))) != (((((var_4) << (((/* implicit */int) (_Bool)1)))) | (min((3U), (((/* implicit */unsigned int) var_12)))))))))));
}

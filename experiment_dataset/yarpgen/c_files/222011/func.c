/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222011
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-43)) || (((/* implicit */_Bool) 26ULL)))) ? (((/* implicit */unsigned long long int) arr_4 [i_2 - 2] [i_0] [i_2 + 1])) : (18446744073709551590ULL)))) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_0])), ((~(((/* implicit */int) (short)-29500))))))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-29500)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_4 [i_2 - 2] [i_1] [i_2 - 1]))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551588ULL)) && (((/* implicit */_Bool) arr_4 [2ULL] [i_2] [i_2])))))))))));
                    arr_10 [i_0] = (signed char)31;
                }
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) min(((signed char)0), ((signed char)-67)))))))));
                    var_14 = ((/* implicit */_Bool) max((((unsigned long long int) arr_2 [i_0] [i_3])), (((/* implicit */unsigned long long int) max(((+((-2147483647 - 1)))), (((/* implicit */int) arr_1 [i_0])))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                {
                    var_15 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(max((1525436289909853421LL), (1525436289909853421LL)))))), (((arr_7 [i_0] [i_1] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((305215777235649155ULL) < (15076903533021066945ULL)))))))));
                    var_16 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (signed char)0)), (-1525436289909853394LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0])))))));
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_0] [i_1] [i_4]))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_1] [i_4])) + (2147483647))) >> (((14479924442352748143ULL) - (14479924442352748115ULL))))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 5862320768827335991ULL))) ? (((unsigned long long int) 9177965032090047771LL)) : (0ULL)));
                        arr_21 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */signed char) (~(12202779362430887816ULL)));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (836796139563848736ULL)));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((int) 1457931144)))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 4; i_6 < 9; i_6 += 2) 
                    {
                        var_21 ^= ((((/* implicit */int) (_Bool)1)) * ((~(((/* implicit */int) (signed char)-1)))));
                        arr_26 [i_1] [i_1] [(_Bool)1] [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_6 - 4] [i_6 - 4] [i_6 - 1] [i_6 + 1]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_31 [i_0] [i_8] = ((/* implicit */long long int) (+(253826213)));
                            arr_32 [i_0] [i_0] = (!(((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_0] [i_0] [1LL] [i_8] [i_8] [i_8] [i_0]))));
                        }
                        arr_33 [i_7] [i_0] [i_4] [i_4] [i_0] [6ULL] = max((max((arr_30 [i_4] [i_0] [(short)4] [(short)9] [i_4] [i_7 + 1] [i_7 + 1]), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))), (((((/* implicit */_Bool) (signed char)84)) ? (9765509271093653824ULL) : (8731786931826267049ULL))));
                        arr_34 [i_7 + 1] [i_0] [i_4] [i_4] [i_0] [i_0] = arr_8 [i_0] [i_4] [i_0];
                        var_22 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-52))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_7 + 1])) ? (10ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27046)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1457931144)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((12584423304882215641ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))))) : (max((3966819631356803495ULL), (((/* implicit */unsigned long long int) 2147483647))))));
                        arr_37 [i_0] [i_0] = ((signed char) ((2147483647) << (((((/* implicit */int) max(((signed char)78), (((/* implicit */signed char) (_Bool)1))))) - (78)))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) 14ULL))));
                    }
                }
                var_25 ^= ((/* implicit */short) ((14764482083921693385ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)75)) * (((/* implicit */int) (_Bool)1)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        {
                            arr_43 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-96)) + (((/* implicit */int) (_Bool)1)))), (-794491185))))));
                            arr_44 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned long long int) min((min((((/* implicit */unsigned long long int) (_Bool)0)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 24ULL)) ? (((/* implicit */int) (signed char)78)) : (-966718224)))))));
                            arr_45 [i_0] [i_1] [i_10] [i_11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 3848290697216ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */unsigned long long int) -952234339)) : (1573506743138233517ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)9282)))))) : (17506348520764605566ULL)))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((((/* implicit */_Bool) 8359397259624579412ULL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_24 [i_1] [i_1] [i_0] [i_0] [i_0]))), (min((arr_24 [i_0] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) 1873718079))));
    /* LoopSeq 4 */
    for (signed char i_12 = 1; i_12 < 9; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            for (short i_14 = 0; i_14 < 13; i_14 += 1) 
            {
                {
                    arr_56 [i_13] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (arr_50 [i_12 - 1] [i_12 + 1] [i_12])))), (max((3973630873839016779ULL), (((/* implicit */unsigned long long int) arr_55 [i_12 + 1] [i_12 + 2] [i_12 - 1]))))));
                    /* LoopSeq 2 */
                    for (short i_15 = 1; i_15 < 11; i_15 += 1) 
                    {
                        arr_59 [(short)0] &= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-105))));
                        arr_60 [i_12] [i_13] [i_14] = ((unsigned long long int) (signed char)77);
                        var_28 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_50 [i_15 + 2] [i_15 + 1] [i_12 + 2])))) + (2147483647))) >> (((max((4503599627370495ULL), (((/* implicit */unsigned long long int) -1935654006)))) - (18446744071773897598ULL)))));
                        arr_61 [i_13] [i_14] [i_13] [i_13] = ((/* implicit */short) min((((((/* implicit */unsigned long long int) -1199943802)) ^ (2061653488156732824ULL))), (((/* implicit */unsigned long long int) min((((1199943803) | (((/* implicit */int) (short)1634)))), (((((/* implicit */int) (signed char)0)) & (2147483647))))))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            var_29 = ((short) (short)10939);
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_48 [i_12 + 4])) ? (((/* implicit */int) arr_64 [i_12 + 3] [i_12 + 4] [i_13] [i_12 + 4])) : (((/* implicit */int) (signed char)61))));
                        }
                        var_31 = min((max((arr_62 [i_12] [i_13] [i_16]), (16385090585552818791ULL))), (max((4503599627370501ULL), (((/* implicit */unsigned long long int) arr_51 [i_12 + 4] [i_12 + 3] [i_14])))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (!((((~(18442240474082181120ULL))) < (max((((/* implicit */unsigned long long int) (signed char)91)), (6708583214375606655ULL))))))))));
                    }
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (max((((((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) : (3264468669851878846ULL))) * (17870283321406128128ULL))), (max((576460752303423489ULL), (8389667869724602510ULL)))))));
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_19 = 2; i_19 < 12; i_19 += 3) 
                        {
                            arr_75 [i_13] = ((/* implicit */signed char) (((-((~(((/* implicit */int) (short)0)))))) - (((/* implicit */int) (_Bool)1))));
                            var_34 ^= ((/* implicit */signed char) min((max(((short)14), (((/* implicit */short) arr_54 [i_12 - 1] [i_12 + 2] [4ULL] [4ULL])))), (((/* implicit */short) (!(((((/* implicit */_Bool) 17261745046962180366ULL)) && (((/* implicit */_Bool) (signed char)-67)))))))));
                        }
                        for (unsigned long long int i_20 = 1; i_20 < 12; i_20 += 2) 
                        {
                            arr_78 [3ULL] [i_18] [i_13] [i_13] [i_12] = ((/* implicit */long long int) (signed char)23);
                            var_35 = ((/* implicit */long long int) (+(((arr_68 [i_18] [i_12 + 2] [i_12 + 3] [i_18]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))));
                            arr_79 [(signed char)12] [i_18] [i_18] [i_13] [i_12] &= ((/* implicit */unsigned long long int) (+(max((arr_70 [i_12 + 2] [i_12 + 3] [i_20 + 1]), (((/* implicit */long long int) ((signed char) (short)8648)))))));
                        }
                        /* vectorizable */
                        for (long long int i_21 = 0; i_21 < 13; i_21 += 4) 
                        {
                            arr_83 [i_13] [(short)8] [i_13] [i_21] = (short)14263;
                            var_36 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1617))));
                            arr_84 [i_12] [i_12] [i_13] [i_13] [i_14] [i_13] [i_21] = ((/* implicit */int) (!(((/* implicit */_Bool) 3940649673949184ULL))));
                            arr_85 [i_13] [i_13] [i_14] [i_18] [i_21] = ((/* implicit */long long int) ((5268915580757720122ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95)))));
                        }
                        var_37 &= ((/* implicit */unsigned long long int) (short)-5995);
                    }
                    for (unsigned long long int i_22 = 2; i_22 < 9; i_22 += 3) 
                    {
                        arr_88 [i_13] = (~(min((((/* implicit */unsigned long long int) (short)5420)), (min((5207073942409415357ULL), (0ULL))))));
                        arr_89 [i_13] [i_13] [i_14] [i_22 + 4] = ((/* implicit */_Bool) (short)1901);
                    }
                    var_38 = ((/* implicit */_Bool) (short)1653);
                }
            } 
        } 
        arr_90 [i_12] [(short)0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)1645)), (1241483075)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (13586203610501790009ULL)))));
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) 10980511319356286177ULL))))))))))));
    }
    for (long long int i_23 = 0; i_23 < 19; i_23 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_24 = 0; i_24 < 19; i_24 += 3) 
        {
            for (signed char i_25 = 3; i_25 < 18; i_25 += 2) 
            {
                for (unsigned long long int i_26 = 2; i_26 < 17; i_26 += 1) 
                {
                    {
                        var_40 = min((min((((/* implicit */unsigned long long int) 2100189329)), (0ULL))), (((/* implicit */unsigned long long int) ((short) (+(arr_98 [i_26] [i_23] [i_23]))))));
                        var_41 += min((((/* implicit */short) ((signed char) (short)1670))), (((short) (short)-17245)));
                        /* LoopSeq 3 */
                        for (signed char i_27 = 3; i_27 < 17; i_27 += 2) 
                        {
                            arr_104 [i_23] = ((/* implicit */signed char) arr_91 [i_27]);
                            arr_105 [i_27] [i_26] [i_25] [i_23] [i_24] [i_23] [i_23] = max((min((11619570925834732186ULL), (26ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)112))))));
                            var_42 *= ((/* implicit */short) 5817538847131110158LL);
                            arr_106 [i_23] [i_25] [i_23] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) 14586496326200651414ULL))));
                        }
                        for (signed char i_28 = 0; i_28 < 19; i_28 += 4) 
                        {
                            arr_111 [i_23] [(short)10] [i_25 + 1] [i_26] [i_23] = ((/* implicit */_Bool) min((min((13239670131300136258ULL), (1331279488541808458ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_108 [i_23] [(short)6] [i_25 - 3] [i_23] [i_28] [i_28])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 10450925813434710676ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4561))) : (17185339049818085357ULL)))))))));
                            arr_112 [i_23] [i_23] [i_23] [i_26] [i_28] = ((/* implicit */int) ((((unsigned long long int) 5207073942409415335ULL)) << (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 17185339049818085378ULL))) && (((/* implicit */_Bool) -1241483073)))))));
                        }
                        for (unsigned long long int i_29 = 1; i_29 < 17; i_29 += 1) 
                        {
                            arr_116 [i_25] [i_26] [i_23] = arr_115 [i_23] [i_25 - 2] [(short)3] [i_29 + 1];
                            var_44 *= ((/* implicit */short) (signed char)(-127 - 1));
                            var_45 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26387)) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((short)7622), (((/* implicit */short) (signed char)-1))))) || (((/* implicit */_Bool) max((((/* implicit */signed char) arr_109 [(signed char)12])), ((signed char)7))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_101 [i_29] [i_26 - 1] [i_25] [i_23])), (5207073942409415335ULL)))) && (((/* implicit */_Bool) max((1261405023891466272ULL), (10450925813434710693ULL)))))))));
                        }
                        arr_117 [i_23] [i_23] [i_25 - 3] [(signed char)2] [i_23] = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_99 [i_25 - 3] [i_26 + 2])))), ((-(((/* implicit */int) arr_94 [i_23] [i_24]))))));
                    }
                } 
            } 
        } 
        var_46 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)7))))), (min((max((((/* implicit */unsigned long long int) (signed char)-3)), (13654424932627156124ULL))), (((7730786867163306729ULL) << (((1821722495) - (1821722453)))))))));
        arr_118 [i_23] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)9)) ? (max((((/* implicit */unsigned long long int) 476329860)), (arr_115 [i_23] [i_23] [i_23] [i_23]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_94 [i_23] [i_23])))))));
    }
    for (unsigned long long int i_30 = 0; i_30 < 25; i_30 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_31 = 0; i_31 < 25; i_31 += 1) 
        {
            var_47 = ((/* implicit */_Bool) ((((4329400313765979628ULL) * (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)7)), (-1821722496)))))) * (((((/* implicit */unsigned long long int) 1821722497)) * (0ULL)))));
            var_48 = ((/* implicit */unsigned long long int) ((long long int) min((arr_121 [i_30] [i_31]), (((/* implicit */unsigned long long int) (signed char)-1)))));
            var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) max((((((/* implicit */_Bool) 17257901023194521567ULL)) ? (((/* implicit */unsigned long long int) 224)) : (arr_121 [i_31] [i_30]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15ULL)) ? (-1821722494) : (-391711137)))))))));
            var_50 += ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)24853))))) + ((+(18446744073709551615ULL))));
        }
        var_51 += min((4605589168175050326ULL), (((/* implicit */unsigned long long int) min((arr_124 [i_30]), (arr_122 [i_30])))));
    }
    /* vectorizable */
    for (short i_32 = 0; i_32 < 18; i_32 += 4) 
    {
        arr_127 [i_32] [i_32] = ((/* implicit */unsigned long long int) (signed char)123);
        arr_128 [i_32] [i_32] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) + (((/* implicit */int) (signed char)-24))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_33 = 3; i_33 < 18; i_33 += 3) 
    {
        var_52 = ((/* implicit */unsigned long long int) min((var_52), (15476685529378620737ULL)));
        arr_131 [i_33] = ((signed char) 0);
        var_53 += ((signed char) (signed char)-39);
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47989
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_1 [i_0 - 1]), (((/* implicit */short) (signed char)1))))), (((7039863985930524459LL) + (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 1]))))) : (((((3149078897154534478ULL) - (15297665176555017161ULL))) - (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) (short)-29796)))))))));
        arr_3 [i_0 - 2] |= ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 14; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 4] [i_3 + 4] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_2 - 4] [i_3 + 4] [i_3 + 2] [i_3 + 2])));
                    arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) var_0);
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) + (var_0)))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))))))));
                    var_14 ^= 17611858774091937677ULL;
                }
            } 
        } 
        /* LoopSeq 4 */
        for (short i_4 = 3; i_4 < 14; i_4 += 1) 
        {
            var_15 = ((/* implicit */int) 834885299617613920ULL);
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 2) 
                {
                    {
                        arr_21 [i_1] [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((arr_10 [i_1] [i_1] [i_1]) + (2147483647))) >> (((var_6) - (970157215982301579LL)))));
                        arr_22 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)1))));
                        arr_23 [i_4] [i_6] [i_6] [i_6 - 2] [i_6] [i_6] = ((/* implicit */unsigned int) ((long long int) ((7039863985930524486LL) & (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 12; i_7 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned short) ((arr_20 [i_7 - 2] [i_5] [i_4] [i_1]) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) (unsigned short)22623))))) : ((((_Bool)0) ? (arr_10 [i_1] [i_4] [i_5]) : (((/* implicit */int) arr_16 [i_1] [(signed char)9] [i_4]))))));
                            var_17 = ((/* implicit */short) (~(2048852314170031423LL)));
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (short i_8 = 3; i_8 < 13; i_8 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) ((arr_24 [i_1] [i_1] [i_4]) / (arr_24 [i_1] [i_4 - 1] [i_4])));
                var_19 ^= ((/* implicit */short) (+(var_4)));
                arr_30 [i_4] [i_4 - 1] [i_4] = ((/* implicit */signed char) ((arr_14 [i_4 - 2] [i_4]) < (arr_14 [i_4 - 2] [i_4])));
            }
            for (short i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 1; i_10 < 13; i_10 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [i_9] [i_1]))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_4] [i_10 + 2] [i_4] [i_10])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4959))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1])))));
                }
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)8064))));
                    arr_38 [i_4] [i_4] = (+((-(((/* implicit */int) arr_28 [i_11])))));
                    arr_39 [i_1] [i_4 - 3] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) ((arr_25 [i_4 - 3] [i_4 - 1]) ? ((-(((/* implicit */int) arr_37 [i_1] [i_4] [i_9] [i_1] [i_4])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_9] [i_9] [i_4])) && (((/* implicit */_Bool) (short)-19937)))))));
                }
                var_23 = var_8;
                arr_40 [i_4] = ((/* implicit */_Bool) 8700830170194122579ULL);
            }
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                arr_43 [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                arr_44 [10ULL] [i_12] [i_4] [i_4 - 3] = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_1] [i_1] [i_12] [i_12])) << (((/* implicit */int) arr_25 [i_1] [i_4 - 3]))));
                arr_45 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */short) arr_27 [i_12] [i_12] [i_4] [i_1]);
                arr_46 [i_4] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 3013100895U)) ? (var_6) : (-7039863985930524459LL))));
            }
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4] [i_1] [i_1] [i_1])) ? ((-(arr_10 [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_9 [i_1] [(short)10])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_4 + 1])))))))));
        }
        for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            var_25 &= ((/* implicit */signed char) ((((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) - (((/* implicit */int) arr_4 [i_1]))));
            var_26 = (~(((((/* implicit */unsigned long long int) arr_7 [i_1] [i_13])) - (9745913903515429054ULL))));
            var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 81758480135930017ULL))));
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 1) 
            {
                arr_53 [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 4; i_15 < 14; i_15 += 2) /* same iter space */
                {
                    arr_57 [i_14] [i_14] [(unsigned short)11] [i_15] = ((/* implicit */signed char) ((var_1) == (((/* implicit */unsigned long long int) arr_33 [i_1] [i_13] [i_14] [i_14]))));
                    arr_58 [i_1] [i_14] [(_Bool)0] [14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4378318849841240219LL))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_1))));
                }
                for (unsigned long long int i_16 = 4; i_16 < 14; i_16 += 2) /* same iter space */
                {
                    arr_62 [i_1] [i_13] [i_14 + 2] [i_14] = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]);
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 820141559)) || (((/* implicit */_Bool) arr_34 [i_14 - 1] [i_14 - 1] [i_14] [i_16 - 3]))));
                    arr_63 [i_1] [i_14] [i_14] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3149078897154534468ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) var_10))));
                }
            }
            for (unsigned char i_17 = 3; i_17 < 13; i_17 += 2) 
            {
                var_30 *= ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_35 [i_1] [i_17] [(signed char)14] [i_13] [13] [i_1])) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0))))));
                var_31 += ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_17 - 1] [i_17] [i_17] [(short)11])) : ((+(((/* implicit */int) var_10))))));
                /* LoopSeq 4 */
                for (unsigned short i_18 = 3; i_18 < 13; i_18 += 4) 
                {
                    var_32 = ((/* implicit */signed char) ((arr_24 [i_17 - 3] [i_17 - 1] [i_18]) != (((/* implicit */int) arr_68 [i_17] [i_17 + 1] [i_17 - 2] [i_18 + 2]))));
                    /* LoopSeq 3 */
                    for (unsigned short i_19 = 0; i_19 < 15; i_19 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))));
                        var_34 = ((((/* implicit */_Bool) ((unsigned long long int) arr_47 [i_19] [i_1]))) ? (((((/* implicit */unsigned long long int) arr_48 [i_17])) ^ (var_4))) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))));
                    }
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        arr_77 [i_1] [i_13] [i_17] [i_18] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (var_3) : (((/* implicit */unsigned int) var_7))));
                        arr_78 [i_18] = ((/* implicit */unsigned long long int) ((unsigned short) (~(var_7))));
                    }
                    for (signed char i_21 = 3; i_21 < 11; i_21 += 2) 
                    {
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)53581)) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                        var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_18 - 2] [i_18 - 2] [i_18 - 1] [i_18 - 1]))));
                    }
                    arr_83 [i_18] [(signed char)13] [i_18 + 2] = ((/* implicit */short) ((arr_7 [i_18 - 3] [i_17 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                }
                for (unsigned short i_22 = 2; i_22 < 11; i_22 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_23 = 0; i_23 < 15; i_23 += 1) 
                    {
                        var_37 ^= ((/* implicit */signed char) ((unsigned short) ((_Bool) var_3)));
                        arr_89 [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) (signed char)112)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)19950)) & (((/* implicit */int) var_9))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_24 = 0; i_24 < 15; i_24 += 3) 
                    {
                        arr_92 [i_1] [i_1] [i_13] [i_13] [i_17] [i_24] [i_24] = ((/* implicit */_Bool) var_0);
                        arr_93 [i_24] [i_13] [8ULL] [i_17] [i_22 + 1] [i_24] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) >> (((var_4) - (9680204964755271603ULL)))))) | (((((/* implicit */_Bool) var_0)) ? (9598422283848054512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_13] [i_17] [i_22])))))));
                    }
                    for (unsigned long long int i_25 = 1; i_25 < 14; i_25 += 2) 
                    {
                        arr_97 [i_25] [i_25] [i_17 - 3] [i_22] [i_25] [i_25] = ((/* implicit */unsigned long long int) var_5);
                        arr_98 [i_25] [i_13] [i_17] [i_25] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)42918))));
                    }
                    var_38 = ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)11955)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2865))) : (1155389503U)));
                    var_39 = ((/* implicit */unsigned short) (signed char)76);
                    var_40 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 2649562040U))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_13] [i_13]))) == (var_1)))) : (((/* implicit */int) ((unsigned short) var_3)))));
                }
                for (unsigned long long int i_26 = 0; i_26 < 15; i_26 += 2) 
                {
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_17 - 1] [i_17 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_13] [i_17 + 2] [i_26])) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (unsigned short)15734))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))) | (18446744073709551611ULL)))));
                    var_42 = ((((/* implicit */_Bool) arr_49 [i_17 - 2] [i_17] [i_17 - 3] [i_17 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_49 [i_17 - 3] [i_17 - 3] [i_17 + 1] [i_17 + 1])));
                }
                for (long long int i_27 = 1; i_27 < 14; i_27 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_28 = 2; i_28 < 13; i_28 += 4) /* same iter space */
                    {
                        var_43 = ((/* implicit */signed char) ((((/* implicit */int) (short)-19934)) == (((/* implicit */int) ((((/* implicit */int) arr_104 [i_1] [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] [i_1] [i_1])) != (((/* implicit */int) var_5)))))));
                        var_44 = ((/* implicit */unsigned long long int) ((unsigned short) arr_85 [i_1] [i_27] [i_27 + 1] [i_27] [i_28 + 1] [i_17 + 1]));
                        arr_110 [i_1] [i_27] [i_28] = ((/* implicit */long long int) ((15469773508799986759ULL) | (191756811471003547ULL)));
                    }
                    for (unsigned long long int i_29 = 2; i_29 < 13; i_29 += 4) /* same iter space */
                    {
                        var_45 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 18364985593573621582ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (81758480135930034ULL)));
                        arr_113 [i_1] [i_13] [i_27] [i_27 - 1] [i_29 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)20166))));
                    }
                    var_46 = ((/* implicit */unsigned short) 15047112712845535932ULL);
                }
            }
            var_47 &= ((/* implicit */short) arr_103 [i_1] [i_1] [i_1] [i_1] [i_1]);
        }
        for (long long int i_30 = 2; i_30 < 14; i_30 += 4) 
        {
            var_48 ^= ((/* implicit */long long int) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_30 - 2] [i_30] [i_30 - 2])))));
            /* LoopNest 2 */
            for (signed char i_31 = 0; i_31 < 15; i_31 += 2) 
            {
                for (short i_32 = 0; i_32 < 15; i_32 += 4) 
                {
                    {
                        var_49 = ((/* implicit */short) ((((((/* implicit */int) var_9)) <= (((/* implicit */int) (signed char)2)))) && (((/* implicit */_Bool) 3399631360864015683ULL))));
                        var_50 = ((/* implicit */long long int) ((15469773508799986759ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4170)))));
                        arr_121 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((arr_8 [i_30 - 2] [i_30 - 2]) <= (var_3)));
                    }
                } 
            } 
            var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) var_2))));
        }
        for (unsigned long long int i_33 = 4; i_33 < 12; i_33 += 2) 
        {
            var_52 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_47 [i_1] [i_33 - 3])) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (var_1)))));
            arr_125 [i_1] [i_1] = ((/* implicit */unsigned short) (short)20166);
            var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_14 [i_1] [i_33])))) ? (arr_47 [i_33 - 2] [i_33 + 2]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_1] [i_1] [i_33 + 1])) || (((/* implicit */_Bool) arr_54 [i_33] [0ULL] [i_1] [i_33])))))));
            var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)76)) && (((/* implicit */_Bool) var_5))));
        }
        var_55 ^= ((/* implicit */signed char) ((arr_67 [i_1] [i_1] [1ULL] [i_1] [i_1]) ? ((-(((/* implicit */int) (signed char)13)))) : ((-(((/* implicit */int) (_Bool)1))))));
    }
    var_56 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 3 */
    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
    {
        var_57 = ((/* implicit */short) min((var_57), (((short) (signed char)-81))));
        arr_130 [i_34] = ((/* implicit */_Bool) arr_126 [i_34] [i_34]);
    }
    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) /* same iter space */
    {
        var_58 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-76)), (3777223610U)))), (((((/* implicit */long long int) ((((/* implicit */_Bool) 517743686U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_129 [i_35]))))) * (min((var_0), (((/* implicit */long long int) (unsigned char)189))))))));
        arr_133 [i_35] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5049587227913226837ULL)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23))) : (var_3))), (((/* implicit */unsigned int) arr_131 [i_35]))))) : (var_1)));
    }
    for (unsigned char i_36 = 0; i_36 < 24; i_36 += 2) 
    {
        arr_136 [i_36] [i_36] = ((/* implicit */unsigned long long int) ((1692593852701375493LL) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_128 [i_36])) < (((/* implicit */int) arr_134 [i_36]))))))));
        var_59 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_127 [i_36])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)-85))))))), (max((((/* implicit */unsigned int) ((((/* implicit */int) (short)8550)) / (arr_127 [i_36])))), (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (var_3)))))));
        arr_137 [i_36] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_134 [i_36]))))));
    }
    var_60 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_2)));
    var_61 = ((/* implicit */signed char) (_Bool)1);
}

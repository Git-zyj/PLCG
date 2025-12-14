/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204125
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
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */int) (+(((max((((/* implicit */unsigned long long int) -4887588987891573509LL)), (4925034133092269227ULL))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)24664)))))))));
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [7U] [i_0] [i_0] [i_0] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0])))))));
                        arr_8 [i_1] [i_0] [i_3] = arr_3 [i_0];
                        arr_9 [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_0] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) min((4887588987891573489LL), (4887588987891573501LL)))) + (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) -4887588987891573493LL)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_3])))));
                        var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])) ? (arr_4 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1]) : (arr_4 [i_0 + 1] [i_0] [i_0 - 1] [i_0 + 1])))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1]))))), (((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) << (((arr_5 [i_0 + 1]) + (1206285378)))))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -656554860057836238LL)) ? (((/* implicit */unsigned long long int) -4887588987891573496LL)) : (min((13967066124041538486ULL), (((/* implicit */unsigned long long int) (short)21097))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 4887588987891573511LL))))), (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_0] [i_0])) ? (4887588987891573495LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
    {
        arr_13 [i_4] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_4])) ? (arr_11 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))))) >> ((((-(((/* implicit */int) (short)14796)))) + (14824)))));
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 2; i_6 < 19; i_6 += 3) 
            {
                for (signed char i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    {
                        arr_22 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) -4887588987891573509LL)) ? (-4887588987891573489LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13)))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 4887588987891573521LL)) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) arr_18 [i_5] [i_5]))));
                    }
                } 
            } 
        } 
        arr_23 [i_4] |= ((/* implicit */unsigned char) ((signed char) arr_14 [i_4] [i_4]));
    }
    /* LoopSeq 3 */
    for (unsigned short i_8 = 1; i_8 < 14; i_8 += 2) 
    {
        arr_28 [i_8] = min((((/* implicit */long long int) arr_12 [i_8])), (((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_8] [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8])) + (((/* implicit */int) arr_19 [i_8] [i_8 - 1] [i_8 - 1] [i_8] [(signed char)1] [i_8]))))) ? (max((((/* implicit */long long int) (unsigned short)49178)), (288230238712758272LL))) : (((/* implicit */long long int) arr_24 [i_8 + 2])))));
        var_24 -= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4887588987891573484LL)) ? (-4887588987891573496LL) : (-1LL)))))))));
    }
    for (signed char i_9 = 1; i_9 < 8; i_9 += 2) 
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -25LL)) ? (-1436696194878859970LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)126)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_29 [i_9 + 3]))))))) : (4887588987891573503LL))))));
        var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_9 + 1])) || (((/* implicit */_Bool) arr_25 [i_9 + 2] [12LL])))))) - (((((/* implicit */_Bool) arr_7 [i_9 + 1] [i_9 + 3] [i_9 + 3] [i_9 + 3] [i_9 + 1] [(signed char)10])) ? (arr_10 [i_9 + 1]) : (arr_25 [i_9 + 3] [i_9])))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -288230238712758277LL))));
                    var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((short) ((((/* implicit */long long int) arr_4 [i_10] [i_11 + 1] [i_10] [i_12])) < (((((/* implicit */_Bool) arr_20 [i_10] [i_10] [i_12] [i_12])) ? (arr_26 [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
                }
            } 
        } 
        arr_41 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4887588987891573502LL)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((short)24979), (((/* implicit */short) (signed char)-1)))))) != (6LL)))) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 2; i_13 < 10; i_13 += 2) 
        {
            arr_44 [i_10] [i_13] = ((/* implicit */unsigned long long int) 981917671);
            arr_45 [i_10] [4] [(unsigned char)9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)16210)) ? (4887588987891573513LL) : (-606739273169863548LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10] [i_10] [i_13 + 2] [i_10] [i_10] [i_10])))));
        }
        /* vectorizable */
        for (signed char i_14 = 2; i_14 < 8; i_14 += 2) 
        {
            var_29 ^= ((/* implicit */int) (!(((/* implicit */_Bool) -2132413032))));
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (444275013292109155ULL)));
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_51 [i_15] [i_14 + 1] [i_14] = (-((~(((/* implicit */int) (signed char)-36)))));
                arr_52 [i_10] [i_15] = (+(arr_26 [i_14 - 2] [i_14 + 2]));
                var_31 = ((/* implicit */unsigned short) (-(arr_20 [i_15] [i_15] [i_15] [i_14 + 4])));
            }
            for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
            {
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (2194728288256LL) : (((/* implicit */long long int) arr_17 [i_14]))))) / (arr_47 [i_10]))))));
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_4 [i_10] [i_14] [i_16] [i_10]))) ? (((((/* implicit */_Bool) 4887588987891573526LL)) ? (((/* implicit */int) arr_35 [i_10] [i_10])) : (((/* implicit */int) arr_50 [i_14] [(signed char)0] [(signed char)0] [i_14])))) : (((/* implicit */int) arr_16 [i_14 - 2] [i_14] [i_16]))));
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 1) 
            {
                arr_59 [i_17] = ((/* implicit */_Bool) ((unsigned char) ((arr_48 [(short)7]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_17 - 1] [i_17] [i_14] [3ULL]))))));
                var_34 ^= ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_57 [i_17] [i_14] [i_10] [i_14])))));
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 12; i_18 += 3) 
                {
                    arr_62 [i_14] &= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)-25040))) == (1LL))));
                    var_35 = ((((/* implicit */_Bool) arr_42 [i_14 + 3])) ? (arr_42 [i_14 + 2]) : (arr_42 [i_14 - 1]));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-25014)) ? (4887588987891573522LL) : (((/* implicit */long long int) arr_11 [i_17 - 1])))))));
                }
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15855581383971673368ULL)) ? (((((/* implicit */_Bool) arr_26 [i_14] [11])) ? (((/* implicit */unsigned long long int) 10LL)) : (18446744073709551603ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            }
            for (long long int i_19 = 1; i_19 < 11; i_19 += 4) 
            {
                arr_66 [i_19] [i_19] = ((/* implicit */unsigned int) 18446744073709551585ULL);
                var_38 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) arr_60 [i_19 - 1])))));
            }
            for (unsigned int i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_14] [i_21])) / (((/* implicit */int) arr_3 [i_20]))))) ? (((18LL) ^ (((/* implicit */long long int) arr_17 [i_14])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) arr_18 [i_21] [i_21])) : (arr_4 [i_10] [i_14] [i_20] [(short)1])))))))));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_14 + 1] [i_21] [0U])) ? ((~(15161098017016647646ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_14] [i_14] [i_10] [i_14 + 4])))));
                }
                for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 9394708125946251677ULL)) ? (((/* implicit */int) (short)25046)) : (arr_55 [i_10] [i_14] [i_20] [(unsigned short)3]))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)139)))))));
                    var_42 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_14 + 3])) ? (((((/* implicit */_Bool) (unsigned short)65406)) ? (((/* implicit */int) arr_56 [i_22] [i_14] [i_20] [8U])) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((unsigned char) arr_35 [i_14] [4ULL])))));
                    var_43 = ((/* implicit */signed char) ((arr_42 [i_14 + 1]) < (arr_42 [i_14 + 1])));
                }
                var_44 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_14 - 2] [(_Bool)1])) >> (((/* implicit */int) arr_2 [i_14 + 3] [2]))));
            }
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                {
                    var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) (-(16383U))))));
                    var_46 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65421)) ? (((/* implicit */int) ((signed char) (signed char)56))) : (((/* implicit */int) (short)-17428))));
                    var_47 -= (+(((/* implicit */int) arr_7 [i_10] [i_14] [i_23] [6ULL] [i_24] [i_10])));
                }
                /* LoopSeq 2 */
                for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                {
                    var_48 = ((/* implicit */unsigned short) (+(arr_1 [i_25 - 1])));
                    arr_83 [i_25] = ((/* implicit */unsigned char) 9223372036854775807LL);
                }
                for (int i_26 = 1; i_26 < 10; i_26 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_27 = 0; i_27 < 12; i_27 += 3) /* same iter space */
                    {
                        arr_88 [i_14] [i_26] = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) arr_19 [i_26] [19ULL] [i_23] [19ULL] [i_23] [i_27]))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_27])) && (((/* implicit */_Bool) arr_75 [i_27])))))));
                        var_49 ^= ((/* implicit */short) arr_11 [i_14]);
                    }
                    for (unsigned char i_28 = 0; i_28 < 12; i_28 += 3) /* same iter space */
                    {
                        var_50 = ((/* implicit */signed char) arr_64 [i_14 + 4] [i_26] [i_26 + 2]);
                        arr_93 [i_10] [i_14] [(_Bool)1] [i_23] [(_Bool)1] [i_26] = ((/* implicit */unsigned long long int) (+(arr_17 [(signed char)13])));
                        var_51 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)17444)))))));
                        var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_10] [4LL] [i_26 + 2])) ? (((/* implicit */int) arr_73 [i_10] [(signed char)11])) : (((/* implicit */int) arr_73 [7ULL] [i_14]))));
                    }
                    for (unsigned char i_29 = 3; i_29 < 10; i_29 += 1) 
                    {
                        var_53 += ((/* implicit */short) ((unsigned char) arr_58 [i_14] [i_14]));
                        var_54 = ((/* implicit */unsigned long long int) (+(4887588987891573535LL)));
                        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_10] [i_14] [i_26])) ? (((/* implicit */int) arr_69 [i_29 - 2] [i_26] [4LL])) : (((/* implicit */int) arr_96 [i_26] [i_14] [i_23] [i_26] [i_29]))))))))));
                        var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) var_4))));
                    }
                    arr_97 [i_10] [i_10] [i_10] [i_26] [(short)5] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 872428420U))));
                    arr_98 [i_10] [i_10] [i_14] [i_10] [i_26] [i_26] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_91 [i_26 - 1] [i_26] [i_26] [i_26] [i_26] [i_26 + 1]))));
                    var_57 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_42 [i_26 + 1]))));
                    var_58 = ((/* implicit */long long int) arr_70 [i_10] [i_23] [i_23] [i_26 - 1]);
                }
            }
        }
    }
    var_59 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 3LL)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) var_2))));
    var_60 = ((/* implicit */short) (-(((/* implicit */int) var_5))));
}

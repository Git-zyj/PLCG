/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52642
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
    var_10 = ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_11 = ((/* implicit */signed char) (+(arr_3 [i_0] [i_1])));
            var_12 *= (+(arr_2 [6LL]));
        }
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            var_13 = ((/* implicit */short) (+(arr_3 [i_2] [i_2])));
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((arr_4 [i_2]) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_2] [i_2])));
        }
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            arr_11 [i_3] [i_3] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)6908))))));
            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_1 [i_0]))));
            var_15 -= ((/* implicit */unsigned char) arr_5 [i_0]);
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_6 [i_3] [i_0]))));
        }
        for (signed char i_4 = 1; i_4 < 11; i_4 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */unsigned int) 16)) : (var_8)));
            var_18 *= ((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_4] [i_4] [i_4 + 1]))));
            arr_15 [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_4])) ? (((/* implicit */int) arr_13 [i_0] [i_0])) : (-414025365))) % (((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_4]))))));
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_4 - 1])))))));
        }
        /* LoopSeq 2 */
        for (int i_5 = 3; i_5 < 8; i_5 += 4) 
        {
            var_20 = ((/* implicit */short) arr_14 [i_5] [i_0]);
            var_21 ^= ((arr_8 [i_5 - 1] [i_5] [i_5]) ? (arr_12 [i_5 - 3] [i_5 - 2] [i_5]) : (((arr_5 [i_5]) ? (((/* implicit */long long int) arr_9 [i_0])) : (var_1))));
            var_22 |= ((/* implicit */unsigned long long int) 548135936);
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_5]);
        }
        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_7 = 2; i_7 < 11; i_7 += 3) 
            {
                var_23 = ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]);
                arr_25 [i_0] [i_6] [i_6] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_7 - 2] [i_6] [i_0])) ? (((/* implicit */int) arr_20 [i_7 - 1] [i_7] [i_7])) : (((/* implicit */int) arr_8 [i_7 - 2] [i_7] [i_7]))));
            }
            for (signed char i_8 = 3; i_8 < 10; i_8 += 4) /* same iter space */
            {
                var_24 ^= ((unsigned long long int) arr_9 [i_0]);
                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_6] [i_8])) ? (((/* implicit */int) arr_16 [i_8])) : (arr_27 [i_0] [i_0] [i_8])))) ? (((((/* implicit */_Bool) (unsigned short)59839)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_6 [i_6] [i_0])))) : ((~(arr_0 [i_0]))));
            }
            for (signed char i_9 = 3; i_9 < 10; i_9 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (signed char i_10 = 3; i_10 < 10; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        arr_39 [i_0] [i_10] [i_0] [i_0] [i_11] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_9 - 3] [i_9])) ? (((/* implicit */int) arr_4 [i_9 - 2])) : (((/* implicit */int) arr_13 [i_9 + 2] [i_9]))));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_10] [i_6] [i_9])) & (arr_27 [i_0] [i_9 - 1] [i_10])));
                        var_27 = ((/* implicit */unsigned char) arr_2 [i_10]);
                        arr_40 [i_0] [i_6] [i_9] [i_10] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_9 + 1] [i_9 - 1]))));
                        arr_41 [i_11] [i_11] [i_10] [i_9] [i_10] [i_6] [i_0] = ((/* implicit */unsigned char) arr_3 [i_10] [i_10]);
                    }
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (arr_28 [i_6] [i_6] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_12])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10]))) : (-4358851353858488118LL)));
                        var_29 = ((/* implicit */unsigned long long int) ((var_2) <= (((/* implicit */int) arr_38 [i_0] [i_10] [i_0] [i_6] [i_12] [i_12]))));
                        arr_44 [i_10] = ((/* implicit */int) var_8);
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(arr_24 [i_9 + 2] [i_9] [i_10] [i_10 + 1]))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_9))));
                        arr_48 [i_0] [i_6] [i_9] [i_6] [i_10] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_9] [i_9 - 1] [i_10 + 2])) ? (arr_32 [i_0] [i_9 + 2] [i_10 - 3]) : (arr_32 [i_0] [i_9 - 1] [i_10 + 2])));
                        arr_49 [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */short) ((arr_47 [i_0] [i_10] [i_10 + 1] [i_9] [i_10]) ? (((/* implicit */int) arr_47 [i_0] [i_10] [i_10 + 1] [i_9] [i_10])) : (((/* implicit */int) arr_47 [i_10] [i_6] [i_10 + 1] [i_10] [i_10]))));
                    }
                    arr_50 [i_10] [i_10] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_10] [i_9] [i_6]))) : (arr_46 [i_10] [i_10] [i_6] [i_6] [i_10] [i_0])))));
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_53 [i_10] [i_6] [i_9] [i_10] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_9] [i_10])) ? (26LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_10] [i_6] [i_9] [i_10] [i_14])))))) ? (((long long int) arr_3 [i_6] [i_10])) : (((long long int) (unsigned short)61699))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((arr_5 [i_9 - 1]) ? (arr_27 [i_9 + 1] [i_10] [i_14]) : (((/* implicit */int) arr_5 [i_9 - 3])))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_10 + 1])))))));
                    }
                    arr_54 [i_10] [i_6] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_6] [i_9 - 1])) ? (((arr_47 [i_0] [i_6] [i_9] [i_10] [i_10]) ? (arr_22 [i_6] [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_43 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (36LL)))));
                }
                for (signed char i_15 = 3; i_15 < 10; i_15 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) arr_9 [i_9 + 1]))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        var_35 += ((/* implicit */unsigned char) ((arr_42 [i_0] [i_15 - 1] [i_0] [i_6] [i_0] [i_15] [i_16]) ? (((/* implicit */int) arr_42 [i_0] [i_15 - 1] [i_6] [i_6] [i_16] [i_0] [i_0])) : (((/* implicit */int) arr_42 [i_0] [i_15 - 1] [i_0] [i_6] [i_15] [i_9] [i_16]))));
                        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_9] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9] [i_9])) ? (((/* implicit */int) var_9)) : (arr_0 [i_0])));
                        var_37 = ((/* implicit */unsigned char) var_0);
                    }
                }
                for (signed char i_17 = 3; i_17 < 10; i_17 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_6] [i_9 + 1] [i_9] [i_9] [i_6])) ? (((/* implicit */int) arr_20 [i_17 + 1] [i_17 + 2] [i_9 - 3])) : ((-(((/* implicit */int) var_0)))))))));
                    var_39 = ((/* implicit */unsigned char) min((var_39), (arr_20 [i_0] [i_6] [i_9])));
                    var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) arr_56 [i_17] [i_17 - 1] [i_6] [i_17 - 2]))));
                    /* LoopSeq 3 */
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned int) ((arr_56 [i_9 + 2] [i_0] [i_17] [i_17]) ? (((/* implicit */int) arr_56 [i_9 + 2] [i_6] [i_17] [i_17])) : (((/* implicit */int) arr_56 [i_9 + 2] [i_9] [i_17] [i_17]))));
                        var_42 &= ((/* implicit */long long int) arr_31 [i_0] [i_6] [i_9 - 1] [i_17 + 1]);
                    }
                    for (signed char i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        arr_68 [i_9] [i_6] [i_6] [i_17] [i_19] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_0] [i_6] [i_9] [i_9] [i_17] [i_0])) ? (arr_14 [i_6] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_0] [i_6])))))) && (((/* implicit */_Bool) (+(arr_18 [i_6]))))));
                        var_43 = ((/* implicit */int) var_7);
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned char) arr_6 [i_0] [i_6]);
                        var_45 ^= ((/* implicit */int) arr_16 [i_9]);
                        arr_71 [i_9] [i_6] [i_9] [i_17] [i_20] = ((((/* implicit */_Bool) arr_22 [i_0] [i_9] [i_9 - 3])) ? (arr_22 [i_0] [i_9] [i_9 - 3]) : (((/* implicit */long long int) arr_24 [i_6] [i_6] [i_9 - 3] [i_17 - 1])));
                        arr_72 [i_0] [i_6] [i_6] [i_17] [i_17] = ((/* implicit */unsigned int) arr_64 [i_20] [i_17] [i_17] [i_9] [i_6] [i_17] [i_0]);
                    }
                }
                for (unsigned char i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_22 = 0; i_22 < 12; i_22 += 4) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned char) 209050622);
                        var_47 = ((/* implicit */unsigned char) ((unsigned long long int) arr_31 [i_0] [i_6] [i_9] [i_9 + 2]));
                    }
                    for (short i_23 = 0; i_23 < 12; i_23 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */long long int) arr_24 [i_0] [i_6] [i_21] [i_23]);
                        var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) var_0))));
                        var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((arr_14 [i_0] [i_21]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_6] [i_9 - 1] [i_6]))))))));
                        var_51 ^= ((/* implicit */short) (-(((/* implicit */int) arr_65 [i_0] [i_0] [i_23] [i_21] [i_23]))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_24 = 4; i_24 < 10; i_24 += 3) 
                    {
                        arr_83 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_42 [i_6] [i_24 + 1] [i_24] [i_6] [i_24] [i_24] [i_24]))));
                        var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_24] [i_6] [i_24 - 3]))));
                    }
                    for (short i_25 = 3; i_25 < 10; i_25 += 4) 
                    {
                        arr_87 [i_21] [i_25] [i_6] = ((/* implicit */short) arr_60 [i_0] [i_25]);
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_86 [i_25] [i_25 + 2] [i_25] [i_25] [i_25 + 1] [i_25] [i_25 - 1])) ? (((/* implicit */int) arr_86 [i_25] [i_25 - 1] [i_25] [i_25] [i_25 - 3] [i_25] [i_25 + 1])) : (((/* implicit */int) arr_82 [i_25] [i_25 - 2] [i_25] [i_25] [i_25 - 2] [i_25] [i_25 - 2]))));
                        var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_9] [i_9] [i_9 - 1] [i_9] [i_9])) ? (((/* implicit */int) arr_84 [i_9] [i_9] [i_9 + 2] [i_9] [i_9])) : (((/* implicit */int) arr_84 [i_9] [i_9] [i_9 - 3] [i_9] [i_9])))))));
                        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) ((arr_81 [i_25 + 2] [i_9 + 1] [i_9] [i_9 + 1] [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_21])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))))));
                    }
                    var_56 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_66 [i_0] [i_6])))) >> (((((arr_5 [i_0]) ? (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_21] [i_0]) : (((/* implicit */int) arr_84 [i_0] [i_0] [i_6] [i_9] [i_21])))) - (303320205)))));
                    arr_88 [i_6] [i_9] [i_21] = ((/* implicit */unsigned char) arr_43 [i_6]);
                }
                arr_89 [i_9] [i_6] [i_0] = ((/* implicit */_Bool) var_8);
            }
            arr_90 [i_6] [i_6] = ((/* implicit */unsigned char) (~(arr_81 [i_0] [i_0] [i_0] [i_6] [i_6])));
            arr_91 [i_0] = ((/* implicit */_Bool) -548135952);
            var_57 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((14747578893565673497ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            var_58 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_74 [i_6] [i_6] [i_6] [i_6] [i_0] [i_0]))));
        }
        var_59 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [(unsigned char)4] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_28 [i_0] [i_0] [10LL]) : (arr_28 [i_0] [i_0] [10U])));
    }
    for (long long int i_26 = 2; i_26 < 22; i_26 += 3) 
    {
        var_60 += ((/* implicit */unsigned char) ((arr_92 [i_26]) << (((((((/* implicit */_Bool) arr_92 [i_26])) ? (((/* implicit */long long int) arr_92 [i_26 - 2])) : ((-(var_1))))) - (968367869LL)))));
        var_61 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_92 [i_26 - 2])))));
    }
    var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) var_9)))))));
    var_63 = ((/* implicit */unsigned char) var_2);
}

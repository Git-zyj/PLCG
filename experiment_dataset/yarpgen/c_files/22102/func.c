/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22102
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1])))))));
        var_11 = max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) + (var_6))), (((long long int) (unsigned short)30271)));
        arr_3 [i_0] = ((((/* implicit */_Bool) 15322349724206139839ULL)) ? (((/* implicit */unsigned long long int) -431941352874087401LL)) : (3124394349503411758ULL));
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))));
            arr_10 [i_2] = ((/* implicit */_Bool) 0ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            arr_14 [(unsigned char)6] [(unsigned char)6] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3 + 2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_3])))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 3; i_5 < 19; i_5 += 3) 
                {
                    {
                        arr_19 [i_4] [i_3] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_10)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_5 + 2]))));
                            arr_24 [i_1] [i_3] [i_3] [(_Bool)1] [(_Bool)1] [i_5] [i_4] = ((/* implicit */int) ((_Bool) arr_17 [i_1] [i_1] [i_1 + 1] [i_1]));
                        }
                    }
                } 
            } 
            var_12 = ((/* implicit */long long int) max((var_12), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 0)))) - (arr_0 [i_1 + 1])))));
            var_13 = ((/* implicit */int) var_3);
        }
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            arr_27 [i_7] [14LL] = ((((/* implicit */_Bool) ((int) (-(7994900889214674646LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4087680241680078742LL)) ? ((((_Bool)1) ? (arr_20 [(unsigned char)12] [i_7] [(unsigned short)15] [i_1 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_1] [i_1] [i_1]))))))) : (var_0));
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                for (unsigned short i_9 = 2; i_9 < 18; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) 15322349724206139848ULL))));
                            arr_35 [i_1] [10LL] [(_Bool)1] [i_1] [i_9] [(signed char)11] [i_7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_17 [i_1] [i_9 + 1] [i_10 + 2] [i_10])) ? (((/* implicit */int) arr_17 [13] [i_9 + 2] [i_10 + 3] [1ULL])) : (((/* implicit */int) arr_17 [(_Bool)1] [i_9 + 3] [i_10 + 2] [i_10]))))));
                            arr_36 [i_7] [i_1] [i_7] [i_8] [i_9 - 1] [i_8] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_22 [i_1] [i_7] [i_1] [i_1 - 1] [i_10 - 1] [i_10 + 2]))));
                            var_15 = ((/* implicit */unsigned char) (+(((arr_32 [3LL] [i_10 - 1] [i_9] [(_Bool)1] [i_10 + 3] [11]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_31 [i_1] [i_10 + 2] [i_8] [i_1 - 1] [i_10] [i_8])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_13 = 0; i_13 < 21; i_13 += 4) 
                {
                    arr_48 [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) arr_43 [i_11] [i_11] [i_13]))))) == (((unsigned long long int) var_7))));
                    arr_49 [i_12] [i_11] [(unsigned char)7] [i_13] [i_13] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(15322349724206139852ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)35260))) : (var_3)))));
                    var_16 = ((/* implicit */_Bool) ((signed char) ((_Bool) (_Bool)1)));
                    arr_50 [i_1] [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(arr_20 [i_1 - 1] [i_12] [i_1] [i_1 - 1] [i_1])))), ((+(18446744073709551615ULL)))));
                }
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        arr_56 [i_1] [i_1] [i_12] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -6042380536782059311LL)) ? (var_5) : (((/* implicit */unsigned long long int) var_10)))));
                        var_17 *= ((((/* implicit */long long int) var_10)) >= (arr_53 [i_11] [i_14] [i_12] [i_11] [i_11]));
                        arr_57 [5LL] [i_14] [i_12] [i_12] [5LL] [(unsigned char)8] = (!(((/* implicit */_Bool) var_1)));
                    }
                    arr_58 [i_1] [i_11] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_32 [i_14] [(unsigned short)0] [i_12] [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_32 [i_1] [10LL] [(signed char)12] [i_14] [i_11] [i_14]))));
                    /* LoopSeq 3 */
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 4) 
                    {
                        arr_63 [i_1] [i_1] [i_12] [5ULL] = ((/* implicit */unsigned char) ((long long int) var_1));
                        var_18 = ((/* implicit */long long int) ((unsigned long long int) arr_59 [i_1] [i_11] [i_12 + 1] [i_12] [i_12 + 1]));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((arr_42 [i_14] [i_11] [i_12] [i_12]) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) arr_18 [17ULL] [17ULL] [17ULL] [i_12])))) | (((/* implicit */int) arr_12 [i_1] [i_1] [i_12]))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_15 [(signed char)11]))));
                        arr_68 [i_1] [i_11] [i_12 + 1] [4] [i_14] [i_12] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_12])) ? (var_10) : (((/* implicit */int) arr_59 [(_Bool)1] [(unsigned short)12] [16ULL] [(unsigned short)11] [i_17]))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        var_21 = ((/* implicit */signed char) ((_Bool) arr_45 [i_1] [i_12] [i_1] [i_1] [(signed char)20] [i_1]));
                        var_22 -= ((/* implicit */int) ((_Bool) arr_12 [1LL] [i_12 + 1] [i_14]));
                        var_23 = ((/* implicit */unsigned long long int) (unsigned short)35267);
                    }
                    arr_71 [i_12] = ((/* implicit */int) -4117469045233619267LL);
                }
                var_24 = (i_12 % 2 == zero) ? (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_10) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) arr_34 [i_1] [i_12] [i_11] [(signed char)15] [i_12]))) - (10902))))))))) : (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_10) + (2147483647))) >> (((((((/* implicit */int) ((unsigned short) arr_34 [i_1] [i_12] [i_11] [(signed char)15] [i_12]))) - (10902))) - (28482)))))))));
            }
            for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    arr_78 [i_1] [i_11] [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_2) + (((/* implicit */long long int) arr_6 [i_1])))), ((-(arr_67 [i_20])))))) ? ((-(((/* implicit */int) (signed char)82)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                    var_25 += ((/* implicit */unsigned char) max(((_Bool)1), ((!(((/* implicit */_Bool) var_4))))));
                }
                for (signed char i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    arr_83 [(unsigned char)12] [i_11] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_21] [i_21] [i_1])) ? (((((/* implicit */_Bool) 1625530513)) ? (15322349724206139846ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    var_26 += ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    var_27 = ((/* implicit */int) arr_55 [i_1] [i_11] [i_11] [i_19] [i_11]);
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) max((((((/* implicit */_Bool) 6853881658688097139LL)) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) (unsigned short)47578)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL))))))))))));
                    var_29 &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [(unsigned short)17] [i_21] [(_Bool)1] [i_11] [i_1]))))) << ((((-(((/* implicit */int) arr_7 [i_1 + 1] [i_1])))) + (63907)))));
                }
                var_30 = ((/* implicit */long long int) (~((-(18446744073709551615ULL)))));
            }
            /* LoopSeq 1 */
            for (long long int i_22 = 1; i_22 < 20; i_22 += 2) 
            {
                arr_88 [i_1] [i_22] [12ULL] [i_1] = ((/* implicit */unsigned short) var_9);
                var_31 ^= ((max((arr_54 [(unsigned char)5] [i_11] [i_11] [i_11] [i_22 - 1]), (arr_54 [i_22] [i_22] [i_22] [i_22] [i_22 - 1]))) >> (((-5959385282861205212LL) + (5959385282861205222LL))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45063)) ? (((/* implicit */unsigned long long int) arr_31 [i_1] [i_11] [i_22] [i_22] [i_1 - 1] [i_22])) : (min((0ULL), (((/* implicit */unsigned long long int) 0LL))))));
                var_33 ^= ((/* implicit */int) var_9);
            }
            var_34 = ((/* implicit */long long int) ((((unsigned long long int) (_Bool)1)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))));
        }
        var_35 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
        var_36 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7741404600334012665LL)) ? (((/* implicit */int) (unsigned short)65029)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!((!((_Bool)1)))))) : (((/* implicit */int) (unsigned char)245))));
        arr_89 [i_1] [i_1] = var_4;
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((_Bool)1))))))) != (((((unsigned long long int) var_5)) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned char i_23 = 1; i_23 < 10; i_23 += 2) 
    {
        var_38 = ((/* implicit */long long int) (!(arr_44 [(signed char)10] [2ULL])));
        /* LoopNest 2 */
        for (unsigned char i_24 = 0; i_24 < 14; i_24 += 2) 
        {
            for (unsigned long long int i_25 = 2; i_25 < 12; i_25 += 4) 
            {
                {
                    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) arr_5 [i_24]))));
                    arr_97 [3ULL] [3ULL] = ((/* implicit */int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_23] [(unsigned char)4] [i_23] [(signed char)10])), (-7716874506665883868LL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [(_Bool)1] [i_24] [i_25 + 1] [3LL] [i_24])) ? (var_6) : (7741404600334012666LL))))))));
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) arr_74 [i_23 + 4]))));
                    var_41 = ((/* implicit */signed char) min(((-(arr_72 [i_25 - 2] [i_25 + 2] [i_23 - 1]))), (((/* implicit */long long int) arr_94 [i_25] [i_25] [i_25]))));
                }
            } 
        } 
        var_42 = ((/* implicit */_Bool) (((!(arr_39 [i_23 - 1] [i_23 + 4] [i_23 + 2]))) ? ((((~(var_6))) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))))) : (((/* implicit */long long int) arr_6 [i_23]))));
        arr_98 [i_23] = ((/* implicit */_Bool) max((arr_86 [4] [i_23]), (((/* implicit */unsigned long long int) arr_84 [i_23] [(_Bool)1] [i_23]))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_26 = 0; i_26 < 21; i_26 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_27 = 1; i_27 < 19; i_27 += 2) 
        {
            for (unsigned short i_28 = 0; i_28 < 21; i_28 += 4) 
            {
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    {
                        arr_108 [i_26] [i_27] = ((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_13 [20LL] [1ULL])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14646))))) : (((/* implicit */unsigned long long int) (-(arr_82 [i_26] [i_27] [i_28] [i_29])))))) >= (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (signed char)105)))))));
                        arr_109 [i_26] [i_26] [i_27] [i_26] = ((/* implicit */long long int) ((((max((((/* implicit */long long int) (_Bool)1)), (-2953250408037511294LL))) != (max((((/* implicit */long long int) arr_40 [i_26] [i_27])), (-7741404600334012668LL))))) && (((/* implicit */_Bool) (-((+(6042380536782059310LL))))))));
                        arr_110 [i_26] [i_28] [i_27] [i_29 - 1] [i_27] [16ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) % (arr_41 [i_27] [i_29 - 1] [i_27 + 2] [i_27])))) ? (((/* implicit */unsigned long long int) (-(var_2)))) : (min((((/* implicit */unsigned long long int) arr_53 [i_27 + 1] [i_27 + 1] [i_27 + 2] [i_29 - 1] [i_27])), (arr_41 [i_29] [i_29 - 1] [i_27 - 1] [i_26])))));
                    }
                } 
            } 
        } 
        arr_111 [i_26] [(unsigned short)2] = max((((var_2) / (arr_101 [i_26]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min(((signed char)-87), (((/* implicit */signed char) (_Bool)1)))))))));
        arr_112 [i_26] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_74 [i_26])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))));
        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88))))) / (((/* implicit */int) ((_Bool) arr_7 [(unsigned char)15] [(unsigned char)15])))))))))));
    }
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
    {
        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_30])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_1 [i_30]))));
        arr_116 [i_30] = min((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_115 [i_30])) ? (var_6) : (arr_113 [i_30])))))));
    }
    var_45 = (+(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (17634614305439860965ULL))), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))))));
    var_46 = ((/* implicit */_Bool) var_8);
}

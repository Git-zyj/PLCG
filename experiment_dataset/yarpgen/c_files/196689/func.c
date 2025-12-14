/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196689
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_14 [i_0] = ((/* implicit */short) (-(1598523844)));
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_4])) > (((/* implicit */int) arr_10 [i_1] [i_1])))))) > (max((((9000870363785817440ULL) + (((/* implicit */unsigned long long int) 505150141)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_13 [i_1] [i_4])))))))));
                        var_21 = min((((/* implicit */unsigned long long int) 2303380517U)), (9000870363785817459ULL));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14133604167906776261ULL)) ? (((((/* implicit */_Bool) 11U)) ? (arr_8 [i_0] [i_1]) : (((unsigned int) 9000870363785817465ULL)))) : (((2213188690U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 3] [i_0 + 2])))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((unsigned char) min((arr_10 [i_3] [i_1]), (arr_10 [i_0 + 3] [i_1]))));
                        arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_15)))))) ? (min((var_2), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [5U] [i_0]))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_18 [(unsigned short)5] [i_1] [i_2 + 2] [i_0] [(unsigned short)5] = ((/* implicit */unsigned char) ((unsigned short) ((long long int) arr_11 [i_2 + 2] [i_2] [i_0 - 1] [i_0 - 1])));
                        arr_19 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) 585383089);
                    }
                    var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 + 2] [(_Bool)1] [i_3] [(_Bool)1])) ? (arr_15 [i_0 + 3] [2] [i_3] [i_3]) : (((/* implicit */int) var_13)))))));
                    arr_20 [i_3] [i_2 + 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((arr_10 [i_0 + 3] [i_0 + 3]), (((/* implicit */unsigned char) var_6))))) ? (0ULL) : (min((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 + 3])), (var_19)))))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    var_25 ^= arr_11 [i_6] [i_2] [i_1] [i_0];
                    var_26 |= ((/* implicit */int) ((((unsigned long long int) arr_23 [(unsigned short)16] [10LL] [i_1] [(unsigned short)16])) & (((/* implicit */unsigned long long int) arr_23 [i_0] [i_1] [i_2 + 1] [(unsigned short)12]))));
                    var_27 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned long long int) 3951023393U)) : ((-(8886304661182605022ULL)))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    arr_29 [i_0] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_11 [i_7] [i_2] [i_1] [i_0])) ? (11648978415591925747ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                    arr_30 [i_7] [i_7] &= ((/* implicit */long long int) arr_12 [i_7]);
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_28 += ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_15))))));
                        arr_33 [i_1] [i_0] = ((/* implicit */unsigned int) arr_31 [2ULL] [(short)1] [i_2] [i_0] [i_0]);
                        arr_34 [i_0] [i_1] = ((/* implicit */unsigned int) var_16);
                        arr_35 [i_0] [i_7] [i_2] [i_0] = ((/* implicit */unsigned short) (short)12025);
                    }
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        arr_39 [i_0] [i_1] [i_1] [3ULL] [i_9] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0]);
                        var_29 = arr_15 [i_1] [i_1] [i_1] [i_1];
                        var_30 = ((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_9]))));
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_0] [(signed char)12] [i_0] [i_9]))) / (arr_11 [i_0] [i_0] [(signed char)13] [i_0])))) ? (arr_16 [i_9] [i_9] [i_7] [i_2 + 2] [i_2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                    }
                    for (signed char i_10 = 4; i_10 < 16; i_10 += 2) 
                    {
                        var_32 = ((/* implicit */signed char) var_18);
                        arr_44 [i_0] [i_1] [i_1] [17LL] [13LL] [i_0] [i_10 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_24 [i_0 + 1] [i_1] [i_2] [i_2 - 1] [i_7] [i_10]))));
                    }
                }
                arr_45 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)41)) * (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) arr_3 [i_0])))))));
                var_33 |= ((/* implicit */signed char) (unsigned short)548);
            }
            for (long long int i_11 = 2; i_11 < 18; i_11 += 4) 
            {
                arr_49 [i_0] [i_0] [3U] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)134)), (min((((((/* implicit */_Bool) arr_8 [i_0] [17U])) ? (((/* implicit */int) arr_6 [i_11] [i_11 + 1] [17])) : (((/* implicit */int) var_9)))), (arr_41 [i_0] [i_0] [i_0] [i_1] [i_11 + 1])))));
                arr_50 [i_0] [i_11 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (short)-20510)) ? (((9000870363785817443ULL) / (9445873709923734151ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))))));
                var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_43 [i_1]))));
            }
            /* vectorizable */
            for (unsigned int i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                var_35 = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_24 [i_0] [i_0 + 1] [i_1] [i_1] [i_12 + 1] [i_12]))))));
                arr_53 [0LL] [i_0] = ((/* implicit */unsigned short) (-((+(9445873709923734156ULL)))));
            }
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                var_36 += ((/* implicit */_Bool) (-(((unsigned long long int) arr_37 [i_13] [i_0 + 2] [i_0 + 2] [i_13]))));
                var_37 -= ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)41221)), (((((/* implicit */_Bool) (short)20509)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned short)58945))))));
                var_38 ^= ((/* implicit */long long int) ((1096491491) + (((/* implicit */int) (unsigned char)41))));
            }
            arr_56 [i_0] [i_0] [i_1] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
        }
        for (int i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            var_39 -= ((/* implicit */long long int) var_15);
            arr_60 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 9445873709923734159ULL)) ? (9346398501847274556ULL) : (9346398501847274564ULL)));
            var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_59 [i_0] [i_0] [i_14]) + (arr_59 [i_0] [i_14] [i_14])))) ^ (((min((arr_25 [i_0]), (9000870363785817456ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14156)))))));
            arr_61 [3] [i_0] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_14])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27747))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)64999)))))))) ? ((-(arr_5 [i_14] [7U] [7U]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [(_Bool)1] [i_0] [i_0] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-20510)), ((unsigned short)17002)))) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_15 = 3; i_15 < 17; i_15 += 1) 
        {
            var_41 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_0 + 3] [i_15 + 2] [i_15] [i_0])) >> (((arr_25 [i_0]) - (6340449390756754770ULL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_0 + 3] [i_15 + 2] [i_15] [i_0])) >> (((((arr_25 [i_0]) - (6340449390756754770ULL))) - (11558397284959201376ULL))))));
            var_42 &= ((/* implicit */short) (-(899007199U)));
        }
        /* LoopNest 3 */
        for (unsigned int i_16 = 1; i_16 < 17; i_16 += 4) 
        {
            for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                for (signed char i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_21 [i_0] [i_0] [(unsigned char)18] [i_0] [i_18])) != (min(((-(-7488236232504358166LL))), (min((var_5), (((/* implicit */long long int) var_6))))))));
                        arr_72 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = min((((/* implicit */long long int) (short)-21036)), (-9223372036854775793LL));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_19 = 3; i_19 < 17; i_19 += 2) 
    {
        for (long long int i_20 = 0; i_20 < 21; i_20 += 1) 
        {
            for (unsigned char i_21 = 1; i_21 < 19; i_21 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 2; i_22 < 19; i_22 += 2) 
                    {
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (12933321915846490162ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6616)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (unsigned short)58929)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (short)-27739)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58905))))))) : (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (short)30154)) % (((/* implicit */int) (signed char)1))))))));
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_73 [(unsigned char)18] [i_20]), (((/* implicit */long long int) arr_79 [i_22] [i_20] [i_21 + 1] [i_22]))))) || (((/* implicit */_Bool) arr_77 [i_22]))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) * (min((((/* implicit */unsigned int) (_Bool)1)), (880425729U))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 4) 
                    {
                        var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_20] [i_20])) ? (((/* implicit */long long int) (((_Bool)1) ? (-2147483640) : (((/* implicit */int) (_Bool)0))))) : (var_5)));
                        var_47 -= ((/* implicit */unsigned short) (unsigned char)235);
                    }
                    var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_84 [i_19 + 1] [i_20] [i_19 + 1] [i_21 + 1])) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_84 [i_19] [i_19] [i_19 - 3] [i_21 + 2]), (arr_84 [i_19] [13LL] [i_19 + 1] [i_21 - 1]))))) : (2575663545U)));
                    /* LoopNest 2 */
                    for (long long int i_24 = 3; i_24 < 20; i_24 += 3) 
                    {
                        for (unsigned short i_25 = 1; i_25 < 18; i_25 += 4) 
                        {
                            {
                                var_49 = ((/* implicit */unsigned int) arr_79 [i_20] [i_20] [17U] [i_24]);
                                arr_91 [i_19 + 4] [i_19] [i_20] = ((/* implicit */unsigned long long int) -6967867512381866731LL);
                                var_50 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(var_0)))) - (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_80 [i_19] [7ULL] [i_25])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (1065353216LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (min((arr_83 [15U] [i_20] [i_21] [i_25]), (((/* implicit */unsigned long long int) (short)30152))))))));
                            }
                        } 
                    } 
                    arr_92 [i_20] [i_21 + 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) < (((((/* implicit */int) (signed char)98)) >> (((/* implicit */int) arr_87 [i_20] [i_19])))))))) == (var_17));
                }
            } 
        } 
    } 
    var_51 = ((/* implicit */unsigned short) var_16);
    var_52 = ((/* implicit */int) ((signed char) (unsigned short)33891));
}

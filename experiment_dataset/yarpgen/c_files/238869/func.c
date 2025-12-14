/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238869
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) var_9)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-22))) > (arr_1 [i_0]))))))) + ((~(arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) / (((/* implicit */int) arr_0 [i_0]))))) || (((/* implicit */_Bool) var_13))));
        var_16 += ((/* implicit */long long int) (!(((arr_1 [i_0]) <= (arr_1 [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        var_17 = (~(((var_0) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_11)))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_13))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            var_19 = 3390887379063711153LL;
            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1 - 1])) + (((/* implicit */int) var_11))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(arr_13 [i_1 - 1]))))));
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3]))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                arr_17 [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_4 - 2] [i_3] [i_1 + 1]))));
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 20; i_5 += 4) 
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1])) ? (((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1] [i_5])) : (((/* implicit */int) arr_6 [i_5 + 1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (((long long int) var_9))));
                    var_24 = ((/* implicit */_Bool) ((arr_7 [i_1 + 1]) & (((arr_13 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5])))))));
                }
                var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-77))));
                arr_21 [i_1] [i_1] [i_4] &= ((/* implicit */int) ((unsigned short) arr_9 [i_4 - 1]));
            }
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                var_26 = ((/* implicit */short) (-(((/* implicit */int) arr_25 [i_1 - 1]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    arr_28 [(unsigned short)10] [i_3] [i_6] [i_7] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_12 [(_Bool)1] [i_6] [i_7])) + (((/* implicit */int) (unsigned char)33)))));
                    /* LoopSeq 2 */
                    for (int i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        arr_31 [i_8 + 2] [i_7] [i_6] [i_7] [i_8 - 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) != ((~(-434821543)))));
                        arr_32 [i_6] [i_7] = ((/* implicit */long long int) arr_11 [i_1 - 1]);
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_8 + 3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1]))) : (var_8))))));
                    }
                    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        arr_36 [(signed char)15] [(signed char)15] [i_7] [i_3] [i_1] = ((/* implicit */int) var_10);
                        arr_37 [i_9] [i_7] [i_6] [i_7] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_1 + 1] [i_1 + 1] [i_7]))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_7 [i_1 + 1])));
                        var_29 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1 + 1] [i_9])) ? (arr_22 [i_1 - 1] [i_1 - 1] [i_9]) : (arr_22 [i_1 + 1] [i_1 + 1] [i_3])));
                    }
                }
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_1 + 1]))));
                        arr_44 [i_1] [i_3] [i_6] [i_6] [i_6] [i_6] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_13 [i_1])))));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        arr_47 [i_12] [i_3] [i_6] [i_10] [i_12] [i_12] = ((((/* implicit */int) arr_5 [i_1 - 1])) - (((/* implicit */int) arr_34 [i_1] [i_1 - 1] [i_6] [i_10] [i_12] [i_1] [i_3])));
                        arr_48 [i_1] [i_12] [i_6] [i_12] [i_12] = ((/* implicit */_Bool) arr_42 [i_3]);
                        var_31 = ((/* implicit */_Bool) (+(arr_7 [i_1 + 1])));
                    }
                    for (int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_32 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_1] [i_1 + 1] [i_1 + 1]))));
                        var_33 = ((/* implicit */short) ((int) arr_8 [i_1 + 1] [i_1 + 1]));
                        var_34 = ((/* implicit */_Bool) var_6);
                    }
                    for (unsigned short i_14 = 1; i_14 < 20; i_14 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned char) 434821560);
                        arr_53 [i_14] [i_6] [i_10] [i_14 + 1] = ((/* implicit */unsigned int) 13004530046817168335ULL);
                        arr_54 [i_1] [i_3] [i_3] [i_3] [i_14] [i_10] [i_3] = ((/* implicit */int) (~(4478978659072519120LL)));
                        arr_55 [i_1] [i_14] [i_6] [i_10] [i_14] [i_10] [i_14] = ((/* implicit */short) var_2);
                    }
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_8 [i_1 - 1] [i_1 + 1])));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_1] [i_3] [i_6])) ? ((-(var_2))) : ((-(((/* implicit */int) var_1))))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_1] [10U] [10U] [i_1 + 1] [i_1 + 1])) ? (var_2) : (((/* implicit */int) arr_49 [i_1] [i_3]))));
                        var_39 |= ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_24 [i_3] [i_3] [i_6])) - (22))))) * (((/* implicit */int) ((arr_45 [i_6] [(unsigned char)18] [i_6] [i_6] [i_3] [i_6]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                    }
                    arr_58 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_1] [i_3] [i_6])) ? (((/* implicit */int) arr_27 [i_3] [i_6])) : (((/* implicit */int) (short)56))));
                    arr_59 [i_10] [i_6] [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1] [i_1 - 1] [i_3] [8ULL] [i_6] [i_10] [i_10])) ? (arr_13 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_6]))))))));
                }
                for (int i_16 = 1; i_16 < 19; i_16 += 4) /* same iter space */
                {
                    var_40 = ((/* implicit */int) ((137438953472LL) / (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_1] [i_1] [i_1] [i_1 - 1] [i_16 + 2])))));
                    arr_62 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        var_41 = ((/* implicit */signed char) (~(arr_39 [i_1 - 1] [i_1 + 1] [i_16] [i_16 - 1])));
                        var_42 = ((/* implicit */signed char) ((arr_19 [i_6]) ? (((/* implicit */int) arr_9 [i_1 + 1])) : (((/* implicit */int) arr_19 [i_6]))));
                    }
                    var_43 = 434821542;
                }
                for (int i_18 = 1; i_18 < 19; i_18 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        arr_71 [i_18] [(unsigned char)12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6] [i_18 + 1] [(_Bool)1] [i_19]))) <= (arr_7 [i_1 - 1])));
                        var_44 = ((/* implicit */signed char) var_9);
                    }
                    var_45 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3]))) <= (arr_22 [i_3] [i_6] [i_18 - 1]))) ? (((/* implicit */int) arr_12 [i_18 + 1] [i_18] [i_6])) : ((+(((/* implicit */int) var_13))))));
                }
                arr_72 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_6] [i_1 + 1]))))) > (((/* implicit */int) (unsigned char)245))));
            }
            arr_73 [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) var_7);
        }
    }
    /* vectorizable */
    for (short i_20 = 1; i_20 < 6; i_20 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) /* same iter space */
        {
            arr_78 [i_20] = ((/* implicit */short) ((signed char) var_2));
            arr_79 [i_20] = ((/* implicit */unsigned char) arr_6 [i_20 - 1]);
            /* LoopSeq 1 */
            for (unsigned short i_22 = 0; i_22 < 10; i_22 += 3) 
            {
                var_46 = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_11)))) - (((/* implicit */int) (unsigned char)31))));
                arr_82 [i_20] [i_21] [i_22] &= ((/* implicit */long long int) ((arr_15 [i_20] [i_21] [i_20 + 1]) >> (((((((/* implicit */_Bool) arr_69 [i_20 + 4] [i_21] [i_21] [i_20 + 4] [(short)14])) ? (((/* implicit */int) arr_6 [i_21])) : (((/* implicit */int) var_1)))) + (18061)))));
                arr_83 [i_20] [i_20 + 1] [i_21] [i_20] = ((/* implicit */signed char) arr_33 [i_22] [i_21] [i_21] [i_21] [(signed char)20]);
                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [(short)1] [i_21])) ? (1401761724241712113LL) : (-6423580367826474149LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_20 + 2]))) : (arr_39 [i_22] [i_22] [i_22] [i_22]))))));
            }
            var_48 = ((/* implicit */unsigned long long int) arr_1 [i_20 + 2]);
        }
        for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 2) /* same iter space */
        {
            var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_20 - 1] [i_20 - 1] [i_20 - 1])) != (((/* implicit */int) arr_27 [i_20 + 2] [i_20 + 2])))))));
            var_50 = ((((/* implicit */_Bool) arr_10 [i_20 - 1] [i_20 + 3] [i_20 - 1])) ? (arr_10 [i_20 + 2] [i_20 + 2] [i_20 + 4]) : (((/* implicit */unsigned int) var_2)));
            var_51 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(var_3)))) >= ((+(arr_22 [i_20] [i_20] [i_23])))));
        }
        /* LoopSeq 2 */
        for (signed char i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
        {
            var_52 = ((/* implicit */short) arr_0 [i_20 + 1]);
            /* LoopSeq 1 */
            for (long long int i_25 = 0; i_25 < 10; i_25 += 1) 
            {
                var_53 = ((/* implicit */int) var_11);
                /* LoopSeq 1 */
                for (unsigned long long int i_26 = 1; i_26 < 9; i_26 += 2) 
                {
                    var_54 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) - (((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_20 + 2])) || (((/* implicit */_Bool) 131071LL)))))));
                    var_55 += ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_1)))) ^ (((/* implicit */int) arr_9 [i_26 - 1]))));
                }
                arr_95 [i_20] [i_20] [i_25] [i_20] = ((/* implicit */short) ((int) (~(var_3))));
            }
            var_56 = arr_94 [i_24] [i_20] [i_20] [i_20 + 1];
        }
        for (signed char i_27 = 0; i_27 < 10; i_27 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_28 = 3; i_28 < 7; i_28 += 2) 
            {
                arr_102 [i_20] [i_27] [i_20] = ((/* implicit */unsigned int) ((((long long int) arr_13 [i_20])) == (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_28] [i_28 - 1] [i_28 + 2] [i_20 - 1] [i_20 + 2] [i_20])))));
                var_57 = ((/* implicit */short) ((var_10) ? (((/* implicit */int) arr_101 [i_20 + 3] [i_20])) : (((/* implicit */int) arr_16 [i_20 + 4] [i_27] [i_28]))));
            }
            arr_103 [i_20] [i_27] [i_20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
        }
        /* LoopSeq 1 */
        for (signed char i_29 = 1; i_29 < 8; i_29 += 4) 
        {
            var_58 ^= ((/* implicit */int) arr_68 [i_20] [3LL]);
            /* LoopSeq 2 */
            for (long long int i_30 = 1; i_30 < 9; i_30 += 3) 
            {
                var_59 = ((/* implicit */int) min((var_59), (((/* implicit */int) ((((/* implicit */_Bool) ((137438953472LL) * (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_20] [i_29] [i_30 + 1]))) : (((((/* implicit */_Bool) var_9)) ? (arr_26 [i_20] [i_29 - 1] [13]) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [(signed char)6] [i_20] [i_30 + 1]))))))))));
                /* LoopSeq 1 */
                for (short i_31 = 0; i_31 < 10; i_31 += 4) 
                {
                    var_60 -= ((/* implicit */signed char) ((int) var_13));
                    var_61 = ((/* implicit */int) arr_24 [i_20] [i_29] [i_30 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_32 = 4; i_32 < 8; i_32 += 3) 
                    {
                        var_62 = ((/* implicit */int) var_8);
                        arr_114 [i_20] [i_31] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_74 [i_20]))));
                        arr_115 [i_30] [i_20] = ((/* implicit */int) (~(((unsigned long long int) (_Bool)1))));
                        arr_116 [i_20] [i_29] [i_20] [i_31] [i_32 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) arr_74 [i_32 + 2]))));
                    }
                    var_63 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_93 [i_20] [i_20])) ? (((/* implicit */int) (unsigned short)20484)) : (((/* implicit */int) var_11))));
                }
            }
            for (unsigned short i_33 = 0; i_33 < 10; i_33 += 3) 
            {
                arr_121 [i_20] [i_20] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_20 + 4]))));
                arr_122 [i_20] [i_29 + 1] [i_29 + 1] [i_33] = 434821542;
                /* LoopSeq 2 */
                for (unsigned short i_34 = 0; i_34 < 10; i_34 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_35 = 2; i_35 < 7; i_35 += 3) 
                    {
                        var_64 ^= ((/* implicit */unsigned char) var_2);
                        var_65 -= ((/* implicit */long long int) ((434821543) | (((/* implicit */int) arr_19 [i_20 + 2]))));
                        var_66 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1431716586)) ? (-7662919399429158034LL) : (arr_42 [i_35 - 1])));
                        var_67 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_98 [(unsigned char)2])))) > (var_3)));
                        arr_128 [i_20 + 1] [(signed char)9] [i_33] [i_20] [i_35 + 2] = (!(((/* implicit */_Bool) (short)-32337)));
                    }
                    /* LoopSeq 2 */
                    for (short i_36 = 0; i_36 < 10; i_36 += 2) 
                    {
                        var_68 = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_20 - 1] [i_20 + 2])) || (var_10)));
                        arr_131 [(unsigned short)2] [i_29] [i_29 + 1] [i_33] [i_33] [i_20] [i_36] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_85 [i_20 + 2])) || (((/* implicit */_Bool) arr_85 [i_20 + 2]))));
                        arr_132 [i_20] [i_29] [i_33] [i_34] [i_20] = ((/* implicit */short) (+(((/* implicit */int) arr_104 [i_20 + 1] [i_20] [i_20]))));
                    }
                    for (short i_37 = 0; i_37 < 10; i_37 += 2) 
                    {
                        var_69 = ((/* implicit */signed char) var_10);
                        var_70 = ((/* implicit */unsigned long long int) max((var_70), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_123 [i_20 - 1] [i_20] [i_20 + 1] [i_20] [(short)4])) & (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) var_6))))))))));
                        var_71 = ((/* implicit */int) max((var_71), (((/* implicit */int) var_9))));
                    }
                }
                for (unsigned short i_38 = 0; i_38 < 10; i_38 += 2) 
                {
                    arr_137 [i_20] [i_33] [i_20] = ((/* implicit */short) (+(((/* implicit */int) arr_23 [i_20] [i_20] [i_20 + 2] [i_20 + 2]))));
                    /* LoopSeq 1 */
                    for (short i_39 = 2; i_39 < 8; i_39 += 2) 
                    {
                        var_72 = ((/* implicit */short) -434821543);
                        var_73 = ((/* implicit */_Bool) max((var_73), (((/* implicit */_Bool) var_1))));
                    }
                    var_74 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_20 - 1] [i_20 - 1] [i_33] [i_38] [i_33] [i_38])) ? (((/* implicit */int) arr_29 [i_20 + 2] [i_29 + 1] [i_33] [i_38] [i_29] [i_38])) : (((/* implicit */int) arr_29 [i_29 - 1] [i_29 + 1] [i_29 + 1] [i_29 + 1] [i_29] [i_29 + 1]))));
                }
            }
        }
    }
}

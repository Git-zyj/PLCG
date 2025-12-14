/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30282
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) (unsigned short)49259))))), (max((4294967295U), (((/* implicit */unsigned int) (unsigned char)160))))));
        var_19 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)204))))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) max((arr_2 [i_1]), (arr_2 [i_1])));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(arr_3 [i_2] [i_1]))))));
            /* LoopSeq 4 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_4 = 3; i_4 < 8; i_4 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(2399584992U))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) -6835444131782455098LL);
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 16140593828738749238ULL))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_0 [i_4]))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 8; i_6 += 4) /* same iter space */
                    {
                        var_27 = (~(arr_14 [i_4 - 1] [i_4] [i_2] [i_6 - 1]));
                        var_28 = ((/* implicit */_Bool) (-(arr_13 [(signed char)0] [(signed char)0] [1] [i_6 - 2] [i_6])));
                    }
                    var_29 = ((/* implicit */unsigned short) arr_5 [i_2]);
                    var_30 = ((/* implicit */unsigned int) arr_5 [i_2]);
                }
                for (signed char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                {
                    var_31 = arr_5 [i_2];
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_32 &= ((/* implicit */long long int) arr_10 [i_1] [i_3] [i_7] [i_8]);
                        var_33 = ((/* implicit */int) (-(arr_5 [i_2])));
                        var_34 |= ((/* implicit */signed char) (~(arr_7 [(signed char)9] [i_7])));
                    }
                    var_35 = ((/* implicit */long long int) (+(arr_12 [5] [i_2] [i_2] [i_2] [i_2])));
                    var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2]))));
                }
                for (signed char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */long long int) (~(arr_2 [i_1])));
                    var_38 *= ((/* implicit */unsigned int) arr_4 [i_1] [i_9]);
                }
                var_39 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
                var_40 = ((/* implicit */unsigned short) arr_1 [i_1] [i_2]);
            }
            for (unsigned int i_10 = 2; i_10 < 7; i_10 += 2) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned short) 1178659952U);
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 9; i_11 += 4) 
                {
                    for (int i_12 = 1; i_12 < 9; i_12 += 1) 
                    {
                        {
                            var_42 ^= ((/* implicit */unsigned char) (!(arr_30 [i_1] [i_1] [i_10])));
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_27 [i_12] [i_10 + 1])))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_13 = 2; i_13 < 7; i_13 += 2) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_1] [i_1] [i_2] [9] [i_13 + 3] [i_13 + 3]))));
                var_45 = ((/* implicit */unsigned char) arr_14 [i_13 + 1] [i_2] [i_2] [i_13 - 1]);
            }
            for (int i_14 = 1; i_14 < 7; i_14 += 1) 
            {
                var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 2] [i_14 + 2]))));
                var_47 = ((/* implicit */unsigned int) arr_38 [i_1] [i_1] [i_1]);
                var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) arr_31 [(_Bool)1] [i_2] [i_14 - 1] [i_2] [0]))));
                var_49 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_2]))));
                var_50 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-122))));
            }
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                var_51 |= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)39299))));
                var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) (-(arr_9 [i_1] [i_15] [(unsigned char)4] [i_16]))))));
            }
            for (unsigned short i_17 = 4; i_17 < 8; i_17 += 1) 
            {
                var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) (!(((/* implicit */_Bool) 1895382290U)))))));
                var_54 = ((/* implicit */unsigned short) arr_10 [i_1] [i_15] [i_17 - 1] [i_17 + 1]);
            }
            var_55 = ((/* implicit */signed char) arr_7 [i_1] [i_15]);
            var_56 = ((/* implicit */signed char) arr_18 [8LL] [i_1] [8LL] [i_15] [i_15] [i_1]);
        }
        for (short i_18 = 0; i_18 < 10; i_18 += 4) 
        {
            var_57 = max((((/* implicit */short) arr_23 [i_1] [i_18] [i_1] [i_1] [i_1])), (max((((/* implicit */short) arr_34 [i_1] [i_18] [i_18])), (arr_43 [i_18]))));
            var_58 = ((/* implicit */unsigned int) max((arr_17 [i_1] [2LL] [i_18] [i_1]), (((/* implicit */long long int) min(((!((_Bool)1))), ((!(((/* implicit */_Bool) arr_6 [i_18])))))))));
        }
        var_59 = ((/* implicit */int) (+(arr_1 [i_1] [i_1])));
    }
    /* LoopNest 3 */
    for (unsigned int i_19 = 1; i_19 < 22; i_19 += 2) 
    {
        for (signed char i_20 = 3; i_20 < 23; i_20 += 3) 
        {
            for (int i_21 = 2; i_21 < 21; i_21 += 4) 
            {
                {
                    var_60 = ((/* implicit */unsigned int) min((var_60), (((/* implicit */unsigned int) max((arr_50 [i_21]), (min((arr_56 [i_19 + 2] [i_20 - 3] [i_21]), (arr_50 [i_21]))))))));
                    var_61 = ((/* implicit */int) min((var_61), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_53 [i_21 + 1] [i_19])), (arr_49 [i_19] [i_21])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_22 = 1; i_22 < 11; i_22 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_23 = 1; i_23 < 11; i_23 += 2) 
        {
            var_62 = ((/* implicit */signed char) min((((/* implicit */int) arr_58 [i_22] [i_23])), (arr_56 [i_22] [i_22] [i_22])));
            var_63 = ((/* implicit */unsigned char) arr_51 [i_22]);
            var_64 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)61816))));
            /* LoopNest 2 */
            for (unsigned char i_24 = 0; i_24 < 13; i_24 += 3) 
            {
                for (signed char i_25 = 3; i_25 < 11; i_25 += 3) 
                {
                    {
                        var_65 = ((/* implicit */unsigned short) arr_59 [i_23 + 1]);
                        var_66 = ((/* implicit */long long int) min((var_66), (((/* implicit */long long int) max((min((arr_68 [i_25] [i_25] [i_25 - 3] [i_25] [i_25 - 3] [i_25 - 3]), (arr_68 [i_22] [i_23 - 1] [i_24] [i_24] [i_24] [3LL]))), (arr_68 [i_22] [i_22] [i_24] [i_24] [i_22] [i_25]))))));
                        var_67 = ((/* implicit */int) 1895382290U);
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned short i_26 = 1; i_26 < 12; i_26 += 2) 
        {
            var_68 = ((/* implicit */long long int) max((arr_56 [i_26] [i_26] [i_22]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_22])))))));
            var_69 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), (arr_70 [i_22])))))))));
        }
        /* vectorizable */
        for (unsigned short i_27 = 0; i_27 < 13; i_27 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_29 = 1; i_29 < 12; i_29 += 3) 
                {
                    var_70 = ((/* implicit */signed char) (-(((/* implicit */int) arr_73 [i_22] [i_22 + 1]))));
                    var_71 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_60 [i_22 + 2] [i_22]))));
                }
                var_72 = ((/* implicit */short) max((var_72), (((/* implicit */short) (+(13U))))));
                var_73 = arr_56 [i_22] [22U] [i_22];
            }
            /* LoopSeq 2 */
            for (unsigned char i_30 = 1; i_30 < 12; i_30 += 1) 
            {
                var_74 = ((/* implicit */int) max((var_74), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_74 [i_30] [i_27] [i_27] [i_22]))))))))));
                var_75 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_78 [i_22] [i_22 - 1] [i_22 - 1] [i_30 + 1] [i_30 + 1]))));
            }
            for (long long int i_31 = 3; i_31 < 12; i_31 += 3) 
            {
                var_76 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_73 [i_31] [i_27])))))));
                /* LoopSeq 2 */
                for (unsigned int i_32 = 1; i_32 < 11; i_32 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_33 = 0; i_33 < 13; i_33 += 3) 
                    {
                        var_77 = ((/* implicit */short) arr_54 [i_27] [i_33]);
                        var_78 = ((/* implicit */int) (-(1561916162U)));
                        var_79 = ((/* implicit */signed char) arr_77 [i_22 + 1] [i_31 - 2] [i_22]);
                    }
                    for (signed char i_34 = 2; i_34 < 12; i_34 += 2) 
                    {
                        var_80 = arr_71 [i_27] [i_31 - 2] [i_34 + 1];
                        var_81 = ((/* implicit */short) arr_49 [i_22] [i_32 + 2]);
                        var_82 = ((/* implicit */unsigned int) min((var_82), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_88 [i_22] [i_27] [i_31 - 1]))))))))));
                        var_83 = ((/* implicit */signed char) (+(0LL)));
                    }
                    for (unsigned int i_35 = 0; i_35 < 13; i_35 += 4) 
                    {
                        var_84 -= ((/* implicit */unsigned short) arr_65 [i_35] [i_27] [i_31]);
                        var_85 = ((/* implicit */long long int) (+(((/* implicit */int) arr_72 [i_35]))));
                        var_86 = ((/* implicit */unsigned long long int) arr_94 [i_22] [i_22] [i_27] [i_27] [i_27] [i_32] [i_35]);
                        var_87 = ((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)96))))));
                        var_88 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_61 [i_22] [i_31 + 1]))));
                    }
                    var_89 = ((/* implicit */int) arr_65 [i_22] [i_22] [(signed char)12]);
                    var_90 = ((/* implicit */signed char) arr_50 [i_22]);
                    var_91 = ((/* implicit */unsigned int) (short)-10292);
                }
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_37 = 1; i_37 < 11; i_37 += 3) 
                    {
                        var_92 = ((/* implicit */signed char) arr_73 [i_22 + 2] [i_22 + 2]);
                        var_93 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_69 [i_27]))));
                        var_94 = arr_73 [i_31] [i_27];
                        var_95 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_74 [i_22 - 1] [i_22 - 1] [i_31 - 2] [i_31 - 1]))));
                    }
                    for (signed char i_38 = 4; i_38 < 12; i_38 += 2) /* same iter space */
                    {
                        var_96 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_74 [i_22] [i_31 - 2] [i_36] [i_38 + 1]))));
                        var_97 += ((/* implicit */short) arr_62 [i_22]);
                        var_98 = ((/* implicit */short) arr_100 [i_38 + 1] [i_22 + 1] [i_31 - 1] [i_36] [i_38 + 1]);
                    }
                    for (signed char i_39 = 4; i_39 < 12; i_39 += 2) /* same iter space */
                    {
                        var_99 = ((/* implicit */unsigned char) (unsigned short)26603);
                        var_100 = (~(((/* implicit */int) arr_75 [i_22 + 1])));
                        var_101 = ((/* implicit */unsigned int) arr_95 [i_22] [i_22] [i_22] [i_31 - 1]);
                        var_102 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_97 [i_22] [i_39 - 1] [i_39 - 2]))));
                    }
                    var_103 = ((/* implicit */unsigned char) arr_54 [1LL] [i_27]);
                }
            }
        }
        for (int i_40 = 3; i_40 < 12; i_40 += 1) 
        {
            var_104 = ((/* implicit */unsigned short) max((var_104), (((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_53 [i_40 + 1] [i_22 + 1]), (arr_53 [i_40 - 3] [i_22 + 1])))))))));
            var_105 ^= ((/* implicit */long long int) arr_83 [i_22]);
            var_106 = ((/* implicit */unsigned short) arr_67 [i_22] [i_40 - 2]);
        }
        var_107 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_51 [i_22 + 2]))))), (arr_82 [i_22] [i_22 - 1] [i_22] [i_22])));
        var_108 = ((/* implicit */_Bool) (+(arr_76 [i_22 + 2] [i_22] [10])));
        var_109 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_50 [i_22])), (arr_83 [i_22])));
    }
    for (signed char i_41 = 1; i_41 < 21; i_41 += 3) 
    {
        var_110 = ((/* implicit */long long int) max((var_110), (((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(arr_50 [14ULL]))), (((/* implicit */int) (signed char)0))))))))));
        var_111 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)50)), ((+(arr_54 [i_41 - 1] [i_41 + 1])))));
        var_112 = ((/* implicit */long long int) -2080295255);
        var_113 = ((/* implicit */signed char) min((var_113), (((/* implicit */signed char) arr_51 [i_41 + 1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_42 = 0; i_42 < 22; i_42 += 1) 
        {
            var_114 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_110 [i_41]))));
            var_115 = (unsigned char)84;
        }
    }
}

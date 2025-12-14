/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198372
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
    var_14 ^= ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            var_15 = ((/* implicit */int) (short)29970);
            arr_4 [4U] [i_1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_9 [i_0 + 1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) (unsigned short)65535)) & (-1928812098))), (1928812098)));
            arr_10 [i_0] = (+(((unsigned long long int) 1928812098)));
            var_16 = ((/* implicit */unsigned short) max((((int) ((((/* implicit */_Bool) arr_7 [(unsigned short)6])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)8] [i_2] [i_2])))))), ((-(arr_3 [i_0 + 1] [i_2])))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) (-(1928812098)))), (((((/* implicit */unsigned long long int) -1928812125)) / (var_0))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 3) 
                {
                    {
                        var_18 ^= ((/* implicit */signed char) max(((-(((((((/* implicit */int) arr_7 [i_0])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)23888)) - (23858))))))), ((-(((int) 1928812098))))));
                        var_19 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((1928812098) | (((/* implicit */int) (_Bool)1)))) : (-965614771))));
                        arr_20 [i_0] [i_0] [3LL] [i_4] [i_5] = ((/* implicit */unsigned long long int) -2008383202);
                        arr_21 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 0LL)) & (((unsigned long long int) arr_13 [i_0] [i_3] [i_5 + 1]))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((_Bool) (+(2407041187U))))), ((+(arr_16 [i_0 - 1] [i_0 + 1])))));
                arr_24 [i_0] = ((/* implicit */unsigned char) max((-1928812129), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) <= (6411356673342707542LL))))));
                var_21 *= ((/* implicit */short) arr_12 [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_8 [i_0])) ? (507073969) : (1928812127))), (arr_19 [i_0 - 1]))) << ((((-(-1928812098))) - (1928812098)))));
            }
            for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                arr_27 [i_0] [i_7] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)23890)) ? (((/* implicit */unsigned long long int) -8205388434705109855LL)) : (arr_15 [i_0] [i_0 + 1] [8U] [i_0]))) >> (((arr_26 [i_0 - 1] [i_0] [i_0]) - (2074350758))))) << (((-834417607) + (834417608)))));
                arr_28 [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */_Bool) arr_19 [i_3]);
                /* LoopSeq 1 */
                for (unsigned char i_8 = 1; i_8 < 10; i_8 += 3) 
                {
                    var_23 = ((/* implicit */unsigned char) (-(max(((~(((/* implicit */int) arr_29 [i_0 + 1] [11U] [i_0] [i_0] [i_0 + 1])))), (((/* implicit */int) (unsigned char)233))))));
                    arr_31 [i_0 - 1] [i_3] [1] [i_8] [i_3] [i_0] = ((/* implicit */_Bool) max((max((((arr_3 [i_0 + 2] [i_8]) - (arr_26 [i_0] [i_3] [i_3]))), (((((/* implicit */_Bool) -4282961591193129615LL)) ? (((/* implicit */int) (short)15805)) : (((/* implicit */int) (short)-15)))))), (((arr_13 [i_7] [i_3] [i_0 + 2]) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)37828)) > (((/* implicit */int) (_Bool)1))))) : (max((var_11), (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [(short)7]))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (unsigned short i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) (~((~(var_11)))));
                            arr_37 [i_0] [i_0] [i_0] [i_9] [i_9] [i_10 + 1] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_14 [i_0] [i_10 + 1])) ? (((/* implicit */int) (unsigned short)57063)) : (((/* implicit */int) (short)17683)))));
                            var_25 = ((/* implicit */long long int) (-((-(arr_19 [i_0 - 1])))));
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) 4225058735U))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_22 [i_3] [i_7] [i_9] [i_3]))))))) ^ ((-(13321474900273388800ULL)))));
                        }
                    } 
                } 
                var_28 &= ((/* implicit */unsigned long long int) ((max((2509459945U), (((/* implicit */unsigned int) max((arr_14 [2ULL] [i_3]), (var_5)))))) == (((/* implicit */unsigned int) ((/* implicit */int) max((arr_25 [i_0] [i_0] [i_7 + 1]), (((/* implicit */short) (signed char)79))))))));
            }
            for (int i_11 = 3; i_11 < 8; i_11 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((unsigned long long int) (short)-17684)))));
                arr_40 [i_0] = ((/* implicit */short) (((_Bool)0) ? ((((((_Bool)0) ? (((/* implicit */long long int) 1928812125)) : (arr_33 [i_0] [i_0] [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_11 + 4] [i_3] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_3] [i_11 + 3])) : (((/* implicit */int) var_13))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -834417607))))) < (((/* implicit */int) ((69908560U) <= (((/* implicit */unsigned int) arr_3 [i_0 + 1] [i_0 + 1])))))))))));
                var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_3] [i_0])) : (min((arr_3 [i_0 + 1] [i_0]), (0))))))));
            }
            for (short i_12 = 1; i_12 < 11; i_12 += 2) 
            {
                arr_43 [i_0] [i_3] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (short)32767))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_35 [i_0 + 2] [i_3] [i_3] [i_12] [10ULL])) ? (1928812124) : (((/* implicit */int) var_2))))))) : (4015977199U)));
                arr_44 [i_3] [i_3] [i_0] [i_3] = (-(min((((/* implicit */int) (unsigned short)11)), (((((-1928812099) + (2147483647))) << (((((/* implicit */int) (unsigned short)9091)) - (9091))))))));
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1928812125)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 50331648)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_36 [i_0] [i_0 + 1] [i_3] [i_3] [i_3] [i_12 - 1] [(unsigned short)9]))))) : (arr_33 [i_12] [i_12] [i_12])))) ? ((~(((/* implicit */int) (short)4532)))) : (((/* implicit */int) var_9)))))));
                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_12] [i_0 + 1])))))))) ? (((/* implicit */int) ((1096401869) >= (((/* implicit */int) (!(((/* implicit */_Bool) 834417607)))))))) : ((~((~(((/* implicit */int) var_9))))))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_13 = 1; i_13 < 9; i_13 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [6] [6] [i_13 - 1])) ? (arr_46 [(signed char)2] [i_3] [i_13 - 1]) : (((/* implicit */unsigned long long int) arr_38 [i_0 - 1] [i_13 + 1] [i_13 - 1]))))) ? (min((100992324), (((/* implicit */int) (signed char)-87)))) : (((/* implicit */int) (signed char)18)))))));
                var_34 = ((/* implicit */int) ((unsigned int) (unsigned short)18331));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_14 = 2; i_14 < 9; i_14 += 3) 
                {
                    var_35 = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (0U)))));
                    var_36 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_0 + 1] [i_14 - 1] [i_14] [i_14]))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_15 = 1; i_15 < 10; i_15 += 3) 
                {
                    var_37 = ((/* implicit */unsigned int) (unsigned short)24499);
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_13] [i_13 + 2] [i_13] [i_3])))))));
                    var_39 |= (((_Bool)0) ? (((((/* implicit */_Bool) arr_11 [(short)2] [i_3] [i_13])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-19)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (arr_15 [i_0 - 1] [i_3] [i_13] [i_15])))));
                }
            }
            for (unsigned short i_16 = 1; i_16 < 9; i_16 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    var_40 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)65535)), ((-(((/* implicit */int) arr_41 [i_16 + 1] [i_3] [i_3]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_18 = 3; i_18 < 11; i_18 += 1) 
                    {
                        arr_63 [i_0] [i_0] [i_16 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) -834417607);
                        var_41 = ((/* implicit */unsigned short) arr_53 [(unsigned short)6] [i_3] [i_17] [(unsigned short)6]);
                    }
                    var_42 = ((/* implicit */long long int) arr_50 [i_0] [i_3] [i_16] [i_17]);
                }
                for (signed char i_19 = 0; i_19 < 12; i_19 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) 100992321))));
                    arr_66 [i_0] [i_0] [i_0] [i_0] [i_19] = (~((-(((arr_13 [i_0 + 1] [i_3] [i_3]) ? (arr_49 [i_0] [i_0]) : (50331648))))));
                    var_44 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) ((50331648) / (((/* implicit */int) (signed char)87))))))));
                    var_45 *= ((/* implicit */short) ((((/* implicit */_Bool) min((1982321969), (((/* implicit */int) (signed char)124))))) ? ((-(arr_47 [i_0 + 2] [i_0 + 2] [i_16 - 1] [i_16 + 1]))) : ((~(arr_47 [i_0 + 1] [i_0 - 1] [i_16 + 2] [i_16 + 3])))));
                }
                /* vectorizable */
                for (signed char i_20 = 0; i_20 < 12; i_20 += 1) /* same iter space */
                {
                    arr_69 [i_0] [i_3] [i_16] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) arr_58 [i_20] [i_16] [i_3] [i_0 + 2])))));
                    arr_70 [i_20] [i_20] [i_20] [(short)10] [i_20] [i_20] &= (-((+(((/* implicit */int) var_2)))));
                    arr_71 [(unsigned char)7] [i_0] [(signed char)4] [(unsigned short)11] = ((/* implicit */_Bool) (+(arr_61 [i_0 + 1] [i_0] [i_16 + 2] [i_16 + 2])));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    var_46 ^= arr_42 [(unsigned char)7] [i_0 - 1] [i_0 + 2];
                    var_47 = var_12;
                    arr_75 [i_16] [i_16] [i_16 + 1] [i_16 - 1] [i_0] [i_16 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-29193)) ? (arr_64 [i_0 - 1] [i_0 - 1] [i_16] [i_16 + 1] [i_16 + 1]) : (((/* implicit */unsigned int) (~(-1982321970))))));
                    var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_62 [(signed char)11] [i_16] [i_16] [i_16] [i_16 + 3] [i_16 + 2] [i_16]))));
                    arr_76 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_62 [i_0] [i_16 + 3] [i_21] [i_16 + 3] [10ULL] [i_21] [i_21]));
                }
            }
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_23 = 2; i_23 < 8; i_23 += 1) 
            {
                var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_18 [i_0] [i_22] [i_23] [i_0 + 2]) : (((/* implicit */long long int) (~(1838551029))))));
                /* LoopNest 2 */
                for (short i_24 = 3; i_24 < 11; i_24 += 1) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned short) ((long long int) 1066795273U));
                            arr_88 [i_0] [i_0] [i_22] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)18))) : (3710190184976914475LL))) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                            arr_89 [i_25] [i_0] [i_23] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) (unsigned short)19137)) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_25] [i_22] [i_24 + 1] [i_22] [i_23] [i_22] [i_0 + 1]))) : (-7537877816578579244LL))) & (((/* implicit */long long int) min((1859187858U), (((/* implicit */unsigned int) (signed char)-19))))))));
                            var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) ((((/* implicit */int) arr_17 [i_25] [(short)10] [i_24 + 1])) <= (((((/* implicit */_Bool) arr_17 [i_24] [0U] [i_24 - 2])) ? (((/* implicit */int) arr_17 [i_25] [0] [i_24 - 3])) : (((/* implicit */int) arr_77 [i_23 + 2])))))))));
                            var_52 = ((((unsigned long long int) 0)) > (((/* implicit */unsigned long long int) max((arr_81 [i_23 + 4] [i_24 - 3] [i_24 - 3]), (((/* implicit */int) min(((signed char)44), ((signed char)97))))))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */unsigned int) (~(((((-587576062) > (50331648))) ? (((((/* implicit */_Bool) arr_53 [i_0] [i_22] [i_22] [i_23 + 4])) ? (2782454319443842236ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_77 [i_0 + 1])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-52)))))))));
                var_54 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)47609))))) - (-988559558551730360LL)));
            }
            /* vectorizable */
            for (short i_26 = 3; i_26 < 10; i_26 += 3) 
            {
                arr_93 [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)39091))));
                arr_94 [i_0] [i_22] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_19 [i_26 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))) : (-3659158956616012025LL))) > (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-98)))))));
                var_55 = ((/* implicit */short) (((_Bool)1) ? (arr_68 [i_0 + 2] [i_0 - 1] [i_26 - 3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_92 [i_0] [i_0 + 1] [i_26 + 1])))));
                var_56 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -587576078)) ? (-50331648) : (((/* implicit */int) (signed char)9))));
                var_57 = ((/* implicit */unsigned int) ((unsigned short) arr_57 [i_0] [i_0 + 2] [i_26 + 2]));
            }
            for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 2) 
            {
                arr_97 [i_0] [i_0] = ((/* implicit */unsigned short) (-(-587576062)));
                var_58 = ((/* implicit */unsigned long long int) -988559558551730360LL);
                arr_98 [i_0] [i_22] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_95 [i_0 + 2]), (arr_95 [i_0 + 1])))) ? (((/* implicit */int) min((arr_95 [i_0 - 1]), (arr_95 [i_0 + 1])))) : (((/* implicit */int) arr_95 [i_0 - 1]))));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_28 = 0; i_28 < 12; i_28 += 4) /* same iter space */
            {
                var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) arr_79 [i_0 + 2] [i_0 + 1]))));
                arr_101 [i_0] = ((unsigned int) arr_59 [(short)4] [i_0] [i_22] [i_28] [i_28]);
                var_60 = ((/* implicit */signed char) 587576062);
                var_61 = ((/* implicit */short) (-(-100992324)));
            }
            /* vectorizable */
            for (int i_29 = 0; i_29 < 12; i_29 += 4) /* same iter space */
            {
                var_62 = ((/* implicit */unsigned long long int) ((signed char) -438395578));
                var_63 = ((/* implicit */_Bool) (unsigned short)17495);
            }
            /* vectorizable */
            for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 3) 
            {
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 12; i_31 += 4) 
                {
                    for (int i_32 = 0; i_32 < 12; i_32 += 2) 
                    {
                        {
                            var_64 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) var_12)) : (((((/* implicit */_Bool) arr_23 [i_32] [i_30] [i_22] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_22] [i_30] [i_31] [i_31] [i_32]))) : (418080842U)))));
                            var_65 = ((/* implicit */int) ((((/* implicit */_Bool) arr_90 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_0]))) : (arr_108 [i_0] [7] [i_0 + 2] [i_0])));
                        }
                    } 
                } 
                arr_111 [i_0] [i_0 - 1] [i_22] [i_30] = ((unsigned short) ((short) arr_19 [i_22]));
                var_66 = ((/* implicit */short) (unsigned short)65535);
            }
        }
        var_67 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-6683))))) ? (((/* implicit */unsigned long long int) 2189214756U)) : (10501344370334787033ULL)));
        var_68 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) arr_59 [i_0] [i_0] [i_0] [8ULL] [(unsigned short)9])) << (((((/* implicit */int) var_2)) + (1786))))) : (((((/* implicit */_Bool) var_2)) ? (-100992322) : (((/* implicit */int) arr_106 [i_0] [i_0])))))) > (((/* implicit */int) min(((unsigned short)36654), (var_5))))));
    }
    var_69 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-32767)) - (-896365386))) + (((((/* implicit */_Bool) -1798356142)) ? (-834417607) : (((/* implicit */int) var_10))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)29192)) * (((/* implicit */int) var_3)))) << (((((unsigned int) var_11)) - (739848176U))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201119
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) ((unsigned int) var_3));
        var_12 ^= ((/* implicit */int) ((arr_0 [i_0]) - (((/* implicit */unsigned int) var_0))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 3; i_3 < 7; i_3 += 1) 
            {
                arr_12 [i_3] [(unsigned char)9] [i_1] = (+(((/* implicit */int) (_Bool)1)));
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_8))));
            }
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
            {
                var_14 = ((/* implicit */unsigned char) (+(-1005346337)));
                arr_17 [i_1] [i_1] [i_1] = ((/* implicit */short) ((unsigned char) (unsigned short)16060));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)25581)) ? (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4] [i_4])) : (0ULL)));
            }
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
            {
                var_16 += ((/* implicit */unsigned long long int) (-(arr_2 [i_1])));
                var_17 = ((/* implicit */short) ((int) arr_4 [i_1] [i_2]));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)226)) ? (((unsigned long long int) (unsigned short)29684)) : (11106950688691207033ULL)));
                var_19 = ((/* implicit */unsigned short) (~(arr_16 [(short)7] [i_2] [i_1])));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_7 [i_1] [i_2] [i_5])))))))));
            }
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)11536))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            arr_22 [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((3079379911U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1]))))) == (((/* implicit */unsigned int) ((((-819691815) + (2147483647))) >> (((2366726843U) - (2366726817U))))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 1; i_7 < 7; i_7 += 2) 
            {
                arr_25 [i_6] [i_6] [i_7 + 4] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1] [i_1])))));
                /* LoopSeq 3 */
                for (unsigned int i_8 = 1; i_8 < 8; i_8 += 3) 
                {
                    arr_30 [i_6] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((unsigned char) (_Bool)1));
                    arr_31 [i_1] [i_8] [i_8] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)197)) && (((/* implicit */_Bool) var_6)))))));
                    /* LoopSeq 1 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        var_22 ^= ((/* implicit */unsigned int) var_10);
                        arr_36 [i_1] [i_6] [i_6] [i_8] [i_9] [(_Bool)1] = ((/* implicit */unsigned int) arr_35 [i_6]);
                        var_23 *= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_1)) & (var_0)))));
                        var_24 = ((/* implicit */unsigned int) ((((var_6) + (2147483647))) >> (((((/* implicit */int) var_8)) + (44)))));
                    }
                    var_25 = ((/* implicit */unsigned short) (_Bool)1);
                    var_26 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (short)4926)) && (((/* implicit */_Bool) (unsigned char)9))))) + (((/* implicit */int) var_1))));
                }
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        arr_41 [i_1] [i_6] [i_7] [i_10] = ((/* implicit */unsigned char) (_Bool)1);
                        arr_42 [i_1] [7U] [i_10] [i_6] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_7 + 3] [i_6 + 1])) : (((/* implicit */int) arr_8 [i_7 + 3] [i_6 + 1]))));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 2459173534166621701ULL)) ? (3738990529U) : (1600492707U)));
                    }
                    for (signed char i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1])))))));
                        arr_45 [(_Bool)1] [i_6] [i_6] [i_7] [i_10] [i_10] [i_10] = ((int) -1840206835);
                    }
                    var_29 = ((/* implicit */signed char) (~(((/* implicit */int) (short)18643))));
                }
                for (int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    arr_49 [i_1] [i_6] [i_7] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)103))))) | (((((/* implicit */unsigned long long int) var_2)) & (0ULL)))));
                    arr_50 [i_6 + 1] [i_6 - 1] [i_7 + 1] [i_6] [i_7] [i_13] = ((/* implicit */_Bool) ((arr_46 [i_6 - 1] [i_7]) / (arr_46 [i_6 + 1] [i_6 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 1; i_14 < 10; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_7 + 2] [i_7 + 2] [i_7 + 4]))));
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_7 + 4] [i_7] [i_7 + 4] [i_7 + 4] [i_6] [i_6] [i_7])) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)40)))))));
                        arr_54 [i_1] [i_6] [(short)0] [i_6] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_14 [i_14]))));
                    }
                }
            }
            var_32 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 4545002651882433555ULL)))) ? (arr_7 [i_6 - 1] [i_6 - 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            arr_58 [i_1] [i_15] = ((/* implicit */unsigned long long int) ((int) ((unsigned int) arr_35 [10ULL])));
            arr_59 [i_15] [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)0))));
        }
        arr_60 [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
    }
    /* vectorizable */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        arr_63 [i_16] = ((unsigned char) arr_2 [i_16]);
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_16] [i_16] [i_16])) ? (((unsigned int) arr_3 [i_16] [i_16])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_16]))))))));
        arr_64 [i_16] = (i_16 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned char)157))) >> ((((~(((/* implicit */int) arr_40 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) + (178)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned char)157))) >> ((((((~(((/* implicit */int) arr_40 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) + (178))) + (82))))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_17 = 4; i_17 < 10; i_17 += 2) /* same iter space */
    {
        arr_67 [0] = ((/* implicit */unsigned int) (~(max((arr_65 [i_17 - 4] [i_17]), (((/* implicit */int) arr_66 [i_17 - 2] [i_17]))))));
        var_34 = ((/* implicit */unsigned long long int) (~(((((_Bool) arr_66 [i_17] [0U])) ? (min((arr_65 [i_17 - 4] [(unsigned short)0]), (((/* implicit */int) arr_66 [i_17] [i_17])))) : (((/* implicit */int) arr_66 [i_17 + 2] [i_17 + 2]))))));
    }
    for (unsigned char i_18 = 4; i_18 < 10; i_18 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_19 = 0; i_19 < 12; i_19 += 4) 
        {
            var_35 = ((/* implicit */unsigned long long int) var_1);
            var_36 = ((/* implicit */unsigned long long int) max((((unsigned int) arr_71 [i_19] [i_18 - 2] [(_Bool)0])), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)77)))))));
            arr_73 [i_18] = ((/* implicit */unsigned long long int) arr_69 [0]);
        }
        for (unsigned char i_20 = 1; i_20 < 10; i_20 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_21 = 4; i_21 < 11; i_21 += 3) 
            {
                for (unsigned int i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_23 = 1; i_23 < 11; i_23 += 1) 
                        {
                            var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)60474)) ? (((/* implicit */int) max((arr_69 [i_22]), ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((2877554280U) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
                            arr_85 [i_18] [i_18] [6U] [i_21] [i_21] [i_22] [i_21] = ((/* implicit */signed char) ((((/* implicit */int) arr_69 [i_22])) - (((/* implicit */int) min((min(((unsigned short)15738), (arr_79 [i_18] [i_18] [i_18] [i_18]))), (((/* implicit */unsigned short) arr_83 [i_20] [i_20] [i_20] [i_20])))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_24 = 0; i_24 < 12; i_24 += 2) 
                        {
                            arr_88 [i_21] [i_20] [i_20] [i_22] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (_Bool)1))));
                            arr_89 [i_24] [i_24] [(signed char)8] [i_22] [i_20] [i_22] |= ((/* implicit */unsigned int) var_6);
                            var_38 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) min((arr_87 [i_18] [i_20 - 1] [i_24] [i_22] [i_24] [i_18] [i_22]), (((/* implicit */unsigned long long int) (short)1446)))))) <= (((/* implicit */int) max((min((var_3), ((unsigned char)25))), (((unsigned char) arr_83 [i_18] [(_Bool)1] [i_21] [i_22])))))));
                            arr_90 [i_24] [i_21] [(short)0] = ((/* implicit */unsigned int) max((((arr_71 [i_22] [i_20 + 2] [5ULL]) - (arr_71 [i_24] [i_20 + 2] [i_18]))), (((((/* implicit */_Bool) arr_71 [i_22] [i_20 + 2] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) : (arr_71 [i_20] [i_20 + 2] [i_20])))));
                        }
                    }
                } 
            } 
            var_39 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((arr_87 [i_18 + 2] [6ULL] [i_20] [(_Bool)1] [1ULL] [(unsigned char)2] [i_20]), (((/* implicit */unsigned long long int) (unsigned char)0))))) ? (arr_71 [i_20 + 1] [i_18 - 1] [i_18]) : (((/* implicit */unsigned long long int) var_0))))));
            arr_91 [i_18] [i_20] [i_20] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (signed char)98)))))), (((((/* implicit */_Bool) arr_74 [i_18 + 1] [i_18 - 4] [i_18 - 1])) ? (((/* implicit */int) (short)-25804)) : (((/* implicit */int) (_Bool)0))))));
            arr_92 [i_18] = max((((((/* implicit */_Bool) (signed char)-7)) ? (arr_81 [i_20 - 1] [i_20 + 2] [i_20 + 2] [i_20 + 1] [i_20 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) | (0U)))))), (((/* implicit */unsigned long long int) var_3)));
        }
        for (unsigned char i_25 = 1; i_25 < 10; i_25 += 3) /* same iter space */
        {
            arr_95 [i_18] = ((/* implicit */unsigned long long int) var_2);
            arr_96 [i_25] [i_25] [i_25] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_18] [i_25 + 2] [i_25])) && (((/* implicit */_Bool) arr_80 [i_18] [(signed char)0] [i_18 - 2] [i_18]))))) : (((/* implicit */int) (_Bool)1)))));
        }
        var_40 = ((/* implicit */unsigned char) -1328235070);
        arr_97 [i_18] = ((/* implicit */_Bool) var_3);
    }
    for (unsigned short i_26 = 0; i_26 < 16; i_26 += 2) 
    {
        var_41 = ((/* implicit */unsigned short) var_6);
        var_42 = ((((/* implicit */int) var_8)) ^ (((((var_6) + (((/* implicit */int) var_8)))) % (((/* implicit */int) min(((signed char)51), ((signed char)-67)))))));
        arr_101 [i_26] [i_26] = ((((/* implicit */_Bool) -3131792543351593778LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_98 [i_26] [i_26])) ^ (((/* implicit */int) var_1))))) : (((unsigned long long int) arr_100 [i_26])));
        var_43 = max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_8))))) * (((791621935095683910ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_100 [i_26]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_98 [i_26] [i_26])), (arr_99 [8U] [i_26])))) ? (((/* implicit */int) min(((_Bool)0), (arr_100 [i_26])))) : (((/* implicit */int) (signed char)8))))));
        arr_102 [i_26] = arr_99 [i_26] [i_26];
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34182
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
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)224))) : (-2305843009213693952LL))), (((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (short)224)))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned long long int) max((((((/* implicit */_Bool) 2305843009213693952LL)) ? (-1933725481) : (((/* implicit */int) arr_1 [(unsigned char)8])))), (((((/* implicit */int) var_13)) / (1933725480)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                var_17 |= ((/* implicit */long long int) ((unsigned short) arr_5 [i_1]));
                arr_9 [i_1] [0LL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [(unsigned short)3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45160))) : (((unsigned int) 770223394))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1))))));
            }
            arr_10 [i_0] = ((/* implicit */unsigned char) var_2);
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_0] [14] [i_0 + 1] [i_0 - 1]))));
                var_20 ^= ((/* implicit */unsigned int) var_1);
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 12424761697942278835ULL))))) | (((/* implicit */int) arr_21 [(unsigned short)12] [i_5] [i_5] [i_5] [i_5 - 2]))));
                            arr_23 [i_6] [i_5 - 1] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45160)) || (((/* implicit */_Bool) (short)224))));
                        }
                    } 
                } 
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */int) ((((((/* implicit */unsigned int) var_6)) / (arr_15 [i_0] [4LL] [i_0] [i_0]))) << (((arr_24 [i_0] [i_7 - 1] [i_0]) - (437504768U)))));
                var_23 = ((/* implicit */unsigned short) ((int) arr_11 [i_0] [i_0 - 1] [i_0]));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_7] [i_7 - 1] [i_7])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) >= (36028522141057024LL))))));
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_28 [i_0] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))));
                var_25 ^= ((/* implicit */unsigned long long int) ((int) arr_21 [i_0] [i_0] [i_8] [i_0] [i_8 - 1]));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_26 ^= ((unsigned char) ((((/* implicit */_Bool) arr_20 [i_0] [6LL] [i_3] [i_0])) ? (((/* implicit */unsigned long long int) arr_24 [i_9] [i_9] [i_9])) : (1095216660480ULL)));
                arr_33 [i_3] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (var_6)))) ? (arr_32 [5] [i_0 - 1] [i_0 - 1] [i_0]) : (((((/* implicit */_Bool) arr_19 [i_0] [i_3] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 2) 
                {
                    {
                        var_27 = ((/* implicit */int) arr_34 [i_0] [i_0] [i_10] [i_10]);
                        var_28 = ((/* implicit */unsigned short) ((((5388528892234246572ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0]))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_44 [i_12] = ((((/* implicit */_Bool) arr_17 [i_12] [i_12] [1ULL])) ? (arr_17 [i_12] [i_12] [i_12]) : (arr_17 [i_12] [i_12] [10ULL]));
        var_29 = ((((/* implicit */_Bool) arr_22 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (((unsigned long long int) (_Bool)1)));
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                {
                    var_30 -= ((/* implicit */unsigned char) ((int) (short)224));
                    var_31 = ((/* implicit */unsigned short) arr_3 [i_12] [i_12]);
                    /* LoopSeq 2 */
                    for (long long int i_15 = 4; i_15 < 8; i_15 += 4) 
                    {
                        var_32 = ((/* implicit */int) (((-(18446742978492891136ULL))) * (((/* implicit */unsigned long long int) var_9))));
                        arr_53 [i_12] [i_12] [i_14] [i_14] [i_14] [i_15] = ((/* implicit */int) var_4);
                    }
                    for (unsigned short i_16 = 2; i_16 < 9; i_16 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_20 [i_13] [i_16] [i_14] [i_16]))));
                        arr_56 [i_13] [i_14] = ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) var_11)))));
                    }
                }
            } 
        } 
        arr_57 [i_12] = ((/* implicit */long long int) ((unsigned short) var_1));
    }
    /* LoopNest 2 */
    for (unsigned char i_17 = 1; i_17 < 22; i_17 += 2) 
    {
        for (int i_18 = 1; i_18 < 23; i_18 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (unsigned char i_20 = 1; i_20 < 23; i_20 += 1) 
                    {
                        {
                            arr_70 [i_18] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) (unsigned short)20376)))) ? (((1095216660471ULL) + (((/* implicit */unsigned long long int) 2305843009213693960LL)))) : (((/* implicit */unsigned long long int) max((arr_68 [i_17] [i_18 + 1] [i_19] [i_18 + 1] [i_18]), (((/* implicit */long long int) var_14))))))) & (((/* implicit */unsigned long long int) max((arr_61 [i_18 + 1]), (arr_61 [i_18 - 1]))))));
                            var_34 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (arr_62 [i_20 - 1]) : (arr_62 [i_19]))) / (((/* implicit */long long int) var_9))))) ? (max((((var_0) ? (1095216660480ULL) : (((/* implicit */unsigned long long int) -5768667054853718864LL)))), (((/* implicit */unsigned long long int) 1933725481)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_62 [i_18]))))));
                            var_35 &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_69 [i_17] [i_18] [i_18 - 1] [i_20] [i_19] [i_20 + 2])) - (22753))))));
                            arr_71 [i_18] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_69 [i_20] [i_20] [i_20 + 1] [i_18 - 1] [i_18] [i_17 + 3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)20369))))));
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), ((unsigned short)20375)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)241), (((/* implicit */short) var_13)))))) : (((((/* implicit */_Bool) arr_68 [i_17] [i_18 + 1] [i_17] [i_17] [i_18])) ? (arr_68 [i_17] [i_18 - 1] [i_17] [i_18 - 1] [i_18]) : (arr_68 [i_17] [i_18 + 1] [i_17] [i_18] [i_18])))));
                /* LoopNest 3 */
                for (long long int i_21 = 0; i_21 < 25; i_21 += 3) 
                {
                    for (unsigned char i_22 = 0; i_22 < 25; i_22 += 2) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
                                arr_80 [i_22] [i_18 + 2] [i_21] [i_22] [i_23] |= ((/* implicit */long long int) (-(max((1095216660480ULL), (((/* implicit */unsigned long long int) (unsigned char)254))))));
                                var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_69 [i_23] [i_22] [i_21] [i_18 + 1] [i_18 + 1] [i_17]))))) ? (((((/* implicit */_Bool) -2305843009213693952LL)) ? (((/* implicit */int) arr_77 [i_23] [i_18] [i_21] [i_18] [i_17])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_18] [i_18] [i_18] [1] [i_18])))));
                                arr_81 [i_22] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_59 [i_17 + 3]) | (arr_59 [i_17 + 1])))) ? (max((var_9), (((/* implicit */unsigned int) arr_59 [i_17 + 1])))) : (((/* implicit */unsigned int) arr_59 [i_17 - 1]))));
                            }
                        } 
                    } 
                } 
                arr_82 [i_18] [i_18] = ((/* implicit */unsigned short) (~((+(-1933725481)))));
            }
        } 
    } 
}

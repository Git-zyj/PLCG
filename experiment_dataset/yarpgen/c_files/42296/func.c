/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42296
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] [(unsigned short)12] = ((/* implicit */int) arr_3 [i_0]);
            var_14 = ((unsigned char) ((arr_0 [i_0] [i_1]) | (((/* implicit */int) var_0))));
            arr_8 [i_1] = ((/* implicit */short) arr_1 [5LL]);
        }
        for (signed char i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
            {
                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (6773305399650142806ULL) : (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 + 1]))) : (var_6)));
                var_16 = ((/* implicit */unsigned long long int) var_13);
            }
            arr_14 [i_0] [i_2] = ((/* implicit */unsigned short) var_0);
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_17 = ((/* implicit */short) var_13);
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */short) arr_12 [i_2 - 1] [i_5 + 1] [i_5 + 1])))))));
                        arr_19 [i_0] [i_4] = ((((/* implicit */_Bool) 15296341575091347940ULL)) ? (min((((int) var_1)), (((/* implicit */int) ((short) var_12))))) : (((/* implicit */int) arr_18 [i_0] [i_2])));
                    }
                } 
            } 
            arr_20 [i_0] = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0]);
            var_19 ^= ((/* implicit */_Bool) var_0);
        }
        for (signed char i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 4; i_7 < 10; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_20 = ((/* implicit */long long int) ((unsigned int) (signed char)-3));
                    var_21 = ((/* implicit */int) ((unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (arr_27 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0]))))))));
                    arr_29 [i_0] [i_0] [i_0] [i_6] [i_7] [i_8] = ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (-(arr_28 [i_0] [i_6] [i_7 - 1] [i_8])))));
                }
                for (long long int i_9 = 1; i_9 < 11; i_9 += 3) 
                {
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_9 [7ULL] [i_7] [i_9]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 12; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_7 - 2]))));
                        arr_36 [i_0] [0LL] [i_0] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((arr_26 [i_6 - 3] [i_6] [i_7 + 3] [i_7]) ? (((/* implicit */int) arr_15 [i_10 - 3] [i_6 - 1] [i_7 - 4])) : (((/* implicit */int) var_10))));
                        arr_37 [i_0] [i_6] [i_7 - 2] [i_0] [i_10 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_4 [i_6 - 3] [i_7 + 1] [i_9 + 1])) * (7395370241806587777ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0])) ? (arr_24 [i_6] [i_6] [i_9 + 2]) : (((/* implicit */int) arr_13 [i_7] [i_7] [i_10]))))) : (((((/* implicit */_Bool) arr_24 [(signed char)11] [i_6] [9])) ? (arr_28 [i_6] [i_7] [3] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40883)))))));
                    }
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (-(((((/* implicit */_Bool) arr_9 [i_0] [i_7] [i_9 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))) : (arr_30 [i_9 + 2] [i_6] [i_6] [i_6] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_25 [i_6 + 1] [i_7 - 1])) & (((/* implicit */int) arr_25 [i_6 + 1] [i_7 - 1])))) != (((((/* implicit */_Bool) arr_33 [i_7 - 1] [(short)0] [i_7] [i_7] [0U] [i_9 + 2] [i_9 + 1])) ? (((/* implicit */int) arr_9 [i_0] [i_7 - 3] [i_0])) : (33030144))))))));
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-3873))));
                    }
                    var_27 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_0 [2] [i_6])), (arr_27 [i_6] [i_6] [i_6 + 1]))) * (((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */int) arr_11 [i_6 + 1] [i_6 + 1] [i_6 - 1])))))));
                }
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 11; i_12 += 3) 
                {
                    for (signed char i_13 = 1; i_13 < 12; i_13 += 3) 
                    {
                        {
                            var_28 |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [0] [i_7] [(signed char)4])))) - (((((/* implicit */_Bool) arr_6 [i_0] [i_12] [i_13])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [4ULL] [(unsigned short)7] [(_Bool)1] [2LL] [(signed char)11])))))))) - (((((/* implicit */_Bool) ((short) 11051373831902963838ULL))) ? (7395370241806587777ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))))))));
                            arr_45 [(unsigned char)9] [i_12] = ((/* implicit */short) 0);
                            arr_46 [i_0] [(unsigned short)0] [i_12] [i_0] [(unsigned short)0] [i_0] [i_0] = ((/* implicit */unsigned short) min((2481687950U), (((/* implicit */unsigned int) (unsigned short)40896))));
                        }
                    } 
                } 
                var_29 *= ((/* implicit */signed char) arr_9 [i_0] [i_6] [i_7]);
            }
            arr_47 [i_0] [i_6 - 3] [i_6] = ((/* implicit */long long int) 319512023);
        }
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 11; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    arr_53 [(unsigned short)10] [i_14] [10] = ((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [i_14 + 1] [i_14 - 3] [i_14])) ^ (((/* implicit */int) arr_17 [7ULL] [i_14 - 3] [i_14 + 2] [i_15]))))) <= (0LL));
                    var_30 = ((/* implicit */int) arr_1 [i_14 - 2]);
                }
            } 
        } 
    }
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        var_31 ^= ((/* implicit */unsigned short) arr_33 [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1] [i_16]);
        var_32 = ((/* implicit */unsigned short) arr_52 [i_16] [12] [i_16] [i_16]);
        /* LoopNest 3 */
        for (unsigned short i_17 = 1; i_17 < 8; i_17 += 4) 
        {
            for (int i_18 = 1; i_18 < 9; i_18 += 4) 
            {
                for (int i_19 = 1; i_19 < 8; i_19 += 3) 
                {
                    {
                        var_33 ^= ((/* implicit */signed char) (+(arr_38 [(signed char)3] [(signed char)3] [i_18] [i_18] [(_Bool)1])));
                        arr_67 [i_16] [i_19] [i_18 - 1] [i_19] = ((/* implicit */unsigned short) (short)13095);
                        var_34 ^= ((/* implicit */unsigned short) ((-319512041) > (((arr_10 [i_18 - 1] [i_18] [i_18]) ^ (319512038)))));
                    }
                } 
            } 
        } 
    }
    for (int i_20 = 0; i_20 < 11; i_20 += 1) 
    {
        var_35 ^= ((/* implicit */int) 717223623421902045ULL);
        var_36 ^= ((/* implicit */short) (~(((arr_31 [i_20] [(signed char)8] [i_20] [i_20]) ? (((/* implicit */int) arr_31 [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) arr_31 [i_20] [i_20] [i_20] [3U]))))));
    }
    /* LoopNest 2 */
    for (long long int i_21 = 0; i_21 < 23; i_21 += 3) 
    {
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            {
                arr_76 [i_22] = ((/* implicit */unsigned long long int) arr_71 [i_21]);
                var_37 += ((/* implicit */unsigned long long int) var_13);
                var_38 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_74 [(short)18])) ? (min((((/* implicit */unsigned long long int) max((arr_75 [20ULL] [20ULL] [i_22]), (((/* implicit */int) var_0))))), (arr_74 [(unsigned char)12]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_73 [i_21] [16LL] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_11)) != (arr_71 [i_22]))))))))));
                /* LoopNest 2 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    for (unsigned int i_24 = 0; i_24 < 23; i_24 += 2) 
                    {
                        {
                            var_39 ^= ((/* implicit */unsigned short) arr_73 [i_22] [i_24] [i_24]);
                            /* LoopSeq 1 */
                            for (long long int i_25 = 3; i_25 < 19; i_25 += 3) 
                            {
                                arr_83 [i_22] [i_22] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_79 [i_23] [i_22])) >> (((arr_72 [i_23] [i_24]) - (12196658204978116211ULL))))));
                                arr_84 [(signed char)7] [i_22] [i_22] [i_22] [(unsigned short)5] = ((/* implicit */unsigned long long int) arr_71 [i_23]);
                                arr_85 [i_22] [10U] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_77 [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */int) arr_78 [i_21] [i_21] [i_22])) : (var_3))) > (((/* implicit */int) arr_80 [12U] [i_22] [5U] [i_25 + 1] [i_25 + 1])))))) ^ ((((-(arr_73 [i_21] [i_22] [i_25]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_22])))))));
                            }
                        }
                    } 
                } 
                arr_86 [i_22] = ((/* implicit */long long int) arr_75 [i_22] [i_22] [(unsigned char)7]);
            }
        } 
    } 
}

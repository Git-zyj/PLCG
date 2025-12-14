/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35159
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_1] [(signed char)4] [(unsigned short)2] &= ((/* implicit */int) (~(arr_0 [i_0] [i_1])));
            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15913254431882258184ULL)) ? (((unsigned long long int) 2533489641827293432ULL)) : (((/* implicit */unsigned long long int) (~(var_6))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                arr_10 [i_0] [i_0] [i_3] = ((/* implicit */int) ((_Bool) ((long long int) 136365211648LL)));
                var_19 *= ((/* implicit */signed char) ((_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_3 + 1]));
                var_20 = ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) (short)15))));
                arr_11 [i_3] = ((/* implicit */unsigned long long int) var_9);
            }
            arr_12 [i_0] = ((/* implicit */short) ((long long int) 2878630719U));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                var_21 = (!(((/* implicit */_Bool) (signed char)83)));
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_2] [(unsigned short)12])) / (((/* implicit */int) (short)-21833))))))))));
            }
            var_23 = ((/* implicit */_Bool) var_3);
        }
        for (short i_5 = 3; i_5 < 16; i_5 += 2) 
        {
            arr_19 [i_5 - 2] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(var_12))))) > (((long long int) (_Bool)1))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_15 [i_5 + 1] [i_5 - 3]))));
            arr_20 [i_5 - 1] [i_5] = (+(arr_15 [i_5] [i_5 + 1]));
        }
        arr_21 [i_0] = (~(((/* implicit */int) arr_14 [i_0] [i_0] [14] [i_0])));
        arr_22 [(signed char)11] = ((/* implicit */_Bool) var_5);
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
                {
                    for (int i_9 = 2; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) - (14769573501080307805ULL))))));
                            var_26 = ((/* implicit */_Bool) ((((var_4) | (((/* implicit */int) arr_27 [(unsigned char)0] [i_6] [i_7] [(unsigned char)0])))) | (((/* implicit */int) (unsigned short)63488))));
                        }
                    } 
                } 
            } 
            arr_32 [i_6] [i_0] [i_0] = ((/* implicit */unsigned int) ((4611686018427387904ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
            arr_33 [(signed char)0] [i_0] [i_6] = ((/* implicit */_Bool) ((short) ((long long int) 33553920)));
            var_27 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_0]))) + (((unsigned int) (signed char)-14))));
            arr_34 [4LL] [4LL] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-12818))));
        }
        for (unsigned char i_10 = 2; i_10 < 17; i_10 += 3) 
        {
            arr_38 [i_10] [1ULL] [i_10] = ((/* implicit */signed char) ((long long int) 15913254431882258184ULL));
            /* LoopSeq 3 */
            for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                arr_43 [i_10] = ((/* implicit */short) ((unsigned short) (!(((/* implicit */_Bool) var_8)))));
                arr_44 [i_10] = ((/* implicit */_Bool) (~(197134048686688898ULL)));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_28 = ((/* implicit */int) (+(arr_6 [(short)0] [i_10 - 2] [i_12])));
                arr_48 [i_0] [i_10] [i_12] [i_12] = ((/* implicit */signed char) (-(((unsigned int) arr_28 [i_0] [i_0] [(signed char)5] [i_0]))));
                var_29 &= ((/* implicit */signed char) (-(((/* implicit */int) arr_24 [i_10 - 1] [8]))));
            }
            for (short i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                arr_51 [i_10] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) + (81)))));
                var_30 = ((/* implicit */int) ((arr_30 [i_0] [i_13] [i_10 - 2] [i_0] [i_10 + 1]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)35)))));
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    var_31 = ((/* implicit */short) arr_24 [i_0] [i_10]);
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        arr_56 [i_0] [i_10] [i_13] [i_14] [i_10] [i_14] = ((/* implicit */unsigned char) ((long long int) ((var_12) ? (-5733832602803208638LL) : (var_17))));
                        var_32 *= ((/* implicit */_Bool) (((~(((/* implicit */int) arr_53 [12ULL] [(_Bool)1] [i_13] [i_13] [i_15] [12ULL])))) - (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)33504)))))));
                    }
                    for (long long int i_16 = 0; i_16 < 18; i_16 += 3) 
                    {
                        arr_59 [i_10] = ((/* implicit */unsigned int) arr_14 [(_Bool)1] [i_13] [i_13] [(signed char)4]);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_7))) - (((int) (signed char)-93))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) 33030144)) / ((-9223372036854775807LL - 1LL))))))));
                    }
                }
            }
        }
        var_35 -= ((/* implicit */unsigned int) ((var_4) & ((+(((/* implicit */int) (signed char)0))))));
    }
    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_18 = 1; i_18 < 9; i_18 += 3) /* same iter space */
        {
            var_36 *= (((-(max((15841890423545149028ULL), (((/* implicit */unsigned long long int) -432381494934111379LL)))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_17] [13U] [i_18 + 1] [i_18]))))));
            arr_65 [i_17] = ((/* implicit */signed char) (~((-((-(((/* implicit */int) arr_52 [i_17] [i_18] [10ULL] [10ULL] [i_18]))))))));
            var_37 = ((/* implicit */unsigned char) (+(((max((((/* implicit */unsigned long long int) 5571460686041770467LL)), (arr_41 [i_18] [(signed char)12] [(_Bool)1]))) - (((unsigned long long int) arr_60 [i_18]))))));
        }
        /* vectorizable */
        for (int i_19 = 1; i_19 < 9; i_19 += 3) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) (unsigned short)61660);
            arr_70 [i_17] [i_17] [i_19 + 2] = ((/* implicit */short) (-(var_9)));
            arr_71 [i_17] [i_19] [i_19] = ((/* implicit */short) (+(((((/* implicit */long long int) var_0)) + (432381494934111378LL)))));
            arr_72 [8] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_37 [8] [8]))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) arr_9 [i_19] [i_19 + 2] [i_19]))));
            var_39 *= ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_19 - 1] [i_19 - 1] [i_19] [i_19 + 2])) >= (((/* implicit */int) var_15))));
        }
        /* LoopNest 3 */
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            for (unsigned char i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                for (short i_22 = 2; i_22 < 10; i_22 += 2) 
                {
                    {
                        var_40 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_77 [i_21] [i_21] [i_21] [i_21]))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_22 - 2] [i_20 + 1] [i_20 + 1]))))))));
                        var_41 = var_12;
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((unsigned short) var_16)))));
                    }
                } 
            } 
        } 
    }
    for (int i_23 = 0; i_23 < 22; i_23 += 3) 
    {
        var_43 *= ((/* implicit */unsigned long long int) max(((-((-(var_1))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_23] [i_23]))) - (var_1)))));
        /* LoopSeq 2 */
        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_25 = 0; i_25 < 22; i_25 += 1) 
            {
                var_44 *= ((/* implicit */_Bool) ((signed char) (((~(((/* implicit */int) arr_87 [i_25])))) & ((~(((/* implicit */int) arr_82 [i_23])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_26 = 3; i_26 < 21; i_26 += 3) 
                {
                    var_45 *= ((/* implicit */unsigned short) (-(var_17)));
                    var_46 = ((/* implicit */signed char) var_4);
                    arr_96 [i_23] [i_23] [i_25] [i_25] [i_24] = ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))));
                    var_47 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_92 [i_24 + 1] [i_24 + 1] [i_24 + 1] [i_26 - 2]))));
                    /* LoopSeq 1 */
                    for (long long int i_27 = 4; i_27 < 20; i_27 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned int) max((var_48), (var_1)));
                        var_49 -= ((/* implicit */unsigned long long int) ((((_Bool) var_17)) ? (((((/* implicit */_Bool) var_3)) ? (arr_92 [i_23] [i_24] [i_25] [i_25]) : (((/* implicit */long long int) ((/* implicit */int) arr_95 [i_23] [i_24] [i_23] [i_26 + 1] [i_27] [i_26 + 1]))))) : (arr_99 [i_27 - 2] [i_27 + 2] [i_27] [i_27] [i_27] [i_27])));
                        var_50 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) | (-136365211665LL)));
                        var_51 *= ((/* implicit */unsigned long long int) ((long long int) (unsigned short)31744));
                    }
                }
                var_52 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) arr_95 [i_23] [i_24] [i_25] [(_Bool)1] [i_24] [i_24 + 1])))));
                var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14769573501080307781ULL)) ? (-2221906425297487023LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            }
            for (unsigned long long int i_28 = 0; i_28 < 22; i_28 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_29 = 0; i_29 < 22; i_29 += 3) 
                {
                    var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_83 [i_23]))))) ? (arr_97 [(unsigned char)20]) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-9209)))))));
                    var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1066880181680550895LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (7LL)));
                    var_56 = ((/* implicit */unsigned long long int) ((var_11) <= (((/* implicit */int) (short)32767))));
                }
                arr_106 [(signed char)12] [(short)14] [i_28] &= ((((/* implicit */_Bool) ((max((var_3), (((/* implicit */long long int) var_2)))) & (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((15841890423545149020ULL), (((/* implicit */unsigned long long int) 875827273467808139LL)))) <= (min((15681336661094833592ULL), (((/* implicit */unsigned long long int) (signed char)120)))))))) : (min((((17980668001874248974ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_105 [9LL] [i_23] [i_23]))))), (((/* implicit */unsigned long long int) max((6348022190411532007LL), (5538307823592615032LL)))))));
            }
            var_57 = ((/* implicit */_Bool) ((((arr_99 [i_24] [i_24] [i_24] [(short)12] [i_24] [i_24 + 1]) & (arr_99 [i_24] [i_24] [i_24 + 1] [i_24] [i_24] [i_24 + 1]))) & (((/* implicit */long long int) (-(((/* implicit */int) (signed char)127)))))));
        }
        for (unsigned int i_30 = 3; i_30 < 18; i_30 += 1) 
        {
            var_58 *= ((/* implicit */int) ((((arr_99 [i_23] [8ULL] [i_30 - 2] [i_23] [(signed char)12] [i_23]) - (arr_99 [i_23] [i_30 - 3] [i_30 + 3] [i_23] [(_Bool)1] [i_30 + 4]))) >> (min((((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_23] [i_23] [16U]))))), (((/* implicit */unsigned int) ((signed char) (signed char)63)))))));
            var_59 *= ((/* implicit */unsigned long long int) (((~(-176208865965100395LL))) <= (432381494934111379LL)));
        }
        var_60 -= ((/* implicit */_Bool) 18446744073709551615ULL);
    }
    var_61 = ((/* implicit */unsigned long long int) max((var_61), (2765407412614718020ULL)));
}

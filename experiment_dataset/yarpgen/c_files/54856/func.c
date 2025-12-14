/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54856
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
    var_13 = ((/* implicit */unsigned int) ((short) var_0));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((2580954622U), (2605684073U)))) / (((var_2) / (((/* implicit */unsigned long long int) 201326592LL))))))) ? (((/* implicit */int) max((var_7), (arr_0 [i_0] [(short)4])))) : (((/* implicit */int) ((short) var_3)))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            var_14 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-18689))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_3))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (((+(((/* implicit */int) var_11)))) != (((((/* implicit */int) (short)-8470)) % (((/* implicit */int) (signed char)124)))))))));
        }
        for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_9 [(short)15] [i_0] = ((/* implicit */short) (signed char)-124);
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_10)) : (var_6))) / (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (var_10))))) ? (((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))) : (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((((/* implicit */short) arr_4 [i_2] [i_2] [i_2])), (arr_5 [i_0] [i_0]))), (((/* implicit */short) var_12))))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((13181457758628431124ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))))) ? (min((13181457758628431124ULL), (((/* implicit */unsigned long long int) (signed char)0)))) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) var_9)))))))) ? (var_10) : (((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (min((((/* implicit */unsigned int) (signed char)118)), (2580954622U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            arr_14 [9ULL] [i_4] [i_3] [i_0] = ((/* implicit */_Bool) min((9U), (((/* implicit */unsigned int) (signed char)-95))));
                            arr_15 [i_0] [i_2] [i_3] [i_4] [i_5] [i_4 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (min((((/* implicit */long long int) var_0)), (var_6)))));
                        }
                    } 
                } 
            }
            arr_16 [i_0] [3LL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned int) var_11)), (var_10)))))));
            var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_0] [i_0])) : (((/* implicit */int) var_4))))) : (var_3)))) ? (((((((/* implicit */_Bool) 5265286315081120511ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) - (((/* implicit */int) ((short) -2827729708749468373LL))))) : (((/* implicit */int) ((short) var_11)))));
            /* LoopSeq 1 */
            for (long long int i_6 = 3; i_6 < 20; i_6 += 2) 
            {
                var_20 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))) / (min((((/* implicit */unsigned int) var_5)), (2580954622U)))));
                var_21 = ((/* implicit */signed char) (-((-((+(var_8)))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_1), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) -2827729708749468373LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((short) (short)23000))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((signed char) var_1))))))))));
                            arr_25 [i_0] [i_6] [i_6] [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */int) (short)-15345)), (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (short)-17478)) : (((/* implicit */int) (short)8459))))));
                            var_24 = ((((_Bool) ((((/* implicit */_Bool) (short)-9269)) ? (((/* implicit */int) (short)17913)) : (((/* implicit */int) (signed char)-3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (5265286315081120486ULL));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 4) 
            {
                var_25 *= ((/* implicit */_Bool) ((unsigned long long int) var_1));
                arr_31 [i_10 + 3] [i_9] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_11 [i_10 + 1] [(_Bool)1] [i_10 + 1]));
                var_26 = ((((/* implicit */_Bool) 5265286315081120502ULL)) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_4)))))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (long long int i_12 = 1; i_12 < 20; i_12 += 1) 
                    {
                        {
                            arr_37 [i_0] [i_9] [i_10] [12LL] [(short)0] &= ((var_6) < (var_6));
                            var_27 = ((/* implicit */short) ((((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) (short)23026))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            var_28 -= ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_10] [i_11] [i_12 + 1]))) < (var_8))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)23026))))));
                            var_29 = ((/* implicit */signed char) max((var_29), (arr_13 [i_10] [i_10] [i_10] [i_10] [i_12] [i_11])));
                            var_30 = var_7;
                        }
                    } 
                } 
                arr_38 [i_0] [i_9] [i_10] = ((/* implicit */signed char) var_7);
            }
            for (long long int i_13 = 1; i_13 < 19; i_13 += 4) 
            {
                var_31 = ((/* implicit */short) (~(var_3)));
                /* LoopSeq 3 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)116))) / (var_6)));
                    arr_44 [i_0] [i_0] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_7))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [i_0] [i_9] [i_13] [i_14] [i_15])) + (2147483647))) >> (((var_8) - (7633370032159215050ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_15] [i_15] [i_13] [i_15] [i_15] [i_14]))) : (((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        var_34 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (var_8)));
                    }
                }
                for (short i_16 = 1; i_16 < 21; i_16 += 4) 
                {
                    arr_50 [i_9] [i_0] [i_9] [i_9] = ((/* implicit */signed char) ((((7350203861625704116LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)86))))) < (((long long int) (signed char)-111))));
                    arr_51 [i_9] [i_13] [6ULL] [6ULL] [i_0] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))) : ((~(13332993134957748421ULL)))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    arr_55 [i_13] [i_13 + 2] [i_13] [i_9] = ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) arr_34 [i_0] [i_17] [i_13 + 3] [i_9]))));
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)-1)))))))));
                }
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [i_0] [i_13 + 2] [i_13 + 1] [i_13 + 1])) : (((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))));
                var_37 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [21ULL] [i_9] [i_9] [i_9]))));
                arr_56 [i_9] = ((/* implicit */unsigned int) ((signed char) ((long long int) var_3)));
            }
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                {
                    {
                        var_38 *= ((/* implicit */long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) < (var_10))));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (2089028649U)))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_20 = 1; i_20 < 21; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                {
                    {
                        arr_68 [i_9] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_9] [(signed char)7] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 1) 
                        {
                            var_40 = ((/* implicit */short) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            var_41 = ((/* implicit */long long int) var_12);
                        }
                    }
                } 
            } 
        }
        var_42 = ((/* implicit */short) arr_1 [i_0]);
        arr_73 [i_0] [i_0] = ((/* implicit */signed char) var_8);
    }
}

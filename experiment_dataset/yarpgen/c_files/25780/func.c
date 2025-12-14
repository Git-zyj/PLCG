/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25780
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)53528)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (unsigned short)12003))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) arr_1 [i_0 - 1]);
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53528)) ? (((/* implicit */int) arr_0 [(unsigned char)1])) : (((/* implicit */int) (unsigned short)53533))))) ? ((+(((/* implicit */int) (unsigned short)53528)))) : (((/* implicit */int) var_0))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_21 *= ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)12003)), ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)12029))))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            var_22 = ((/* implicit */short) max((((/* implicit */int) ((max((((/* implicit */int) (unsigned short)53509)), (var_3))) >= (((/* implicit */int) min((((/* implicit */signed char) var_7)), ((signed char)72))))))), (((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_19 [(unsigned short)7] [i_3 + 2] [i_4] [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((unsigned char) arr_9 [i_2] [(short)10] [i_4]))))) <= (((long long int) (!((_Bool)1))))));
                            arr_20 [i_1] [i_2 - 1] [i_3 + 1] [i_4] [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) ((var_17) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)29339)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)37046)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1795726055U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53532))) : (10313583213886526734ULL))))));
                var_24 = ((/* implicit */int) arr_6 [i_3 + 3]);
            }
            arr_21 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((1718456205U) + (((unsigned int) ((long long int) (short)-26263)))));
        }
        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)12008))))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)31107)))) : (((/* implicit */int) (unsigned char)15))));
            var_26 = ((/* implicit */unsigned long long int) max(((+(arr_9 [i_6] [i_1] [i_1]))), (min((arr_9 [i_1] [i_1] [i_6]), (arr_9 [10LL] [i_1] [i_6])))));
            arr_24 [(unsigned short)9] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) var_11)))) == (((/* implicit */int) ((arr_6 [i_1]) || ((_Bool)0)))))))) | (((min((arr_11 [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned short)34425)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 1795726055U)) : (((((/* implicit */long long int) ((/* implicit */int) ((var_3) != (((/* implicit */int) var_12)))))) % (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53514))) : (arr_8 [13U] [i_6] [i_6])))))));
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-18124)) ? (var_3) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-74))))));
        }
        for (signed char i_7 = 4; i_7 < 14; i_7 += 1) 
        {
            var_29 = (!(((/* implicit */_Bool) (unsigned short)46411)));
            arr_28 [(signed char)10] = ((/* implicit */int) 2027399210U);
        }
    }
    /* LoopSeq 1 */
    for (long long int i_8 = 2; i_8 < 11; i_8 += 3) 
    {
        arr_32 [i_8 + 3] = ((/* implicit */short) (((+(((/* implicit */int) arr_17 [i_8 + 3] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8])))) > (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && ((_Bool)1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_9 = 4; i_9 < 14; i_9 += 4) 
        {
            arr_35 [i_8] [i_9] = ((/* implicit */int) var_1);
            var_30 &= ((/* implicit */signed char) ((arr_11 [i_9 - 4] [i_9 - 4]) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 2) 
            {
                arr_40 [i_9] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9]);
                var_31 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) : (2267568085U)))));
            }
            for (signed char i_11 = 4; i_11 < 13; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
                {
                    arr_45 [i_11] [10U] [i_11] [i_9] [i_11] = ((signed char) arr_13 [i_8 + 4] [i_9 - 4]);
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_49 [i_11] [i_9 - 2] [i_11] [13] [12U] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_9 - 2] [i_11 + 2])) : (((/* implicit */int) (unsigned short)10545))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (-(1795726055U)))) ? (((((/* implicit */_Bool) 3268673274U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_2))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)-19386)))))));
                        var_33 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 3268673274U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))));
                    }
                }
                for (unsigned char i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) var_6);
                    arr_53 [i_11] = ((((/* implicit */_Bool) (unsigned short)53589)) || (((/* implicit */_Bool) 1416171327U)));
                }
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 2; i_16 < 14; i_16 += 3) 
                    {
                        var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-74))));
                        var_36 = (~((+(((/* implicit */int) (signed char)-49)))));
                        arr_60 [i_15] [i_9 + 1] [i_11] [i_11] [i_16] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))));
                    }
                    for (unsigned int i_17 = 1; i_17 < 14; i_17 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3295)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-43))));
                        var_38 = ((/* implicit */short) var_9);
                        var_39 = ((/* implicit */short) max((var_39), ((short)-3295)));
                    }
                    for (unsigned int i_18 = 1; i_18 < 14; i_18 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [(_Bool)1])) ? (((((/* implicit */int) (unsigned char)252)) & (((/* implicit */int) var_13)))) : (((/* implicit */int) var_14))));
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((arr_42 [i_8] [i_9] [i_11 - 4] [i_9]) <= (((/* implicit */int) (_Bool)1)))))));
                        var_42 -= ((/* implicit */unsigned short) arr_25 [i_8] [i_9 - 3]);
                    }
                    for (unsigned short i_19 = 0; i_19 < 15; i_19 += 4) 
                    {
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-26263)) : (((/* implicit */int) var_8))))) : ((-(8188543866139933623LL)))));
                        var_44 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) 348257311)) & (arr_9 [i_8 + 4] [i_9 - 3] [(unsigned short)4]))));
                    }
                    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) ((((/* implicit */int) var_8)) <= (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_15))))))))));
                    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_9 - 3] [i_9 - 3] [i_9 - 2] [i_9 - 4] [i_9 - 2] [i_9 + 1])))))));
                    arr_68 [i_11] [i_11] [i_9 - 2] [i_11] = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]))) : (arr_8 [i_9 + 1] [i_11 - 4] [i_11 - 3])));
                }
                var_47 = ((/* implicit */signed char) (short)3284);
                var_48 = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_11 - 1] [i_11 - 2] [i_9 - 2] [i_8 + 3] [i_8] [i_8]))));
            }
        }
    }
}

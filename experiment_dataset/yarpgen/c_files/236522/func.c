/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236522
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), ((+(min((((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_1 [i_0])), (arr_0 [i_0] [(unsigned char)7])))), (8796093021952ULL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((min((max((-1LL), (((/* implicit */long long int) (signed char)-32)))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_12 [i_0] [i_0] [i_0] [12LL] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))))))))));
                                var_18 |= ((/* implicit */signed char) 9223372036854775807LL);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            var_19 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1347929982U))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_4 [11LL]))));
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
                            var_21 = ((/* implicit */unsigned long long int) 4283417592U);
                        }
                        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_8] = ((/* implicit */unsigned long long int) arr_6 [(short)4] [i_1] [i_5]);
                            arr_26 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 2904448024221267571ULL)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (short)2414)))) : (((/* implicit */int) (short)-26133))));
                            var_22 &= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)117)) << (((arr_17 [(short)11]) - (14558351449595095799ULL)))))));
                            arr_27 [i_8] [i_6] [5ULL] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_20 [i_1] [(short)10] [(unsigned char)10]);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) (_Bool)1);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3645029847421475618ULL)) ? (1056996267U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))));
                            arr_30 [(short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2200154675249888049LL)) ? (-7692776088608611676LL) : (((/* implicit */long long int) 3237971042U))));
                            var_25 -= ((/* implicit */unsigned int) (+(9223372036854775807LL)));
                        }
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 17ULL)) ? (18446744073709551606ULL) : (7733672530163980963ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6] [8ULL]))) : (arr_17 [i_0])))));
                        var_27 -= ((/* implicit */unsigned long long int) arr_0 [i_6] [(unsigned char)0]);
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 13; i_10 += 4) 
                    {
                        arr_33 [i_5] = ((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_28 = ((((((/* implicit */_Bool) 834883850234880928LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [11ULL] [i_0] [i_10 - 2]))) : (arr_15 [i_0] [i_0] [13ULL] [i_1] [i_5] [(unsigned char)5]))) << (((/* implicit */int) ((((/* implicit */_Bool) (short)-26088)) && (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_5] [i_10] [13LL]))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) <= (2464096466448368734ULL)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        arr_36 [i_0] [(unsigned char)4] [14ULL] = ((/* implicit */unsigned char) arr_15 [i_0] [3LL] [i_5] [i_0] [(short)14] [i_11]);
                        var_30 *= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)120))));
                    }
                }
                /* LoopSeq 1 */
                for (short i_12 = 1; i_12 < 14; i_12 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 14; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 14; i_14 += 1) 
                        {
                            {
                                arr_44 [i_1] [i_13] [i_1] = ((/* implicit */long long int) arr_29 [7LL] [7LL] [i_13]);
                                var_31 *= ((/* implicit */short) max((arr_13 [i_1] [i_12 + 2] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2620578377U)) || (((/* implicit */_Bool) 7692776088608611672LL))))), (608165788U))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) max(((+(4294967295U))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)108))) : (17293822569102704640ULL))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2142972307261875291ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)233))))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 2; i_15 < 10; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 4) 
                {
                    for (unsigned int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        {
                            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 3337492864U)) ? (arr_41 [i_18] [i_16] [i_16] [i_17]) : (((/* implicit */unsigned long long int) arr_32 [i_18] [i_16] [i_16] [7U])))), (((((/* implicit */_Bool) (short)-24927)) ? (18327840900132992645ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_17])))))))) ? (((/* implicit */int) min((arr_37 [i_15] [i_16] [9ULL]), (((/* implicit */unsigned char) arr_35 [4ULL] [i_16]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_16] [i_16] [i_18])))))));
                            var_34 -= ((/* implicit */unsigned long long int) arr_19 [0U] [0U] [i_17 + 1] [i_17] [i_18]);
                            var_35 = ((/* implicit */signed char) arr_20 [i_15] [i_15] [i_18]);
                            var_36 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)127), ((unsigned char)255))))) % (11706406452654738054ULL))) / (((((((/* implicit */_Bool) 16779131354326286364ULL)) || ((_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23613))) : (11282359185725386547ULL)))));
                        }
                    } 
                } 
                arr_56 [i_15] [i_15] = ((/* implicit */unsigned long long int) (unsigned char)221);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_19 = 1; i_19 < 22; i_19 += 4) 
    {
        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_21 = 2; i_21 < 23; i_21 += 4) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */short) arr_60 [i_19 - 1] [i_19] [i_21]);
                            var_38 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [22ULL] [i_20] [i_20] [i_21] [i_22])) ? (arr_63 [6LL] [(signed char)16] [6LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_19] [i_20] [(unsigned char)2] [i_22] [i_22])))))), (((arr_62 [i_20] [20ULL] [i_20] [1LL]) - (((/* implicit */unsigned long long int) arr_59 [i_19] [i_20]))))))));
                            var_39 *= min((((((/* implicit */_Bool) (short)-23613)) ? (min((13304230956085604163ULL), (((/* implicit */unsigned long long int) arr_64 [i_19] [i_19 - 1] [i_19 - 1] [i_19] [12LL])))) : (((/* implicit */unsigned long long int) arr_63 [i_20] [i_20] [i_19 - 1])))), (((/* implicit */unsigned long long int) max((9178180517074217415LL), (((/* implicit */long long int) arr_63 [1U] [(_Bool)1] [21ULL]))))));
                            var_40 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 17177963823509076153ULL))));
                        }
                    } 
                } 
                arr_68 [i_19] [10ULL] = ((/* implicit */_Bool) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_19] [i_19] [2LL]))) % (18446744073709551614ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_64 [i_20] [i_20] [i_20] [i_20] [12U]))))))), (((((((/* implicit */_Bool) arr_57 [(short)15] [(short)15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (17177963823509076153ULL))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_23 = 0; i_23 < 25; i_23 += 1) 
    {
        for (unsigned char i_24 = 0; i_24 < 25; i_24 += 1) 
        {
            for (long long int i_25 = 1; i_25 < 23; i_25 += 1) 
            {
                {
                    var_41 = ((/* implicit */signed char) (~(max((min((511ULL), (arr_72 [i_23]))), (9413833185125455899ULL)))));
                    var_42 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22250)) ? ((~(((/* implicit */int) arr_71 [12ULL] [(unsigned char)20])))) : (((/* implicit */int) (unsigned char)177))));
                    var_43 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (unsigned char)224)), (11ULL))) == (((((/* implicit */_Bool) (~(1046528ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_23] [i_23])) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (short)12802))))) : (arr_72 [i_23])))));
                    var_44 *= ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-277))) : (-9223372036854775805LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_23] [20ULL]))) : (9178180517074217421LL)))));
                }
            } 
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4446
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0 - 1])), (var_5)))) || (var_10))))));
        var_19 *= ((/* implicit */unsigned int) ((arr_0 [i_0]) ? (((((/* implicit */_Bool) (signed char)-32)) ? (min((((/* implicit */int) var_12)), (-252892906))) : (min((((/* implicit */int) var_14)), (var_2))))) : (((/* implicit */int) (unsigned short)16553))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 4; i_2 < 16; i_2 += 3) 
        {
            arr_7 [i_1] [(short)10] [i_2 - 2] &= ((arr_5 [i_1] [(unsigned short)4] [i_2]) ? ((+(((((/* implicit */_Bool) (unsigned short)16553)) ? (((/* implicit */int) (unsigned short)16553)) : (((/* implicit */int) (unsigned short)48982)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_6 [(unsigned char)16] [i_2])))))))));
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                arr_11 [i_2] = var_17;
                var_20 |= ((/* implicit */long long int) var_11);
            }
        }
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) (((-(0U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (arr_10 [(_Bool)1] [i_1] [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -679266451)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)62988))))) : (var_5)));
        var_22 ^= ((/* implicit */unsigned char) ((unsigned short) ((var_15) << (((((/* implicit */int) var_12)) - (48982))))));
        arr_15 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) : (0)));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_4] [i_4])) >> (((((/* implicit */int) arr_2 [i_4] [i_4])) - (28067))))) & (((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            var_24 += ((/* implicit */unsigned int) 1035261248);
                            var_25 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) 1679196877)))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4] [i_4]))))) << (((/* implicit */int) ((_Bool) (_Bool)0)))));
                        }
                        for (unsigned short i_9 = 2; i_9 < 12; i_9 += 3) 
                        {
                            arr_29 [i_4] = ((/* implicit */unsigned long long int) var_17);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_10)) : (-1617578628)));
                            var_28 = ((/* implicit */short) var_7);
                            var_29 = ((/* implicit */unsigned short) (((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (8581384861084830061LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) 1617578630)) : ((~(2914076287U)))));
                        }
                        for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
                            var_32 -= var_16;
                            var_33 = ((/* implicit */unsigned short) ((short) var_17));
                        }
                        arr_32 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54919))) : (8581384861084830061LL)));
                        var_34 -= ((/* implicit */short) ((((/* implicit */int) (unsigned short)62999)) << (((var_5) - (4142173064U)))));
                    }
                    for (short i_11 = 0; i_11 < 13; i_11 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned long long int) arr_33 [i_11] [i_6] [i_5] [i_4]);
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (unsigned short)2548))));
                    }
                    var_37 = ((/* implicit */int) (unsigned short)47137);
                    arr_36 [i_4] [i_5] [i_4] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned char)7)))));
                }
            } 
        } 
        arr_37 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))));
    }
    for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
    {
        var_38 += ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((unsigned short) var_3))));
        arr_40 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_5)))) ? (min((((/* implicit */int) var_9)), (-1405917266))) : (((int) var_11))))) ? (min((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) arr_39 [i_12])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_39 [i_12]), (var_1)))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        for (short i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            {
                var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((~(arr_1 [i_14]))) >> (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)10617)) : (((/* implicit */int) arr_39 [i_13])))) - (10596)))))))))));
                var_40 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_17))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (1925842861U))))))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 3) 
                {
                    arr_49 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) (unsigned char)248)))) ? (arr_44 [i_13] [i_14]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */int) (short)25000))));
                    arr_50 [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)48983)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), ((unsigned char)248))))) : (((var_4) + (((/* implicit */unsigned int) ((int) var_11)))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 19; i_18 += 4) 
                        {
                            var_41 = ((/* implicit */int) var_15);
                            arr_60 [i_13] [i_17] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) arr_46 [i_17] [i_17] [i_17]);
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(var_5))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)252)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)249)))) >= (((/* implicit */int) arr_39 [i_13])))))) : (264877144U)));
                        }
                        arr_61 [i_13] [i_14] [i_16] [i_17] = ((/* implicit */short) var_17);
                    }
                    /* LoopNest 2 */
                    for (short i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        for (unsigned int i_20 = 2; i_20 < 18; i_20 += 3) 
                        {
                            {
                                var_43 += ((/* implicit */unsigned short) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (((((/* implicit */_Bool) arr_43 [i_16])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)127))))))));
                                var_44 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned short) var_5))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_43 [i_16])))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)54919)), (((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_19]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (arr_45 [i_16] [i_16] [i_16])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_13] [i_13] [i_13]))) : (var_0))))));
                            }
                        } 
                    } 
                }
                for (int i_21 = 4; i_21 < 16; i_21 += 1) 
                {
                    arr_73 [i_13] [i_14] [i_13] = ((/* implicit */short) var_11);
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 3; i_22 < 18; i_22 += 4) 
                    {
                        for (int i_23 = 0; i_23 < 19; i_23 += 2) 
                        {
                            {
                                var_45 &= ((/* implicit */int) var_0);
                                var_46 -= (short)4685;
                                var_47 = ((/* implicit */int) max((((/* implicit */unsigned int) (((+(arr_43 [i_13]))) != (((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_21] [i_13])) >> (((((/* implicit */int) (unsigned short)33671)) - (33665))))))))), (((((1505609868U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59772))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41874)))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 1; i_24 < 16; i_24 += 4) 
                {
                    for (unsigned char i_25 = 1; i_25 < 16; i_25 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) ((((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_57 [i_25] [i_24] [i_14])))) > ((+(((/* implicit */int) arr_77 [i_13] [i_13] [i_25] [(short)0] [i_25 - 1])))))) ? (max((((((/* implicit */int) var_6)) / (((/* implicit */int) var_17)))), (min((((/* implicit */int) (unsigned short)0)), (-1405917266))))) : (((/* implicit */int) var_1)))))));
                            arr_85 [i_13] = ((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)35220)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (1103964601798301436ULL)));
                            var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_58 [i_13] [i_13] [i_14] [i_24] [i_25])) : (((/* implicit */int) var_7))));
                        }
                    } 
                } 
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196565
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)27446)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) >= (13455426458015714278ULL)))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [7ULL] [i_2] [i_1] [i_4]))) & (((arr_5 [i_1] [i_2] [i_3] [(_Bool)1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_4])))))));
                                arr_10 [16LL] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((short) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((long long int) (~(arr_5 [i_0] [i_0] [(signed char)5] [i_0])))))));
                    var_18 -= ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) var_1))));
                }
                for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_12 [i_0]) == (arr_12 [i_5]))))));
                    var_20 = ((/* implicit */short) (unsigned short)618);
                }
                for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_0])) % (((/* implicit */int) ((((/* implicit */int) arr_15 [i_6])) >= (((/* implicit */int) arr_15 [i_0])))))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) min((min((((long long int) arr_5 [i_0] [i_1] [i_6] [i_7])), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) (unsigned short)27433)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) arr_12 [i_0]))))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) (unsigned short)27425);
                        var_23 = ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_6])) && (((arr_18 [i_6] [i_6] [i_6] [i_0]) || (((/* implicit */_Bool) (signed char)-98)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_18 [(short)14] [i_1] [i_6] [i_9 - 3])))))));
                        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_9 + 3]))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_9 + 1] [i_9 + 3] [i_9 - 1] [i_9 + 2])) ? (((/* implicit */int) arr_18 [i_9] [i_9 + 2] [i_9 - 2] [i_9 + 1])) : (((/* implicit */int) arr_9 [i_9 - 2] [i_9 + 2] [i_9 - 3] [18LL] [i_9 - 3]))));
                    }
                    for (unsigned short i_10 = 3; i_10 < 21; i_10 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (short i_11 = 3; i_11 < 19; i_11 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)64909))))))));
                            arr_27 [i_0] [(short)18] [i_11] [i_10] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2032))) ^ (288230376151711743LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))))))));
                        }
                        for (short i_12 = 3; i_12 < 19; i_12 += 1) /* same iter space */
                        {
                            var_28 -= ((/* implicit */unsigned long long int) min((min(((+(((/* implicit */int) (short)-13005)))), ((-(((/* implicit */int) (unsigned short)614)))))), (((/* implicit */int) ((((/* implicit */int) arr_8 [i_10] [i_10 - 3] [i_12 - 2] [i_12 - 2])) >= (((/* implicit */int) arr_8 [i_10 - 3] [i_10 - 3] [i_12 - 2] [i_12 + 3])))))));
                            var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (arr_28 [i_0] [i_1] [17ULL] [i_0] [i_12])))) ? (((/* implicit */int) (unsigned short)64921)) : ((+(((/* implicit */int) (short)-32634)))))) <= (((((/* implicit */int) min((var_12), ((signed char)-22)))) * ((-(((/* implicit */int) arr_15 [i_6]))))))));
                            arr_31 [i_10] [i_10] [(_Bool)1] = ((/* implicit */long long int) var_8);
                        }
                        /* vectorizable */
                        for (short i_13 = 3; i_13 < 19; i_13 += 1) /* same iter space */
                        {
                            var_30 -= ((/* implicit */long long int) ((_Bool) 10994252289017751323ULL));
                            var_31 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_13] [i_6] [i_10] [i_13])) ? (((/* implicit */int) (signed char)79)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((signed char) (short)(-32767 - 1)))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                        for (short i_14 = 3; i_14 < 19; i_14 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_1] [i_10] [i_14 + 3] = ((/* implicit */long long int) arr_7 [i_0] [i_1] [i_6] [i_0]);
                            arr_39 [i_10] = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), ((+((+(((/* implicit */int) (unsigned short)45))))))));
                        }
                        arr_40 [i_0] [i_10] [i_6] [i_0] [i_6] = ((/* implicit */signed char) (short)-6585);
                    }
                    /* LoopSeq 4 */
                    for (signed char i_15 = 1; i_15 < 19; i_15 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_26 [i_0]))));
                        var_33 &= ((/* implicit */unsigned long long int) arr_7 [i_15 + 3] [i_15 + 3] [i_15 + 3] [i_15 + 2]);
                        var_34 -= ((/* implicit */unsigned char) (_Bool)0);
                        arr_43 [i_0] [i_0] [i_1] [i_6] [i_6] [i_15 + 3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_15 [i_15 - 1])))) ? (((/* implicit */int) (((-(-8075158117335448280LL))) != (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0])))))) : (((((/* implicit */_Bool) ((short) (unsigned char)24))) ? (((/* implicit */int) ((7850877935405296186LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_9))))));
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(17285109151608710487ULL)))) ? (((unsigned long long int) 6ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22))) < (arr_5 [i_0] [i_1] [i_6] [i_6]))))))))))));
                        var_37 = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [11LL] [i_1])) ? (arr_20 [9ULL] [0LL] [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_6] [i_6] [(short)4]))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_6] [i_6] [i_16] [i_6] [i_6])))));
                        arr_47 [i_16] [i_1] [i_6] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (-(((/* implicit */int) arr_4 [(signed char)0]))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_6])) ? (arr_33 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3358704606694993446LL)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86)))))))))));
                        var_38 &= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_44 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0]))) : (arr_30 [(_Bool)1] [i_1] [i_6] [i_16])))));
                    }
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)21762)) ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) 17592186040320LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((signed char) (unsigned short)21762))))) : (((/* implicit */int) (short)-32754)))))));
                        arr_50 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)25353)) ? (((/* implicit */int) max((var_7), (var_11)))) : (((/* implicit */int) var_7))));
                        var_40 = ((/* implicit */long long int) (short)15414);
                    }
                    /* vectorizable */
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_41 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)21753)) : (((/* implicit */int) (unsigned short)64909)))))));
                            arr_57 [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_0] [i_1] [i_1] [i_6] [(short)9] [i_1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_48 [i_1] [i_1] [i_1] [(signed char)12] [i_6] [i_6]))));
                        }
                        for (unsigned short i_20 = 1; i_20 < 19; i_20 += 3) 
                        {
                            var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)43)) ? (7881299347898368LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_20 + 3]))))))));
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((arr_12 [i_20 - 1]) ^ (arr_12 [i_20 + 2]))))));
                        }
                        for (short i_21 = 0; i_21 < 22; i_21 += 4) 
                        {
                            arr_65 [i_0] [i_18] [i_18] = ((/* implicit */long long int) var_10);
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_5))))))))));
                            var_45 = ((/* implicit */_Bool) arr_63 [i_0] [i_1] [i_18] [21ULL]);
                            var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((-7881299347898369LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)37))))))));
                        }
                        var_48 = ((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)25352)))))));
                    }
                    var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)25353)), ((~(arr_33 [i_0] [7LL] [(unsigned short)9] [(unsigned short)9] [(unsigned short)9])))))) ? (9024917942510783177LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (5513932717779481048LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64938)))))) >= (((((/* implicit */_Bool) (short)-25915)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))) : (arr_5 [i_0] [i_0] [i_0] [i_0])))))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        for (signed char i_23 = 1; i_23 < 10; i_23 += 3) 
        {
            {
                arr_73 [i_22] [(unsigned char)2] = ((/* implicit */_Bool) (-((-((+(((/* implicit */int) arr_48 [i_23] [i_23] [i_23] [i_23] [i_22] [i_23]))))))));
                arr_74 [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned short)5910))) ? (arr_22 [i_23 + 1] [i_23 + 2] [i_23 + 1] [i_23]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)64925)), (-9024917942510783180LL))))));
            }
        } 
    } 
}

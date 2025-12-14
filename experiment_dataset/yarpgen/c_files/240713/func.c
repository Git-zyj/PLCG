/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240713
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] = max((((((((/* implicit */int) (signed char)-42)) + (2147483647))) << (((((((/* implicit */int) (short)-1)) + (26))) - (25))))), (((((/* implicit */int) ((signed char) (short)1))) << (((((/* implicit */int) (unsigned short)54722)) - (54705))))));
                            var_10 = ((/* implicit */long long int) ((unsigned short) arr_8 [i_3] [i_1 - 1] [i_3]));
                            var_11 = ((/* implicit */signed char) var_3);
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 13; i_4 += 1) 
                            {
                                var_12 = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_0] [i_1 + 3] [i_2 + 2]))));
                                var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)255))));
                                arr_13 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3])))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned long long int) (short)22);
                                var_15 = ((/* implicit */long long int) min((max((-163931053), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 999941905U)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (short)-12))))))))));
                                var_16 = ((/* implicit */unsigned char) arr_5 [i_1 - 2] [i_1 - 2] [i_3 - 1]);
                            }
                            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
                            {
                                var_17 *= ((/* implicit */short) arr_14 [i_0] [i_1] [i_1] [i_3 - 1] [i_2 + 1] [i_3 - 2] [i_1 + 1]);
                                var_18 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (unsigned char)0))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_3 - 1] [i_2] [i_2])) * (((/* implicit */int) (short)(-32767 - 1)))));
                                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_3 + 1] [i_1 + 1]))));
                                arr_18 [i_3] [i_3] [i_3] [i_6] = ((/* implicit */long long int) var_5);
                            }
                        }
                    } 
                } 
                var_21 = (-(((/* implicit */int) (unsigned short)64542)));
                /* LoopSeq 4 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_22 &= ((/* implicit */short) (unsigned char)0);
                                var_23 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_7] [i_1 - 2] [i_7] [i_8] [i_1 - 2] [i_7]))))) % (((((/* implicit */long long int) ((/* implicit */int) (short)12))) + (35184372088831LL))))), (((/* implicit */long long int) var_2))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((max((-8018730684953060337LL), (((/* implicit */long long int) -163931053)))) < (arr_24 [i_1 + 3] [i_1 + 2] [i_1 + 2])))), ((~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (0U) : (1135461305U)))))));
                        arr_30 [i_10] [i_1] [i_7] [i_10] = ((unsigned int) ((((/* implicit */_Bool) arr_29 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_10] [i_1 - 1])) ? (arr_29 [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2] [i_10] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-15)))));
                    }
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) ((unsigned short) (-(-163931053))));
                        var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_7]))))) << (((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) 1954439105U)))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (short)12)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)183)) << (((arr_27 [i_1] [i_1] [i_7] [i_11] [i_1]) + (1500847181))))))))) ? ((((-(((/* implicit */int) var_1)))) << (((var_4) - (2705434469U))))) : ((+(((/* implicit */int) ((4294967284U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-23723))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-30)) == (((/* implicit */int) (unsigned char)255)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0] [i_1] [i_1] [i_1] [i_0] [i_12]))) : (arr_31 [i_0] [i_1 + 3] [i_7] [i_12] [i_0] [i_7])));
                        arr_38 [i_7] [i_12] [i_7] [(signed char)9] [i_7] = ((-163931053) / (((/* implicit */int) (unsigned char)184)));
                    }
                }
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) (short)11);
                    var_30 = ((/* implicit */long long int) max((var_30), (((((((((/* implicit */_Bool) arr_20 [(signed char)13] [i_1] [i_1 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)189))))) : ((+(var_0))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((_Bool) ((unsigned long long int) arr_32 [i_1] [i_0] [i_1 - 1] [i_1] [i_0] [i_0])))) - (1)))))));
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(arr_29 [i_0] [i_1] [i_1] [i_13] [i_0] [i_13]))))));
                    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (unsigned char)7))));
                    var_33 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) & (arr_12 [i_0] [i_13])))) ? (((arr_33 [i_0] [i_1 - 1] [i_13] [14LL]) / (arr_33 [i_0] [i_1 - 1] [i_1] [(signed char)0]))) : (((/* implicit */long long int) (+(arr_31 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_13] [i_13])))));
                }
                /* vectorizable */
                for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned short) arr_36 [i_1] [i_14]);
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) arr_20 [i_14] [i_1 - 2] [i_1 + 1]))));
                    var_36 = ((/* implicit */unsigned short) var_4);
                    arr_44 [i_14] [i_1] = (short)23;
                    var_37 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_36 [i_1] [i_1 - 2]))));
                }
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                {
                    arr_48 [i_0] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) << (((/* implicit */int) ((((/* implicit */_Bool) (short)-12)) || (((/* implicit */_Bool) 163931052)))))))) ? (((/* implicit */int) arr_0 [i_15] [i_1])) : (((/* implicit */int) max((arr_26 [i_1 + 2] [i_1 + 2] [i_1 + 3]), (arr_26 [i_1 + 2] [i_1 + 2] [i_1 + 3]))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        var_38 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_33 [i_15] [i_1] [i_15] [i_16])) ? (var_0) : (8796093022207LL)))))) ? (((/* implicit */int) (short)-31284)) : (((((/* implicit */int) arr_32 [i_1 + 2] [i_1 + 1] [i_1] [i_1] [i_1 - 2] [i_1])) | (((/* implicit */int) (unsigned char)184)))));
                        arr_53 [i_0] [i_15] [i_15] [i_16] [i_15] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31283)) ? (-120428934) : (((/* implicit */int) arr_7 [i_16] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)65)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_15] [i_16])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_26 [i_16] [i_1] [i_0]))))) || (((/* implicit */_Bool) (short)12))))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_17 = 2; i_17 < 21; i_17 += 1) 
    {
        for (long long int i_18 = 1; i_18 < 22; i_18 += 1) 
        {
            {
                arr_60 [i_17 - 1] = ((/* implicit */short) (+((-(2147483624)))));
                var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_54 [i_17 + 1] [i_17 - 2])) == (((/* implicit */int) arr_54 [i_17 - 2] [i_17 + 2]))))), (((((/* implicit */int) arr_54 [i_17 + 2] [i_17 - 1])) >> (((((/* implicit */int) arr_59 [i_17 + 1] [i_17 - 2] [i_18 - 1])) - (26205))))))))));
                var_40 = ((/* implicit */long long int) arr_55 [i_17 - 1]);
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 23; i_19 += 3) 
                {
                    for (int i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */long long int) (!(((min((((/* implicit */int) arr_54 [i_17] [i_17])), (arr_62 [i_20]))) <= (((/* implicit */int) (unsigned short)40915))))));
                            arr_66 [i_18] [i_18] [i_20] [i_20] [i_20] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) ((unsigned int) var_2)))), (arr_63 [18ULL] [i_20] [i_19] [(unsigned char)5])));
                        }
                    } 
                } 
                var_42 |= ((/* implicit */_Bool) arr_61 [i_18] [i_18] [i_18 - 1] [i_17]);
            }
        } 
    } 
}

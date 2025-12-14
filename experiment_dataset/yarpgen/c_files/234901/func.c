/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234901
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (~(((unsigned long long int) arr_10 [i_4 - 2] [i_2 + 1] [i_0 - 2] [i_0]))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-391)))) ? (((/* implicit */int) arr_0 [i_3])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_0 [i_1])))))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)17554)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32750))) : (3305950730U))))));
                                var_23 -= (+((-(((((/* implicit */_Bool) (short)-400)) ? (((/* implicit */long long int) var_8)) : (9223372036854775807LL))))));
                                arr_11 [i_0] [i_1] [i_2] [i_0] [i_4 + 1] [i_2 + 1] [i_0 - 3] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)206)) >> (((1173730862U) - (1173730862U))))) > ((+(((/* implicit */int) arr_9 [i_4 - 2] [i_0] [i_4 - 1] [i_4] [i_4 - 1] [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_24 *= ((/* implicit */unsigned char) min((((long long int) arr_3 [i_1])), (((/* implicit */long long int) var_19))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_9 [i_0] [i_1] [12U] [i_1] [i_1] [i_0])))))))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                            {
                                var_26 -= ((/* implicit */_Bool) max((var_18), (((/* implicit */short) min((((/* implicit */signed char) ((_Bool) 2147483646))), ((signed char)0))))));
                                arr_21 [i_0] [i_6] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 - 2] [i_5 - 2] [i_0])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 2] [i_5 - 2] [i_0])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 2] [i_5 - 2] [i_0])))), (((/* implicit */int) min(((signed char)3), (arr_10 [i_0 + 2] [i_0 - 2] [i_5 + 2] [i_0]))))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21083))) | (14536154716507214197ULL)));
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                            {
                                arr_25 [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1);
                                var_28 = ((/* implicit */unsigned long long int) ((unsigned short) var_3));
                            }
                            arr_26 [i_0] [i_0] [(short)18] [i_0] [17ULL] = ((/* implicit */short) max((((var_19) + (((/* implicit */unsigned int) arr_17 [i_0] [i_6] [(unsigned char)1] [i_5] [16U] [i_0])))), (((/* implicit */unsigned int) min((((/* implicit */int) (short)-1248)), (arr_17 [i_0] [i_6] [i_6] [i_5] [i_5 + 1] [i_0]))))));
                            arr_27 [i_0] [i_1] [i_1] [16U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3305950703U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)184))))) ? (((/* implicit */long long int) ((/* implicit */int) ((4921360815852367703LL) <= (((/* implicit */long long int) 4290772992U)))))) : (arr_6 [i_5 + 1] [i_5 - 2] [i_0] [i_5 - 2])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_9 = 3; i_9 < 15; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 3; i_10 < 14; i_10 += 4) 
        {
            for (short i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        arr_39 [i_9] [i_9] [(unsigned char)5] [9U] = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) 3305950735U)), (-3756862788438704553LL))));
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (-(18446744073709551615ULL))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 1; i_13 < 16; i_13 += 4) 
                        {
                            arr_42 [i_9] = ((/* implicit */_Bool) max((min((1222784210U), (((/* implicit */unsigned int) (short)-1164)))), (((/* implicit */unsigned int) max((arr_17 [i_9] [6LL] [i_9 + 1] [i_10 + 2] [i_13 - 1] [i_13 + 1]), (arr_17 [i_9] [(_Bool)1] [(_Bool)1] [i_10 + 2] [i_13 - 1] [i_13 + 1]))))));
                            var_30 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_19 [i_9] [i_13] [i_13] [i_13 - 1] [i_10 + 1] [i_9])), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (3121236438U)))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1164)) || (((/* implicit */_Bool) min((arr_40 [i_9 - 1] [i_11]), (arr_40 [i_9 - 1] [i_11])))))))));
                            arr_43 [6ULL] [(_Bool)1] [(unsigned char)0] [i_9] [i_12] [i_12] = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(7U)))))) * (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (arr_33 [i_9] [i_12] [i_11] [i_9]))));
                        }
                        for (int i_14 = 0; i_14 < 17; i_14 += 4) 
                        {
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_9] [i_14])) ? (arr_29 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (var_5) : (((/* implicit */unsigned long long int) arr_6 [i_14] [i_9] [i_9] [i_10]))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)19766))) : (min((-370264806173041388LL), (-9028507731299694039LL))))) : (((/* implicit */long long int) min((max((((/* implicit */unsigned int) 1493022180)), (1611247325U))), (((/* implicit */unsigned int) ((short) var_5))))))));
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)15808))))) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) var_3)))))));
                            arr_47 [i_14] [i_14] [i_14] [i_9] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)71))) : ((-9223372036854775807LL - 1LL)))));
                        }
                        for (long long int i_15 = 1; i_15 < 16; i_15 += 3) 
                        {
                            var_34 = (~(((/* implicit */int) (signed char)-87)));
                            var_35 = ((/* implicit */signed char) max((max((var_2), ((((_Bool)0) ? (16736065248063501265ULL) : (1710678825646050357ULL))))), (((/* implicit */unsigned long long int) var_19))));
                        }
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_37 [i_9] [(_Bool)1] [i_16] [i_16]), (arr_37 [i_9] [i_16] [i_16] [i_9])))) ? (-8521792773804474392LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) arr_37 [i_9] [i_12] [i_12] [i_9]))))))));
                            var_37 = ((/* implicit */long long int) arr_51 [10ULL] [i_9] [10ULL] [i_16] [i_16]);
                            var_38 += ((/* implicit */short) (-(((/* implicit */int) arr_22 [i_11] [i_9 + 1] [i_9 + 2] [i_9 - 1]))));
                        }
                        /* LoopSeq 1 */
                        for (int i_17 = 0; i_17 < 17; i_17 += 3) 
                        {
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) min((((arr_41 [i_11] [i_10 - 1] [i_10 - 3]) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_11] [i_10 - 2] [i_10 - 2]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_11] [i_9 - 3] [i_10 + 2] [i_11] [i_11] [i_17]))))))))));
                            var_40 += ((/* implicit */short) 16736065248063501256ULL);
                            arr_56 [i_10] [i_9] = ((/* implicit */signed char) ((9223372036854775807LL) << (((7297446704822135766ULL) - (7297446704822135766ULL)))));
                            arr_57 [i_9] [3U] [i_11] [(short)8] [(_Bool)0] = ((/* implicit */_Bool) 4294967272U);
                            arr_58 [i_9] [i_10] = ((((/* implicit */_Bool) 3937200104282667453LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)164)));
                        }
                    }
                    var_41 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) (_Bool)1))))), (16253076437512958706ULL)));
                    arr_59 [i_9] [14LL] [i_10 - 2] [4] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)103))));
                }
            } 
        } 
        arr_60 [i_9] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_18 = 1; i_18 < 15; i_18 += 3) 
        {
            arr_63 [i_9] [7U] [i_9] = ((((_Bool) arr_7 [i_18] [i_9] [7LL] [12ULL])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_9])) * (((/* implicit */int) arr_41 [i_9] [i_9] [i_9]))))) : (var_4));
            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_51 [i_9] [(short)6] [8] [i_18 + 2] [i_9])) : (arr_44 [(short)0] [i_9] [i_18] [i_18 - 1] [(short)14] [i_9] [i_9 - 2]))))));
        }
        var_43 = (-((~(var_12))));
        arr_64 [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)31))));
    }
}

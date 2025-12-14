/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230970
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
    var_19 = (!(((/* implicit */_Bool) ((long long int) ((long long int) var_2)))));
    var_20 *= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */short) arr_7 [i_2] [i_1]);
                    arr_10 [i_0] [i_0] = ((unsigned long long int) arr_9 [i_2] [i_0]);
                }
                /* vectorizable */
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0]))));
                    var_23 = ((/* implicit */unsigned short) ((arr_12 [i_3]) || (arr_8 [i_1] [i_0])));
                    arr_14 [i_3] [i_1] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0] [i_1])) != (((/* implicit */int) arr_1 [i_0] [i_1]))));
                }
                for (signed char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                {
                    var_24 -= ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4] [i_1]))) != (((arr_11 [i_4] [i_0] [i_0]) ? (var_13) : (((((/* implicit */_Bool) 2824766514U)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2824766514U)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)59))) | (1470200806U)))) : (min((((/* implicit */long long int) 2824766510U)), (-6710826156772202393LL)))));
                    arr_18 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) (~(((arr_15 [i_0]) >> (((((/* implicit */int) arr_5 [i_0] [i_4])) - (50751)))))));
                    var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((2824766510U) * (1470200797U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) : (((((((/* implicit */int) arr_6 [i_0] [i_4])) + (2147483647))) << (((((/* implicit */int) arr_17 [i_0] [i_0])) - (30)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_27 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_12 [i_1]) ? (146202664) : (((/* implicit */int) arr_13 [i_5] [i_4] [i_1] [i_0]))))) ? ((-(var_0))) : (((arr_15 [i_0]) >> (((arr_9 [i_5] [i_1]) + (1560001831)))))));
                        var_28 = ((((/* implicit */_Bool) arr_9 [i_4] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_4])) : (arr_19 [i_4] [i_4] [i_5])))));
                    }
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        var_29 = arr_12 [i_4];
                        arr_23 [i_0] [i_0] [i_1] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (arr_7 [i_0] [i_0]) : (arr_7 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [(signed char)2])))))) : (max((7U), (((/* implicit */unsigned int) var_7))))));
                        var_30 = ((/* implicit */_Bool) var_7);
                        var_31 = ((/* implicit */int) ((long long int) arr_1 [i_0] [i_0]));
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        arr_27 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_4])) ? (((1470200781U) >> (8U))) : (min((2824766514U), (2824766499U)))))) ? (((((arr_22 [i_0] [i_0] [i_0] [i_7]) + (9223372036854775807LL))) << (((((arr_22 [i_0] [i_1] [i_4] [i_7]) + (1385366478788228955LL))) - (59LL))))) : (min((((((/* implicit */_Bool) var_0)) ? (arr_15 [i_0]) : (((/* implicit */long long int) 1470200781U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (2824766539U) : (((/* implicit */unsigned int) var_11)))))))));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((arr_26 [i_0] [i_0] [i_4]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))), (1470200778U))))));
                        var_33 = ((/* implicit */long long int) min((var_33), (var_13)));
                    }
                    for (short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((7U), (1470200772U)))) ? (((((/* implicit */_Bool) (unsigned short)62715)) ? (((/* implicit */unsigned long long int) 2824766514U)) : (6854441198933366547ULL))) : (((/* implicit */unsigned long long int) max((1470200778U), (((/* implicit */unsigned int) (_Bool)0)))))))));
                        var_35 &= ((/* implicit */long long int) ((_Bool) arr_3 [i_0]));
                        var_36 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_1 [i_8] [i_1]), (arr_1 [i_1] [i_1])))), (((((/* implicit */_Bool) ((short) arr_20 [i_0]))) ? (arr_25 [i_0] [i_0] [i_1] [i_4] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [8U] [i_4] [i_1] [i_0])))))));
                        var_37 |= ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_8] [i_0] [i_4] [i_1] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) / ((((_Bool)1) ? (1470200779U) : (524287U))))) << (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-50)), ((unsigned char)56)))) - (26))));
                        var_38 &= ((/* implicit */int) min((2097151U), (((((/* implicit */_Bool) -146202664)) ? (max((44203525U), (((/* implicit */unsigned int) (_Bool)1)))) : ((+(1470200781U)))))));
                    }
                }
                var_39 = ((/* implicit */short) min((var_39), (max((arr_20 [i_0]), (((/* implicit */short) arr_13 [i_0] [i_1] [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_38 [i_0] [i_1] [i_0] [i_10] [i_11] &= ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_1] [i_9 - 3])))) >> (((/* implicit */int) ((_Bool) var_14)))))) >= (min((((((/* implicit */_Bool) var_0)) ? (arr_24 [i_11] [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)42)) ? (562444028U) : (1470200769U)))))));
                                var_40 = ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(arr_21 [i_9] [i_1] [i_9 - 1] [10LL])))) + (((arr_12 [i_11]) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))))))) ? (((/* implicit */unsigned long long int) (~(-8419603146527633266LL)))) : (((((/* implicit */_Bool) ((short) arr_31 [i_1] [i_11]))) ? (((10104631180887466453ULL) ^ (((/* implicit */unsigned long long int) -146202681)))) : (((/* implicit */unsigned long long int) arr_15 [i_11])))));
                                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_11 [i_0] [i_9 - 1] [i_9 - 2])))))))));
                                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_18)))))))));
                            }
                        } 
                    } 
                } 
                arr_39 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_5));
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_15)))))))))));
}

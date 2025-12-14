/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2770
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
    var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))))));
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 4294967293U)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)29)))), ((-2147483647 - 1)))))));
                                var_13 -= ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) ((short) -8968966024375085916LL))))));
                            }
                            var_14 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_15 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)8)) - (((/* implicit */int) var_3))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                            {
                                arr_17 [i_0] [i_0] [17LL] = (~(((long long int) var_3)));
                                arr_18 [i_0] [i_1] [i_0] [i_6] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 1663495849U)) ? (3901842668U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_7])))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_8 = 3; i_8 < 20; i_8 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_0] [14]))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (arr_19 [(unsigned short)20] [(unsigned short)20] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (signed char)-51))))))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                                arr_26 [i_0] [i_1] [i_0] [i_10] [i_0] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_2)))));
                                var_17 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */short) var_5)), ((short)22984)))), (((((/* implicit */_Bool) 3166704238U)) ? (arr_19 [i_9] [i_8] [i_0]) : (var_0)))));
                                arr_27 [i_10] [16ULL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)18229))))), (((var_6) >> (((((/* implicit */int) arr_11 [i_0] [i_1])) - (159)))))))) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        arr_30 [i_11] [i_1] [i_11] [i_11] = ((/* implicit */unsigned int) ((long long int) var_8));
                        arr_31 [i_0] [i_8] [i_8] [i_1] [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (signed char)-35)))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) (signed char)48))))))));
                    }
                    for (unsigned int i_12 = 2; i_12 < 18; i_12 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)225)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (2137844130U)))) ? (arr_5 [i_8] [i_12] [i_8] [(unsigned char)6]) : (((long long int) var_9))))));
                        /* LoopSeq 4 */
                        for (short i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((short) max((arr_15 [i_8 - 1] [i_8 - 2] [i_8 - 1]), (arr_15 [i_8 - 1] [i_8 + 1] [i_8 + 1]))))));
                            arr_37 [i_13] [i_0] [i_8] [i_8] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                        }
                        for (short i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_24 [i_0] [i_1] [i_1] [i_12 + 1] [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)27024)))))));
                            arr_40 [i_0] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1464437582)) && (((/* implicit */_Bool) ((unsigned int) var_7)))));
                        }
                        for (short i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
                        {
                            arr_44 [i_15] = ((/* implicit */short) (-(max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))), (2137844130U)))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), (arr_35 [i_0] [i_0] [i_0] [i_8 + 1] [i_12 + 3])))) || (((/* implicit */_Bool) var_5))));
                        }
                        for (unsigned char i_16 = 1; i_16 < 18; i_16 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_24 [i_16] [9U] [i_8] [i_1] [i_16]))) % ((~(((/* implicit */int) (signed char)6))))));
                            arr_49 [i_12] [i_12] [i_12] &= ((/* implicit */signed char) ((((/* implicit */int) var_9)) << ((((((!(((/* implicit */_Bool) arr_0 [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((var_0), (((/* implicit */unsigned int) (unsigned short)1581)))))) - (1050529395U)))));
                            var_24 -= ((((/* implicit */int) ((((/* implicit */int) (short)-29869)) < (((/* implicit */int) (signed char)-61))))) / (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (var_0)))));
                            arr_50 [i_0] [i_1] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (signed char)123))))) ? (((((/* implicit */_Bool) (short)29877)) ? (((/* implicit */unsigned int) 1395702099)) : (2137844125U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))))))));
                        }
                        arr_51 [i_0] [i_1] [i_8 - 2] [i_8 - 1] [i_1] &= ((/* implicit */signed char) 2910150500407141352LL);
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_12] [(unsigned char)2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-23949))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32764))) : (arr_8 [i_0] [i_1]))) : (((long long int) var_4))));
                    }
                    for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) (unsigned char)8);
                        arr_55 [i_0] [i_1] [i_8 - 2] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) var_4);
                        /* LoopSeq 4 */
                        for (short i_18 = 2; i_18 < 20; i_18 += 3) 
                        {
                            arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 7307647113520166074LL);
                            var_27 = ((short) ((short) var_7));
                        }
                        for (short i_19 = 0; i_19 < 21; i_19 += 2) 
                        {
                            arr_62 [i_17] [i_17] [i_17] [(unsigned short)5] [i_19] &= ((/* implicit */unsigned long long int) arr_7 [i_1] [i_17] [i_8] [i_1]);
                            arr_63 [i_0] [i_19] [i_17] [i_8 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) arr_53 [i_1] [i_8 - 1] [i_17] [i_19]));
                            arr_64 [i_0] [i_1] [i_8 + 1] [(unsigned char)11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) (unsigned char)239)))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (max((var_6), (((/* implicit */unsigned long long int) var_5))))))));
                            var_28 = ((/* implicit */short) ((((/* implicit */int) var_8)) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 259570082U)) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1)))) : (((/* implicit */int) ((short) var_4)))))));
                        }
                        /* vectorizable */
                        for (long long int i_20 = 3; i_20 < 18; i_20 += 2) 
                        {
                            arr_68 [i_20] [i_17] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) % (((((/* implicit */_Bool) 1208822182U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)56642))))));
                            arr_69 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22648)))))));
                        }
                        for (short i_21 = 0; i_21 < 21; i_21 += 2) 
                        {
                            arr_72 [i_0] [i_0] [i_0] [(signed char)3] [i_8] [i_17] [i_21] = ((/* implicit */unsigned int) (short)(-32767 - 1));
                            arr_73 [i_0] [i_1] [i_8] [i_17] [i_21] = ((/* implicit */unsigned int) var_3);
                            arr_74 [i_0] [i_1] [i_1] [i_1] [i_17] [i_21] [i_21] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)-5164)) ? (3034637632U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208)))))));
                            var_29 -= ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned int) (short)-10667))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) (short)27458)))) : (((/* implicit */int) min(((unsigned short)8893), (((/* implicit */unsigned short) var_5)))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_22 = 3; i_22 < 19; i_22 += 3) 
                        {
                            var_30 = ((/* implicit */short) ((unsigned int) var_2));
                            arr_79 [i_0] [i_1] [i_8] [i_0] [i_22 + 2] [i_0] = ((/* implicit */unsigned char) min((var_0), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_22 + 1] [i_17] [i_8] [i_8 - 2]))) != (var_0))))));
                            var_31 -= ((/* implicit */short) var_7);
                        }
                    }
                }
            }
        } 
    } 
    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) (short)-30594)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_3))))) : (max((((long long int) 1022444997U)), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) var_9))))))))))));
}

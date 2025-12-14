/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222547
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
    for (signed char i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 4) 
                    {
                        arr_11 [i_0 - 2] [i_0] [i_2] [i_3 - 1] = var_5;
                        var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_1] [8U] [1] [0ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))));
                            arr_15 [i_4 - 1] [5U] [i_0] [5U] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16005158044902305867ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (985180783U)));
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1890556583)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 3] [i_3 + 1] [i_0] [i_4 + 1]))));
                        }
                    }
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        var_11 -= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) & (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1])))) <= (((/* implicit */int) var_7))));
                        var_12 = ((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned short) arr_10 [i_2] [i_0 - 3]))));
                        arr_19 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_1] [i_1] [(signed char)7] = ((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 + 2]);
                        var_13 = var_2;
                        var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 - 3]))))));
                        arr_24 [i_0 + 2] [i_1] [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 8; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_2] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                        arr_28 [i_0] [(unsigned char)6] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_6 [i_1] [i_1] [i_1] [i_7])))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)47662)) ? (var_4) : (((((/* implicit */_Bool) arr_12 [i_0 + 3] [i_0 + 3] [2U] [2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_0])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [1U] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-21)) <= (((/* implicit */int) (signed char)-82)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) arr_13 [i_0] [(signed char)9] [i_2] [i_8] [i_9]))))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_8 [(signed char)7] [i_9]))))));
                            arr_36 [i_0] [i_2] [i_2] [i_2] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 + 2] [i_2] [i_9] [i_8]))));
                        }
                    }
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_25 [i_0] [i_0] [9ULL] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_3))))))) ? (((/* implicit */int) arr_8 [i_1] [i_2])) : ((+(((((/* implicit */_Bool) arr_6 [i_0] [i_0 - 2] [i_0 - 2] [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_2))))))));
                }
                for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 1) 
                {
                    arr_39 [i_10] [i_10] [i_0] = ((/* implicit */unsigned char) arr_1 [i_1]);
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) -2119096999))));
                }
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        arr_47 [i_0] [i_0] = ((/* implicit */signed char) max((303780598U), (3991186690U)));
                        arr_48 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (956610274) : (((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0])))) <= (((/* implicit */int) ((((arr_10 [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_4))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_0)))))) >= (((((/* implicit */_Bool) var_5)) ? (arr_41 [i_1] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_38 [(unsigned short)5] [i_0] [i_1])) : (((/* implicit */int) arr_40 [i_0 - 2] [i_0 - 2] [i_0 - 2]))))) : (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_22 [i_0] [(unsigned short)0] [i_13] [i_13])), (var_3)))) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_0))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_15 = 3; i_15 < 9; i_15 += 4) 
                        {
                            arr_59 [i_0] [i_15] [i_11] [i_0] [i_1] [i_11] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_54 [i_15 + 1] [i_0])))) & (((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (_Bool)1))))));
                            var_20 = ((/* implicit */unsigned short) arr_54 [(_Bool)1] [i_0]);
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_7))))) : (((((/* implicit */_Bool) 13086457202486954879ULL)) ? (1374825639U) : (7U)))))) : (min(((+(18083915250147401698ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_3))))))));
                            var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-3))))))), (((var_9) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0 - 2] [i_15 - 2] [i_15 - 2])))))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0 - 2] [0ULL] [(_Bool)1] [(_Bool)1]))) : (arr_18 [i_16] [i_16] [i_1])))) ? ((+(arr_57 [i_0] [i_0] [i_0] [5U] [i_0 - 3] [i_0]))) : (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-31))))) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 2])) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)255)))))))))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_13 [i_0] [i_0] [i_11] [i_11] [i_16]) ? (((/* implicit */int) arr_46 [(signed char)10] [i_1] [i_11] [i_16])) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))))));
                            arr_62 [i_0] [i_1] [i_11] [i_11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) != (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 10985794530849466171ULL)) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_5)))))))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (min((((/* implicit */unsigned long long int) arr_41 [i_1] [i_1])), (arr_9 [i_14] [i_11] [i_1] [i_0 + 2] [i_0 + 2])))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-3)) >= ((-(((/* implicit */int) var_9)))))))));
                    }
                    var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4294967289U)))) ? (arr_57 [i_0] [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106)))))) ? (((arr_18 [i_0 - 3] [i_1] [i_11]) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (var_5))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 7; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 2) 
                        {
                            {
                                arr_67 [i_18] |= var_8;
                                arr_68 [9U] [i_0] [i_1] [i_11] [i_17] [i_0] [i_18] = ((/* implicit */signed char) arr_32 [(_Bool)1] [i_1] [i_11] [i_17]);
                                var_28 = ((/* implicit */_Bool) var_8);
                                var_29 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_33 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_1))))), (min((((/* implicit */unsigned short) var_5)), (var_6)))))) : ((~(((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    arr_69 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((min((arr_5 [i_0 + 2] [i_0 - 3]), (((/* implicit */unsigned int) var_5)))) >= (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_11] [i_0 - 2] [i_0] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_11] [i_0 + 1] [i_0] [i_1]))) : (arr_5 [i_0 - 2] [i_0 + 3])))));
                    arr_70 [i_0] [i_1] [i_0] [(signed char)9] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))));
                }
                var_30 = ((((((/* implicit */int) max((arr_56 [i_1] [i_0] [i_1] [i_1] [i_0] [5ULL] [i_0]), (((/* implicit */signed char) arr_43 [i_0] [i_1] [(_Bool)1] [i_1]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_1] [(_Bool)1] [i_0 - 2] [i_0 + 1] [(signed char)1] [8] [8]))))))) ? (max((((/* implicit */int) var_6)), (((((/* implicit */int) arr_22 [i_0 - 1] [i_1] [(unsigned short)8] [i_0])) & (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) var_9)) : (arr_30 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))));
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 2; i_19 < 8; i_19 += 4) 
                {
                    for (unsigned int i_20 = 0; i_20 < 11; i_20 += 4) 
                    {
                        {
                            arr_77 [i_0] [i_1] [i_19 - 2] [i_1] &= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_72 [i_0 + 1] [i_1] [(unsigned short)9])) : (((/* implicit */int) arr_43 [i_0] [8U] [5ULL] [8U]))))) ? (((/* implicit */int) var_2)) : (arr_75 [3U] [i_0 + 1] [i_0 - 3] [i_19 + 1] [i_20])))));
                            arr_78 [i_1] [i_0] = ((/* implicit */unsigned long long int) min(((+(((var_9) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) min((arr_20 [i_20] [9ULL] [i_0] [i_20] [i_20]), (var_8))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (((_Bool)1) ? (9U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned int) var_0)), (var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((((/* implicit */int) var_7)) % (((/* implicit */int) var_2)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_21 = 1; i_21 < 16; i_21 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                {
                    arr_88 [i_21] [(unsigned short)15] [i_21] = ((/* implicit */_Bool) arr_87 [i_21] [i_21]);
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */int) arr_80 [i_21])) & (((/* implicit */int) arr_79 [i_22] [i_21])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) ((var_9) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)26517)) : (((/* implicit */int) var_6)))))))))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) 303780598U)) && (((/* implicit */_Bool) (unsigned short)48273))));
    }
}

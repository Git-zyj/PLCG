/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202244
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
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2]))) <= (var_4))))) | (max((((((/* implicit */_Bool) 13U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_4 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned short) (unsigned char)0)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [(unsigned short)11] [i_4 - 1] [i_4] = ((/* implicit */unsigned short) (signed char)-7);
                                var_12 = ((/* implicit */_Bool) (signed char)-51);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_5] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (_Bool)1)), (var_7))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (unsigned short)0)))))));
                                var_13 = ((/* implicit */unsigned char) (signed char)51);
                                arr_22 [i_0] [i_0] [i_5] [i_2] [i_0] [0] [i_6] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 + 3]))) + (var_10))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)22209)))), (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_10 [i_0] [0LL] [i_2] [i_6])) : (((/* implicit */int) var_8)))))))));
                                var_14 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_8)), (((((_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 3] [i_6 + 2]))) : (((arr_14 [i_0] [i_1] [2] [(unsigned short)1] [i_6]) ? (((/* implicit */unsigned long long int) var_6)) : (9916210534829325727ULL)))))));
                                var_15 = ((/* implicit */_Bool) max((((var_5) * (max((var_10), (((/* implicit */unsigned int) (signed char)-52)))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) : (var_10)))));
                            }
                        } 
                    } 
                    arr_23 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 2094387187U)) ? (arr_1 [i_0] [(signed char)4]) : (arr_1 [i_0 - 1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (255) : (((/* implicit */int) var_9)))))));
                    arr_24 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3))) : (arr_8 [i_0 + 2])));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((((/* implicit */_Bool) (~(-364492651)))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_7)))))))));
    var_17 = ((/* implicit */int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_7 = 3; i_7 < 13; i_7 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_8 = 3; i_8 < 11; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (arr_26 [9])));
                            arr_40 [(_Bool)0] [i_9] [i_7] [i_10] [(_Bool)0] [i_9] &= ((/* implicit */int) ((((/* implicit */_Bool) 16646144)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)32)) < (((/* implicit */int) (unsigned short)22197)))))) : (((arr_37 [i_7] [i_7] [8U] [i_7] [i_10] [i_11]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_19 = ((/* implicit */unsigned short) var_6);
                            var_20 = ((/* implicit */int) var_9);
                        }
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                        {
                            arr_43 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10] [i_10] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_7 + 1] [i_7 + 1]))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_8 + 2] [i_8] [i_7] [i_7 - 1] [(unsigned short)5] [i_10])) ? (2858729347U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31197)))));
                            arr_44 [i_7] [i_8] [i_9] [i_10] [i_10] [i_12] &= ((/* implicit */signed char) ((arr_39 [i_7] [i_8 + 2] [i_9] [i_8 + 2] [i_8]) < (arr_39 [i_8] [i_8] [i_8 + 3] [i_8 - 2] [(short)3])));
                            arr_45 [(signed char)8] [i_10] [i_9] [i_9] [i_12] |= ((/* implicit */int) (unsigned short)22206);
                            var_22 = ((/* implicit */int) (unsigned short)43340);
                        }
                        for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)71)) : (((/* implicit */int) arr_25 [i_7 - 3]))));
                            var_24 = ((/* implicit */short) var_2);
                            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_8 - 1] [i_8] [i_8]))));
                            arr_49 [i_7] [(_Bool)1] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_3))))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3193062065919188594ULL)) && (arr_34 [i_7 - 1] [i_7 - 1] [i_9] [i_9] [1U])));
                        var_27 = ((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) arr_48 [i_7] [(signed char)3] [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 2] [10LL])) : (((/* implicit */int) var_8)))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_14 = 3; i_14 < 11; i_14 += 4) 
            {
                for (short i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    for (unsigned short i_16 = 2; i_16 < 12; i_16 += 1) 
                    {
                        {
                            arr_56 [i_7] [i_7] = ((/* implicit */unsigned short) var_6);
                            var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_7] [i_7 - 3] [i_8 + 1] [i_15] [i_16 - 2])) - (((/* implicit */int) var_2))));
                        }
                    } 
                } 
            } 
            arr_57 [i_7] = ((/* implicit */signed char) ((short) arr_48 [i_7 - 1] [i_7] [i_7] [i_7 - 3] [i_7] [i_8 - 1] [i_8 + 3]));
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                for (long long int i_18 = 2; i_18 < 13; i_18 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_18 + 1] [i_7 - 3] [i_8 - 3])) ? (((/* implicit */int) arr_30 [i_18 - 2] [i_7 + 1] [i_8 + 3])) : (((/* implicit */int) arr_30 [i_18 + 1] [i_7 - 3] [i_8 - 1]))));
                        var_30 -= ((/* implicit */signed char) ((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_36 [i_7 - 2] [i_8 + 1] [i_17] [i_18]))));
                        arr_63 [i_7] [i_8] [i_17] [i_7] [9U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (var_4)));
                    }
                } 
            } 
        }
        for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)20)) ? (956167924) : (((/* implicit */int) (unsigned short)22206))));
            arr_66 [i_19] [i_7] = ((/* implicit */_Bool) ((unsigned char) arr_25 [i_7 + 1]));
            var_32 = ((/* implicit */signed char) var_0);
            arr_67 [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_60 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (short)30340)) : (((/* implicit */int) arr_60 [i_7] [i_7] [i_7]))));
        }
        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
        {
            arr_70 [i_7] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)43310)) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) (short)-11797)))));
            /* LoopSeq 1 */
            for (unsigned short i_21 = 0; i_21 < 14; i_21 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_22 = 1; i_22 < 12; i_22 += 2) 
                {
                    var_33 = ((/* implicit */long long int) ((unsigned short) arr_31 [i_22 + 2] [i_7 - 2] [i_21]));
                    var_34 = ((/* implicit */long long int) (+(((/* implicit */int) arr_60 [i_20] [i_7] [i_20]))));
                    arr_75 [(short)12] [i_20] [(short)5] [i_7] = ((/* implicit */short) (~(0U)));
                    var_35 = ((/* implicit */signed char) (~(var_5)));
                    arr_76 [i_7] [i_7] [i_20] [i_21] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44496)) ? (((/* implicit */int) arr_73 [i_7] [i_21] [i_7])) : (((/* implicit */int) (unsigned short)54120)))))));
                }
                var_36 = ((/* implicit */short) ((var_0) & (((/* implicit */int) (unsigned char)223))));
                arr_77 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_7 - 3] [i_20] [i_21] [i_20] [i_7 + 1] [i_20] [i_21]))))) ? (((((/* implicit */_Bool) arr_62 [i_7] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 + 1]))) : (var_5))) : (2145024492U)));
            }
        }
        /* LoopNest 3 */
        for (long long int i_23 = 0; i_23 < 14; i_23 += 4) 
        {
            for (short i_24 = 0; i_24 < 14; i_24 += 2) 
            {
                for (unsigned short i_25 = 0; i_25 < 14; i_25 += 4) 
                {
                    {
                        var_37 += ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_42 [i_25] [i_7 - 2] [i_7 - 2] [i_7 + 1] [i_25] [i_25])) : (((/* implicit */int) arr_42 [i_24] [i_7 - 1] [i_7 - 3] [i_7 + 1] [i_25] [i_25]))));
                        var_38 = ((/* implicit */_Bool) (~(4294967295U)));
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */_Bool) arr_25 [i_7]);
    }
    for (short i_26 = 0; i_26 < 20; i_26 += 3) 
    {
        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (var_0)));
        arr_89 [i_26] [i_26] = ((/* implicit */_Bool) arr_88 [i_26]);
        arr_90 [i_26] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_88 [i_26])) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) (signed char)-9)))))))));
    }
    var_41 = ((/* implicit */unsigned int) var_3);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218004
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_0 + 1])) ? (arr_4 [i_2] [i_1]) : (((/* implicit */unsigned long long int) (+(arr_3 [i_0] [i_1]))))))))));
                    arr_8 [i_0 - 1] [(short)0] [(unsigned short)12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_0 - 1]))) ? ((~(((/* implicit */int) var_8)))) : (((int) (short)-1))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (short i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    var_18 -= ((unsigned char) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (arr_12 [i_4]))));
                    arr_16 [i_4] [i_4] = ((((((/* implicit */_Bool) arr_11 [i_5])) ? (arr_7 [i_5] [i_4 + 1] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_5]))))) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_5] [i_3])) >> (((arr_11 [i_3]) - (2359379096U)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))), (min((var_9), (arr_3 [i_3] [i_4 + 1]))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_15 [i_3] [i_5] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_4 + 1] [i_5] [i_6]))) >= (var_9))))) : (max((arr_1 [i_6]), (((/* implicit */unsigned long long int) arr_10 [i_4])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_17 [i_5] [i_3] [i_5] [i_5] [i_5])))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_4 [i_4] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 - 1] [i_4 - 1]))) : (((long long int) var_11)))) << (((arr_12 [i_3]) + (605978475))))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((max((max((((/* implicit */unsigned long long int) var_16)), (arr_4 [i_3] [i_3]))), (((/* implicit */unsigned long long int) max((var_10), (arr_0 [i_5] [i_3])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_17 [i_4 - 1] [i_3] [i_3] [i_6] [i_4 - 1])))))))))));
                        arr_20 [i_3] [i_4] [(short)1] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((arr_17 [i_3] [i_4] [i_4] [i_4] [i_4 + 1]) ? (((/* implicit */long long int) arr_18 [i_3] [i_4] [i_3] [i_6])) : (((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((/* implicit */int) max((max((arr_13 [i_4]), (((/* implicit */short) var_8)))), (max((((/* implicit */short) var_12)), (arr_13 [i_4])))))))));
                    }
                    var_23 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (~(arr_15 [i_3] [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_3 [i_4] [i_5])) ? (arr_11 [i_4]) : (arr_0 [i_3] [i_3]))))));
                    arr_21 [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4 + 1] [i_4 - 1] [i_4 - 1])) ? (((unsigned int) arr_1 [i_4])) : (max((arr_7 [19LL] [i_5] [12] [i_5]), (((/* implicit */unsigned int) arr_2 [(signed char)4]))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_5] [i_3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_3]))))))) : (((long long int) ((((/* implicit */_Bool) arr_0 [i_5] [i_4 + 1])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_4 [i_5] [i_4 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_7 = 1; i_7 < 19; i_7 += 1) 
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_23 [i_7 - 1]), (arr_23 [i_7 - 1])))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7 + 2])) ? (arr_23 [i_7 - 1]) : (arr_23 [i_7 - 1]))))));
        /* LoopSeq 3 */
        for (unsigned short i_8 = 1; i_8 < 19; i_8 += 1) 
        {
            var_25 = max((((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)155)))), (min((((((/* implicit */_Bool) arr_22 [i_7] [i_8 - 1])) ? (arr_23 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_24 [(_Bool)1] [(_Bool)1] [i_7])) ? (arr_23 [i_8]) : (arr_23 [i_8]))))));
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)101))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (unsigned char)147))))))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_10))));
                            var_29 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_30 [i_10] [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_30 [i_7 + 2] [i_8] [i_9] [i_10] [i_10]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_12 = 1; i_12 < 19; i_12 += 2) 
                {
                    arr_37 [i_8] = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_7] [i_8] [i_9] [i_12 - 1]))) - (arr_35 [i_9] [i_9] [i_9]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_7] [i_12] [i_12 - 1] [i_12])) && (((/* implicit */_Bool) arr_35 [i_9] [i_8 - 1] [i_7 + 1])))))));
                    arr_38 [i_9] [i_12] [13LL] |= ((/* implicit */_Bool) var_11);
                    var_30 = ((/* implicit */_Bool) max((var_30), (((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [16LL] [i_12] [i_12])))))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_9] [i_12 + 1])) ? (((/* implicit */int) arr_34 [i_9] [i_9] [4] [4] [(short)10] [i_8])) : (((/* implicit */int) arr_36 [i_12 + 2] [i_8 + 2] [i_8 + 2] [i_7 + 1]))))))))));
                }
                /* vectorizable */
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5624921332535768242LL)) ? (((/* implicit */int) (short)5)) : (((/* implicit */int) (unsigned short)48847))));
                    var_32 = ((/* implicit */long long int) ((int) arr_25 [i_13] [i_13]));
                }
                arr_42 [i_7 + 2] [i_7 + 2] [19U] = ((var_8) ? ((-((-(((/* implicit */int) arr_32 [i_7] [i_7 + 1] [i_9] [(unsigned char)10])))))) : (((((/* implicit */_Bool) ((arr_40 [i_9] [i_8] [i_8] [i_7] [i_7 + 1]) + (((/* implicit */unsigned long long int) arr_31 [i_9] [i_7 + 2] [i_8] [i_7 + 2]))))) ? (((/* implicit */int) ((arr_35 [i_9] [i_7 - 1] [i_7 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7] [i_8] [i_7])))))) : (((/* implicit */int) arr_25 [i_7] [i_8 + 2])))));
            }
            for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
            {
                arr_45 [i_8] [i_8] [i_14] [i_14] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_30 [i_14] [i_14] [i_14] [i_14] [i_8 - 1])) ? (((/* implicit */int) arr_30 [i_8 + 1] [10LL] [i_8] [i_8] [i_8 - 1])) : (((/* implicit */int) arr_25 [i_7 - 1] [i_8 - 1]))))));
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (-(var_10))))) ? (max((arr_31 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 - 1]), (((/* implicit */unsigned int) arr_34 [i_8 + 1] [i_14] [i_8 - 1] [i_8] [i_14] [i_8 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_31 [i_8 - 1] [i_8] [i_14] [i_7 - 1])))))))));
                var_34 |= ((/* implicit */signed char) ((long long int) arr_32 [i_8] [16U] [i_8] [i_14]));
                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_44 [i_8 + 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_8 + 1])) && (((/* implicit */_Bool) arr_44 [i_8 - 1]))))) : (((((/* implicit */_Bool) arr_44 [i_8 + 2])) ? (((/* implicit */int) arr_44 [i_8 + 1])) : (((/* implicit */int) arr_44 [i_8 + 2])))))))));
            }
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((((((/* implicit */long long int) var_10)) ^ (arr_23 [i_7 - 1]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_7 - 1] [i_8 + 2] [i_8 - 1])) ? (((/* implicit */unsigned int) var_2)) : (arr_26 [i_7 - 1] [i_8 + 2])))))))));
                var_37 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_41 [i_8] [i_8 + 2] [(unsigned short)3] [i_8 + 1] [i_8 + 1] [i_8 - 1])) + (((/* implicit */int) arr_24 [i_8] [i_8 - 1] [i_8]))))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_38 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) arr_35 [i_7] [i_8 - 1] [i_16])) ? (((/* implicit */unsigned long long int) arr_35 [i_7 - 1] [i_7] [i_7 + 1])) : (((unsigned long long int) var_14))))));
                var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_35 [i_7 + 2] [i_7] [i_7 - 1]))) ? (((5450443822528973302LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) arr_28 [17ULL] [17ULL] [17ULL]))))) ? (max((arr_43 [i_16]), (((/* implicit */int) arr_28 [i_7] [i_7] [i_7])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_36 [i_7] [i_7] [i_8] [i_16])) : (((/* implicit */int) var_6)))))))));
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                for (short i_18 = 2; i_18 < 20; i_18 += 4) 
                {
                    for (short i_19 = 2; i_19 < 19; i_19 += 4) 
                    {
                        {
                            var_40 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1563616478)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : (-5450443822528973300LL))))))));
                            var_41 = ((/* implicit */unsigned short) arr_43 [i_8 - 1]);
                        }
                    } 
                } 
            } 
            arr_59 [i_7 - 1] [i_7 + 1] [i_8 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_7 - 1] [i_7 - 1] [17U])) ? (arr_26 [i_7 + 1] [i_8 - 1]) : (((((/* implicit */unsigned int) var_2)) % (arr_55 [i_8] [i_8] [i_7] [i_7])))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_7] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_39 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_24 [i_7 + 1] [i_7 - 1] [i_7])))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_7 + 2] [i_7] [i_7 + 1] [i_7 + 2] [8U] [i_7])))));
            arr_60 [i_8] [3LL] |= ((/* implicit */int) max((arr_29 [6U]), (((/* implicit */long long int) ((unsigned short) -8070471396279133924LL)))));
        }
        for (unsigned int i_20 = 1; i_20 < 20; i_20 += 1) 
        {
            var_42 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_7 - 1] [i_20] [i_20 + 1] [i_20] [i_7 - 1] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_7 - 1] [i_20]))) : (arr_46 [(unsigned short)15])))), (((((/* implicit */_Bool) arr_40 [i_20 - 1] [i_7] [i_7] [i_7] [i_7])) ? (arr_27 [i_7] [i_20] [i_20]) : (((/* implicit */unsigned long long int) arr_51 [i_20 + 1])))))));
            /* LoopNest 2 */
            for (unsigned int i_21 = 1; i_21 < 20; i_21 += 2) 
            {
                for (int i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    {
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_22])) ? (max((((long long int) arr_34 [i_22] [8U] [i_21 + 1] [i_20] [8U] [(unsigned char)8])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_64 [i_7 + 1] [i_7] [i_22]))))))) : (((long long int) (!(((/* implicit */_Bool) var_13))))))))));
                        var_44 = ((/* implicit */unsigned char) max((var_44), (arr_50 [i_20 - 1])));
                        var_45 -= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) ((((((/* implicit */int) arr_44 [i_22])) + (2147483647))) >> (((arr_47 [10] [10]) + (728931609)))))), (((long long int) arr_44 [i_7])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_67 [i_21 + 1] [i_21 - 1] [i_21 + 1] [i_21] [i_21 + 1] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_21] [i_21 + 1]))))))));
                    }
                } 
            } 
            arr_69 [i_7 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) arr_65 [i_7 + 1] [i_20 - 1] [(unsigned char)14]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [(signed char)20] [i_7] [i_7 + 1] [(signed char)20]))))) : (((/* implicit */int) ((unsigned char) arr_43 [13U]))))) >= ((-(((/* implicit */int) arr_44 [i_20]))))));
        }
        /* vectorizable */
        for (signed char i_23 = 1; i_23 < 20; i_23 += 4) 
        {
            arr_72 [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned long long int) arr_36 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 + 1]);
            arr_73 [i_23] [i_23 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_64 [i_7] [i_7] [i_7 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_34 [i_23 + 1] [i_7 + 2] [i_7 + 2] [i_23 - 1] [(signed char)18] [i_7])))) << (((((((/* implicit */_Bool) arr_67 [i_7] [i_7 + 1] [i_7] [i_23] [i_7] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_54 [i_23 - 1] [i_23] [20LL] [i_7] [i_7] [i_7 - 1]))) - (4294967172U)))));
            /* LoopNest 2 */
            for (unsigned int i_24 = 0; i_24 < 21; i_24 += 2) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 21; i_25 += 2) 
                {
                    {
                        var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) ((((/* implicit */long long int) (~(arr_56 [i_7 - 1] [i_23] [i_24] [i_24] [i_24])))) / (arr_49 [i_25] [i_24] [i_25]))))));
                        arr_80 [i_25] = ((/* implicit */unsigned short) var_9);
                        arr_81 [3LL] [(signed char)3] [i_24] [i_23] [(signed char)3] = ((/* implicit */long long int) arr_28 [i_23] [i_24] [i_25]);
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_23] [i_23 + 1] [i_23 - 1] [i_7] [i_7 + 1])) ? (((/* implicit */int) arr_28 [i_7] [i_7 + 1] [i_7 + 2])) : (((/* implicit */int) arr_50 [i_23 + 1]))));
        }
        var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) min(((~(((/* implicit */int) arr_44 [i_7 - 1])))), (((/* implicit */int) min((arr_28 [i_7 + 2] [i_7 + 2] [i_7]), (arr_44 [i_7 - 1])))))))));
    }
}

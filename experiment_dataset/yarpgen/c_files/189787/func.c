/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189787
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (max(((signed char)32), ((signed char)-50)))));
                            var_19 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) max((4U), (((/* implicit */unsigned int) arr_8 [i_0] [(short)1] [i_0 + 1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_0] [i_0 - 1] [i_1] [i_1] [i_0] [i_1]))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)0)), ((short)-19808))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    arr_17 [i_4] [i_5] [i_6] = ((/* implicit */_Bool) min((((((((/* implicit */int) arr_6 [i_4] [i_5] [i_6] [i_6])) + (2147483647))) << (((((((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_3 [i_4] [(unsigned char)1])) : (((/* implicit */int) arr_1 [i_4])))) + (4163))) - (23))))), ((+(((/* implicit */int) min(((unsigned char)106), ((unsigned char)243))))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)0))))) - (arr_7 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
                    var_21 -= ((/* implicit */long long int) max(((((+(7635322680392245529ULL))) - (((/* implicit */unsigned long long int) ((var_1) / (arr_12 [i_4] [(signed char)3] [i_6])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [i_5])), (arr_8 [i_4] [i_4] [i_4] [i_4])))))))));
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)47480))));
                }
                for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_21 [i_7] [i_8 + 1] [i_8 - 1] [i_8])) ? (arr_21 [i_7] [i_8 + 1] [i_8 - 1] [i_9]) : (arr_21 [i_7] [i_8 + 1] [i_8 - 1] [i_8]))), (max((arr_21 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_9]), (arr_21 [i_5] [i_8 + 1] [i_8 - 1] [i_9]))))))));
                                var_24 = ((/* implicit */_Bool) var_10);
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_22 [i_5] [i_9]) : (((/* implicit */int) arr_20 [11] [i_5] [i_7] [i_9])))))) ? (var_12) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_16 [i_4] [i_5] [i_4] [i_8])) ? (((/* implicit */int) arr_3 [i_4] [i_8])) : (((/* implicit */int) arr_19 [i_4] [i_5] [i_5])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 3; i_10 < 13; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 13; i_11 += 1) 
                        {
                            {
                                arr_30 [i_4] [i_4] [i_10 - 2] [i_11 - 2] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_8 [i_4] [i_5] [i_7] [i_11]), (((/* implicit */unsigned char) var_17)))))))), (max((max((arr_28 [i_7]), (arr_13 [i_4] [i_4]))), (((/* implicit */unsigned long long int) max((arr_22 [i_4] [i_11 + 1]), (((/* implicit */int) var_3))))))));
                                var_26 = ((/* implicit */unsigned short) arr_25 [i_4] [(_Bool)1] [i_7] [i_10] [i_11 - 2]);
                                var_27 = ((/* implicit */int) arr_13 [i_5] [i_7]);
                                var_28 = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) (signed char)57)) && (((/* implicit */_Bool) (unsigned short)61620)))))) ? (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_4] [i_7] [i_4] [i_11]))))), (arr_6 [i_10 - 1] [i_11 - 2] [i_11 - 2] [i_11])))) : (((((_Bool) var_4)) ? (((/* implicit */int) min((arr_3 [i_5] [i_10]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) min(((short)-10895), (((/* implicit */short) arr_25 [i_4] [i_5] [i_4] [i_10] [i_11])))))))));
                                var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_16 [i_10 - 3] [i_10 - 3] [i_5] [i_11 - 2]), (arr_16 [i_10 - 3] [i_10 - 3] [i_5] [i_11 - 2])))), (((((/* implicit */_Bool) (-(var_13)))) ? (max((0ULL), (((/* implicit */unsigned long long int) arr_23 [5U] [i_5] [i_5])))) : (((/* implicit */unsigned long long int) max((arr_22 [i_7] [i_7]), (((/* implicit */int) (short)-10895)))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) min((((/* implicit */signed char) (!(arr_15 [i_4])))), (((signed char) max((var_16), (var_12))))));
                    /* LoopSeq 2 */
                    for (long long int i_12 = 1; i_12 < 11; i_12 += 4) 
                    {
                        var_31 += ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) 7635322680392245529ULL))))), ((short)8160)));
                        arr_34 [i_12] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        arr_35 [i_4] [i_12] = max(((((!(arr_14 [i_7] [i_12]))) ? (((((/* implicit */_Bool) var_10)) ? (-5215437246625206404LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_4] [i_5] [i_5] [i_7] [i_12 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-22783))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_28 [13])) ? (((/* implicit */int) arr_4 [7U] [i_5] [(signed char)21])) : (721138737))), ((+(((/* implicit */int) arr_15 [i_5]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            arr_38 [i_4] [i_5] [i_12] [i_5] [(_Bool)1] = ((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_12 + 3] [i_12] [i_12 + 3] [i_12 + 3])), (((((/* implicit */_Bool) arr_6 [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12 + 1])) ? ((-(((/* implicit */int) arr_26 [i_4] [i_5])))) : (((/* implicit */int) max((((/* implicit */short) arr_2 [i_4] [i_4] [i_4])), (arr_27 [i_4] [i_4] [i_7] [i_12 - 1] [i_13] [i_13]))))))));
                            var_32 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_37 [i_12 + 2] [i_12 + 2] [i_12] [i_12 + 2] [i_12 - 1])) ? (((/* implicit */int) arr_16 [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 2])) : (((/* implicit */int) arr_16 [i_12 + 1] [(unsigned short)10] [i_12] [i_12 + 2]))))));
                            var_33 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_4] [i_12 + 3]))));
                        }
                        var_34 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)19808))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_36 [i_12 + 3] [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12])), (((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_3 [i_12] [i_12]))))))) : (max((arr_7 [i_12 + 1] [i_12] [i_12 + 2] [i_12] [i_12] [i_12 - 1]), (((/* implicit */unsigned long long int) arr_8 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12])))));
                    }
                    for (unsigned int i_14 = 1; i_14 < 12; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) ((min((((arr_15 [i_5]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_25 [i_4] [i_5] [i_7] [i_7] [i_14 - 1])))), (((/* implicit */int) ((unsigned char) (unsigned char)10))))) * (((/* implicit */int) min((arr_29 [i_14] [i_14] [i_14] [13ULL] [i_14 - 1]), (((/* implicit */signed char) (_Bool)1)))))));
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) max((((/* implicit */short) arr_36 [i_5] [i_5] [i_14 - 1] [i_14 - 1] [i_14 + 2])), (((short) (_Bool)1)))))));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14] [12ULL])) ? (((((/* implicit */_Bool) arr_4 [i_4] [(short)20] [i_14])) ? (((/* implicit */int) arr_29 [i_4] [i_4] [i_4] [(unsigned char)11] [i_4])) : (-915797113))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_4])), (arr_11 [i_4] [i_4]))))))))))));
                    }
                }
                arr_43 [i_4] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_5])) ? ((~(((arr_39 [i_4] [i_5] [i_5] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)0)), (((((/* implicit */_Bool) arr_26 [(_Bool)1] [i_5])) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) var_0)))))))));
                var_38 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < ((+(((/* implicit */int) arr_29 [i_4] [i_5] [i_5] [i_4] [i_5]))))))), (((int) max((15731434140478561630ULL), (((/* implicit */unsigned long long int) 1533454333U)))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_15 = 1; i_15 < 13; i_15 += 3) 
                {
                    var_39 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((arr_11 [i_4] [i_4]), (((/* implicit */unsigned short) arr_19 [(short)8] [i_5] [(short)8]))))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (arr_27 [i_4] [(unsigned char)10] [i_5] [i_15] [i_4] [i_15])))) : (((/* implicit */int) min((((/* implicit */signed char) arr_39 [i_4] [i_4] [i_5] [i_15])), (arr_29 [i_4] [i_5] [i_5] [i_15] [i_5]))))))));
                    var_40 = ((/* implicit */long long int) (!(((arr_22 [i_15 - 1] [i_15 + 1]) != (arr_22 [i_15 - 1] [(signed char)7])))));
                }
                for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((arr_15 [i_16]) ? (((/* implicit */int) arr_33 [i_4] [i_4] [i_5] [i_16])) : (var_4)))), (max((((/* implicit */long long int) var_10)), (arr_12 [(short)11] [(short)4] [i_16]))))))))));
                    arr_49 [i_4] [i_5] [i_16] [i_16] = ((/* implicit */int) (-(min((var_12), (((/* implicit */long long int) min((((/* implicit */short) arr_36 [i_4] [11ULL] [i_4] [i_5] [i_16])), (arr_41 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))))));
                }
                for (unsigned char i_17 = 1; i_17 < 13; i_17 += 3) 
                {
                    arr_53 [i_4] [i_5] = ((/* implicit */unsigned long long int) arr_27 [i_17 + 1] [i_17 + 1] [i_17 + 1] [(signed char)2] [(_Bool)1] [i_17]);
                    var_42 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_50 [i_4])), (var_5)))) ? ((-(((/* implicit */int) arr_24 [i_4] [i_4] [i_5] [i_17])))) : (((/* implicit */int) var_7))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [10LL]))) - (min((((/* implicit */unsigned long long int) arr_29 [i_4] [i_5] [i_5] [i_5] [i_17 + 1])), (var_11)))))));
                }
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    var_43 = ((/* implicit */short) arr_5 [i_5]);
                    var_44 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)4095))));
                }
                arr_56 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((2072942731U), (((/* implicit */unsigned int) arr_6 [i_4] [i_4] [i_4] [i_4])))), (((/* implicit */unsigned int) arr_10 [i_5]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_4] [i_4] [i_4] [i_5] [i_4])) ? ((+(((/* implicit */int) (unsigned char)127)))) : ((-(((/* implicit */int) arr_50 [i_5]))))))) : (((unsigned long long int) (-(((/* implicit */int) arr_26 [i_4] [i_4])))))));
            }
        } 
    } 
    var_45 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_7)) ? ((-(var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    var_46 = ((/* implicit */long long int) var_4);
    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) (unsigned char)149)))) : (((int) var_5))));
}

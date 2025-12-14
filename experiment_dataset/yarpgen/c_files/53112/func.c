/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53112
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)19209))))))) & (max((min((((/* implicit */long long int) var_9)), (18014398509481984LL))), (((/* implicit */long long int) max((((/* implicit */short) (signed char)-119)), ((short)-7934)))))))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)7946)), (686700382U))) * (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)107))))) - (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)29057)) : (((/* implicit */int) (unsigned char)24))))))) : (((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 4])) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [(unsigned char)15] [i_2] [i_3] [i_4] = ((((/* implicit */int) arr_5 [i_0] [i_0])) * (((/* implicit */int) (unsigned char)60)));
                                var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) var_3)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_9)) & (((/* implicit */int) (short)-27)))) >= (((/* implicit */int) ((unsigned short) var_5))))))) : (arr_11 [(unsigned char)18] [(unsigned char)18] [(unsigned char)18] [i_3] [i_4])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            var_15 = ((/* implicit */signed char) var_11);
                            arr_22 [i_1] [i_0 - 2] [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1] [i_2 - 4])) & (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_2] [i_2 + 2]), (((/* implicit */unsigned short) (signed char)46)))))) : ((-(arr_10 [i_0 - 2])))));
                            var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))), (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (1023ULL) : (((/* implicit */unsigned long long int) -18014398509481984LL))))));
                            var_17 = ((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned char)61), ((unsigned char)103))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((((/* implicit */int) (unsigned char)57)) * (((/* implicit */int) (signed char)-61)))) : (((/* implicit */int) arr_24 [i_2 + 4] [i_5 - 1])))))));
                            arr_26 [i_0] [i_1] [(unsigned char)19] [i_1] [i_7] = ((/* implicit */_Bool) (short)-32747);
                            var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12)))))) <= (((((/* implicit */_Bool) (short)0)) ? (var_1) : (7118427261450913254LL)))))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_5))))) ? ((-(((/* implicit */int) arr_9 [i_0] [i_0])))) : (((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned char)255))))))));
                            var_20 -= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_4 [i_2 + 3] [i_0 + 2])), (max((((/* implicit */long long int) arr_4 [i_2] [i_1])), (var_4))))) - (((/* implicit */long long int) max((((var_0) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)198)))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0])) * (((/* implicit */int) (unsigned char)196))))) * ((~(16429135181606314014ULL)))))) ? (((4499370495059404154ULL) & (((/* implicit */unsigned long long int) 18014398509481968LL)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_25 [i_0 - 2] [i_0 - 2] [i_2 - 1] [(unsigned char)0] [i_8]))))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((int) max((var_12), (((/* implicit */unsigned int) arr_4 [i_2 - 4] [i_0 + 1]))))))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */short) (!(var_9)))), (min(((short)0), (((/* implicit */short) (signed char)0))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) arr_10 [i_1]))));
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0 - 3] [i_2 - 4])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_0)) : (var_1)))))) ? (18446744073709551598ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))));
                        var_26 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_7)))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_12 [i_0 - 3] [i_0 - 3] [i_0] [(short)1] [i_0 + 3] [17LL])) : (var_10))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)24)) + (((/* implicit */int) (_Bool)1)))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (short)-1))))), (-1LL))));
                    }
                    /* LoopSeq 2 */
                    for (int i_9 = 1; i_9 < 22; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (22ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2 + 3] [i_0] [i_2 + 3] [i_0] [i_0] [i_0] [(short)5])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1893527386))))) : ((-(((/* implicit */int) (signed char)71))))));
                        var_28 = ((/* implicit */signed char) ((var_9) ? (((/* implicit */int) ((unsigned char) 9223372036854775807LL))) : (((/* implicit */int) ((short) var_4)))));
                    }
                    for (short i_10 = 3; i_10 < 22; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)72)), ((+(-227974027))))))));
                        var_30 = ((/* implicit */int) arr_0 [(unsigned char)6] [i_0 - 2]);
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)244)) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) 1653312812818460623ULL))) : (((/* implicit */int) ((signed char) var_8))))))))));
                        arr_36 [i_0] [i_1] [i_2] [i_10] = ((/* implicit */long long int) ((unsigned int) (+((~(((/* implicit */int) (signed char)-57)))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            var_32 = arr_21 [i_0] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11];
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(1427429216)))) ? (((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */long long int) arr_8 [i_11] [i_11] [i_0] [i_0]))))) / ((-(arr_10 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), ((-9223372036854775807LL - 1LL))))) <= (arr_18 [i_11] [i_11] [i_0] [i_0] [i_0 - 2])))))));
            var_34 = ((/* implicit */unsigned char) var_4);
            var_35 += ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned char)228))));
            var_36 = ((/* implicit */unsigned char) (~((-9223372036854775807LL - 1LL))));
        }
        var_37 = ((/* implicit */unsigned char) (!((_Bool)1)));
        arr_40 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147676400U)))))) : (max((((/* implicit */long long int) var_11)), (var_4)))))) ? (((((/* implicit */_Bool) (-(arr_25 [i_0] [i_0] [i_0] [(unsigned char)8] [(unsigned char)8])))) ? (min((((/* implicit */long long int) (_Bool)1)), (-6849951991725231576LL))) : ((-(-5812909432801210667LL))))) : (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(unsigned char)0])) && (((/* implicit */_Bool) var_11))))), (((((/* implicit */_Bool) (short)-13933)) ? (((/* implicit */int) arr_19 [i_0 + 3] [i_0] [i_0] [i_0] [i_0 + 3] [i_0 + 3] [i_0])) : (((/* implicit */int) (unsigned char)23)))))))));
        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    /* LoopSeq 2 */
    for (short i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        arr_44 [i_12] [i_12] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        var_39 = ((/* implicit */unsigned int) (unsigned short)25021);
        arr_45 [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)22)), (18446744073709551601ULL)))) ? (((arr_35 [i_12] [i_12] [i_12] [(unsigned char)4]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)7997), (arr_20 [i_12] [i_12] [i_12] [i_12] [(signed char)21] [i_12] [i_12]))))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
        var_40 = ((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */long long int) arr_25 [i_12] [i_12] [i_12] [i_12] [i_12])) : (9223372036854775807LL))), (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (288230101273804800LL))) / (((/* implicit */long long int) ((/* implicit */int) (signed char)76)))))));
    }
    for (unsigned short i_13 = 4; i_13 < 16; i_13 += 4) 
    {
        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) 4294967295U))));
        var_42 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)42004)))) - ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11837))))))), (((/* implicit */long long int) (!(arr_28 [i_13] [i_13 - 4] [i_13] [i_13] [i_13 - 3] [i_13 - 4] [i_13]))))));
    }
}

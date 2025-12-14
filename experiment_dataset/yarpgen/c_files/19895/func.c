/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19895
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)248)))) * ((+(((/* implicit */int) (unsigned char)68))))))) == (((arr_6 [i_1 - 1] [(signed char)9] [i_0]) / (((/* implicit */unsigned long long int) 262140U))))));
                var_10 = ((/* implicit */signed char) max((var_10), (var_5)));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */signed char) ((min((4294967295U), (((/* implicit */unsigned int) ((arr_10 [(unsigned short)11] [i_1] [10ULL] [i_1]) > (0U)))))) >> (((((/* implicit */int) var_5)) - (107)))));
                        arr_13 [i_0] [i_0] [i_2] [(unsigned short)2] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1)))))) < (min((((/* implicit */unsigned long long int) (signed char)127)), (var_6)))))) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                        var_12 ^= ((/* implicit */unsigned int) arr_8 [i_1] [i_1]);
                    }
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((min((27U), (((/* implicit */unsigned int) (unsigned char)65)))), (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)171)))) & (((/* implicit */int) var_7))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 9; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1]))))), (min((4247909906U), (((/* implicit */unsigned int) (_Bool)0))))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (((_Bool)1) && ((_Bool)1))))));
                                arr_20 [i_0] [i_1] [9U] [(unsigned short)4] [i_0] = ((/* implicit */signed char) max((max((arr_6 [i_1] [i_4] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((arr_3 [i_0]), (min((arr_3 [i_0]), (((/* implicit */unsigned int) var_8))))));
                }
                for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
                {
                    arr_24 [(_Bool)1] [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [(unsigned short)10] [i_6 + 1] [i_6])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [(signed char)2] [i_1] [i_6])) : (24576ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (var_0)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((/* implicit */int) (!((_Bool)1)))))))));
                    var_16 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) 47057390U)), (14820477802463102276ULL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) - (((((/* implicit */_Bool) (unsigned char)85)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        arr_27 [i_0] [(_Bool)1] [(_Bool)1] [i_1] [i_0] [i_7] = ((/* implicit */signed char) (_Bool)1);
                    }
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((unsigned short)46004), (((/* implicit */unsigned short) var_3))))), (min((arr_25 [i_0 + 3] [i_6] [i_6] [i_6] [i_8]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_1]))))));
                        arr_30 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                        arr_31 [i_0] [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) var_6);
                        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max(((unsigned short)44126), (var_9)))) ? (((/* implicit */int) arr_11 [i_6 + 1] [i_8] [(signed char)8] [i_8] [i_8] [i_0])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) var_1)))))) << (((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8]))) * (2U))))) - (101U)))));
                    }
                    var_20 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (((((/* implicit */_Bool) var_4)) ? (153023776U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) arr_28 [i_6 + 2] [i_6] [i_6 + 3] [i_6])) / (((/* implicit */int) var_4)))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)1))))));
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)21405), ((unsigned short)23797)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43))) : (4294967276U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) : (18446744073709527040ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
                }
                for (unsigned char i_9 = 1; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 2])) - (50192)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_2 [i_0 - 1] [i_0 + 2]))))) : (((var_6) / (var_6)))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_37 [i_0] [i_1] [7ULL] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((unsigned int) (_Bool)1)) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21423)) << (((/* implicit */int) (_Bool)0)))))))), (min((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned long long int) 1774147851U)) : (24576ULL))), (((/* implicit */unsigned long long int) (signed char)12))))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) min((((((/* implicit */int) (signed char)36)) - (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) (((_Bool)1) ? (arr_17 [i_0] [i_1] [12U] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51)))))) ? (((((/* implicit */int) (unsigned char)5)) + (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_7)))))))))));
                        var_23 = ((/* implicit */_Bool) arr_25 [i_0] [i_1] [9ULL] [i_1] [(_Bool)1]);
                    }
                }
                var_24 = (signed char)127;
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
    {
        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 1; i_14 < 14; i_14 += 2) 
                    {
                        arr_48 [i_11] [i_12] [i_13] [i_14] = var_0;
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4239329972U)) ? (4194288U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))))))));
                        arr_49 [i_12] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)56)), ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                        arr_50 [i_11] [i_12] [i_13] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (_Bool)1)), (1081041961U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)47023)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (signed char)-36))))))))));
                    }
                    arr_51 [i_11] [i_12] [(_Bool)1] [i_12] = ((/* implicit */unsigned short) max((4294967276U), (2355208477U)));
                    arr_52 [i_12] = min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-127)) & (((((((/* implicit */int) (signed char)-43)) + (2147483647))) << (((var_6) - (16999011213544437109ULL)))))))), (arr_39 [i_13] [i_11]));
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)28672)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)8)))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (unsigned char)82))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_45 [i_11] [8ULL]))))) ? (min((var_6), (((/* implicit */unsigned long long int) var_0)))) : (((((/* implicit */_Bool) arr_38 [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)))))));
                                arr_57 [(signed char)13] [i_15] [i_12] [i_12] [i_12] [i_11] = ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) ((((5939716987350688809ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)4095))))))))));
                                var_27 += (!(((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [3U] [i_15])) && (((/* implicit */_Bool) (signed char)-63))))), ((signed char)127)))));
                                var_28 += ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_5)), (var_6))), (((/* implicit */unsigned long long int) var_2))));
                                var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_42 [i_11])))) && (arr_41 [0U] [i_12])));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) var_5);
                }
                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) var_1))));
            }
        } 
    } 
}

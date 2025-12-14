/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222065
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
    var_13 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) max((1504079355U), (((/* implicit */unsigned int) var_5))))) % (9223372036854775807LL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((_Bool) var_3)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] = ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) : (var_8)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            arr_15 [i_0] [(short)6] [i_1] [i_3] [i_4 - 2] |= ((/* implicit */unsigned int) arr_11 [i_2 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 2]);
                            var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 888247265))));
                            arr_16 [i_0] [(short)10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            arr_17 [i_0] [i_1] [i_1] [i_3] [i_1] &= ((unsigned char) ((long long int) (short)11113));
                        }
                        var_15 = ((/* implicit */signed char) ((long long int) arr_11 [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_3]));
                    }
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) var_6);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >> (((((unsigned int) 4141877580158632032LL)) - (3967975498U)))));
                        arr_22 [i_0] [i_1] [i_0] [i_2 - 1] [i_5] = ((/* implicit */short) ((unsigned int) min((((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_5])), (var_7))));
                        arr_23 [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) arr_0 [i_0])), (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) ((unsigned char) arr_20 [1] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2])))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((max((((/* implicit */int) (unsigned char)135)), ((-(-1440948132))))), ((-(((/* implicit */int) arr_12 [i_2 + 1] [i_2] [i_2] [i_6 + 1] [i_1])))))))));
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) var_1)))));
                        arr_26 [i_0] [i_1] [i_2 + 2] [i_6] = ((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) == (var_6))) ? (((long long int) min((var_8), (((/* implicit */unsigned int) var_11))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) var_11)) : (var_7))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((unsigned char) min((1440948131), (((/* implicit */int) (unsigned char)113)))));
                        var_21 = ((((((/* implicit */_Bool) (unsigned short)47679)) ? (502169625365265571LL) : (4108879726840398586LL))) - (((/* implicit */long long int) ((/* implicit */int) var_10))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-22196)) : (-438280319))))), ((~(((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))))));
                        arr_31 [i_0] [i_7] = ((/* implicit */unsigned long long int) var_7);
                    }
                }
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_0] [i_0] = ((((int) var_3)) >> (((/* implicit */int) min((((unsigned char) var_12)), ((unsigned char)243)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 2; i_10 < 11; i_10 += 1) 
                        {
                            var_23 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (562949953421310ULL) : (((/* implicit */unsigned long long int) 3010286185409005984LL))));
                            var_24 ^= ((/* implicit */int) ((var_3) ? (var_9) : (((/* implicit */long long int) var_8))));
                            var_25 -= ((/* implicit */short) ((((((/* implicit */int) var_3)) - (var_6))) + (((/* implicit */int) ((var_9) >= (var_9))))));
                        }
                        arr_42 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_34 [i_0] [i_1])) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_8)))));
                        var_26 = ((/* implicit */unsigned long long int) var_9);
                        arr_43 [i_0] [i_1] [i_8 - 1] [i_9] = ((((/* implicit */_Bool) var_6)) ? (arr_6 [i_8 + 2] [i_8] [i_0] [i_8 - 1]) : (arr_6 [i_8 + 2] [i_8 + 2] [i_0] [i_8 - 1]));
                    }
                    arr_44 [(short)6] [i_0] [i_0] [(short)6] = ((/* implicit */int) ((signed char) arr_41 [i_0] [i_1] [i_8]));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            {
                var_27 = ((/* implicit */unsigned int) ((signed char) ((unsigned char) max((var_8), (((/* implicit */unsigned int) var_2))))));
                var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_51 [i_12])) ? (((/* implicit */int) var_2)) : (((arr_47 [i_11]) / (((/* implicit */int) (short)-18256)))))) / (((/* implicit */int) ((unsigned char) arr_50 [i_11] [i_12] [i_12])))));
                var_29 *= ((/* implicit */unsigned long long int) ((unsigned short) ((var_12) ? (9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_11] [i_11] [i_11]))))));
                arr_52 [i_11] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)143))))) - (1142112606U))));
                arr_53 [i_11] [i_11] = ((/* implicit */_Bool) ((int) var_0));
            }
        } 
    } 
    var_30 = max((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (max((((/* implicit */unsigned char) var_3)), (var_2)))))), ((+(((/* implicit */int) ((_Bool) (short)24190))))));
    /* LoopNest 2 */
    for (short i_13 = 2; i_13 < 10; i_13 += 4) 
    {
        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    arr_63 [(signed char)0] = ((/* implicit */int) ((unsigned char) (short)15360));
                    /* LoopSeq 1 */
                    for (int i_16 = 3; i_16 < 12; i_16 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                        {
                            var_31 = ((/* implicit */int) var_1);
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) -1))));
                        }
                        for (short i_18 = 0; i_18 < 13; i_18 += 1) 
                        {
                            arr_71 [i_13] [i_14] [3] [9ULL] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (1440948132) : (min((((/* implicit */int) (unsigned short)0)), (var_7)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((unsigned char) var_9))), (arr_59 [i_13 + 2] [i_14])))) : ((+(max((var_6), (var_7)))))));
                            var_33 |= ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)113)))) - (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_11)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_59 [i_13] [i_14]))))));
                        }
                        arr_72 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [8LL] [i_16] = ((/* implicit */long long int) var_11);
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_13 - 1] [i_13 + 3] [i_13 + 2] [i_13])) ? (((/* implicit */int) var_11)) : (var_6)))) ? (((((/* implicit */_Bool) arr_68 [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13 - 2])) ? (((/* implicit */int) (unsigned short)63744)) : (((/* implicit */int) var_11)))) : (max((1440948131), (((/* implicit */int) (unsigned short)63752))))));
                    }
                }
                for (unsigned short i_19 = 0; i_19 < 13; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 4; i_20 < 11; i_20 += 1) 
                    {
                        arr_78 [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (((unsigned long long int) ((unsigned char) var_4)))));
                        arr_79 [(short)9] [i_14] [i_14] [(signed char)9] = min((((int) var_6)), (min((var_7), (((/* implicit */int) var_0)))));
                    }
                    arr_80 [i_13] [i_13] [i_14] [i_19] = ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((int) max((((/* implicit */unsigned int) var_10)), (var_8))))));
                }
                for (short i_21 = 3; i_21 < 12; i_21 += 4) 
                {
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (max((((/* implicit */long long int) var_8)), (-7822903001710910477LL))))))))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (!(var_12))))));
                    var_37 = ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-19086)) + (var_7))))));
                }
                /* vectorizable */
                for (unsigned short i_22 = 1; i_22 < 12; i_22 += 1) 
                {
                    arr_86 [i_13] [i_13 + 2] [i_13 - 2] [2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)9)) * (((/* implicit */int) arr_68 [i_22 - 1] [i_22 + 1] [i_13 - 1] [i_13]))));
                    arr_87 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_11))));
                }
                arr_88 [i_13] [i_13] &= ((/* implicit */short) var_9);
            }
        } 
    } 
}

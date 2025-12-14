/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196716
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) 1448890483U);
                                var_17 += ((/* implicit */long long int) (-(var_8)));
                                var_18 *= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_4] [i_0]);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (arr_0 [5LL] [i_2]) : (((((/* implicit */int) (unsigned short)37520)) << (((816258125U) - (816258125U)))))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (var_1)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (unsigned int i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_12 [i_5] [i_6 + 1] [i_6] [i_6] [i_5]))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((long long int) arr_20 [i_7] [i_7] [i_7])) <= (((/* implicit */long long int) var_8))))), (arr_15 [i_0])));
                                var_22 = ((/* implicit */long long int) min((var_22), (var_9)));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((9007199254740991LL) | (-9007199254740992LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */int) arr_3 [i_6])) : (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [10] [i_0]))))) ? (((((/* implicit */_Bool) (short)-16506)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (min((9007199254740999LL), (((-9007199254740999LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56233)))))))));
                }
            } 
        } 
        arr_23 [i_0] [i_0] = ((/* implicit */long long int) (signed char)60);
    }
    for (int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        var_24 += ((/* implicit */unsigned short) arr_24 [i_9]);
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (~(((unsigned long long int) arr_24 [i_9])))))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (int i_11 = 2; i_11 < 20; i_11 += 2) 
            {
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)96))))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */long long int) (unsigned short)11417)), (9007199254740986LL))))) : (((/* implicit */int) (unsigned short)29143))));
                    arr_31 [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) arr_27 [i_11]);
                    /* LoopSeq 2 */
                    for (int i_12 = 3; i_12 < 21; i_12 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            arr_38 [i_12] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (+(-9007199254740999LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9007199254741007LL)) ? (((/* implicit */int) arr_37 [i_13] [i_12 - 2] [i_11] [i_10])) : (((/* implicit */int) var_15))))) : (var_12))));
                            var_27 = ((/* implicit */int) (unsigned short)54913);
                            var_28 = ((/* implicit */unsigned long long int) (unsigned short)33650);
                            arr_39 [i_11] [i_12] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (unsigned char)255)), ((-(3543610742U))))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29)))));
                            var_29 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_9] [i_12] [i_11] [6] [i_9])) ? (arr_30 [(unsigned short)9] [(unsigned short)9] [i_11 + 1]) : (((/* implicit */int) var_15))))), (max((((/* implicit */unsigned int) var_0)), (var_8)))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_34 [i_9] [i_10] [i_12]) : (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_29 [i_9])), ((unsigned short)65510)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)98)) <= (((/* implicit */int) (unsigned short)39166))))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) (short)22142);
                            arr_43 [i_14] [i_10] [i_11] [i_10] [(signed char)20] |= ((/* implicit */int) 751356530U);
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_11 + 4] [i_11 + 3] [i_12 - 1] [(unsigned char)1])) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (658950440U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) arr_32 [i_14] [i_12 + 1] [i_10] [i_9])) : (var_10)))) : (arr_41 [i_12 - 1] [i_11 + 4]))) : (((((((/* implicit */_Bool) -779309665286878267LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_9] [i_9] [i_12 + 2] [i_14]))) : (9223372036854775807LL))) + (((/* implicit */long long int) (+(arr_26 [(signed char)5]))))))));
                        }
                        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)84)), (((((/* implicit */int) max(((short)-13237), (((/* implicit */short) (signed char)(-127 - 1)))))) + (((((/* implicit */_Bool) (unsigned char)244)) ? (1950080469) : (((/* implicit */int) (_Bool)1)))))))))));
                        arr_44 [i_12] [i_12] [i_9] = ((/* implicit */signed char) var_2);
                        arr_45 [i_9] [i_10] [i_12] [i_12 - 1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_30 [i_9] [i_10] [i_9])) * (arr_34 [i_12] [i_11] [i_12])))) ? (max((((/* implicit */unsigned long long int) 1682988534430492032LL)), (var_12))) : (var_1))));
                    }
                    /* vectorizable */
                    for (unsigned char i_15 = 1; i_15 < 21; i_15 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) arr_24 [i_9]);
                        arr_49 [i_15] = ((/* implicit */long long int) ((unsigned char) arr_36 [i_15 - 1] [i_10] [i_10] [i_11 + 3] [i_10]));
                    }
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1682988534430492032LL)) ? (5ULL) : (((/* implicit */unsigned long long int) -1682988534430492025LL))));
                }
            } 
        } 
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) min(((+(var_9))), (((/* implicit */long long int) arr_42 [i_9] [i_9] [i_9] [i_9]))))) ? (((min((arr_35 [i_9]), (((/* implicit */long long int) (unsigned char)10)))) - (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (max((((/* implicit */long long int) ((unsigned short) arr_42 [i_9] [i_9] [(unsigned short)14] [i_9]))), (arr_40 [i_9] [i_9])))));
    }
    for (short i_16 = 0; i_16 < 25; i_16 += 3) 
    {
        arr_52 [i_16] = ((/* implicit */unsigned char) 3543610742U);
        var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((signed char) (unsigned short)1217))) ? (((((/* implicit */_Bool) arr_50 [i_16])) ? (((/* implicit */int) (short)-7768)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned short)30909))));
    }
    var_37 = (~(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
    var_38 = ((/* implicit */unsigned int) var_3);
}

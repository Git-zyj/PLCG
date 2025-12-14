/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4049
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 -= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (+(var_14)))) ? (((var_4) ? (0) : (((/* implicit */int) arr_2 [i_0])))) : ((-(((/* implicit */int) (unsigned char)0)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [(unsigned char)8] [i_2])) ? (arr_5 [19ULL] [i_0 - 1] [i_0] [i_0]) : (arr_5 [i_0 - 1] [i_0 - 1] [22] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_10)), (arr_5 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)63082)) : (((/* implicit */int) (unsigned char)0))))))))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_1 [i_1]))));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) (unsigned short)63082)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))), (((/* implicit */unsigned long long int) var_0))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-1), (var_16))))) / (((long long int) arr_4 [(unsigned short)14] [i_0] [(_Bool)1]))))) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0])) : (((-1107711049) ^ (((/* implicit */int) arr_2 [i_0 - 1]))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 ^= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_3]))) : (arr_5 [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 1394908916U)) ? (((/* implicit */int) (short)1886)) : (((/* implicit */int) arr_0 [i_3] [i_3])))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_2 [i_3]), (arr_2 [i_3])))) / (((((/* implicit */int) arr_2 [i_3])) / (((/* implicit */int) arr_2 [i_3]))))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) ((((((/* implicit */int) var_16)) > (((/* implicit */int) arr_16 [i_7 - 2] [i_7 - 2] [i_4] [i_6] [i_7 + 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7 - 2] [i_7] [i_4] [i_6] [i_7])) && (((/* implicit */_Bool) arr_16 [i_7 - 2] [i_7 + 4] [i_4] [i_7 - 2] [i_7 + 1]))))) : ((-(((/* implicit */int) arr_16 [i_7 - 2] [i_4] [i_4] [(signed char)3] [i_7]))))));
                            var_25 = ((/* implicit */_Bool) ((((arr_1 [i_7 + 1]) << (((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)250)), (var_1)))) - (30171))))) >> (((((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_7 + 1] [i_4] [i_6])) ? (arr_22 [i_6] [(short)9] [i_7 - 1] [i_6] [i_5]) : (arr_22 [i_3] [i_3] [i_7 + 1] [i_6] [i_4]))) - (2982555653359658107LL)))));
                            var_26 -= ((/* implicit */unsigned int) (unsigned char)255);
                            var_27 *= ((/* implicit */unsigned int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)181))))), ((~(-6304770345039537668LL)))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)168)) ? (arr_5 [11U] [i_5] [i_6] [i_8]) : (arr_5 [i_3] [i_3] [(short)2] [i_8]))))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63061)) >> (((/* implicit */int) (unsigned char)16))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)0)) : (-712117836)))));
                            var_31 &= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) (signed char)-17))));
                            var_32 = ((/* implicit */unsigned int) arr_25 [i_4] [i_9]);
                        }
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((arr_24 [i_4] [i_3] [i_4] [i_5] [i_6]) / (arr_24 [i_4] [i_4] [i_5] [i_6] [i_3])))));
                        var_34 = arr_23 [(signed char)8] [i_3] [i_4] [i_6] [(signed char)16] [i_4];
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        var_35 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_10]))) / (arr_22 [i_10] [(unsigned char)14] [i_10] [i_10] [i_10])))));
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_10] [i_10])) & (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (1926222466U)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (var_15))))))) - (((arr_0 [i_10] [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_10] [i_10]))) : (arr_14 [i_10] [i_10] [i_10])))));
        /* LoopNest 2 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            {
                                var_37 = min((((/* implicit */signed char) ((arr_26 [i_11 - 1] [i_10] [i_11] [i_10] [i_11]) || (((/* implicit */_Bool) 4294967293U))))), (max((((/* implicit */signed char) arr_13 [i_11] [i_11] [i_11])), (arr_33 [i_11] [i_11]))));
                                var_38 = ((/* implicit */long long int) arr_29 [i_14]);
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max(((unsigned short)28423), (((/* implicit */unsigned short) arr_21 [i_11] [i_11 - 1] [i_10]))))), (max((((/* implicit */long long int) arr_2 [i_11 - 1])), (-7148322721523220932LL)))));
                }
            } 
        } 
    }
    for (unsigned short i_15 = 3; i_15 < 10; i_15 += 1) 
    {
        var_40 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)234)), ((~(((/* implicit */int) arr_29 [i_15 + 3]))))));
        var_41 = ((/* implicit */unsigned int) (unsigned short)65519);
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((long long int) arr_8 [i_15] [i_15 - 3])), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) arr_21 [(signed char)13] [i_15] [i_15])))))))) ? (arr_14 [i_15 + 1] [i_15 + 4] [i_15 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) (unsigned short)12833)) ? (808400912U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)50468)) >= (((/* implicit */int) (_Bool)1)))))))))));
    }
    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned short)40607)))))) : (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (var_9))))))))));
}

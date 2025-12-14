/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37302
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_2 [i_0 - 1]))))), (var_10))) > (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_11 [i_0])))), (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) arr_6 [i_1])))))))))))));
                            var_15 *= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 - 1]))))));
                            var_16 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [(short)6] [i_0 - 1] [i_0 - 1])) + (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_0]))))), ((-(((unsigned int) var_9))))));
                            /* LoopSeq 4 */
                            for (signed char i_4 = 0; i_4 < 13; i_4 += 1) 
                            {
                                arr_15 [(unsigned char)7] [i_1] [i_4] = ((/* implicit */_Bool) var_8);
                                var_17 = ((((/* implicit */_Bool) ((long long int) arr_13 [i_1] [i_1] [(_Bool)1] [i_1] [12ULL] [i_4] [i_1]))) ? (((((/* implicit */int) var_12)) >> (((arr_9 [i_2 - 1] [i_0 - 1] [i_0 - 1]) - (13732991262071814111ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
                                arr_16 [i_0 - 1] [i_3] [i_2 - 2] [i_3] &= ((/* implicit */unsigned short) var_10);
                                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)28))));
                            }
                            for (unsigned char i_5 = 3; i_5 < 10; i_5 += 2) 
                            {
                                arr_19 [i_0] [i_0] [i_5] [i_3] [i_1] [i_0] [i_2 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_17 [i_0] [2LL] [(short)9] [i_0] [i_0] [i_0]))));
                                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) <= (((/* implicit */int) arr_14 [(_Bool)1] [i_1] [(_Bool)1] [i_3] [i_3] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(unsigned char)6] [i_1] [i_0])) && (((/* implicit */_Bool) var_9))))) <= (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) arr_18 [i_2] [i_5] [i_2])) ? (arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned long long int) arr_18 [i_2] [i_5] [i_2]))))));
                            }
                            for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_3])) + (((((/* implicit */int) var_5)) - (arr_20 [i_6] [i_3] [i_3] [i_3] [i_0] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (var_11)))) ? (((arr_9 [i_2 - 2] [i_1] [i_2 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_8))))))))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) 1099377410048LL)) ? (13ULL) : (((((/* implicit */_Bool) arr_14 [4U] [(_Bool)1] [i_2] [(_Bool)1] [i_6] [i_3])) ? (13ULL) : (13ULL))))))));
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_0] [i_2 - 2] [(_Bool)1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 3; i_7 < 12; i_7 += 2) 
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_7 - 3] [i_2 - 1])) ? (arr_9 [i_0 - 1] [i_7 - 1] [i_2 - 2]) : (arr_9 [i_0 - 1] [i_7 - 2] [i_2 - 3])));
                                var_23 = ((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                            }
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_0))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [1U])) == (((/* implicit */int) var_5))))), (var_13)))) && ((!(((/* implicit */_Bool) (+(var_6))))))));
                var_26 = ((/* implicit */long long int) max((((/* implicit */int) max((max((var_9), (((/* implicit */short) arr_2 [(_Bool)1])))), (min((((/* implicit */short) var_7)), (arr_14 [i_8] [i_8] [i_9] [(unsigned char)8] [i_9] [i_8])))))), (((((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [12] [i_8] [i_8])))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))));
                var_27 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_32 [i_9] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) 13275590297504580330ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551612ULL))))), (((((/* implicit */_Bool) ((long long int) var_5))) ? ((((_Bool)0) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_12 = 1; i_12 < 7; i_12 += 3) 
                            {
                                var_28 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_5 [i_8])) ? (((/* implicit */int) arr_33 [i_8] [i_8] [i_10] [i_11])) : ((+(((/* implicit */int) var_9))))))));
                                arr_40 [3U] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) min((min((var_11), (((/* implicit */unsigned long long int) arr_32 [i_8] [i_8])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_11] [i_10] [i_10] [(unsigned char)6] [i_8]))) : (var_6)))), (((var_11) + (((/* implicit */unsigned long long int) arr_18 [i_8] [i_10] [i_10]))))))));
                            }
                            for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                            {
                                var_29 = ((/* implicit */unsigned long long int) var_5);
                                var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))) <= (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_38 [i_13] [i_13] [i_13] [i_11] [i_10] [i_9] [i_8])) - (167)))))))), (max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (short)-18112))))))))))));
                                var_31 = (~(var_10));
                                arr_43 [i_8] [i_10] [i_10] [i_8] [i_13] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [i_8])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (arr_25 [i_9] [i_9] [i_10] [i_11] [i_13] [i_9]))) : (((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned char)255))))))), (((((/* implicit */long long int) ((/* implicit */int) var_12))) & (min((var_10), (((/* implicit */long long int) var_1))))))));
                                arr_44 [i_8] [i_8] [(signed char)6] [i_10] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((1U) >> (((4503599627370495LL) - (4503599627370473LL)))))) && (var_7)))) <= (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_11 [i_13])) : (((/* implicit */int) var_12)))) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_41 [i_8] [i_10] [9])) : (((/* implicit */int) var_13)))))))));
                            }
                            arr_45 [i_9] [i_10] [i_9] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))) ? (((arr_0 [i_8]) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))), (((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */unsigned long long int) arr_11 [(unsigned char)1])), (12365954286731516829ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_14 [7LL] [i_10] [i_8] [i_9] [i_9] [i_10])) + (14030))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}

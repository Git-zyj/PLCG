/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231174
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
    var_14 = ((/* implicit */int) (unsigned short)1083);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (arr_5 [i_2 - 1] [i_2 + 1]) : (arr_5 [i_2] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((5279577989261330287LL) - (((/* implicit */long long int) 1045687356))))) : (min((((/* implicit */unsigned long long int) (short)-9377)), (arr_5 [i_2] [i_2 - 1])))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) ? (min((((/* implicit */int) (unsigned short)64432)), (var_3))) : (((/* implicit */int) (_Bool)0))))) ? (13152726547039975739ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64452)) ? (1705446207) : (((1888136587) + (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))));
                }
                for (long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((-435791675), (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-928125339581165996LL) : (arr_4 [i_0] [i_0] [i_3])))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_0]))) : (561988042464998109ULL))))) | (((/* implicit */unsigned long long int) (~(var_4)))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_3]);
                                arr_18 [i_3] [i_4] [i_1] [i_1] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_3])) : (((/* implicit */int) (signed char)-41))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_1 [i_0]))))) & (max((((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [12LL]))))), (((((/* implicit */_Bool) (unsigned short)35000)) ? (((/* implicit */int) (unsigned short)65535)) : (-2147483646)))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_17 [i_1] [i_3] [i_3 - 2] [(unsigned char)17]) - (arr_17 [i_3] [i_3] [i_3 - 3] [(_Bool)1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_3 - 1])) && (((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_3] [i_3 + 1] [i_0])) ? (((/* implicit */int) arr_11 [6LL] [i_1] [i_3 - 2])) : (((/* implicit */int) (short)(-32767 - 1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (_Bool)1))));
                                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1123553656436580290LL)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned short)64205)))))));
                                arr_26 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_20 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_6 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (9765272026433672525ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6 - 1] [i_6] [i_6 - 1])) ? (max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (signed char)-9)))) : (((/* implicit */int) arr_2 [i_3 - 2] [i_6])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_11 [i_3 - 2] [i_8 - 2] [i_3 - 2])) : (((arr_27 [i_0] [i_1] [i_0] [i_8]) ? (((/* implicit */int) var_12)) : (var_9)))));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551607ULL)))) ? (var_3) : (((/* implicit */int) arr_25 [i_3]))));
                    }
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned long long int) arr_25 [i_1]);
                        arr_35 [i_0] [i_0] [i_3] [i_9] = ((/* implicit */_Bool) ((arr_14 [i_9] [i_0] [i_3] [i_1] [i_1] [i_0]) - (arr_14 [i_0] [i_0] [(unsigned char)17] [i_1] [i_1] [i_0])));
                    }
                }
                var_22 = ((/* implicit */signed char) var_8);
                var_23 = ((/* implicit */int) max((((((long long int) (unsigned char)242)) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_0])) ? (var_2) : (((/* implicit */int) (unsigned short)54415))))))), (((/* implicit */long long int) max((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1])), (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */int) (short)-29497)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)31))) & (-8031947045848369364LL)))) ? (((((/* implicit */_Bool) ((var_4) | (var_9)))) ? ((~(-7041770239227074762LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_11), (var_8))))))) : (((/* implicit */long long int) max((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_6)))), (((/* implicit */int) ((unsigned char) -187807408))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        var_25 = ((/* implicit */long long int) arr_11 [i_10] [i_10] [i_10]);
        var_26 += ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_10] [i_10]))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 435791669)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))) : (3772907810983211357ULL))))));
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (36028659580010496LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))))))));
        arr_39 [i_10] = ((/* implicit */int) (short)-32756);
    }
}

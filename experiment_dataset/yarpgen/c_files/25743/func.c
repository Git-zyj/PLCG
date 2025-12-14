/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25743
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
    for (long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_0] [i_4] [i_3] [i_4] = (~(((/* implicit */int) arr_4 [(_Bool)1] [i_0])));
                                var_11 = (short)-525;
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        arr_18 [(signed char)3] [i_1] [i_0] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) 4503599358935040LL)))));
                        arr_19 [(signed char)8] [i_1] [i_1] [i_1] [i_1] [(signed char)8] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (((((_Bool)1) ? (arr_12 [i_2] [4] [i_2] [i_5] [i_0]) : (((/* implicit */long long int) var_7)))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
                        {
                            var_12 = ((/* implicit */int) max((var_12), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                            var_13 ^= 262128;
                        }
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
                        {
                            arr_26 [(signed char)1] [i_1] [i_2] [i_5] [i_0] = ((/* implicit */signed char) var_2);
                            arr_27 [i_0] [i_1] [i_0] [(signed char)4] [i_7] = ((/* implicit */signed char) min((((((/* implicit */_Bool) max(((signed char)66), (arr_8 [12LL] [i_0] [(signed char)0] [(_Bool)1])))) ? (max((((/* implicit */unsigned long long int) (short)30720)), (10070048892614391818ULL))) : (((/* implicit */unsigned long long int) max((var_6), (var_10)))))), (((/* implicit */unsigned long long int) var_7))));
                            var_14 = ((/* implicit */short) 1498737842);
                            var_15 = ((/* implicit */_Bool) (short)3661);
                            arr_28 [i_0] [(short)12] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max((arr_4 [i_0] [i_0]), ((signed char)42)))) : (max((((/* implicit */int) var_2)), (((arr_10 [0LL] [i_1] [i_0] [(signed char)12]) ? (((/* implicit */int) arr_11 [i_5] [i_2])) : (var_5)))))));
                        }
                        arr_29 [i_0 + 2] [i_0] = ((signed char) 14);
                    }
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_34 [6LL] [i_1] [i_1] [i_0] [i_2] [6] = ((/* implicit */_Bool) max((max((((/* implicit */short) (_Bool)1)), (arr_0 [i_0 - 3] [i_0 + 1]))), (((/* implicit */short) (signed char)-108))));
                        arr_35 [i_0 + 2] [5] [i_0 + 2] [i_0] = ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2]))))));
                        var_16 = (_Bool)1;
                        arr_36 [i_0] [i_1] [i_2] [i_2] [i_8] [i_8] = ((/* implicit */short) 1572665936184243972ULL);
                    }
                    for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_10 = 3; i_10 < 10; i_10 += 2) 
                        {
                            arr_44 [i_0 + 2] [i_1] [i_2] [(short)7] [i_10] [i_0] = ((/* implicit */long long int) var_2);
                            var_17 = ((/* implicit */int) ((signed char) (short)18127));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 3) 
                        {
                            var_18 *= ((/* implicit */short) (-(((/* implicit */int) arr_24 [i_2] [i_9] [i_2] [i_0 - 2] [i_2]))));
                            arr_47 [i_0] [i_1] [8] [i_9] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_0] [(signed char)11] [i_2] [i_9]))));
                            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_11] [i_0] [i_0]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 1) 
                        {
                            arr_50 [i_0] [i_0] [(_Bool)1] [i_2] [i_9] [i_0] = min((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0]))) ^ (var_10))), (((/* implicit */long long int) min((((/* implicit */int) arr_24 [i_0] [i_12 + 1] [i_2] [i_9] [i_0])), (arr_9 [i_0] [i_12 + 1] [i_2] [i_9] [i_0 - 3])))));
                            var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) % (-198367189)))), (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_51 [i_0] [i_1] [i_0] [i_2] [i_12 + 1] = max((var_9), (((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [i_0 - 1])));
                        }
                        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)12))) != (-3073549483488477249LL))))));
                    }
                    for (int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
                    {
                        arr_54 [i_0] [i_1] [i_0] [i_13] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_38 [i_0] [(signed char)10] [11ULL] [i_0 + 1])))), ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2] [12ULL]))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 2) 
                        {
                            arr_57 [i_0] [i_1] [i_0] [0] [(short)9] [8ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)-19)) + (var_5))), (((/* implicit */int) arr_3 [10LL] [i_0 - 1]))))) ? (arr_15 [i_0 + 1] [i_0] [(short)9] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77)))));
                            var_22 = ((/* implicit */short) (~(-4503599358935044LL)));
                            var_23 = ((/* implicit */unsigned long long int) arr_37 [i_0] [i_1] [i_0] [i_13]);
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_0] [i_2] [i_2] [i_14] [i_2])) ? (165891747) : (((/* implicit */int) (short)-3647))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_1) : (var_6)))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(((/* implicit */int) arr_38 [i_1] [10ULL] [i_2] [(short)12])))))));
                        }
                        arr_58 [i_0 - 2] [(signed char)9] [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_13] [i_1]);
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))) : (arr_21 [i_0] [i_0 + 1])))) ? (((arr_21 [i_0] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (short)6765))))) : (((((/* implicit */_Bool) arr_21 [i_0] [i_0 + 2])) ? (((/* implicit */long long int) var_8)) : (arr_21 [i_0] [i_0 - 3])))));
                        var_27 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [1])) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 3])) : (((/* implicit */int) arr_13 [i_0 + 2] [i_0 - 3] [i_0 + 1] [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_0 - 2]))))) : (((max((var_1), (((/* implicit */long long int) (short)17282)))) >> (((var_4) - (2936019969221201784LL)))))));
                    }
                }
            } 
        } 
    } 
    var_28 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-42)))))))), (max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-56))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6)))))));
    var_29 = ((/* implicit */long long int) max((var_29), ((((_Bool)1) ? (var_10) : (((/* implicit */long long int) ((var_7) + ((-(((/* implicit */int) (_Bool)1)))))))))));
}

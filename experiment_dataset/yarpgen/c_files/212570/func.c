/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212570
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_19 |= ((/* implicit */unsigned char) max((((((/* implicit */int) arr_2 [i_1] [i_1 + 2])) >> (((var_9) + (612628554))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (790286603U) : (arr_6 [i_1] [i_1] [i_1] [i_1] [i_1 + 3])))) ? (((/* implicit */int) (short)-555)) : (((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                        var_20 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((3036672533U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) << (((((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_1 - 1] [i_1 - 1])) - (51556)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_1 + 3])) : (2713300086158455279ULL))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_5 [(unsigned short)8] [i_1 + 3] [i_1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((3036672533U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) << (((((((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_1 - 1] [i_1 - 1])) - (51556))) + (40925)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */int) arr_2 [i_0] [i_2])) : (((/* implicit */int) arr_3 [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) arr_0 [i_1 + 1] [i_1 + 3])) : (2713300086158455279ULL))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_5 [(unsigned short)8] [i_1 + 3] [i_1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))));
                        arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((arr_6 [i_2] [i_1 - 1] [i_2] [i_1 - 1] [i_1]) >> (((((/* implicit */int) (unsigned short)12706)) - (12706))))) : ((~(arr_6 [i_1 + 3] [i_1 + 1] [i_3] [i_3] [i_3])))));
                        var_21 = ((/* implicit */long long int) (~((~(((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [8LL] [(unsigned short)2])) != (((/* implicit */int) var_17)))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)17795))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1 + 3] [i_2] [i_1 + 3] [i_5 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-92))) : (11ULL))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                                arr_15 [i_0] [2LL] [i_0] [i_0] [i_4] [i_5 + 1] = ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_14)) + (2147483647))) << (((var_15) - (4243094179U)))))));
                                var_23 = ((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_5]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) max((arr_4 [i_1] [i_1] [i_2] [i_2]), (((/* implicit */unsigned short) (signed char)-22))))), (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (549755805696ULL))))), (((/* implicit */unsigned long long int) ((((long long int) (signed char)9)) >> (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))) / (1258294765U)))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_14 [i_1 + 1] [i_0])), (var_5)))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_1 + 1])), (16314626069614119429ULL))) : (((/* implicit */unsigned long long int) ((int) min((var_0), (((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_6] [i_6]))))))));
                            arr_22 [i_1] &= ((/* implicit */unsigned int) arr_16 [i_1] [i_1] [i_2] [i_2]);
                        }
                        var_25 = ((/* implicit */unsigned int) max((var_25), ((+(1258294762U)))));
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 3) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((-1647372590176249971LL) + (9223372036854775807LL))) >> (((((/* implicit */int) ((short) 4077070241333507711LL))) + (2471)))));
                        var_26 = min((arr_17 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_23 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2]), (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)57)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((arr_23 [i_0] [i_0] [i_0] [i_2] [i_8] [i_8]) >> (((arr_17 [i_0] [i_0] [i_2]) - (4058597907U)))))))));
                        arr_27 [i_0] [i_1 + 3] [i_2] [i_8] = ((/* implicit */short) ((((/* implicit */int) (signed char)-32)) + (((/* implicit */int) var_4))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
    {
        arr_31 [i_9] = ((/* implicit */unsigned int) arr_28 [i_9] [i_9]);
        arr_32 [i_9] [i_9] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)8160)) : (var_9)))) : (3033409910U)));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_29 [21LL]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100)))))) ? ((-(arr_30 [i_9] [(unsigned short)20]))) : (arr_30 [i_9] [i_9])));
    }
}

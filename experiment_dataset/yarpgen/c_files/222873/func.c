/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222873
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned short) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47490))) : (((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_0]))) : (0U))))));
                    arr_7 [i_0] = ((/* implicit */_Bool) -1LL);
                    arr_8 [i_0] [i_0] [i_2] &= (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((arr_4 [i_0] [i_0]) + (3396336161401415374LL))));
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_17 [i_0] [i_1] [i_3] [i_1]), ((short)-7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)149)), (var_16)))) && (((/* implicit */_Bool) (short)5682))))) : (((/* implicit */int) var_6))));
                                var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)28))) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned char)26)) < (((/* implicit */int) arr_3 [i_1]))))) % ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))))));
                                arr_20 [i_5] [i_1] [i_3] [(unsigned char)21] [i_5] [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) min((var_1), (((/* implicit */short) (_Bool)1))))) && ((_Bool)1)))));
                                var_19 = ((/* implicit */unsigned char) ((((((-5116481643916133750LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)47)))))))) ? (max((((/* implicit */int) arr_12 [2])), (((((/* implicit */int) (unsigned char)43)) << (((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_0] [i_0])) || ((_Bool)1)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)47))))))));
                                arr_21 [i_5] [i_3] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_17 [i_0] [i_0] [i_3] [i_4])) < (((/* implicit */int) (short)-1))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_24 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4)))) : (((arr_15 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))) ? ((~(((268435392ULL) ^ (((/* implicit */unsigned long long int) arr_23 [(unsigned short)14] [(unsigned short)11])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)63764)) ? (1521703603700350628ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)26974)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))))));
                        arr_25 [i_3] [i_3] = arr_10 [i_0] [i_0] [i_3] [(short)8];
                        arr_26 [i_0] [(unsigned char)12] [(unsigned char)12] [i_6] = ((/* implicit */short) ((((((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) (signed char)3)))) + (2147483647))) << (((((18446744073441116223ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1]))))) - (32ULL)))));
                        var_20 *= ((/* implicit */unsigned long long int) (unsigned char)246);
                    }
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_31 [i_0] = ((/* implicit */short) (unsigned char)15);
                        arr_32 [i_7] [(unsigned char)14] [14] [i_0] &= ((unsigned short) (unsigned char)237);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 20; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 23; i_9 += 4) 
                        {
                            {
                                arr_40 [i_0] [(unsigned char)19] [i_3] [i_8] [(short)21] = ((short) ((((/* implicit */int) arr_29 [i_3] [i_3] [i_8 + 2] [(unsigned short)14] [i_8] [(short)15])) + (((/* implicit */int) arr_18 [i_8 + 1] [i_3] [i_3] [(short)22] [i_1]))));
                                var_21 = ((/* implicit */short) arr_38 [(short)21] [i_1] [12] [i_1] [i_8]);
                                arr_41 [i_8] [i_8] [(short)2] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((18446744073441116223ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16)))))) <= (((/* implicit */int) (signed char)-1)))));
                }
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-18951)) : (((/* implicit */int) (unsigned char)188)))))) & (((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)-17829)) <= (((/* implicit */int) (unsigned char)208)))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((max(((_Bool)1), ((_Bool)1))) || (((/* implicit */_Bool) var_16)))) ? (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8543444203938710003LL)))))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (0LL))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)-110)) && ((_Bool)1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
    var_25 = ((/* implicit */short) min((((((/* implicit */int) var_15)) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) 3559558019U)) < (var_10)))))), (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) + (7718858167880706318ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -8313261620148691885LL)))))))));
    var_26 = ((/* implicit */_Bool) (-(((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (_Bool)0))))) % (((((/* implicit */int) var_7)) / (((/* implicit */int) (_Bool)1))))))));
}

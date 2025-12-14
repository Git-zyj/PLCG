/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237146
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
    var_15 = (+(((((/* implicit */_Bool) ((unsigned int) 42131145U))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -27421615)) != (436177483U))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (0LL))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = var_11;
                        arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(arr_4 [i_0] [i_0] [i_3])))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_2] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_0 + 2] [i_0] [i_0] [i_0])) ? (((6946160637157007565ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((long long int) 6946160637157007565ULL)) < (var_1))))));
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) 116401586U))) != (((((/* implicit */_Bool) 2163547968908174628LL)) ? (((/* implicit */long long int) -1739931466)) : (-1LL)))))), ((~(((/* implicit */int) arr_1 [i_3 + 1]))))));
                            var_18 = ((/* implicit */long long int) (-(18446744073709551615ULL)));
                        }
                        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */short) 6946160637157007565ULL);
                            arr_18 [i_0] [i_1] [i_0] [i_3] [i_3] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) ((signed char) 4177920LL))), (((((/* implicit */_Bool) -4264160145419288129LL)) ? (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_2] [i_2])) : (var_12)))));
                        }
                        var_20 |= ((/* implicit */int) 6946160637157007565ULL);
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_21 = var_5;
                        arr_22 [(short)4] [i_1] [i_1] [i_1] &= ((/* implicit */short) (!(((/* implicit */_Bool) -3026453126259955495LL))));
                        arr_23 [i_0] [i_0] = ((/* implicit */long long int) (((((~(((/* implicit */int) var_8)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) var_13)))))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        arr_26 [i_0] [i_1] [i_0] [i_7] [i_1] = ((/* implicit */int) var_11);
                        /* LoopSeq 2 */
                        for (int i_8 = 1; i_8 < 13; i_8 += 4) 
                        {
                            var_22 = ((/* implicit */short) min((((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7] [i_0]))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))));
                            var_23 = ((/* implicit */signed char) (short)-18761);
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((((/* implicit */_Bool) -3026453126259955479LL)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_8])) ? (var_14) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                            var_25 ^= ((((/* implicit */long long int) arr_4 [i_7 + 2] [i_1 + 1] [i_1 + 1])) & ((~((~(-1LL))))));
                        }
                        for (signed char i_9 = 2; i_9 < 13; i_9 += 3) 
                        {
                            var_26 = arr_0 [i_0 - 1];
                            var_27 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))));
                            var_28 = ((/* implicit */unsigned long long int) (-(max((max((((/* implicit */long long int) 753085001U)), (-4177920LL))), (((((/* implicit */_Bool) 7284442444871238177LL)) ? ((-9223372036854775807LL - 1LL)) : (2LL)))))));
                        }
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (arr_30 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_0 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((arr_8 [i_1 - 1] [i_7 + 4] [i_7] [i_7 + 4] [i_1 - 1]) + (((/* implicit */int) var_8)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 13; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (short)-5492))));
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 4] [i_0 + 2]))));
                        }
                        arr_34 [i_0] [i_0] [i_0] [i_0] = var_8;
                    }
                    var_32 = arr_7 [i_0] [i_2] [i_0] [i_2];
                    arr_35 [i_0] = ((((/* implicit */_Bool) var_1)) ? (max((((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_3))), ((-(4264160145419288128LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8138380167764031397LL)) ? (1073610752U) : (((/* implicit */unsigned int) 27421615))))));
                }
            } 
        } 
    } 
    var_33 &= ((/* implicit */unsigned long long int) (~(var_14)));
    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (((unsigned int) var_7))))) || (((/* implicit */_Bool) var_5))));
    var_35 = ((/* implicit */short) ((var_13) / (((/* implicit */long long int) var_10))));
}

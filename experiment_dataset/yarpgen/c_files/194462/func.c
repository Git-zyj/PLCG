/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194462
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
    var_19 = ((/* implicit */unsigned char) 1384718356610877783ULL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_1 - 2] [i_0] [(short)20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_2)), ((short)-18898)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-18898))) : (arr_4 [i_0] [i_0] [i_0])));
                var_20 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1])))));
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1152921502459363328ULL))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_2 + 2] [i_0])) ? (arr_2 [i_2 + 2] [i_0]) : (arr_2 [i_2 + 1] [i_0]))), (((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_0])) ? (arr_2 [i_2 + 1] [i_0]) : (arr_2 [i_2 + 2] [i_0])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                    {
                        var_22 |= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((var_17) != (arr_0 [i_3])))), (((((/* implicit */int) (short)-18898)) / (((/* implicit */int) (signed char)43)))))) & (((/* implicit */int) var_11))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)26648), (((/* implicit */unsigned short) (_Bool)1)))))) != (min((var_8), (((/* implicit */unsigned long long int) (signed char)-49))))))))))));
                            arr_17 [i_0] [i_1] [13ULL] [i_3] [i_0] = ((/* implicit */unsigned char) 4294967295U);
                            arr_18 [i_0] [i_0] [i_0] [i_1] [(unsigned short)22] &= ((/* implicit */unsigned int) arr_0 [i_0]);
                        }
                        arr_19 [i_0] [i_1 + 1] [i_2 - 1] [i_3 - 3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))));
                    }
                    for (int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57815)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4449))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) arr_14 [i_5] [i_2] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [i_2 - 2] [i_1] [i_1 - 1])) : (((((/* implicit */unsigned long long int) var_3)) * (arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [(unsigned short)7] [i_0] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [i_2 + 2] [i_1] [i_1 - 2] [i_1 - 2]))));
                            arr_25 [i_0] [i_1] [i_1 - 1] [i_1] [i_1] = (~(((/* implicit */int) arr_1 [i_5 + 2] [i_1 - 2])));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_1 + 1] [i_2 - 1] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_14 [i_1] [i_1 - 2] [i_1 - 1] [i_0] [i_1] [i_1])))) || (((/* implicit */_Bool) max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (signed char)-43)))))));
                            var_25 *= ((/* implicit */unsigned int) ((((int) arr_15 [i_2] [i_7])) * (((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_11 [i_2 + 1] [1ULL] [i_2 + 2] [i_5 + 2] [i_7])) : (((/* implicit */int) arr_11 [(unsigned short)19] [i_1] [i_1 - 2] [i_1 - 2] [i_1 + 1]))))));
                        }
                        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_33 [i_0] [i_0] [(short)0] [i_0] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) 2138406534U)) ? (2138406534U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned int) (signed char)-43)))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))));
                            var_26 = ((((_Bool) arr_12 [i_1 - 2] [i_1] [i_2 + 1])) ? (((((/* implicit */unsigned int) arr_13 [i_1 - 2] [i_1 + 1] [i_2 + 1] [i_5] [i_5 + 2] [i_5])) % (2929633440U))) : (((/* implicit */unsigned int) ((arr_13 [i_1 - 2] [i_1 - 1] [i_2 + 1] [i_5] [i_5 + 2] [i_8]) - (((/* implicit */int) var_15))))));
                            arr_34 [i_8] [i_8] [i_0] [i_8] [i_8] = ((/* implicit */signed char) 4294967295U);
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_37 [i_0] [i_0] [i_5] [i_5] [i_5] = arr_13 [i_0] [17ULL] [17ULL] [i_2] [i_1 - 2] [i_0];
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(unsigned short)10] [i_2 + 1] [i_2 + 2] [i_2 - 2] [i_2] [i_2])) ? (arr_13 [i_2] [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2]) : (arr_13 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 2] [10U] [i_2]))))));
                        }
                        for (unsigned long long int i_10 = 4; i_10 < 21; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) max((arr_9 [i_1] [i_1 - 1] [i_2 - 2] [i_5 - 1]), (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])))))));
                            arr_40 [(_Bool)1] [(_Bool)1] [i_2] [i_2 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_1 - 2] [i_1] [i_2 - 2] [i_5 + 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_30 [i_1 - 1] [i_1 - 1] [i_2 - 2] [i_5 + 1] [i_0]), (arr_30 [i_1 - 1] [i_1 - 1] [i_2 + 2] [i_5 - 1] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1 - 1] [i_1] [i_2 - 2] [i_5 + 1] [i_0]))) / (4294967295U)))));
                            var_29 += ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                        }
                    }
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) arr_7 [i_0]))));
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) var_0)), (min((var_9), (((/* implicit */unsigned long long int) var_12)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
}

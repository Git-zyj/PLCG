/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227789
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
    var_20 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) var_16)) : (min((((/* implicit */unsigned long long int) 4294967295U)), (var_14)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((((/* implicit */_Bool) arr_2 [8ULL] [7U] [7U])) ? (arr_2 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) << (((/* implicit */int) ((short) arr_0 [i_1])))))));
                arr_4 [i_0] = ((((/* implicit */_Bool) (~(((arr_3 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) <= (arr_2 [i_0] [i_1] [i_0]))))))) : (((unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) (short)32367))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_2] [i_1] [i_0] = max((min((((unsigned long long int) (unsigned char)0)), (((/* implicit */unsigned long long int) arr_0 [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11079678897817484667ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((15771104751243233590ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_2]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_0])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (short)30019))));
                        arr_13 [i_3] [9U] [9U] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [7U] [i_2] [i_3]))) < ((~(arr_2 [(_Bool)1] [i_1] [(short)4]))));
                        arr_14 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) | (((/* implicit */int) (short)-8883))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_1])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_22 [i_5 - 1] [i_1] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) arr_5 [i_5 - 2] [i_1] [i_2] [i_0]);
                            var_24 = ((((/* implicit */_Bool) (short)25417)) ? (arr_2 [i_0] [i_1] [i_1]) : (arr_9 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4] [4ULL]));
                        }
                        for (unsigned int i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            arr_26 [i_1] [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (12018973133749448090ULL)))) ? (((/* implicit */unsigned long long int) arr_25 [i_6 + 1] [i_6] [i_6] [i_6 - 2] [(short)3] [i_6] [i_6])) : (((((/* implicit */_Bool) arr_9 [i_6] [0ULL] [i_2] [i_1] [i_0])) ? (8020383803910273322ULL) : (((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [(_Bool)1] [6ULL] [(_Bool)1] [(unsigned char)5]))))));
                            arr_27 [i_0] [i_0] [i_1] [i_1] [i_4] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [7ULL] [i_6 + 2]))) | (arr_12 [i_2] [i_1] [i_2] [i_2] [i_2] [i_4])))));
                        }
                    }
                }
                for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) /* same iter space */
                {
                    arr_31 [i_0] [i_1] [i_7] [1U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_12 [i_0] [6U] [6U] [i_0] [i_1] [i_7])) < (var_1))) || (((/* implicit */_Bool) arr_29 [0ULL] [0ULL] [i_7])))))) : (((((/* implicit */_Bool) 578265759704000050ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_7] [i_0] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (short)8883)) : (((/* implicit */int) (unsigned char)222))))) : (245748065U)))));
                    var_25 ^= var_10;
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((8020383803910273347ULL) ^ (10426360269799278268ULL)))) ? ((-(4989014523656218655ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [i_1] [i_0])))))) ? (max(((~(var_17))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_7] [i_0] [i_7] [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((((var_2) < (((/* implicit */unsigned long long int) 3785105412U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_7] [i_1] [i_0]))) : (max((((/* implicit */unsigned int) (short)8908)), (1U))))))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_28 [(short)5] [(short)5] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_28 [i_0] [i_1] [i_1] [i_7]))))))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) var_5);
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (_Bool)1)), (12227887909836468374ULL)))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)4839)))))))));
}

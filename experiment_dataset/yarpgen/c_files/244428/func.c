/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244428
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2388323833U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_15)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (arr_2 [i_1])))) : ((~(arr_1 [i_0] [i_1]))))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_7))));
                var_19 *= min((((/* implicit */unsigned int) ((unsigned short) ((signed char) var_14)))), (min(((+(var_8))), (((((/* implicit */_Bool) arr_1 [8] [8])) ? (arr_1 [i_1] [i_0]) : (arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        arr_17 [6ULL] [i_3] [6ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_6 [i_2])) ? (var_11) : (((/* implicit */unsigned int) arr_2 [i_4])))), (max((var_8), (((/* implicit */unsigned int) arr_2 [i_2]))))))), (min((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))) : (var_4))), (((/* implicit */long long int) min((arr_7 [i_5]), (((/* implicit */short) var_6)))))))));
                        arr_18 [i_5] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) (+(min((((/* implicit */int) (short)(-32767 - 1))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_16 [i_3] [i_4 - 1] [i_3])) : (((/* implicit */int) var_17))))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_20 *= ((/* implicit */unsigned char) ((signed char) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (525030538) : (((/* implicit */int) arr_14 [i_2] [(unsigned char)13] [i_5] [i_5]))))));
                            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22258)) ? (2496357103U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(signed char)14] [(signed char)14] [(signed char)14])))))) ? (((var_15) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [0ULL] [0ULL] [i_6])) ? (((/* implicit */int) arr_21 [i_3] [i_4])) : (((/* implicit */int) arr_14 [i_6] [i_5] [i_4] [i_2])))))))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)0)))))) : (((/* implicit */int) arr_5 [i_4 + 1]))));
                        }
                    }
                    arr_22 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (2921152801300290303LL) : (((/* implicit */long long int) arr_1 [i_2] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_2] [i_2]))))) : (((/* implicit */int) ((unsigned char) (unsigned short)14288)))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) arr_14 [i_2] [i_2] [(short)7] [(short)7])), (var_12))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)98)) && (((/* implicit */_Bool) arr_20 [i_3])))))))));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_26 [i_7] [i_7] [i_7] [i_3] = ((/* implicit */_Bool) (+(min((min((arr_1 [i_3] [i_3]), (((/* implicit */unsigned int) var_17)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_20 [i_3])), ((unsigned char)175))))))));
                        var_22 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_2 [i_4])), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [(short)1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)61200))))), (((((/* implicit */_Bool) (unsigned short)8191)) ? (arr_1 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                        arr_27 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_2])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_7])), (var_16)))) : (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(var_7)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_23 [i_2] [i_3] [(signed char)8] [i_2])), (arr_15 [i_3] [i_3] [i_3] [i_7])))) ? (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_2] [i_2])) ? (((/* implicit */long long int) var_0)) : (-4096601075982687160LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)222)))))))));
                        arr_28 [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((-(((/* implicit */int) var_6)))) + (2147483647))) << (((((((/* implicit */int) arr_8 [i_3])) + (30308))) - (27)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_2] [(unsigned char)5])), (1126465493882095845LL)))) ? (((/* implicit */int) arr_25 [i_3])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned short) -1)))));
                        var_23 = ((/* implicit */int) min((var_23), (max((((/* implicit */int) arr_0 [i_2])), (7)))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_4] [i_4] [i_3] [i_4]))))));
                        arr_31 [i_2] [7LL] [i_3] [i_8] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_20 [i_3])) : (1553680843)))));
                        arr_32 [1LL] [i_3] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4 - 1])) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_29 [i_2] [i_3] [i_3] [i_8 - 1])) : (((/* implicit */int) var_10)))) : (arr_2 [i_8])));
                    }
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 0)) : (18446744073709551615ULL))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) var_9)))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) ((var_2) ? (var_8) : (var_11)))) ? (((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59445))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_7))))));
}

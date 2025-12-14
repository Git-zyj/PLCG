/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50781
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4)))))))) <= (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (var_18) : (((/* implicit */long long int) var_3)))))))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (4983981716365087099ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (unsigned char)233);
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(arr_5 [(_Bool)1] [i_1] [i_1 - 3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13462762357344464517ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) : (13462762357344464498ULL)))) ? ((-(var_3))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_16))))))) : (max((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_5 [(unsigned char)15] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16384)) && (((/* implicit */_Bool) var_2))))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (~(18446744073709551597ULL))))));
                        arr_10 [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */long long int) 0)) : (arr_1 [(unsigned short)1] [i_0 + 1]))), (((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned char)74)))))))));
                        arr_11 [i_1 - 2] [3] [11U] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-36))));
                    }
                }
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_5 = 3; i_5 < 18; i_5 += 4) 
                    {
                        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) 4983981716365087099ULL)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_16 [i_0 - 1] [6ULL] [i_1] [(short)2] [i_5 + 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (arr_15 [i_1 - 1] [i_5] [i_0 + 1])))) ? (max((((/* implicit */long long int) arr_3 [i_0 + 1])), (var_18))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                        arr_17 [i_4] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_9 [i_0]) ? (((/* implicit */int) (unsigned short)63506)) : (((/* implicit */int) (unsigned short)63489)))))) ? (((/* implicit */int) ((unsigned char) 13462762357344464516ULL))) : (((/* implicit */int) arr_12 [i_0] [i_0] [(short)0] [i_4]))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_4]))))) ? (min((-1276904158839436240LL), (6521862604713183450LL))) : (max((var_2), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) arr_19 [i_0] [i_1 - 1] [i_0] [i_4])), (arr_1 [i_1] [(unsigned char)6])))))) : (arr_5 [i_0] [i_1] [i_4])));
                        var_27 = ((/* implicit */signed char) (+(((/* implicit */int) ((var_11) <= (arr_15 [i_0 - 1] [i_0 - 1] [i_4]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) 584050668);
                        var_29 *= ((/* implicit */unsigned char) var_0);
                    }
                    arr_22 [(unsigned short)0] [i_4] [i_0] [i_4] = ((/* implicit */long long int) (unsigned char)22);
                }
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))))))))));
                        var_31 += ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_23 [i_0 + 1] [i_0] [i_0])) | (((/* implicit */int) arr_23 [i_0 + 1] [(unsigned short)0] [i_0]))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_15 [i_1 + 1] [i_0 - 1] [i_0 + 1])))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [i_0 - 1] [(_Bool)1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_8]))))), (arr_1 [i_0 - 1] [i_0 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))));
                    }
                    arr_28 [i_0 - 1] [i_0] [i_1] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) max(((unsigned short)63489), (((/* implicit */unsigned short) (signed char)127)))))));
                    arr_29 [i_8] [i_1] [i_0 - 1] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1)))))))), ((-(((/* implicit */int) max((var_10), (((/* implicit */signed char) arr_23 [i_8] [i_8] [i_8])))))))));
                }
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    var_33 = ((/* implicit */signed char) ((arr_4 [(short)6] [i_0 - 1] [i_1 - 2]) ? (((/* implicit */int) arr_19 [i_1 - 1] [i_0 + 1] [i_1] [i_10])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1] [i_1 - 2]))));
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1 - 3] [i_0 - 1] [i_0 - 1])) ? (arr_27 [i_0] [i_0] [i_0] [4ULL]) : (var_18))))));
                    var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))));
                }
                arr_32 [i_1] [i_1 - 2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (_Bool)1)) : (28585901)))));
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned long long int) var_2);
    var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (min((((/* implicit */unsigned long long int) max(((short)17513), (((/* implicit */short) (signed char)-1))))), (4983981716365087120ULL)))));
}

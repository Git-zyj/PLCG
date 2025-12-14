/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27343
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)255)), (min((((/* implicit */unsigned int) 1320168629)), (4294967295U))))))));
    var_21 = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) ((int) var_16))), (var_0))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_19)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (0U)))) ? (((long long int) var_18)) : (((/* implicit */long long int) 0U))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_2);
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) min((min((arr_2 [i_0]), (arr_2 [i_1]))), (max((arr_2 [i_1]), (arr_2 [i_4]))))))));
                                var_24 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_1] [i_1] [i_3 + 2])) ? (arr_13 [i_3 - 1] [i_1] [i_1] [i_3 + 1]) : (arr_13 [i_3 + 1] [i_1] [i_1] [i_3 + 2]))), ((~(arr_13 [i_3 + 2] [i_1] [i_1] [i_3 + 1])))));
                                var_25 = ((/* implicit */unsigned int) (+(1387251485)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [3U] [i_2] [i_1] = ((/* implicit */_Bool) (unsigned char)13);
                    var_26 = ((((/* implicit */_Bool) ((16107395260428350707ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6)))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_6 [15] [15] [15])))), (((((/* implicit */int) arr_0 [6LL])) ^ (2147483647)))))) : (min((((unsigned int) arr_10 [i_1])), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_14 [i_1] [i_2] [i_1] [i_0] [i_0] [i_0]))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))) ? (((/* implicit */int) ((unsigned short) var_10))) : (arr_13 [(unsigned short)10] [i_1] [i_1] [i_5 - 1]))));
                        var_28 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (arr_17 [(unsigned short)2] [i_1] [i_1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned char)72)))))) : ((~(((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [(unsigned char)14] [i_0] [i_1] [i_2])) & (((/* implicit */int) (signed char)-64))))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_6] [i_2] [i_1] [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)9369)));
                        var_29 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (104221101U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(short)10] [(short)10] [i_2])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_11 [(_Bool)0] [i_1] [i_2] [i_1] [i_1] [i_0])) ? (arr_21 [i_0] [i_1] [i_2] [i_1]) : (((/* implicit */unsigned int) arr_13 [i_6] [i_1] [i_1] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_19)) + (((/* implicit */int) (unsigned short)59280))))) ? (((/* implicit */int) arr_11 [i_6 + 1] [i_6 + 1] [i_2] [i_6] [i_1] [12ULL])) : ((-(((/* implicit */int) arr_23 [i_1]))))))) : (min((max((var_17), (((/* implicit */unsigned long long int) (unsigned short)65529)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_1] [i_1] [i_0] [i_0])))))))));
                        arr_25 [i_6] [i_2] [i_1] [i_6] = ((/* implicit */unsigned char) ((((24U) ^ (min((var_2), (((/* implicit */unsigned int) var_12)))))) | (((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)35)))))))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
    {
        arr_28 [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_13 [i_7] [i_7] [8U] [i_7]))))), (arr_27 [i_7]))))) < (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (arr_7 [i_7] [i_7] [i_7]))), (((/* implicit */unsigned long long int) arr_23 [6U]))))));
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned int) arr_7 [i_7] [i_7] [i_7])) & (((/* implicit */unsigned int) arr_13 [i_7] [0U] [0U] [i_7]))))) ? ((-(((((/* implicit */_Bool) 344861039)) ? (((/* implicit */long long int) 344861039)) : (arr_17 [i_7] [i_7] [i_7] [i_7]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7])))))));
    }
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (1308044554U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))))) == ((+(var_1)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206236
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
    var_13 &= ((/* implicit */short) ((((/* implicit */_Bool) 3179305089U)) ? ((~(min((1115662216U), (1115662207U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((1144554613U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    arr_9 [i_0] [i_1] [5LL] = ((/* implicit */unsigned short) (((~(arr_4 [5U] [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [9U] [9U])))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_15 = ((/* implicit */long long int) max((min(((-(1115662206U))), (max((3179305089U), (((/* implicit */unsigned int) (_Bool)1)))))), ((+(3623027209U)))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) (~(3623027209U)));
                    var_17 = ((/* implicit */short) arr_16 [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_22 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_21 [i_3] [(_Bool)1] [(unsigned char)1] [i_5 + 1] [i_3])), (arr_10 [i_3]))), (((/* implicit */unsigned short) arr_12 [i_3] [12LL] [i_5 - 1]))))) ? (((((/* implicit */_Bool) (~(arr_19 [i_4] [i_4] [i_4] [i_6])))) ? (arr_19 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3] [i_5 - 1] [i_4] [i_4] [i_3]))))) : (max((((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_6] [i_6]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) | (arr_19 [i_3] [i_5 - 1] [i_5 - 1] [i_3])))))));
                                var_18 &= ((/* implicit */_Bool) -9223372036854775806LL);
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_5 - 1])) ? (((/* implicit */int) arr_12 [i_6] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_5 - 1])))))))));
                                var_20 -= ((/* implicit */signed char) arr_16 [i_3] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 *= ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)61440)), (1115662207U)));
        arr_23 [i_3] [i_3] = ((((/* implicit */_Bool) min((arr_18 [i_3] [12ULL]), (arr_18 [i_3] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_18 [i_3] [i_3]), (((/* implicit */signed char) var_3)))))) : (((((/* implicit */_Bool) var_9)) ? (671940087U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3]))))));
    }
    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
    {
        arr_27 [i_8] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_25 [i_8])) ? (arr_24 [i_8]) : (arr_24 [i_8]))), (arr_24 [3U])));
        arr_28 [i_8] = ((/* implicit */unsigned long long int) max((min(((unsigned char)249), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) (!((_Bool)1))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (((759287152U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-16613))))))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_25 [i_9])) ? (arr_31 [i_9] [i_9]) : (arr_25 [i_9]))));
        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) 3698915322U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_26 [i_9]))))) : (arr_29 [i_9] [i_9]))) > (max((((((/* implicit */_Bool) arr_25 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_9]))) : (2058614019U))), (arr_30 [i_9])))));
    }
    for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_7))));
        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_33 [(signed char)0] [(signed char)0])) + ((-(3396941234U)))));
    }
}

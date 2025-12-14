/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48295
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
    var_17 = ((/* implicit */long long int) var_16);
    var_18 = ((/* implicit */long long int) var_3);
    var_19 = ((/* implicit */long long int) min((var_19), (var_5)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) (short)-30744);
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_1 + 2] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(min((702319400U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))))) * (max((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_4 [i_0])) ? (-6LL) : (-6LL)))))));
            var_21 = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_1 + 1] [i_1 - 1]))), ((-(arr_4 [i_0 + 1])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0 + 2] [i_0] [i_0 - 1] [i_0] [i_3] = ((/* implicit */unsigned short) (+(var_3)));
                            var_22 = ((/* implicit */long long int) ((_Bool) ((arr_10 [9U] [i_3] [i_3] [i_0]) ^ (((/* implicit */long long int) 702319406U)))));
                        }
                    } 
                } 
                arr_14 [i_2] [(signed char)15] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1] [i_1] [i_1] [i_0 - 1] [i_0 - 1])) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) < (((/* implicit */long long int) 3592647895U))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_23 ^= ((3180468452U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((9223372036854775807LL) >> (((702319376U) - (702319314U)))))) ? (654778178) : (((/* implicit */int) max(((short)28752), (((/* implicit */short) arr_6 [4U] [i_1] [i_1 - 1])))))))));
                var_24 = ((/* implicit */short) (_Bool)1);
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) (+(((/* implicit */int) (_Bool)0)))))) * (((((/* implicit */_Bool) ((((/* implicit */long long int) 702319400U)) ^ (7701892576418648015LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_5] [i_1 - 1]) : (((/* implicit */long long int) var_0))))))));
            }
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned short) (~(65408)));
        }
        /* LoopNest 2 */
        for (signed char i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            for (long long int i_7 = 3; i_7 < 14; i_7 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) -6LL)))) ? (min((arr_18 [(short)10] [i_6 - 1] [(unsigned char)14]), (arr_4 [i_7]))) : (((/* implicit */long long int) ((arr_7 [i_0] [i_7]) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))) && (((((/* implicit */_Bool) 9223372036854775807LL)) && (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_11))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1114498854U)) ? (((/* implicit */long long int) -65409)) : (-740550862315409460LL)))) ? (((((/* implicit */_Bool) ((arr_11 [i_6]) | (arr_18 [i_7 - 2] [i_6] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [9LL] [i_9] [i_9]))) : (var_0))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_7 + 3] [i_7 + 3] [i_6])))))));
                                var_28 = ((/* implicit */short) arr_22 [i_9] [i_9] [i_9]);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) var_15);
                    var_30 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 - 2] [i_0 + 2] [i_0 - 1]))) : (arr_18 [i_0 + 2] [i_0] [7LL]))) + (max((arr_4 [i_0]), (((/* implicit */long long int) var_1))))));
                    var_31 += ((/* implicit */long long int) var_4);
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) max(((short)29492), ((short)-32027)));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_26 [i_12] [1LL] [i_11] [i_0 + 1] [i_0 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) <= (3588479810813393664LL)))))))) ? (((-654778179) * (((/* implicit */int) arr_20 [i_0 - 1] [i_0 + 2])))) : ((+(65411)))));
                    }
                } 
            } 
        } 
    }
}

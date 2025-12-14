/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224776
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
    var_18 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned long long int) var_15))));
    var_19 = ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((unsigned char) (~(11975831172983197346ULL))))));
    var_20 = max((var_14), ((~(var_7))));
    var_21 &= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (unsigned char)31)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_22 &= ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) min((((unsigned int) 6470912900726354269ULL)), (((unsigned int) arr_0 [i_0] [i_0]))));
        arr_4 [6LL] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_16 [i_0] [i_1 + 2] [i_0] [i_3] = ((/* implicit */unsigned int) max(((~(arr_0 [i_1 + 1] [i_1 - 3]))), (((/* implicit */long long int) (~(-940816370))))));
                        arr_17 [i_0] [i_1 - 2] [0LL] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (signed char)51);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) arr_10 [i_4] [i_5] [(unsigned char)0]);
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (max((((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned int) arr_1 [i_4]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(-940816350)))) : (var_0)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), ((~(var_3)))));
                        arr_28 [i_5] [(unsigned short)6] [i_6] [i_7] = ((/* implicit */unsigned long long int) (~(arr_15 [i_6])));
                    }
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_21 [i_5] [i_5] [1]);
                        arr_32 [i_4] [i_5] [i_4] [i_6] &= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_15 [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((((/* implicit */short) arr_26 [i_4])), (var_8)))))));
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_5] = ((/* implicit */short) (((~(((/* implicit */int) arr_21 [i_5] [i_5] [i_9])))) >= (((/* implicit */int) arr_21 [i_5] [i_8] [i_9]))));
                            var_27 &= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_31 [i_4] [i_5] [i_6] [i_9])) : (((/* implicit */int) arr_31 [i_4] [i_4] [7ULL] [i_8]))))), (((arr_31 [i_4] [i_5] [5LL] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_4] [i_5] [i_6] [i_8]))) : (1268705233U)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_39 [i_4] [i_5] [i_5] [i_6] [i_8] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-30156))))) ? ((+(((((/* implicit */int) arr_1 [i_5])) + (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_16))));
                            arr_40 [i_4] [i_5] [i_6] [i_8] [i_6] [i_10] = ((/* implicit */long long int) var_14);
                        }
                        for (int i_11 = 1; i_11 < 11; i_11 += 2) 
                        {
                            arr_43 [4U] [i_8] [i_5] = ((/* implicit */int) (~(1268705236U)));
                            var_28 &= ((/* implicit */unsigned long long int) ((1268705236U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65)))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                        {
                            var_29 &= ((/* implicit */unsigned short) (~(-1900639880)));
                            arr_47 [i_4] [i_5] [i_5] [i_8] [i_12] = ((/* implicit */signed char) var_5);
                            arr_48 [i_4] [i_5] [i_5] [(signed char)2] [i_6] [i_8] [i_12] = ((/* implicit */unsigned short) (~(var_14)));
                        }
                        arr_49 [i_4] [i_6] &= ((/* implicit */short) max((var_0), (arr_34 [i_4] [i_4] [(signed char)8] [i_6] [i_8])));
                        arr_50 [i_4] [i_4] [i_5] [i_5] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_44 [i_5]) >= (((unsigned int) (signed char)97)))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
                    {
                        arr_53 [i_4] [i_5] [i_6] [i_6] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) var_14)), (((32767LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196)))))));
                        var_30 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (var_14) : (max((((/* implicit */int) arr_38 [1U] [i_5] [2ULL] [i_6] [(unsigned char)11] [i_6] [(unsigned char)11])), (var_7)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (7132778128269869961ULL)))));
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (~(((/* implicit */int) var_13)))))));
    }
}

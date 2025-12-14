/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42122
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
    var_13 = ((/* implicit */short) -498000100);
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */int) var_2)) >> (((/* implicit */int) ((((/* implicit */_Bool) -498000100)) && (((/* implicit */_Bool) var_1))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [(signed char)8] [14ULL]))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_12 [5ULL] [14U] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((-498000100), (min((-1502468773), (((/* implicit */int) (signed char)13)))))))));
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [10])) / (((/* implicit */int) arr_7 [i_2 + 1] [i_3] [(_Bool)1])))), ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_2 - 2] [i_3] [4U] [4U])) : (((/* implicit */int) arr_10 [i_2 - 3] [i_2] [(short)12] [(short)10])))))))));
                        var_18 ^= ((/* implicit */signed char) arr_1 [11ULL]);
                    }
                    for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_1] [13U] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 3])) : ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) min((arr_7 [i_0 + 1] [i_2] [i_0]), (((/* implicit */short) arr_10 [i_4] [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))));
                    }
                    var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)4] [(signed char)0])) : (((/* implicit */int) ((unsigned short) var_8)))))) ? (max((arr_14 [i_2] [i_2] [i_2 - 3] [i_0 - 1] [i_0]), (arr_14 [i_2] [i_2 - 2] [i_2 + 1] [i_0 + 1] [i_0]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)0)))) / ((+(((/* implicit */int) (short)32764)))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned long long int) arr_16 [i_6] [i_5] [i_2] [i_1] [i_0 - 1]);
                                arr_23 [i_0] [i_2] [i_6] [i_5] [i_2] [i_1] [i_0] = ((signed char) max((((/* implicit */long long int) (unsigned short)21154)), (arr_18 [i_0] [i_0 - 1] [i_2 - 3] [i_5 + 2])));
                                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_21 [i_2 - 2] [i_0 - 1] [i_0] [i_0] [i_0] [14U])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (signed char)13)), (var_0)))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65158)) && (((/* implicit */_Bool) (short)0)))))))) && (((/* implicit */_Bool) ((unsigned int) max((arr_10 [i_7] [i_7] [i_7] [12U]), ((signed char)5)))))));
        var_23 *= ((/* implicit */short) (-(((/* implicit */int) (signed char)9))));
        var_24 = ((/* implicit */signed char) (+((-(((1740593909) / (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7]))))))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        arr_31 [i_8] = ((/* implicit */unsigned int) var_5);
        var_25 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_30 [i_8]))));
        var_26 ^= ((/* implicit */short) arr_28 [20U]);
    }
    for (unsigned int i_9 = 3; i_9 < 12; i_9 += 2) 
    {
        var_27 = (+((-(((/* implicit */int) ((unsigned short) (signed char)-101))))));
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (unsigned int i_12 = 1; i_12 < 12; i_12 += 3) 
                {
                    {
                        var_28 ^= (~((-(arr_41 [i_9 + 1] [i_9 - 2] [i_9 - 2] [i_11 + 1] [i_12 + 1]))));
                        arr_43 [i_9] [i_9] = min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-14)) + (2147483647))) >> (((/* implicit */int) ((-498000105) < (((/* implicit */int) arr_28 [(short)19])))))))), ((-((-(6917529027641081856ULL))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    {
                        var_29 *= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)13))));
                        arr_50 [i_9] = ((/* implicit */signed char) max((((/* implicit */int) arr_33 [i_9])), (((((/* implicit */_Bool) (unsigned short)2032)) ? (((/* implicit */int) (signed char)-23)) : (-433557531)))));
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (((!(((/* implicit */_Bool) var_3)))) ? ((-(((/* implicit */int) (signed char)-92)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7937287400144504831ULL))))))))));
                    }
                } 
            } 
            arr_51 [i_9] [i_10] [11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) arr_30 [i_9 + 1])) : (((/* implicit */int) arr_30 [i_9 - 1]))))) <= ((~(532676608ULL)))));
            var_31 = max((var_4), (((/* implicit */unsigned long long int) ((arr_47 [i_9 + 2] [(short)0] [i_10]) + (arr_25 [i_9 - 2] [i_9])))));
            arr_52 [i_9] [i_9] = ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_39 [i_10])))))) ? (((/* implicit */int) ((signed char) var_5))) : ((+(((/* implicit */int) ((_Bool) arr_0 [i_9] [i_9]))))));
        }
        for (unsigned long long int i_15 = 4; i_15 < 13; i_15 += 1) 
        {
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_27 [(unsigned short)6] [i_15])) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) (_Bool)1))))))), (arr_38 [i_9] [i_9] [(_Bool)1]))))));
            arr_55 [i_9] = ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) ((short) 0)))) & (((12LL) - (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9]))))))), (((/* implicit */long long int) min((2060915792U), (((((/* implicit */_Bool) (signed char)123)) ? (123894249U) : (((/* implicit */unsigned int) -2147483642)))))))));
        }
        var_33 &= (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_9] [i_9 - 3] [i_9 + 2] [i_9])) % (arr_9 [i_9 + 2])))));
    }
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */int) var_8)) + (((/* implicit */int) (signed char)-6))))))) ? (min((var_4), (((/* implicit */unsigned long long int) (+(var_7)))))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_0)), (1613666554))), (((((/* implicit */_Bool) 4270135892U)) ? (((/* implicit */int) (short)-28)) : (((/* implicit */int) (signed char)23)))))))));
}

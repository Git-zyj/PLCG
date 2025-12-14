/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231909
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
    var_11 = ((/* implicit */long long int) max(((+(((/* implicit */int) min((((/* implicit */short) var_9)), ((short)7102)))))), (min((((/* implicit */int) var_5)), (var_4)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_12 [i_0] [i_2] [i_1] [i_0] &= ((/* implicit */unsigned int) (~(((unsigned long long int) (~(2815494381621602189LL))))));
                    arr_13 [i_0] [i_2] = var_0;
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        arr_16 [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */short) (signed char)77)), (max((arr_9 [i_0]), (arr_9 [i_2])))));
                        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_2))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) 4191129485875752679ULL);
                            arr_19 [i_0] [i_0] [i_1] [i_0] [i_3] [i_3] [i_0] |= ((/* implicit */short) var_3);
                            arr_20 [i_0] [i_1] [i_2] [(_Bool)0] [i_2] = arr_9 [i_0];
                            arr_21 [i_0] [i_0] [i_2] [i_2] [i_2] = var_8;
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_0] [7U] [i_0] [i_0] [i_0]))) ^ (((/* implicit */int) ((arr_14 [i_3] [i_1] [i_2]) < (((/* implicit */unsigned long long int) var_8)))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)7102))) : (((((/* implicit */_Bool) arr_18 [0] [i_3])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))))));
                            arr_25 [i_2] [i_1] [i_1] [i_3] [i_5] = ((/* implicit */int) arr_9 [i_1]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_2 [i_2])))))) ? (max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])), (arr_24 [i_0] [i_1] [i_0] [i_3] [i_6]))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2] [i_0] [i_0])) ? (79259487) : (((/* implicit */int) var_2)))))))));
                            var_15 = ((/* implicit */unsigned long long int) (unsigned char)89);
                        }
                        arr_31 [i_2] = ((/* implicit */int) min(((-(min((15064191773210027015ULL), (((/* implicit */unsigned long long int) (short)6356)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-12311))) & (2815494381621602189LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7100)) ? (((/* implicit */int) var_0)) : (var_4)))))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_14 [6ULL] [i_2] [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7095)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_28 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] [i_0])))))))) ? (((/* implicit */int) (short)-7100)) : ((((-(((/* implicit */int) var_9)))) / (((((/* implicit */int) var_0)) - (((/* implicit */int) var_10))))))));
                            var_17 = ((/* implicit */_Bool) var_7);
                        }
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            arr_41 [i_2] = ((/* implicit */long long int) var_4);
                            arr_42 [i_0] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2815494381621602189LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)119)))) + (((((/* implicit */int) var_10)) & (((/* implicit */int) var_2))))))) | ((((!(((/* implicit */_Bool) (short)7102)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (1575114899U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [i_7]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))));
                            var_18 = ((/* implicit */short) var_6);
                            var_19 = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_27 [i_7] [i_1] [i_0])))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -2815494381621602186LL)) : (11218878602529208590ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (short)-19312)))))))) ^ (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_9 [i_0])))))));
                            var_20 ^= ((/* implicit */unsigned char) var_7);
                        }
                        arr_43 [0LL] [i_7] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (-2815494381621602194LL))))))), ((((!(((/* implicit */_Bool) (unsigned char)208)))) ? (arr_4 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                        arr_44 [i_7] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((arr_22 [i_0] [i_0] [i_2] [i_0] [i_1]) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))) : (-8727187943785909721LL))) : (((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) (unsigned short)61569))), (((((/* implicit */_Bool) 3951465123652459058LL)) ? (((/* implicit */int) arr_6 [i_7] [i_2] [i_1])) : (((/* implicit */int) var_10)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_21 += ((/* implicit */short) (-(((/* implicit */int) var_6))));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_22 += arr_1 [i_0];
                            var_23 = ((/* implicit */_Bool) 3012572693U);
                            arr_51 [i_0] [i_1] [i_2] [i_2] [i_10] [i_0] [i_11] = ((/* implicit */unsigned long long int) var_2);
                        }
                    }
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) var_5);
                            arr_57 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))) / (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_13]))) | (arr_47 [i_0] [i_1] [i_2] [i_2] [i_13])))))));
                        }
                        var_25 *= ((/* implicit */unsigned char) (+(((max((var_8), (((/* implicit */long long int) var_2)))) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_49 [i_1]), (arr_49 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_2])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) var_5))))) : (((long long int) 7026920334354343117LL))));
                        var_27 = ((/* implicit */long long int) arr_15 [i_14] [i_1] [i_14] [i_14]);
                        var_28 = var_1;
                    }
                }
            } 
        } 
    }
    for (long long int i_15 = 0; i_15 < 13; i_15 += 1) 
    {
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) min((arr_22 [i_15] [i_15] [i_15] [i_15] [i_15]), ((_Bool)0))))))))));
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned int) var_2);
                        var_31 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
        } 
    }
}

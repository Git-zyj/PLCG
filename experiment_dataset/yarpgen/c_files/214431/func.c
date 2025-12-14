/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214431
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                            {
                                var_11 = ((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) arr_9 [i_3 - 2] [13U] [i_2] [i_3 - 1]))));
                                var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((arr_12 [i_3 + 2] [i_3] [i_3] [i_3 - 2] [i_3]), (((/* implicit */unsigned int) var_3)))))));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((_Bool) ((_Bool) var_7)));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 310444627U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_5])) : (((/* implicit */int) arr_4 [i_0]))))) : (arr_9 [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 2])));
                                var_14 = ((/* implicit */unsigned short) var_1);
                                var_15 = ((/* implicit */unsigned int) var_7);
                            }
                            arr_17 [(unsigned short)6] [i_1] [i_2] [8ULL] &= ((/* implicit */unsigned char) ((var_0) ? (((((/* implicit */_Bool) arr_12 [15LL] [i_3 - 2] [i_3 - 2] [i_3] [i_3 + 2])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [3ULL] [(signed char)15])) : (10244322767495581182ULL))) : (4503049871556608ULL)));
                        }
                    } 
                } 
                arr_18 [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (arr_12 [i_0] [i_1] [i_1] [i_1] [i_1]))))));
                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((4405875867552807101ULL) << (((arr_9 [i_1] [i_1] [i_0] [i_0]) - (3152649241U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_9 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) -1816916430)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [(short)15] [i_0])) : (var_6)))));
                var_17 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [(_Bool)1] [i_1])))) ? (((/* implicit */int) arr_15 [i_0] [(signed char)4] [(signed char)4] [i_1] [i_0] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((unsigned int) 4503049871556608ULL))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) 
    {
        var_18 = ((/* implicit */short) arr_19 [i_6 - 1] [i_6]);
        arr_21 [i_6 - 2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) 1816916429)) ? (1816916436) : (((/* implicit */int) (unsigned short)16770))))));
        arr_22 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) arr_20 [i_6 + 3] [i_6 + 4])) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [13LL] [i_6 + 4])) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) 18442241023837995007ULL)) ? (12U) : (((/* implicit */unsigned int) 1308550981))))));
    }
    for (short i_7 = 3; i_7 < 15; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) arr_2 [i_7]);
                    arr_31 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_7 - 1] [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -133770583)) || (((/* implicit */_Bool) 1141920440U)))))) : (max((13341178245268338116ULL), (((/* implicit */unsigned long long int) 4294967273U))))));
                    var_20 = ((/* implicit */short) 1816916446);
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_8 [i_7] [i_7 + 2] [i_7] [(_Bool)1] [i_7]))));
        /* LoopSeq 4 */
        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) 1816916430)), (3153046855U)));
            var_23 &= ((/* implicit */long long int) var_9);
            arr_36 [i_7] [i_10] = ((/* implicit */signed char) arr_11 [(short)14]);
        }
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            arr_39 [i_11] [i_11] = ((/* implicit */unsigned char) var_10);
            arr_40 [i_11] [i_11] [i_11] = ((/* implicit */int) (short)-27127);
            var_24 = var_4;
        }
        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 3) 
        {
            var_25 -= ((/* implicit */long long int) arr_7 [i_7]);
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_2 [i_12]))));
        }
        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
        {
            arr_48 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_10 [i_13] [i_13] [i_7 - 1] [i_7] [i_7])) : (((/* implicit */int) (unsigned char)235))))) ? (((((/* implicit */_Bool) arr_10 [i_13] [i_13] [i_13] [i_13] [i_7 - 3])) ? (((/* implicit */int) arr_10 [i_13] [1LL] [i_7 - 1] [(unsigned short)5] [i_7 + 1])) : (((/* implicit */int) arr_10 [i_7 - 2] [i_13] [i_13] [i_7 - 2] [i_7 - 2])))) : (((((/* implicit */_Bool) arr_10 [i_7] [i_7 - 2] [i_13] [i_13] [i_13])) ? (((/* implicit */int) (unsigned short)22202)) : (((/* implicit */int) arr_26 [i_7 - 3]))))));
            var_27 = ((/* implicit */unsigned int) arr_43 [i_7 + 1]);
        }
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (int i_16 = 1; i_16 < 13; i_16 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        for (int i_18 = 0; i_18 < 14; i_18 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (~(2913807922U))))));
                                var_29 = ((/* implicit */unsigned long long int) arr_24 [i_16 + 1]);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) ((1900048716518534885ULL) * (((((628978441U) >= (310444627U))) ? (var_6) : (((/* implicit */unsigned long long int) arr_1 [(short)3]))))));
                    arr_62 [i_15] [i_15] [i_16] [(unsigned short)6] |= ((/* implicit */unsigned int) (((-2147483647 - 1)) > ((-(arr_16 [i_16 + 1] [(short)5] [i_16 + 1] [i_16 - 1] [i_16 - 1])))));
                }
                var_31 = ((/* implicit */int) (~(min((arr_37 [i_14] [i_14] [i_14]), (arr_37 [i_15] [i_15] [i_14])))));
            }
        } 
    } 
}

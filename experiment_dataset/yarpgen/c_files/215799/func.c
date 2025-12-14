/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215799
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [(short)14] = arr_0 [i_0];
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)93)))) * (((((/* implicit */_Bool) -83900838)) ? (((/* implicit */int) (short)-9532)) : (-83900827)))));
            var_14 = ((/* implicit */int) (!(arr_5 [9ULL])));
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */unsigned int) max(((-(((int) arr_7 [i_0])))), ((~((+(-1908446813)))))));
            var_15 -= ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << ((((((+(((/* implicit */int) arr_0 [i_2])))) + (15854))) - (10))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (arr_1 [i_0] [i_0])))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0])) != (((/* implicit */int) ((short) 1312263301U))))))));
                            arr_16 [i_4] = ((/* implicit */int) ((unsigned short) var_5));
                            var_17 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -83900838)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3140837556843409218ULL)) ? (((/* implicit */int) (unsigned short)16243)) : (arr_1 [i_0] [i_2])))))))) & (((((/* implicit */_Bool) -238795470)) ? (min((arr_15 [i_0] [i_0]), (((/* implicit */unsigned long long int) 268435456U)))) : (((/* implicit */unsigned long long int) 83900827)))));
                        }
                    } 
                } 
                var_18 = min(((-(((/* implicit */int) arr_0 [i_2])))), (((((/* implicit */int) arr_0 [i_3])) - (((/* implicit */int) arr_0 [i_0])))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0])) << (((-2054200038) + (2054200051))))))));
            }
            var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) var_10))), (83900828)))), ((-(11157222572978575309ULL)))));
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
        {
            arr_20 [i_0] [10] = ((/* implicit */unsigned int) var_9);
            arr_21 [i_6] [i_0] [i_0] = ((/* implicit */int) max((((arr_12 [i_0] [i_6] [i_6] [i_6]) ? (min((arr_11 [i_0]), (((/* implicit */unsigned int) (unsigned short)65521)))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_0] [i_0]), (((/* implicit */unsigned short) arr_5 [i_0])))))))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) 1892329989)) : (4294967295U)))))));
        }
    }
    for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        arr_25 [i_7 + 2] [i_7] = ((/* implicit */int) ((short) min((arr_15 [i_7] [i_7 - 1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-16531)) ? (((/* implicit */unsigned long long int) 1577042157)) : (15364315313181731750ULL))))))));
    }
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (signed char)-86))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -83900827))));
        arr_28 [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_27 [i_8])) ? (11382628167705762308ULL) : (((/* implicit */unsigned long long int) var_0)))) : (((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8]))) : (var_11)))));
        /* LoopSeq 1 */
        for (int i_9 = 4; i_9 < 22; i_9 += 2) 
        {
            arr_32 [i_8] [0] [i_9 + 1] = ((/* implicit */unsigned long long int) arr_31 [i_9 + 2] [i_9 - 1]);
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) 2147483647)) < (16390826017334210256ULL))))));
            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 11746930813641834891ULL))));
            var_26 &= ((/* implicit */unsigned int) var_4);
        }
        var_27 += ((/* implicit */unsigned int) arr_31 [i_8] [i_8]);
    }
}

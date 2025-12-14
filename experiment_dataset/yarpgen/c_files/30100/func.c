/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30100
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), ((_Bool)1)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_3])) : (2010055597))) - ((~(((/* implicit */int) (unsigned char)255))))));
                        var_21 = ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
        } 
        var_22 *= ((/* implicit */short) ((((arr_3 [i_0] [i_0]) + (9223372036854775807LL))) << (((((arr_3 [i_0] [i_0]) + (1028375868552891312LL))) - (63LL)))));
    }
    for (unsigned char i_4 = 3; i_4 < 22; i_4 += 2) 
    {
        var_23 *= ((signed char) (~((~(((/* implicit */int) (_Bool)1))))));
        var_24 = var_17;
        var_25 -= ((((/* implicit */int) var_0)) >= ((~(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))));
        var_26 = ((/* implicit */unsigned long long int) (~((~(arr_12 [i_4 + 1])))));
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_27 -= ((/* implicit */long long int) arr_9 [1U] [i_5]);
        var_28 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((unsigned long long int) arr_12 [i_5])) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)-100)) + (((/* implicit */int) arr_10 [i_5])))), (((((/* implicit */int) var_11)) * (((/* implicit */int) arr_11 [i_5])))))))));
    }
    for (signed char i_6 = 1; i_6 < 15; i_6 += 2) 
    {
        arr_18 [i_6 + 1] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) ((_Bool) arr_17 [(short)16]))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))) : (arr_16 [i_6]))))), (((/* implicit */unsigned long long int) ((long long int) arr_14 [i_6])))));
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_10 [i_6 + 2]))) ? (min((((/* implicit */unsigned long long int) (signed char)80)), (arr_14 [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) ((unsigned char) (_Bool)1)))))))));
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)88)) ? (arr_12 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6])))))))))));
        arr_19 [i_6] = ((/* implicit */unsigned short) ((_Bool) (~(((((/* implicit */_Bool) var_14)) ? (arr_9 [i_6 - 1] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 15; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                {
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_14 [i_7]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6]))) : (arr_7 [i_6] [i_7] [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_6]))) : (arr_14 [i_6]))) : (max((((/* implicit */unsigned long long int) arr_12 [(_Bool)1])), (arr_14 [i_8])))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (signed char i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_23 [i_7] [i_8])) : (((/* implicit */int) max(((unsigned short)2456), (((/* implicit */unsigned short) (_Bool)0)))))))), (1U)));
                                var_33 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_9])) ? (arr_30 [i_6] [i_7 + 2] [i_7] [i_8] [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6] [i_8] [(signed char)11]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)249)), (810841435U))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 2147483647LL)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (_Bool)1)))))) : (((int) arr_28 [i_7 + 1] [i_6 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_34 = ((/* implicit */_Bool) var_17);
    var_35 = min((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_11))))))), (min((var_7), (((/* implicit */unsigned long long int) var_2)))));
    var_36 = ((/* implicit */unsigned long long int) var_6);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31109
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
    var_11 ^= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19912))) == (4294967295U));
    var_12 = ((((/* implicit */_Bool) (((~(2147483648U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483648U)))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18U)) || (((/* implicit */_Bool) (unsigned short)511))))), ((~(4294967292U))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (-(arr_1 [i_0])));
        var_14 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
        var_15 += ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_4 [i_0] = arr_0 [i_0];
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_1] [i_1] [i_1] = ((((4U) > (((/* implicit */unsigned int) 253952)))) ? (7U) : (131071U));
                            arr_19 [i_1] [i_2] [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((4294967282U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248)))));
                        }
                        arr_20 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_15 [i_3] [i_4] [i_3] [i_4] [i_2]) == (arr_15 [i_1] [i_2] [i_3] [i_4] [i_4])));
                        arr_21 [i_1] [i_1] [i_3] [i_2] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_4]))) : (1747507893U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 705134875)) ? (arr_9 [i_1] [i_1]) : (arr_9 [i_1] [i_2]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    arr_27 [i_6] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned short)4096))))) != (arr_16 [i_1] [i_1] [i_7] [i_7] [i_7] [i_6])));
                    arr_28 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_7]);
                }
            } 
        } 
        arr_29 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)16))))) ? (((0) | (((/* implicit */int) arr_22 [i_1] [i_1])))) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_22 [i_1] [i_1]))))));
        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_1] [i_1] [i_1])) ^ (((/* implicit */int) (unsigned short)11))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43)))))));
    }
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (-7568150956116946624LL) : (8644915189456606251LL)))) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */unsigned int) 1046573336)) : (2787781647U)))))))));
    var_18 &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) << ((((-(((((/* implicit */int) var_3)) ^ (var_9))))) + (548036336)))));
}

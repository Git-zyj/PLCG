/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207429
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
    var_18 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((var_1) ^ (((/* implicit */int) var_11))))) >= (var_9)))), (((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (var_1)))))));
    var_19 = ((((/* implicit */_Bool) 2707928345U)) ? (min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) -904043484690560995LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17)))))) : (((/* implicit */int) (signed char)-29)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 2] [i_1] [(short)8] [i_0 - 2] = var_16;
                    var_20 = ((/* implicit */signed char) var_3);
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (var_15))))) : (var_6))), (((/* implicit */unsigned int) ((min((var_1), (((/* implicit */int) var_2)))) - (((var_14) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_22 = ((/* implicit */_Bool) var_6);
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) : (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_16))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5)))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54092))) != (1587038950U)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (327683349U)))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_13))))) : (((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))))))));
            arr_15 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))));
            /* LoopSeq 1 */
            for (signed char i_5 = 2; i_5 < 9; i_5 += 2) 
            {
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_12)) : (var_1)));
                var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7))));
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((var_3) - (720817674U)))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))));
            }
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 1236628569563798583LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-92))))));
                        arr_23 [(_Bool)1] [(_Bool)1] [i_4] [i_6] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) || (((((/* implicit */int) (signed char)126)) <= (((/* implicit */int) (_Bool)1))))));
                        arr_24 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        var_29 ^= ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_16)) : (var_9))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 2707928345U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */_Bool) var_13);
                            var_31 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) - (1587038950U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((2707928345U) + (1587038950U)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15)))))))));
                        }
                        arr_34 [i_10] [i_3] = ((/* implicit */unsigned int) ((((var_6) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) ? (var_1) : (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))) / (min((var_1), (((/* implicit */int) var_7))))))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_9) <= (((/* implicit */long long int) var_16))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) var_7))))) ? (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) 1587038951U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35703))) : (193285294U)))));
                    }
                } 
            } 
        } 
    }
}

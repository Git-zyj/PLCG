/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211746
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
    var_10 -= ((/* implicit */long long int) var_4);
    var_11 &= ((/* implicit */long long int) (((-(959002434))) <= (((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (signed char)63)))) : (((/* implicit */int) max((var_2), ((unsigned char)184))))))));
    var_12 = ((/* implicit */long long int) var_5);
    var_13 = ((/* implicit */long long int) min((((/* implicit */int) var_3)), ((+(((((/* implicit */int) var_3)) >> (((-1477939130) + (1477939133)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-25041)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)14987))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) (short)0))));
        var_15 = ((/* implicit */int) var_6);
        var_16 ^= ((/* implicit */int) (unsigned char)227);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_5 [i_1] = arr_3 [i_1];
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1])) / ((+(2112706776)))));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (unsigned int i_4 = 3; i_4 < 8; i_4 += 3) 
            {
                {
                    arr_14 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((_Bool) arr_9 [i_4 - 3] [i_3]));
                    arr_15 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) min(((-((-(((/* implicit */int) (signed char)54)))))), (((((/* implicit */_Bool) max((131071LL), (((/* implicit */long long int) 959002434))))) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (signed char)-80))))));
                }
            } 
        } 
        arr_16 [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_2] [i_2])) + (((/* implicit */int) arr_9 [i_2] [i_2])))) - (((((/* implicit */int) (short)-14989)) + (var_7)))));
        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2]))) ^ (((long long int) var_3)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_2] [i_2])))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7340998809690962859ULL)) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) -959002435)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)124))))))) ? (-959002426) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) > (-697493095))))));
        var_19 = ((/* implicit */_Bool) ((var_8) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_8 [(short)3])))))));
    }
    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_20 = ((/* implicit */signed char) arr_17 [i_5]);
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)124)) || (((/* implicit */_Bool) arr_18 [i_5])))))));
    }
}

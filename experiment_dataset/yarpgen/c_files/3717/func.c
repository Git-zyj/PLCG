/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3717
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -5957478385591570217LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_14 = min((max((-5957478385591570236LL), (((/* implicit */long long int) (_Bool)1)))), (((arr_0 [i_0 + 1]) - (((/* implicit */long long int) arr_1 [i_0 - 2])))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3645898783296972731LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-39))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_16 ^= ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) arr_3 [i_1])) : (var_6));
        var_17 = ((/* implicit */int) var_0);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned int) (~(var_3)));
        var_18 = ((arr_2 [i_2]) < (arr_1 [i_2]));
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                {
                    var_19 ^= ((long long int) 5957478385591570190LL);
                    var_20 -= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (unsigned short)57400)) >> (((-3645898783296972729LL) + (3645898783296972755LL))))));
                    var_21 = ((/* implicit */unsigned short) ((1903763666) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65508)) || (((/* implicit */_Bool) (signed char)-14)))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(var_9))), (((var_3) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) -480868718)) ? (((/* implicit */long long int) 4294967294U)) : (-3645898783296972731LL))) : (((/* implicit */long long int) min((4294967295U), (0U)))))))));
    var_23 ^= var_11;
    var_24 = ((/* implicit */_Bool) var_4);
}

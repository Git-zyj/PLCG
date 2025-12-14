/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53137
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
    var_18 &= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) var_11)) < (((((/* implicit */int) (unsigned short)384)) % (((/* implicit */int) (signed char)31))))))), (((long long int) 9223372036854775807LL))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */_Bool) -9223372036854775789LL);
                    var_20 *= max((((((/* implicit */_Bool) -9223372036854775807LL)) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 2]))), (min((((/* implicit */unsigned long long int) -9223372036854775807LL)), (arr_3 [i_1 - 1]))));
                    var_21 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) var_16)) ? (10803486722994445346ULL) : (2594250024623264753ULL))) : (((/* implicit */unsigned long long int) var_0)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) -1251181903);
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_23 = ((/* implicit */short) max((9223372036854775806LL), (((/* implicit */long long int) (-(((((/* implicit */_Bool) -1251181905)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))))));
        var_24 = ((/* implicit */_Bool) (((((-(((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) var_12)))))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
    }
    for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
    {
        var_25 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (min((((long long int) (unsigned short)47771)), (arr_13 [i_4 + 2] [i_4 + 3])))));
        var_26 = ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_14 [i_4 + 2] [10U]) : (((/* implicit */int) (unsigned char)67))))), (((((/* implicit */_Bool) var_11)) ? (var_10) : (-670779042102164542LL))))));
    }
}

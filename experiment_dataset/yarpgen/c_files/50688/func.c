/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50688
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -17LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (8LL)))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((-9LL) + (12LL)))))) || (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) >= (var_6))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-17557)) ^ (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) | (-20LL)))) ? (((/* implicit */int) max(((unsigned short)54616), (((/* implicit */unsigned short) var_1))))) : (((((/* implicit */int) (signed char)0)) | (((/* implicit */int) var_4))))))));
        var_14 -= ((/* implicit */unsigned char) min((((0LL) + (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_0))))) - (((((/* implicit */int) (signed char)0)) + (((/* implicit */int) var_2)))))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_3))))) != (((((/* implicit */_Bool) -20LL)) ? (-2099811652212388721LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        var_16 = ((((/* implicit */unsigned long long int) ((var_9) / (((((/* implicit */int) (short)17552)) * (((/* implicit */int) var_1))))))) * (((((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17557))))));
        arr_6 [i_1] &= ((/* implicit */_Bool) (+(((/* implicit */int) (((+(1943762350))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (-17LL)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) (short)-16720)) & (((/* implicit */int) (_Bool)1)))) >> ((((+(((/* implicit */int) var_7)))) - (72))))) - (((((((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)159)))) + (2147483647))) >> (((((var_6) * (((/* implicit */unsigned long long int) -6133383198543712647LL)))) - (17493592820825854610ULL)))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_17 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) + (-20LL)));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (1715928098) : (((/* implicit */int) var_0))));
    }
    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (-1715928100)))) ? (-1715928119) : (((/* implicit */int) (_Bool)1))));
        var_20 = ((/* implicit */unsigned char) 18446744073709551614ULL);
    }
    var_21 = ((/* implicit */long long int) var_7);
}

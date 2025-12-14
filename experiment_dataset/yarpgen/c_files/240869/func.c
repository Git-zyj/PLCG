/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240869
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = ((((/* implicit */_Bool) (~(min((4003017352334372959LL), (((/* implicit */long long int) var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_0)), (arr_0 [i_0 + 1] [i_0 + 1]))))))) : (((/* implicit */int) var_3)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) >= (((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (max((((/* implicit */long long int) 1168263324)), (4003017352334372959LL))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) ^ (4003017352334372967LL)))))));
            var_14 = arr_0 [i_0] [14ULL];
        }
        arr_7 [i_0 + 1] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_11)) ? (arr_4 [i_0]) : (((/* implicit */int) var_3)))))) ? (arr_5 [i_0 + 1] [i_0 + 1]) : (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)69))) : (min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (4003017352334372959LL)))))));
        var_15 = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
    }
    var_16 = ((var_6) ? (((/* implicit */int) (short)29025)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) -4003017352334372950LL))))) > (((/* implicit */int) (unsigned short)41662))))));
    var_17 += ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41664)) ? (-4003017352334372919LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23897)))))) || (((/* implicit */_Bool) (unsigned short)41662)))) ? (((var_2) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) == (((/* implicit */int) var_1)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_2)))))));
    var_18 = ((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) == (((var_6) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))));
}

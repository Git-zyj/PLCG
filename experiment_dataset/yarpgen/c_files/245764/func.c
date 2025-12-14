/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245764
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
    var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13758283528371670293ULL)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_15)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)65527)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned char)31)))))) & (((/* implicit */int) min((((/* implicit */unsigned short) ((18446744073709551609ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))), ((unsigned short)59347))))));
                arr_4 [i_0 - 1] = ((/* implicit */signed char) min((9223372036854775803LL), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_3 [i_0] [i_0])), (var_2))))));
                var_22 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_1])) : (((/* implicit */int) var_16))))) : (min((var_3), (((/* implicit */unsigned int) var_0)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((var_4) << (((((((/* implicit */int) var_1)) >> (((/* implicit */int) var_7)))) >> (((((((/* implicit */_Bool) (unsigned short)9)) ? (2047U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))))) - (2022U)))))));
    var_24 = ((/* implicit */unsigned short) (unsigned char)255);
}

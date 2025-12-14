/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247723
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)8)) ? (77216119) : (((/* implicit */int) (unsigned char)105))));
        var_21 = ((/* implicit */signed char) (~(((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_14))))))));
        var_22 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [10ULL])) ? (((/* implicit */unsigned long long int) ((long long int) var_19))) : (max((((/* implicit */unsigned long long int) var_4)), (var_13)))))) ? (((((/* implicit */_Bool) (unsigned char)237)) ? (2853136408127161327LL) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)16384), (((/* implicit */unsigned short) (_Bool)0)))))))) : (((long long int) arr_0 [(signed char)0])));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_16))) >> (((arr_1 [i_0] [(unsigned char)12]) + (1798445601835402575LL)))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 2752116899236294034LL)) : (var_7))))) : (var_14))))));
    }
    var_24 += var_18;
}

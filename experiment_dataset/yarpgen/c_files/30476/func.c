/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30476
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
    var_19 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)211))))) : ((+(-4248747895851546317LL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_11))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) -2147483619))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(15ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)24))))) : (((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((/* implicit */unsigned long long int) var_8)) : ((~(var_13)))))) ? (32512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1451333136)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_14)))) : (var_18)))) ? (max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) var_13)) ? (133520151U) : (var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_13) : (var_2)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_1))) : (var_2)));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11)))) ? ((-(0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
}

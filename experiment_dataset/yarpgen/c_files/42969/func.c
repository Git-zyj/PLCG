/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42969
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
    var_17 = ((/* implicit */unsigned short) 2147483648U);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((var_1), (((/* implicit */long long int) var_13)))) % (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))))))) ? (max((((/* implicit */long long int) var_9)), (var_7))) : (((((/* implicit */_Bool) (unsigned char)145)) ? (((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))))) : (((/* implicit */long long int) ((int) (unsigned char)253)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((max((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_3)), (var_0)))))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_5)))))) - (96)))));
    }
    var_19 = ((/* implicit */_Bool) 4398046511088LL);
}

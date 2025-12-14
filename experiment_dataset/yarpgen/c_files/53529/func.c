/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53529
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
    var_11 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (short)32640)) ? (((/* implicit */int) (short)-32640)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) (short)-32641)) : (((/* implicit */int) var_9))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 2965365977U)) ? (8956996865426699725ULL) : (18446744073709551586ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? ((-(var_5))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
                var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13249)))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)28690)))) : ((+(((/* implicit */int) (short)32625))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}

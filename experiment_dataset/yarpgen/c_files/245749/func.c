/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245749
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
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((var_2) - (8031029417274323478LL)))))) ? (((/* implicit */long long int) (-(4294967276U)))) : (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    var_15 *= ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((min((((((/* implicit */int) (unsigned short)49895)) ^ (((/* implicit */int) arr_1 [i_1] [i_0])))), (((int) arr_2 [i_0] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [1] [i_0])) ? (((/* implicit */int) (unsigned char)233)) : (arr_0 [i_0])))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) arr_1 [i_1] [i_0])))))))));
                var_17 -= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_18 |= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15641)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))))), (max((min((((/* implicit */unsigned int) (unsigned char)247)), (var_9))), (((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned char) (_Bool)1)))))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((int) (signed char)0)))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4456
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
    var_17 |= ((/* implicit */long long int) (~(var_9)));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_5) | (((/* implicit */int) var_8)))) & (((/* implicit */int) ((9073126194125903036ULL) == (((/* implicit */unsigned long long int) -669787334)))))))) ? (((((/* implicit */_Bool) 249547258)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) max((-669787334), (((((/* implicit */_Bool) (short)13783)) ? (((/* implicit */int) (_Bool)1)) : (669787334))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((signed char) min((((((/* implicit */unsigned long long int) 8572010462952746955LL)) * (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_19 |= ((((/* implicit */int) ((unsigned char) 8572010462952746955LL))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned char)128)))))) >= (((unsigned int) -7422739240102701174LL))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) var_2)))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) var_16);
        var_21 -= ((/* implicit */unsigned long long int) (+(((unsigned int) arr_7 [i_1]))));
    }
}

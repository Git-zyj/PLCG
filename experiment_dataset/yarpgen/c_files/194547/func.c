/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194547
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_2);
        arr_3 [i_0] [i_0] = ((min((arr_0 [i_0]), (arr_0 [i_0]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) - (arr_1 [(unsigned char)2]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1555))))));
    }
    var_14 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14501))) : (((4065875999U) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) var_10)));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))) == (((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned long long int) var_0)), (0ULL)))))));
}

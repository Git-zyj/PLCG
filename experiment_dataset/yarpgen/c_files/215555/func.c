/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215555
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))));
    var_15 -= ((/* implicit */int) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (14406000262950050910ULL))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((unsigned int) (unsigned char)15);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2476067678U)) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (unsigned short)31153))));
    }
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31168)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31162))) : (2555665116U)))))))));
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1])) != (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1])) < (((/* implicit */int) (unsigned short)34371)))))));
    }
    var_17 = ((/* implicit */unsigned char) var_5);
    var_18 = ((/* implicit */unsigned long long int) ((unsigned int) min((-9223372036854775787LL), (((/* implicit */long long int) (unsigned short)57833)))));
}

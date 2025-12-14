/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203391
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
    var_19 = min((((long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (325038907U)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((var_3) < (((/* implicit */unsigned long long int) var_14))))), ((-(var_2)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] [(signed char)16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9007198986305536LL)))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_16) : (((/* implicit */int) var_9)))))));
        var_20 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)30413)) <= (((/* implicit */int) (unsigned short)45148)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (short)24984))))) : (var_6)));
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)65534)))))))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) >> (((((((/* implicit */_Bool) 3847233023U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))) - (4))))))));
}

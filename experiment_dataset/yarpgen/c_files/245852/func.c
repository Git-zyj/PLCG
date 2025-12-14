/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245852
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
    var_15 = ((/* implicit */signed char) max((((((/* implicit */int) var_4)) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)59188)) : (((/* implicit */int) var_4)))) - (59186))))), (min((min((var_13), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_11))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) & (arr_0 [i_0])));
        var_17 = ((((/* implicit */_Bool) var_4)) ? (var_9) : (arr_0 [i_0]));
    }
    var_18 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */int) ((var_9) != (((/* implicit */long long int) var_3))))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_11))))))), (((unsigned int) (+(((/* implicit */int) (unsigned short)4088)))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) == (1858840170U)));
    var_20 *= ((/* implicit */_Bool) var_12);
}

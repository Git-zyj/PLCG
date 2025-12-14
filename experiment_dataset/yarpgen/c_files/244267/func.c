/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244267
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
    var_11 += ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5)))))), (((9620108240452298801ULL) / (((/* implicit */unsigned long long int) var_10))))));
    var_12 = ((((/* implicit */_Bool) var_1)) ? (max((((8543005805195384749LL) ^ (((/* implicit */long long int) var_10)))), (((((/* implicit */_Bool) -8543005805195384750LL)) ? (-8543005805195384750LL) : (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) | (8543005805195384750LL)));
        var_14 = ((/* implicit */unsigned char) -1067220746);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
        {
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (35184372088831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39)))));
            var_16 = ((/* implicit */_Bool) (~(1765199829)));
            arr_9 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1067220746)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (8543005805195384749LL)));
        }
        arr_10 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535))));
        var_17 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
    }
    var_18 &= ((/* implicit */long long int) var_0);
}

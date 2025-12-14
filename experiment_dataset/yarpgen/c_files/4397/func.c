/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4397
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
    var_17 &= ((/* implicit */short) var_13);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(2014194389)))) > ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) ((unsigned char) var_0));
        arr_3 [i_0] = ((/* implicit */signed char) (-2147483647 - 1));
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((0U) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((long long int) var_12))));
}

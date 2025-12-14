/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39170
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
    var_15 -= min((var_9), (((/* implicit */int) ((((/* implicit */int) min(((unsigned char)13), (((/* implicit */unsigned char) (_Bool)0))))) <= (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_16 = (-(max(((-(((/* implicit */int) var_5)))), ((+(((/* implicit */int) (unsigned char)18)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (+((-2147483647 - 1))));
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) var_6))))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}

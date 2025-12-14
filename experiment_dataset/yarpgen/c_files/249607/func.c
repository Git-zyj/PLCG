/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249607
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
    var_10 = var_2;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        var_11 = ((/* implicit */long long int) max((max((2097151), (((/* implicit */int) (unsigned short)8718)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (2047) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_6);
        arr_5 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 586569787)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2701323103546241597LL))))));
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_0 [i_0]))));
    }
}

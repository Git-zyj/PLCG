/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32422
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
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) (_Bool)1);
        arr_3 [i_0] = ((/* implicit */short) max((13377670785130195190ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_18 += ((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */short) (_Bool)1);
    }
    var_19 ^= ((/* implicit */unsigned char) min((var_4), (((/* implicit */long long int) (~(min((var_0), (((/* implicit */unsigned int) (_Bool)1)))))))));
}

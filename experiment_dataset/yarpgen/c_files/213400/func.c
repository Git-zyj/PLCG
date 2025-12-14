/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213400
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) 0)) : (6014120376448611125LL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_11)))))))));
    }
    var_13 &= 6014120376448611141LL;
    var_14 = ((/* implicit */unsigned long long int) var_6);
    var_15 = ((/* implicit */unsigned char) var_9);
}

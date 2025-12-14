/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204104
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (unsigned char)96);
        var_11 ^= ((/* implicit */unsigned long long int) max((min((-1693932365695135014LL), (((/* implicit */long long int) min(((unsigned char)115), (((/* implicit */unsigned char) (signed char)-64))))))), (((/* implicit */long long int) (signed char)-1))));
    }
    var_12 = max(((unsigned char)111), ((unsigned char)97));
}

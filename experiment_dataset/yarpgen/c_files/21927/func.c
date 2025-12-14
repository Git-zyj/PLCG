/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21927
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))) : (arr_0 [i_0] [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) (signed char)102)))));
        var_19 = ((/* implicit */_Bool) 17862653083193886326ULL);
    }
    var_20 = ((/* implicit */long long int) max(((-(((/* implicit */int) max(((short)7168), (((/* implicit */short) (signed char)102))))))), (var_2)));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30782
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
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0 - 1] = (((+(arr_1 [i_0 - 2]))) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))))));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2147483647))));
        arr_5 [i_0] = min((((/* implicit */long long int) arr_0 [i_0 - 3] [14LL])), ((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0 - 4]) : (arr_1 [i_0]))))));
    }
    var_19 = ((/* implicit */signed char) (+((~(((/* implicit */int) ((var_1) || (((/* implicit */_Bool) (unsigned short)9)))))))));
}

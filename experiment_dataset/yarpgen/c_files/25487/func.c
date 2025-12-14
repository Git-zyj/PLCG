/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25487
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [8LL] = ((/* implicit */long long int) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned long long int) min((((int) arr_0 [9LL])), (((/* implicit */int) (signed char)-37))));
    }
    var_14 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)45))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)39)))))))));
    var_15 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_1)) ? (7728751395078831190ULL) : (((/* implicit */unsigned long long int) -6589925829955143239LL)))))));
}

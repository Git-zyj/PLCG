/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194519
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
    var_10 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))))))));
        var_12 = ((/* implicit */unsigned short) min((arr_2 [i_0] [i_0]), (((/* implicit */short) ((((((/* implicit */_Bool) 10284213549562670218ULL)) ? (-289066598224217892LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))))) > (289066598224217891LL))))));
        var_13 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-3621)) ^ (((/* implicit */int) (signed char)-74)))) | (((/* implicit */int) arr_2 [i_0] [(_Bool)1]))));
    }
}

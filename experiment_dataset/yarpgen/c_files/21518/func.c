/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21518
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
    var_16 = ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */unsigned int) ((((var_10) && ((!(((/* implicit */_Bool) var_0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((var_1), (((/* implicit */unsigned long long int) var_2))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((arr_2 [(signed char)3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1442634086))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) (-(-1LL)))) : (((((/* implicit */_Bool) -1442634086)) ? (((/* implicit */unsigned long long int) -8707604798368894536LL)) : (7203592459759185105ULL)))))) ? (((((/* implicit */unsigned long long int) ((long long int) var_11))) | (((((/* implicit */unsigned long long int) -3LL)) | (4693119830676817273ULL))))) : (((/* implicit */unsigned long long int) max((-8707604798368894519LL), (((/* implicit */long long int) (unsigned short)49572))))));
    }
}

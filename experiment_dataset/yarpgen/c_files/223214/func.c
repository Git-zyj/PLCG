/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223214
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_4 [2LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 458842574095481512ULL)) ? (((long long int) arr_3 [i_0 - 1])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) != (var_3)))))));
        arr_5 [i_0] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((-1062149280276503215LL) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1492870476077764894ULL))))))))) : (var_2)));
    }
}

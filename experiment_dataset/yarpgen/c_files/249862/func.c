/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249862
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((arr_1 [i_0 + 1]) > (min((((/* implicit */unsigned long long int) var_6)), (16532181084973085438ULL)))))), (((long long int) ((short) 1914562988736466161ULL)))));
        var_16 = ((/* implicit */unsigned int) ((unsigned long long int) ((16532181084973085440ULL) % (arr_1 [i_0 - 2]))));
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((16532181084973085440ULL), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 - 1])) ? (1914562988736466171ULL) : (arr_1 [i_1 - 2]))) : (((/* implicit */unsigned long long int) var_8))));
        arr_5 [i_1 + 1] = arr_3 [i_1 + 2];
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */short) ((signed char) ((3437408564393868794ULL) > (((/* implicit */unsigned long long int) -1152682752)))))), (var_7))))));
    }
    var_19 = ((/* implicit */unsigned long long int) var_6);
}

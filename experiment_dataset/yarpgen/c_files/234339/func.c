/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234339
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_19 = ((_Bool) 140736414613504ULL);
        var_20 |= ((/* implicit */unsigned short) max((-6798245785504281798LL), (((/* implicit */long long int) min((((arr_1 [i_0] [(short)6]) - (((/* implicit */int) var_9)))), (((int) (unsigned char)12)))))));
        var_21 = ((/* implicit */_Bool) max((max((max((arr_1 [i_0] [i_0]), (-448096137))), ((-(((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */_Bool) -1584443542142375547LL)) ? (((/* implicit */int) (unsigned char)12)) : (arr_0 [i_0] [i_0]))) & (((/* implicit */int) (unsigned char)12))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) (((~(arr_3 [i_1 - 1] [i_1]))) != ((+(4122424405693434882ULL)))));
        var_23 = ((/* implicit */unsigned short) (~((~(min((arr_1 [i_1 + 2] [i_1]), (arr_1 [i_1] [i_1])))))));
    }
    var_24 = (((+(((((/* implicit */long long int) 1327104843)) / (var_2))))) * (max((((/* implicit */long long int) var_5)), (((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (0LL))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22016
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
    var_20 = ((/* implicit */long long int) 0U);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_1 [i_0])) - (arr_0 [i_0]))), (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)19)))) & (arr_0 [3ULL]))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0]) >> (((arr_1 [i_0]) - (262669540U))))))));
        arr_2 [(unsigned char)10] = ((/* implicit */unsigned short) max((min((((long long int) arr_0 [i_0])), (((/* implicit */long long int) ((unsigned char) arr_1 [i_0]))))), (((((/* implicit */_Bool) -2997327076061065144LL)) ? (((/* implicit */long long int) 3763308946U)) : (-2997327076061065144LL)))));
    }
}

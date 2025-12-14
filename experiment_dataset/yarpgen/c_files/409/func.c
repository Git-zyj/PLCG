/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/409
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [(signed char)0] [i_0] = max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) max((var_14), (arr_1 [i_0])))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((min((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0])))))))));
    }
    var_17 = ((/* implicit */long long int) (-((-(min((((/* implicit */unsigned long long int) var_3)), (var_15)))))));
    var_18 = ((/* implicit */signed char) ((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) 4653291898766835730ULL))))));
}

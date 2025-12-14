/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49156
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
    var_14 = max((((((/* implicit */_Bool) 311112759472047417ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (18446744073709551615ULL)))) ? (var_10) : (min((var_10), (3ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0]))))) ^ (max((2222250122353709124ULL), (((/* implicit */unsigned long long int) arr_2 [i_1]))))));
                var_15 *= 18446744073709551609ULL;
            }
        } 
    } 
}

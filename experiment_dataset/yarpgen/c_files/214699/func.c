/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214699
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) (~(arr_5 [i_0] [i_1] [i_2])));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(1826651105U)))) ? (((((/* implicit */_Bool) arr_2 [(signed char)7] [i_1 + 3])) ? (arr_2 [(short)8] [i_1 + 3]) : (arr_2 [i_0] [i_1 - 2]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])) ? (3867709464831558561LL) : (arr_2 [i_1] [i_1 + 3])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (~(((((((((/* implicit */_Bool) var_10)) ? (var_0) : (var_0))) + (9223372036854775807LL))) << (((((unsigned long long int) 360417210)) - (360417210ULL))))))))));
}

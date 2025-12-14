/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29856
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 2] = ((/* implicit */short) ((max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_1]))), (max((1792ULL), (var_4))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                var_13 ^= ((/* implicit */int) 1840107793U);
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((((((/* implicit */int) (unsigned char)25)) / (((/* implicit */int) var_12)))), (((/* implicit */int) min(((unsigned char)231), (((/* implicit */unsigned char) (_Bool)0)))))));
    var_15 = ((/* implicit */signed char) min((((((var_11) / (var_9))) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)24)), ((unsigned short)14501))))))), (((/* implicit */long long int) min((((/* implicit */short) max(((unsigned char)37), ((unsigned char)232)))), (var_6))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) var_8))));
}

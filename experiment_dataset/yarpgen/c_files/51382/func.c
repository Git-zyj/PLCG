/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51382
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_8)))) : (((/* implicit */int) ((short) var_17)))));
                arr_7 [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) 13864677519487361759ULL)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (1933527618993333205ULL)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) != (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_9)))) ^ (((unsigned long long int) var_18))))));
    var_21 = ((/* implicit */unsigned char) var_5);
    var_22 = ((/* implicit */unsigned int) var_0);
}

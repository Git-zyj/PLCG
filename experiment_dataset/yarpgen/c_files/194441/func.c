/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194441
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_12 = 13472317451384159467ULL;
                var_13 = ((((/* implicit */_Bool) arr_0 [i_1])) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((10375698921098526338ULL) - (10375698921098526332ULL))));
            }
        } 
    } 
    var_14 = ((((/* implicit */_Bool) var_5)) ? (((unsigned long long int) ((((/* implicit */_Bool) 13472317451384159452ULL)) ? (217304183632331498ULL) : (var_4)))) : (((((/* implicit */_Bool) (~(var_11)))) ? (((var_1) & (var_10))) : (((((/* implicit */_Bool) var_2)) ? (18229439890077220108ULL) : (7021269108146920569ULL))))));
}

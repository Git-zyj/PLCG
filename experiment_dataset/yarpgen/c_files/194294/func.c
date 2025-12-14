/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194294
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
    var_17 = ((/* implicit */_Bool) ((((min((-420282335), (((/* implicit */int) (signed char)-23)))) + (2147483647))) << (((var_7) - (15478922097269066884ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 |= ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_13)), (arr_2 [i_0 + 3] [i_1 - 1] [i_1 + 2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                arr_4 [7U] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 4143251266U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) ((((/* implicit */_Bool) var_11)) ? (4143251239U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43747)))))));
            }
        } 
    } 
}

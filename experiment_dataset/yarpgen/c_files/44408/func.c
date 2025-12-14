/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44408
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
    var_18 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((((/* implicit */_Bool) 19623114786283207LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (19623114786283207LL)))))) ? (max((((/* implicit */unsigned long long int) var_14)), (min((7136003008011429891ULL), (((/* implicit */unsigned long long int) 33554431LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(-2094458710)))) ? ((~(((/* implicit */int) (unsigned char)168)))) : (-1))), ((~(((/* implicit */int) ((unsigned char) 8475213566227654955ULL)))))));
                var_19 ^= var_7;
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197338
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0])) ^ (arr_1 [i_0] [i_1])))) ? (((/* implicit */long long int) ((4109622338U) << ((((~(var_4))) + (7979750813398770446LL)))))) : (((((/* implicit */_Bool) ((arr_3 [i_0]) >> (((((/* implicit */int) (signed char)117)) - (61)))))) ? (((/* implicit */long long int) 2071298276U)) : (4027520415790328890LL)))));
                    var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 - 1])) ? (((((/* implicit */_Bool) 2223669019U)) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-110)) ? (arr_1 [(_Bool)1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (var_5) : (((/* implicit */unsigned int) var_3)))))));
                }
            } 
        } 
    } 
    var_13 ^= ((((/* implicit */_Bool) var_10)) ? ((-(max((-4268491875072140997LL), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) max((-725910928), (((/* implicit */int) (signed char)-44))))));
}

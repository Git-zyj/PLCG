/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234256
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (5078945740724500517ULL))));
                var_12 = ((/* implicit */unsigned long long int) ((min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))) || (min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_1])))));
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((-8772498751457258208LL) != (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) -8772498751457258208LL)), (arr_3 [i_0]))) == (((7414485074853240569ULL) >> (((var_2) - (3497334962042021570ULL))))))))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) arr_4 [i_0] [i_1])));
                var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))) + (var_5))) : (((3672014292U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) ? (((/* implicit */int) (short)-6094)) : (280905657)))))))) : ((-(max((var_6), (arr_3 [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 127LL))));
}

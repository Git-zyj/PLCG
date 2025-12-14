/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199127
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
    var_11 = ((/* implicit */unsigned short) (~(var_4)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (18446744073709551615ULL))));
                    arr_9 [i_1] = ((/* implicit */_Bool) (-((-(1835081851)))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((arr_2 [i_0] [i_1] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) ? (arr_1 [i_0] [i_2]) : (((/* implicit */unsigned int) min((1835081851), (((/* implicit */int) (_Bool)1)))))));
                    arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1835081851)), (var_1)))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_8)))));
                }
            } 
        } 
    } 
    var_12 = ((1835081849) > ((-(((/* implicit */int) var_0)))));
}

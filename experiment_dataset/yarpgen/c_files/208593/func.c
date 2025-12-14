/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208593
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
    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_10), (var_5)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((_Bool) 9415250807083362436ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(9151314442816847872LL)));
                var_13 = ((/* implicit */_Bool) max((1294591879U), (((/* implicit */unsigned int) (-2147483647 - 1)))));
                arr_6 [i_0] [i_0] = min((min((((/* implicit */unsigned long long int) -242213160)), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (-1350977957) : (((/* implicit */int) arr_1 [i_0]))))), (arr_4 [i_0] [i_1 + 2])))));
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2358801095U)) ? (((/* implicit */unsigned long long int) 1528815832)) : (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) > (-9151314442816847885LL)))), (arr_2 [i_0])))));
            }
        } 
    } 
}

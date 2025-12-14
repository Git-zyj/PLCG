/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43919
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
    var_14 = ((/* implicit */int) ((long long int) 1642044882));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min(((unsigned short)2043), (((/* implicit */unsigned short) var_8)))))))) ? (max((min((((/* implicit */long long int) (_Bool)1)), (var_12))), (arr_2 [i_1] [i_0] [i_0]))) : (min((((var_9) ? (arr_2 [i_0] [i_1] [i_0]) : (arr_2 [9] [i_0] [i_0]))), (((/* implicit */long long int) ((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) var_12);
                var_16 = ((/* implicit */_Bool) var_6);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (-(2404235369085483823LL)));
}

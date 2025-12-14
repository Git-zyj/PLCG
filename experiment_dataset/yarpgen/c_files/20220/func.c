/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20220
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
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((268304384), (((/* implicit */int) (signed char)-77)))))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 8080976596858135602ULL)))) && (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_2)) != (var_1))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_1))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197235
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
    var_11 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) var_8);
                arr_6 [i_0] [i_0] [2LL] = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((unsigned short) var_0))), (var_1))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)54)) && (((/* implicit */_Bool) -6577257360805826585LL))))))));
                var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_8)), (var_3)))), (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (((unsigned long long int) var_9))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) var_7))))))) < (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_1)))) || (((var_10) && (((/* implicit */_Bool) var_3)))))))));
}

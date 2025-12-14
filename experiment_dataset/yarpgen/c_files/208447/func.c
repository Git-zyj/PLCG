/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208447
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = min((-4LL), (1063581850186917129LL));
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) + (((((/* implicit */_Bool) (short)-18057)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8064))) + (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) var_1);
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_15)), (var_6))))))) + (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    var_19 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (var_3)));
    var_20 = ((/* implicit */int) var_7);
    var_21 = ((/* implicit */signed char) var_13);
}

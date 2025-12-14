/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199500
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] |= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (62938)))))) != (((((/* implicit */_Bool) arr_0 [9])) ? (((arr_2 [i_0] [(signed char)3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                var_15 = ((/* implicit */unsigned int) -506981332126354510LL);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_4))));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((1073741823LL) != (1073741823LL))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (436140307U)))) : (var_8)))) ? (((((/* implicit */_Bool) var_10)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) ((var_11) == (((/* implicit */long long int) var_3)))))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))))));
}

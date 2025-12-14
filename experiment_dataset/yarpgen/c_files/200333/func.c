/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200333
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
    var_11 = ((/* implicit */int) (((+(min((var_10), (((/* implicit */unsigned long long int) 361543673U)))))) & (((/* implicit */unsigned long long int) (~(min((3739824871U), (var_6))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (max((((((/* implicit */_Bool) (short)0)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (2587797167018790489ULL)))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (var_2) : ((+(arr_2 [i_0] [i_1])))))));
                var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_4))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 2089782669U))));
            }
        } 
    } 
}

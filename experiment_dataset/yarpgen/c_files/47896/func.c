/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47896
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((~(var_4)))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-99))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_4)))) ? (var_3) : ((+((-9223372036854775807LL - 1LL))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 -= ((/* implicit */unsigned int) arr_5 [i_0] [i_1]);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) var_3);
                var_13 -= ((/* implicit */short) arr_2 [i_1]);
            }
        } 
    } 
}

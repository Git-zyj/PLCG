/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211325
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) var_10)))))));
    var_14 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)127)), (arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (-2147483640) : (((/* implicit */int) (signed char)110)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)113))))))))));
                arr_5 [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((arr_0 [i_1]), (arr_0 [i_0])))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_1]))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211004
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                {
                    var_18 = 3124535212U;
                    arr_10 [i_0] [i_1] [i_2 + 1] = max((((/* implicit */unsigned int) (signed char)127)), (1170432083U));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)127))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3903397162U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967288U)))) ? (0U) : (4294967295U))))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-74), ((signed char)74)))) ? (((((/* implicit */_Bool) 1302618129U)) ? (3365936001U) : (var_0))) : (max((3124535212U), (1477289154U)))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
}

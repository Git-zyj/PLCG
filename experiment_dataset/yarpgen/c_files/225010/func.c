/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225010
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_19))) == (var_6)));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_15)))) + (2147483647))) << (((arr_0 [i_2]) - (8907246529622233816LL)))));
                    arr_10 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) var_13))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-84)))), (((/* implicit */int) var_1))));
}

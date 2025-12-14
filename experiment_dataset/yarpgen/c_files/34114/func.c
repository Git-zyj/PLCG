/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34114
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)189)))))));
    var_20 = ((/* implicit */int) (~((~(6832960416401157710LL)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)79))))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0 + 1])), ((unsigned char)68)))) : (max((((/* implicit */int) (unsigned char)61)), (min((((/* implicit */int) arr_2 [i_0 - 1])), (0))))))))));
                var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                arr_5 [i_0 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)154))));
                var_23 = ((/* implicit */unsigned char) arr_2 [i_0]);
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2])))) : (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2]))))));
            }
        } 
    } 
}

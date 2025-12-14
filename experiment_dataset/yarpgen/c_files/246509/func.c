/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246509
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
    var_13 -= min((((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))), ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_14 -= ((/* implicit */unsigned int) ((min(((-(arr_4 [i_0] [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [8] [i_0])) : (((/* implicit */int) arr_2 [(short)20] [(short)20]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_8)))) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))) <= (var_5)))))))));
                    var_15 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)76))));
                    var_16 = ((/* implicit */int) (_Bool)1);
                    var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [2])) ? (arr_1 [i_0] [i_0 - 1]) : (arr_4 [i_0 - 1] [i_1] [i_2])))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    var_18 = ((((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)1))))))) >= (var_8));
}

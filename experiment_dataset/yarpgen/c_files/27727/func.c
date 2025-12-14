/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27727
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) ((3742219321U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), ((short)32762)))) <= ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    arr_11 [i_0 - 1] [i_0] [i_2] = ((/* implicit */short) var_1);
                    arr_12 [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_1 [(short)15])), ((~(((/* implicit */int) arr_3 [(signed char)10]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */_Bool) var_12);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229296
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((max((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_0])))))) - (((/* implicit */int) ((((/* implicit */int) var_1)) >= ((-(((/* implicit */int) (unsigned short)23)))))))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (((-(var_4))) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_11)))) || ((!(((/* implicit */_Bool) var_13)))))) && (((/* implicit */_Bool) var_10))));
}

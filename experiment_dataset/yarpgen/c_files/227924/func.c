/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227924
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
    var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (-(var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_0)) ? ((+(var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 -= (~((-(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_10))))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_12)))))));
            }
        } 
    } 
}

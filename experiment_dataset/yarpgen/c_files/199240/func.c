/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199240
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
    var_17 = ((/* implicit */int) var_14);
    var_18 = ((/* implicit */long long int) max((var_11), ((!(((/* implicit */_Bool) (short)960))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) max((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_1) : (((/* implicit */int) var_8))))) ? (max((var_7), (((/* implicit */unsigned long long int) arr_5 [6] [i_1] [i_1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))) ^ (var_7)))))) || (((/* implicit */_Bool) ((unsigned char) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_15))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_16) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) var_2)))))));
                arr_8 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
}

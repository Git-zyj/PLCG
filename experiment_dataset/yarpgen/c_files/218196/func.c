/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218196
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
    var_18 = ((/* implicit */short) ((long long int) var_14));
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)32123)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_5 [0ULL] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_11)), (min((735299416035964326ULL), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0]))))));
                arr_6 [i_0] [i_0] = var_13;
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) * (((long long int) ((((/* implicit */int) (short)1735)) - (((/* implicit */int) (short)-1735)))))))));
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38694
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
    var_20 = ((/* implicit */unsigned short) var_15);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62351))) : (var_11)))) ? (((/* implicit */int) (unsigned short)3164)) : (((/* implicit */int) ((_Bool) (unsigned short)62351)))))) || (((((/* implicit */_Bool) ((unsigned int) var_7))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62351)))))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((int) var_14)) - (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) var_3)) - (var_11)))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) var_13)), (var_5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1])))) < (var_10)));
                var_23 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_4 [i_0 + 2] [i_0 - 2] [i_0 - 2]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3164)))))) ^ (((int) arr_2 [i_0 - 2] [i_0 + 2]))));
            }
        } 
    } 
}

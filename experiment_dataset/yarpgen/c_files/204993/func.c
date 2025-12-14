/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204993
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (signed char)-77)) ? (var_13) : (371087487U))))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_18 = ((/* implicit */signed char) var_4);
    var_19 |= ((/* implicit */int) (unsigned short)7379);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) arr_0 [i_1]))))) : (min((16383U), (max((((/* implicit */unsigned int) var_4)), (arr_0 [(_Bool)1]))))));
                var_21 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) var_13)))))))));
            }
        } 
    } 
}

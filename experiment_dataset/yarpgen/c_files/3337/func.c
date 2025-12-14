/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3337
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
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) arr_4 [i_0] [i_0]))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) / (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-103))))) : (((arr_3 [i_0] [22ULL]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))))));
                var_12 = ((/* implicit */short) var_3);
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_0);
}

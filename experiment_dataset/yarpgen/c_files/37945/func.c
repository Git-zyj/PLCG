/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37945
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (var_6) : (var_5)));
    var_18 += ((/* implicit */unsigned int) var_15);
    var_19 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_0 [i_1]) : (var_5)))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)82)) - (((/* implicit */int) (signed char)82))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)82))) - (3021996433U)))));
                var_20 = ((/* implicit */int) (signed char)-77);
            }
        } 
    } 
}

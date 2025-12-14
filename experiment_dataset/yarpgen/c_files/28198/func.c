/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28198
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)8]))) * (((unsigned int) 1578889032))))), (min((8589934584LL), (8589934582LL))))))));
                var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_7)))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -381657308)) : (var_1))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -5718252077035975231LL)) || (((/* implicit */_Bool) var_7)))))))));
}

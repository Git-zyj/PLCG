/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199484
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
                    var_21 = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_22 = ((var_12) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (var_6) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)113)), ((short)-27366))))));
}

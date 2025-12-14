/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201711
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
    var_14 -= ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) max((var_13), (arr_2 [i_0])));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (4098331145U)))))) + (min((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (var_1))))))));
            }
        } 
    } 
}

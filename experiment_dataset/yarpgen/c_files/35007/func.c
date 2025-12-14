/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35007
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
    var_19 = ((/* implicit */_Bool) var_0);
    var_20 *= ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5410)) || (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (short)5409)) : (((/* implicit */int) (short)5396))))))));
                var_22 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((-480377882), (((/* implicit */int) (short)5425))))) ? (arr_6 [i_1]) : (0))), (((/* implicit */int) (short)5396))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
    var_23 = ((((/* implicit */_Bool) ((unsigned long long int) 686831752))) ? (var_12) : (var_9));
    var_24 = ((/* implicit */int) var_17);
}

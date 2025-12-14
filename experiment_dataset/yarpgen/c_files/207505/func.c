/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207505
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
    var_20 = ((/* implicit */signed char) 7003456434615185745LL);
    var_21 &= var_18;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_3 [i_0]))));
                arr_5 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_11)), ((short)32767))))) : (1374028491U))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (!((((!(((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (7003456434615185745LL))))))));
}

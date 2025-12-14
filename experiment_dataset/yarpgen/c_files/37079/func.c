/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37079
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_3), (var_5)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) var_14))))))))));
    var_20 = ((/* implicit */unsigned char) var_14);
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_2)) : (var_17))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_22 -= ((/* implicit */short) arr_4 [i_1] [i_1 + 3] [i_1 + 2]);
                var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)16398)) > (((/* implicit */int) (unsigned short)16406))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) min((((((/* implicit */int) ((signed char) (_Bool)1))) / (((/* implicit */int) var_3)))), (((/* implicit */int) var_6))));
}

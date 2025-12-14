/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189611
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
    var_18 = ((/* implicit */int) ((max((max((var_8), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))))) == (((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (var_10))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((+(var_12))) | (((/* implicit */int) arr_0 [(short)6]))))) ? (max((((/* implicit */int) max(((unsigned short)11354), (((/* implicit */unsigned short) arr_1 [i_0]))))), (arr_2 [i_1]))) : ((-(((/* implicit */int) arr_5 [i_1 - 2] [6ULL]))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (+(max((((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1204292830)), (var_14)))))))))));
                var_22 = ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227703
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
    var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) : (var_7)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((short) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (_Bool)1))))))));
    var_20 = ((/* implicit */short) var_10);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((((-(var_7))) * (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (arr_4 [i_0 + 2]) : (arr_4 [i_0 + 2]))) != (((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (arr_4 [i_0 + 2]) : (var_8)))));
                arr_6 [i_0] = ((/* implicit */short) (_Bool)0);
                var_23 = ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_11)))))) ? ((~(var_8))) : (((unsigned long long int) min((arr_2 [i_0]), (var_0)))));
            }
        } 
    } 
}

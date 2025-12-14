/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44438
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1]))))) != (max((arr_0 [i_1]), (((/* implicit */long long int) var_16))))));
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1]))))), (min((var_8), (((/* implicit */long long int) var_11)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((max(((+(var_8))), (var_2))), (((/* implicit */long long int) var_14))));
    var_23 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_12))))));
    var_24 = ((/* implicit */long long int) var_12);
}

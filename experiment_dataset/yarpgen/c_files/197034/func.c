/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197034
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) (short)32738)), (min((((/* implicit */int) var_1)), (var_12)))))) * (((var_18) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_0])))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) (unsigned char)175);
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((long long int) arr_4 [i_1] [i_0 - 1])))));
                arr_6 [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_0 + 3])), (((((/* implicit */_Bool) -1288437864)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) 4052350564U);
}

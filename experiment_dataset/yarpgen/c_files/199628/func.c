/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199628
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
    var_20 += ((/* implicit */short) var_18);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) * (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (arr_1 [i_0])))))))) : (((((/* implicit */_Bool) var_6)) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((-5421767545841074838LL) - (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_14))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))));
                arr_9 [i_0] [i_1] = ((/* implicit */long long int) (((-(arr_3 [i_0 - 1] [i_0]))) + (((/* implicit */unsigned long long int) ((arr_4 [i_0 + 1] [i_0 + 1]) - (var_6))))));
            }
        } 
    } 
}

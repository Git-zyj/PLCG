/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244546
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
    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? ((+(var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_13)), (var_12))))))) == (((/* implicit */unsigned int) var_14))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) arr_6 [i_0])), (arr_0 [i_0] [i_1]))))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (arr_0 [i_2] [i_1])));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)7))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (var_3)))));
    var_23 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))));
}

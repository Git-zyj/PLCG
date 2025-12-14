/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210238
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
    var_20 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */int) var_0);
                    arr_10 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_3 [i_0] [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) ((866133912U) > (((/* implicit */unsigned int) var_1))))))))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) ((((int) var_1)) == (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_18)))))))));
    var_22 = ((/* implicit */unsigned char) ((var_12) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((/* implicit */int) ((signed char) var_5))) : (((int) var_7))))) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)0))))))));
    var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((var_19) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (min((var_5), (((/* implicit */unsigned long long int) var_3))))));
}

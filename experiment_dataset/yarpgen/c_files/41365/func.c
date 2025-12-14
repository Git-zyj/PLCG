/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41365
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)43))))) / (((((/* implicit */_Bool) (signed char)-42)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (var_10)))) : (max((var_15), (min((((/* implicit */int) var_13)), (-1238103364)))))));
    var_20 = ((/* implicit */unsigned long long int) var_18);
    var_21 = ((/* implicit */unsigned int) ((short) min((((((/* implicit */int) (signed char)-28)) / (((/* implicit */int) (unsigned short)65517)))), (((/* implicit */int) var_3)))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (max((((/* implicit */long long int) var_16)), (-5031386132252137802LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_16))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (var_11) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((((+(0U))) / (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) var_16))))))) + (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (signed char)26)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) max((var_8), (((/* implicit */short) var_12))))), (max((-166943746), (((/* implicit */int) var_8))))));
            }
        } 
    } 
}

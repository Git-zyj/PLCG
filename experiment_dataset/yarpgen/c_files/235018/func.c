/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235018
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
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */long long int) (-(((/* implicit */int) var_13))))), (5360692832852805717LL))))));
    var_16 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [20] [20] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_0])), ((unsigned short)65535)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3764531951U)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)21014)))))))), (arr_3 [i_0] [i_0])));
                var_17 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 3674373202U)) ? (((/* implicit */int) (signed char)107)) : (((var_7) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_18 = var_4;
    var_19 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((min((var_14), (((/* implicit */unsigned char) (_Bool)1)))), (((/* implicit */unsigned char) var_10)))))));
}

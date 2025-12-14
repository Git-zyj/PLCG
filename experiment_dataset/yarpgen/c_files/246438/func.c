/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246438
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned short)4] = ((/* implicit */long long int) (~(max((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) (+(arr_0 [i_0]))))))));
                arr_6 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) (-(-2436919875047598529LL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_7)))))));
                var_17 = ((/* implicit */signed char) max((var_17), (var_1)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? ((+(var_12))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6))))))));
    var_19 = ((/* implicit */unsigned long long int) var_11);
    var_20 = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))), (((var_7) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))))));
}

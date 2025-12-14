/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204329
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (var_13))))))))));
    var_15 = ((/* implicit */signed char) (unsigned short)4784);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_2 - 1] [i_0 + 1]), (((/* implicit */unsigned long long int) (unsigned short)58829))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)4783), ((unsigned short)60752))))) : (arr_5 [i_0] [i_0 - 1] [i_2 - 1] [i_2])));
                    var_17 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) >= ((~(((/* implicit */int) (short)-6507)))))))));
                    var_18 = ((/* implicit */unsigned long long int) (~((-((-(((/* implicit */int) (unsigned short)47614))))))));
                    var_19 = ((/* implicit */short) (unsigned short)44575);
                }
            } 
        } 
    } 
    var_20 = min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)43)) ^ (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_6)) : (var_12))))), (((/* implicit */long long int) (unsigned short)44575)));
}

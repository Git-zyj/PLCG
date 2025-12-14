/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203815
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] = (unsigned char)255;
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54035)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1])))))) ? ((+(((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) var_12)))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) var_1))))) : ((+(arr_3 [i_0] [i_1])))))));
                arr_7 [i_0] [i_0] = ((short) var_6);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_4);
    var_14 = ((/* implicit */int) var_2);
}

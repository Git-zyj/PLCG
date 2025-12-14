/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44644
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
    var_16 = ((((/* implicit */_Bool) min((-7774091638046407676LL), (((/* implicit */long long int) (unsigned short)1640))))) ? (max((((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (var_12)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */short) var_10))))) ? (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))));
    var_17 -= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) ((signed char) var_5))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (var_12)))) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_14)), (var_1)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */signed char) var_10)), (var_7))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_8);
    var_19 = ((/* implicit */int) var_11);
}

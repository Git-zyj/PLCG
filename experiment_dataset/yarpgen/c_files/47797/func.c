/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47797
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */signed char) ((_Bool) (((!(var_12))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                    var_16 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_2]))) : (arr_5 [i_2] [(short)2] [i_2] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_11)))))) : (var_3))) : (var_3)));
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1LL)))))))) / (((var_9) ? (min((8LL), (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))));
    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_2) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))), (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((_Bool) var_8))) : (((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_12)))) ? (((/* implicit */int) var_7)) : (max((var_10), (((/* implicit */int) var_11))))))));
    var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_2))))))) ? (((/* implicit */int) (!(((var_2) && (((/* implicit */_Bool) 925467981))))))) : (((/* implicit */int) ((unsigned short) var_1)))));
}

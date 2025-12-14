/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52133
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
    var_19 = var_7;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_0] [i_1] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (((((/* implicit */_Bool) (unsigned short)21764)) ? (1934992730U) : (arr_2 [i_0] [i_0])))))) ? (max(((-2147483647 - 1)), (((/* implicit */int) var_18)))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (var_4)))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_0] [(short)13]))))));
                var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_3)))));
                var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))) ? (((((/* implicit */int) (!(var_18)))) & (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (var_10)))))))));
                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned short)65535))))) : (853438769U)))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
            }
        } 
    } 
}

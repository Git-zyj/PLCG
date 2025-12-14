/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30654
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
    var_18 += ((/* implicit */unsigned char) min((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (min((-7830035074913911082LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)24)), (var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [9LL] [i_1] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (6291456U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0])))))) : (min((var_7), (((/* implicit */unsigned int) arr_2 [i_1] [i_0])))))), (((min((((/* implicit */unsigned int) (signed char)9)), (var_15))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)232))));
                    arr_9 [i_0] [i_0 + 1] [i_2] [22U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_5 [0]) + (2147483647))) >> (((arr_8 [12U] [i_1] [i_0]) + (5182044975091246754LL)))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    arr_10 [i_2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U)))));
                }
            }
        } 
    } 
}

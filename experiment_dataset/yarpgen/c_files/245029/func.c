/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245029
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
    var_14 += ((/* implicit */_Bool) ((int) -28LL));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (~(var_10))))) ? (min((-47LL), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)55303)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)88))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (max((var_7), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (signed char)-39)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32764)));
                    arr_8 [i_1] [(unsigned short)1] [i_0] [i_1] = 18446744073709551613ULL;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (min((((/* implicit */int) ((unsigned short) var_8))), (((1273315788) ^ (((/* implicit */int) var_1)))))) : (((/* implicit */int) var_1))));
}

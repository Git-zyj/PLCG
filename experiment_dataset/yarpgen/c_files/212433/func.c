/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212433
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) % (max((9400043546119551110ULL), (((/* implicit */unsigned long long int) var_4))))))) ? (((((/* implicit */_Bool) min((9400043546119551110ULL), (((/* implicit */unsigned long long int) 1555025075U))))) ? (((/* implicit */unsigned long long int) (-(1232632630U)))) : (((var_5) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_20 = ((signed char) ((signed char) var_4));
    var_21 = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) var_18)), (min((var_1), (var_12))))));
    var_22 = ((/* implicit */signed char) (-((((-(((/* implicit */int) (unsigned char)55)))) & (((/* implicit */int) ((unsigned short) 8645718790974348483ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) var_14);
                    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned char) var_5))), (max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0 - 1] [i_0 - 1])), (var_12)))));
                    var_25 = ((/* implicit */signed char) var_16);
                }
            } 
        } 
    } 
}

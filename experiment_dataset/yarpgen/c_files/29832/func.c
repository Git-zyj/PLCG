/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29832
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))));
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)43831)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-41))) : (-8541429671147407613LL))))));
                arr_6 [i_1] [1LL] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((int) 8541429671147407613LL))) : (((((/* implicit */_Bool) 2146435072U)) ? (2148532224U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)5]))))))));
                arr_7 [i_1] [(unsigned char)10] = ((/* implicit */unsigned int) (~((+(-1)))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((8541429671147407613LL) << (((((/* implicit */int) (unsigned short)8179)) - (8179))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_3)) % (((/* implicit */int) (((~(8541429671147407613LL))) != (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
}

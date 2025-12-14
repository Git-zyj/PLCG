/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23923
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
    var_11 = ((/* implicit */unsigned int) var_6);
    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) ((max((arr_4 [i_1]), (((/* implicit */long long int) var_8)))) >= (((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)66)))), (max((var_6), (((/* implicit */int) arr_3 [i_0 - 2] [i_1])))))))));
                var_13 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (1206781503))) - (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)167))))));
                arr_7 [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 4042887666U)) ? (1206781515) : (((/* implicit */int) (unsigned char)255)))));
                arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1206781516)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (unsigned char)78))))) ? (((/* implicit */unsigned int) -720817673)) : (252079630U)));
            }
        } 
    } 
    var_14 &= ((/* implicit */int) var_7);
    var_15 = ((/* implicit */int) var_9);
}

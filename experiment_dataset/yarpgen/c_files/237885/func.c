/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237885
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */unsigned long long int) arr_4 [i_0] [(unsigned char)14]);
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((unsigned long long int) var_9)))));
                    var_13 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + ((-(((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)-24081)) ? (((/* implicit */int) (unsigned short)59061)) : (((/* implicit */int) (unsigned char)114)))) >= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65519)) : (((/* implicit */int) var_0)))))))))))));
}

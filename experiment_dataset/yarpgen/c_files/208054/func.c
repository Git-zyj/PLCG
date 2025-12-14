/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208054
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
    var_10 = ((/* implicit */unsigned char) max((((unsigned long long int) max(((unsigned short)2563), (((/* implicit */unsigned short) var_4))))), (((/* implicit */unsigned long long int) (-((+(var_3))))))));
    var_11 = ((unsigned int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (~((-(((arr_0 [10]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((unsigned long long int) (unsigned char)114))));
            }
        } 
    } 
}

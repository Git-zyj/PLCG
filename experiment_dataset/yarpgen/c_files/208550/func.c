/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208550
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((var_2) ? (((((/* implicit */_Bool) (signed char)2)) ? (var_1) : (((/* implicit */unsigned long long int) 1069537399)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)22646), (((/* implicit */short) var_12)))))))), (((/* implicit */unsigned long long int) min(((unsigned short)63537), (((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)1)), (var_7))))))))))));
    var_16 = ((/* implicit */short) 6U);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [20ULL] [(unsigned char)20] [i_0] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) (unsigned short)11550)) ? (((/* implicit */int) (short)-15419)) : (((/* implicit */int) arr_2 [i_0] [i_1])))), ((+(((/* implicit */int) var_9))))))));
                    var_17 = ((/* implicit */unsigned char) var_6);
                    var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) min((((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_1 + 1])), (var_8))))))));
                }
            } 
        } 
    } 
}

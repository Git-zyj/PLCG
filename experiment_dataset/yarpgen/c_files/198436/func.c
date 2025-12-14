/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198436
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)40)))), (((/* implicit */int) var_13))))), ((((-(arr_1 [i_0]))) / (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)56546), (((/* implicit */unsigned short) (_Bool)1))))))))));
                var_16 = ((/* implicit */int) (unsigned char)21);
            }
        } 
    } 
    var_17 = var_6;
    var_18 = ((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned long long int) max((((var_7) / (((/* implicit */long long int) ((/* implicit */int) (short)-18821))))), (((/* implicit */long long int) (unsigned char)232)))))));
}

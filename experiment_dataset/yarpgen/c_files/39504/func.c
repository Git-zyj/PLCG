/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39504
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
    var_18 = var_16;
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (((((~(var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))) | (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)64)) ^ (((/* implicit */int) (signed char)103))))))))));
    var_20 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_21 += ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)30429)), ((unsigned short)0))))));
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((signed char) var_12)))), ((~(((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)136))))))));
            }
        } 
    } 
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208522
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
    var_17 ^= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) var_7)))), (((((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)17050), (((/* implicit */unsigned short) var_7))))))))));
    var_18 *= ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = var_3;
                arr_5 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_6))));
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))) - (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)16094)) <= (((/* implicit */int) var_11)))))))));
            }
        } 
    } 
}

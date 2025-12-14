/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213296
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)108)) > (((/* implicit */int) (short)-2048)))))) != (min((var_7), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1]))))));
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (short)2047))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((min((min((var_3), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))), ((-(var_3)))));
}

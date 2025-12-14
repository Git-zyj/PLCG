/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195339
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
    var_11 -= min((var_9), (((min((var_3), (((/* implicit */unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)59)) < (((/* implicit */int) (short)-27848)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */signed char) min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) min(((unsigned short)511), (((/* implicit */unsigned short) (_Bool)1)))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((((/* implicit */int) var_2)) & (((/* implicit */int) var_1)))) ^ (((/* implicit */int) max((arr_3 [i_2 - 3]), (arr_3 [i_2 + 1])))))))));
                }
            } 
        } 
    } 
}

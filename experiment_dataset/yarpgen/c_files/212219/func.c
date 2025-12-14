/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212219
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_2] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)17884)) : ((~(965356502))))) > (((/* implicit */int) ((var_17) != (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                    var_18 &= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))) / (arr_3 [i_1 + 3] [i_1 + 3] [i_2 - 2]))), (((/* implicit */unsigned long long int) (unsigned char)236))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned char) var_2);
}

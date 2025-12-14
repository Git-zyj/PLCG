/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227252
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
    var_18 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) min((var_9), (((/* implicit */long long int) ((((((/* implicit */int) var_2)) ^ (((/* implicit */int) (short)-32765)))) * (((/* implicit */int) ((short) (short)-17796))))))));
                    var_19 = ((/* implicit */unsigned long long int) var_5);
                    arr_9 [i_0] [(signed char)2] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_0]))))), (16331599583572956848ULL))), (((/* implicit */unsigned long long int) var_9))));
                }
            } 
        } 
    } 
}

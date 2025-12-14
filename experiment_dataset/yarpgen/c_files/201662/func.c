/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201662
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
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) 0)) - (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) (short)5190))) : (var_8))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) < (((((/* implicit */_Bool) var_6)) ? (2283020130U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_6 [i_0] |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (short)-5182)) ? (((arr_1 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [10U]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-5182))))))));
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned int) 5880589875377677770ULL));
                }
            } 
        } 
    } 
    var_18 = var_9;
}

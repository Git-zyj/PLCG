/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47430
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
    var_18 = ((/* implicit */signed char) ((((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) max((((/* implicit */int) (unsigned char)137)), (1062601474))))) && (((/* implicit */_Bool) 7847754197568616012LL)))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? ((+(arr_8 [i_0] [(short)15] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1443516267) != (((/* implicit */int) var_6))))))))));
                    arr_11 [i_0] [i_0] = ((/* implicit */int) 10335446973821107563ULL);
                }
            } 
        } 
    } 
}

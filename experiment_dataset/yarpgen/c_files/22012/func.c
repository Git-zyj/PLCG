/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22012
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
    var_19 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((var_4) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3))) : (var_3)))))));
                    var_20 = ((/* implicit */short) var_4);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((((unsigned int) var_1)) >> (((min((((/* implicit */long long int) var_15)), (-1638507276189495212LL))) + (1638507276189495216LL))))) : (var_9)));
}

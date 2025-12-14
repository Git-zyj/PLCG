/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214398
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
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (unsigned char)64);
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) (((_Bool)0) ? (((((/* implicit */_Bool) 1023)) ? (((/* implicit */int) min(((short)4094), (((/* implicit */short) var_4))))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (unsigned char)192))));
                    arr_11 [(short)16] [(short)16] [i_2] [i_2] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55515))) : (5U)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (1008807353) : (-993)))) ? (min((140737488355327ULL), (140737488355327ULL))) : (((/* implicit */unsigned long long int) -805275747)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1011)) ? (18446603336221196288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (short)27062)) : (((/* implicit */int) (short)16399))))))))));
}

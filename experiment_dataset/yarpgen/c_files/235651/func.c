/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235651
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (4294967294U)));
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((2U) >> (((arr_4 [i_2]) + (802688514))))) & (max((4294967287U), (((/* implicit */unsigned int) (_Bool)1))))));
                }
            } 
        } 
    } 
    var_11 &= ((/* implicit */unsigned char) 4294967288U);
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) 15709357408430379787ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))) : (var_6)))) : (((unsigned long long int) var_10))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */long long int) ((unsigned int) 9360261870212428783ULL))) : (min((min((var_4), (((/* implicit */long long int) 291100867)))), (((/* implicit */long long int) ((unsigned char) var_9)))))));
}

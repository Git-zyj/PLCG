/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53069
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4))))) : (var_3)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) var_6);
        var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_6)) / (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) * (((((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) var_5)))) * (((var_1) / (var_7)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (var_9))))) : (((((((/* implicit */long long int) var_5)) != (var_1))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_5))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_3);
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) var_5);
        arr_7 [i_1] &= ((/* implicit */unsigned int) ((((((var_3) + (var_3))) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((var_3) / (var_4)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((669570653399859149LL) <= (-4476330988823595894LL)))))))));
    }
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_3)) : (var_8)))) || (((/* implicit */_Bool) ((var_1) - (((/* implicit */long long int) var_5))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) != (var_7))))) : (((((/* implicit */_Bool) var_3)) ? (var_7) : (var_1))))));
        var_13 = ((/* implicit */unsigned char) ((4294967272U) << (((4294967295U) - (4294967264U)))));
        arr_11 [i_2] = ((/* implicit */long long int) var_0);
    }
    var_14 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_9)))) ? (((var_9) / (var_9))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */long long int) var_3)))))) <= (((((/* implicit */_Bool) 1578436971U)) ? (((/* implicit */long long int) 7U)) : (-4476330988823595894LL)))));
    var_15 = ((/* implicit */long long int) var_5);
}

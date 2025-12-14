/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193602
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))))) ? (((((/* implicit */_Bool) var_19)) ? (15184006455999176264ULL) : (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */long long int) var_10)) + (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_5)))))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_17)))) ? ((((!(((/* implicit */_Bool) var_12)))) ? (var_5) : (((/* implicit */long long int) var_17)))) : (((/* implicit */long long int) (-(var_19))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_22 = max((((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)480)))) + (2147483647))) << (((((((/* implicit */int) var_6)) + (60))) - (9)))))), (arr_0 [i_0 - 1]));
                var_23 = ((/* implicit */unsigned int) ((int) max((((/* implicit */int) arr_3 [i_0 - 2])), (((((/* implicit */int) arr_3 [10ULL])) >> (((((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) - (23584))))))));
                arr_4 [i_0] [i_1] &= ((/* implicit */int) (((+(arr_0 [i_0 + 1]))) != (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (4294967273U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                var_24 *= ((/* implicit */unsigned int) (+((-(((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((-1121252917007002936LL), (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
}

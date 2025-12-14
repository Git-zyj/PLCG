/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30954
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (var_12)));
    var_15 = ((/* implicit */unsigned short) min(((-((-(18446744073709551599ULL))))), (((18446744073709551595ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned short)39146)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (((-(arr_6 [(_Bool)1] [i_1 - 2]))) == (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_5)))))))));
                var_17 -= ((/* implicit */unsigned long long int) var_11);
                var_18 = ((/* implicit */_Bool) min((var_18), (((arr_4 [i_0 + 1] [i_0 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2])))))));
            }
        } 
    } 
    var_19 = (unsigned char)234;
}

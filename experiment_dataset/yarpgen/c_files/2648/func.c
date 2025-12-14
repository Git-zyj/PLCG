/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2648
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((unsigned char) 3118671032U)))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)30713))));
        var_17 = var_15;
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((var_4) / (var_4)))))))));
    }
    var_19 = (signed char)-24;
    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (((((var_6) & (((/* implicit */unsigned int) 1682460223)))) & (((/* implicit */unsigned int) 883598361))))));
    var_21 = (-(min((((/* implicit */unsigned int) var_3)), (max((var_9), (((/* implicit */unsigned int) var_0)))))));
    var_22 = ((/* implicit */short) min((17375815955499011215ULL), (((/* implicit */unsigned long long int) (signed char)-58))));
}

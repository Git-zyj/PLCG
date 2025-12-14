/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232539
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
    var_19 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) < (((/* implicit */unsigned int) var_5)))) ? (((min((((/* implicit */long long int) (short)17251)), (var_3))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))))))) : (((/* implicit */long long int) max(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((signed char) var_12))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((var_1) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))), ((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245)))))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)106);
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_21 ^= ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_6 [i_1])), (var_9))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) max((arr_1 [i_1]), (var_12))))), (-1LL)));
    }
    var_22 = ((/* implicit */unsigned long long int) var_14);
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((4154501457U), (((/* implicit */unsigned int) (_Bool)1))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (var_7))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (var_12) : (var_16))))))));
}

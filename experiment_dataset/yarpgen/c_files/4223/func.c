/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4223
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) (((((+(arr_2 [i_0]))) / (8387982762733313542LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) arr_1 [i_1] [i_0])) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1])))))) ? (max((((((/* implicit */_Bool) (short)-5081)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned int) arr_0 [i_0])))) : (arr_1 [i_0] [i_1])));
            var_15 |= ((max((arr_4 [i_1 + 2] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_3))))))) + (((unsigned long long int) (-2147483647 - 1))));
        }
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)2047)) - (((/* implicit */int) (signed char)67)))) - (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL))))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-8387982762733313542LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)126))))) : (((/* implicit */long long int) min((((/* implicit */int) var_0)), ((-(1977106189))))))));
}

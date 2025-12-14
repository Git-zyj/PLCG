/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21736
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 9223372036854775802LL))) & (((/* implicit */int) (signed char)-43))))) * (var_6)));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((min((((/* implicit */int) (signed char)-22)), (var_11))) ^ (((var_11) / (((/* implicit */int) (unsigned char)93))))))) & (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)43)) & (((/* implicit */int) var_13))))), ((-(var_16)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-43))))) ^ (((long long int) var_2)))), (((/* implicit */long long int) (((~(var_12))) ^ (((((/* implicit */int) (signed char)-43)) & (1673861766))))))));
        var_20 = ((/* implicit */unsigned short) max((((((-792660252413476093LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */unsigned long long int) arr_2 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_0])), (var_9)))) : (((/* implicit */int) ((unsigned short) var_16))))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((long long int) 2150236900307563235LL))) ^ (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) 536870911)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46060)))));
        var_22 = ((/* implicit */signed char) ((_Bool) ((unsigned char) ((_Bool) arr_1 [i_1]))));
        var_23 = ((/* implicit */signed char) ((((((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) (signed char)(-127 - 1))))) ^ (((((/* implicit */int) var_5)) / (var_11))))) < (arr_2 [i_1 - 3])));
    }
}

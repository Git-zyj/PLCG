/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43445
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
    var_18 = ((/* implicit */short) min((min((((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_12)))))), (((/* implicit */unsigned long long int) (((-(var_6))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    var_19 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (min((var_16), (var_16))))) % (((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3))) : (((/* implicit */unsigned long long int) var_12))))));
    var_20 = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (3422012741405008207LL))) ? (((var_3) >> (((((/* implicit */int) var_13)) - (123))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_6))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)));
    var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)3)), (2175201637U)))) ? ((~(var_3))) : (((((/* implicit */_Bool) ((var_16) & (var_10)))) ? (var_4) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_16)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned int) (~(-3422012741405008220LL)));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : ((~(var_6)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (var_3)))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0] [8U])), (var_3))) : (var_10)))));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 10; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) % (((/* implicit */int) var_8)))) == (((/* implicit */int) var_15))));
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((long long int) arr_4 [i_1 - 4]));
        var_23 = ((/* implicit */_Bool) var_6);
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_24 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_7 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))))) == (((/* implicit */unsigned long long int) arr_10 [8LL]))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) var_3));
    }
}

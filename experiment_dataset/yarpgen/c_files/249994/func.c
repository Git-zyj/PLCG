/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249994
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
    var_19 = ((/* implicit */unsigned int) ((unsigned short) var_16));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (var_2)))) | (((2061982215U) >> (((var_17) - (4978379971197468652LL)))))))) : (var_17)));
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((2147483647) > (2147483647)))) >> (((min((((/* implicit */unsigned int) var_3)), (var_5))) - (3813324327U))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_22 += ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((-2147483647) - (-810034012)))), (((((/* implicit */_Bool) arr_0 [(short)2])) ? (var_17) : (((/* implicit */long long int) arr_1 [8])))))), (((/* implicit */long long int) arr_0 [2U]))));
        var_23 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))) ? ((~(var_17))) : (((long long int) var_8)))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (arr_0 [(signed char)0])))) ^ (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (short)-25698))))))))));
        var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */int) (short)-16411))))) : ((+(var_9)))))) ? (max((((2147483636) >> (((1926836129) - (1926836118))))), (max((arr_0 [8]), (arr_1 [i_0]))))) : ((+(((/* implicit */int) ((short) 5365425426582340158ULL)))))));
    }
    var_25 = ((/* implicit */int) var_18);
}

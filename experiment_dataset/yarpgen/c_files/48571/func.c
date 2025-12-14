/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48571
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 251658240U)) ? (((/* implicit */int) (short)32500)) : (((/* implicit */int) (unsigned char)7))))))) ? (((((((/* implicit */_Bool) 263882790666240LL)) ? (((/* implicit */long long int) var_3)) : (var_5))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)43884)) : (((/* implicit */int) (unsigned short)32782))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((-9223372036854775807LL - 1LL))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        arr_2 [8LL] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned short) (unsigned char)7))) ? (max((703191711680819689LL), (((/* implicit */long long int) arr_1 [7LL] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) << (((arr_0 [i_0 + 1]) - (3234661679U)))))))) <= (max((((/* implicit */long long int) ((unsigned short) var_8))), (((var_5) << (((((-703191711680819700LL) + (703191711680819734LL))) - (32LL)))))))));
        arr_3 [(unsigned short)6] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))), (((((/* implicit */int) arr_1 [i_0] [i_0 + 2])) % (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))))));
    }
    var_12 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32501))) / (var_3)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)7)))))) >> (((min((703191711680819699LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))))) - (28865LL))));
}

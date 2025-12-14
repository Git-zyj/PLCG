/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52745
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
    var_14 = ((/* implicit */signed char) var_2);
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)4095))));
        var_16 = ((/* implicit */unsigned char) (unsigned short)61445);
        var_17 = ((var_2) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_4) : (366732371971096445LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (366732371971096451LL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 3]))))) ? ((~(((/* implicit */int) arr_1 [i_0 - 2])))) : ((+(((/* implicit */int) arr_1 [i_0 - 2])))));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1 + 2]))) ? (max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) : (((/* implicit */int) ((arr_3 [i_1 + 1] [i_1 - 1]) >= (arr_3 [i_1 + 1] [i_1 + 1]))))));
        arr_7 [2ULL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)))) : (((arr_5 [i_1]) - (arr_5 [i_1])))))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        arr_12 [(signed char)5] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2]))) >= (((/* implicit */long long int) ((arr_11 [i_2]) ? (((/* implicit */int) arr_9 [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_2])))))));
        var_19 = ((/* implicit */_Bool) (-(min((arr_3 [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) var_13))))));
    }
}

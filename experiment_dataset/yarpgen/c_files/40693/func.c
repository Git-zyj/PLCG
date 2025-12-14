/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40693
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (var_4) : (4294967285U)))))) : (max((((/* implicit */long long int) max((var_7), (var_18)))), (var_8)))));
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((-(((/* implicit */int) var_11)))) != ((+(((/* implicit */int) var_11)))))))));
    var_21 = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) var_5)))))) ? (var_18) : (((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21192))) != (min((arr_1 [(unsigned short)8]), (arr_1 [(short)2])))))));
        var_23 = ((/* implicit */int) max((arr_0 [(signed char)6]), (((/* implicit */unsigned char) (signed char)3))));
        arr_2 [14] [i_0] = ((arr_1 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) 4294967288U)), (0LL)));
        var_25 ^= ((/* implicit */signed char) (!((!(((-8576437345647968826LL) == (((/* implicit */long long int) 7U))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_10 [i_2] |= ((/* implicit */short) arr_7 [i_2]);
        arr_11 [6] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */int) arr_3 [i_2] [i_2]))))) ? (((((/* implicit */int) arr_9 [i_2])) & (((/* implicit */int) (unsigned short)65515)))) : (((/* implicit */int) ((unsigned short) arr_4 [i_2] [i_2])))));
        var_27 = ((/* implicit */unsigned int) ((_Bool) (unsigned char)132));
    }
}

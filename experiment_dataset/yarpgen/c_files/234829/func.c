/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234829
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
    var_11 = ((/* implicit */unsigned short) ((signed char) var_9));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) >> (((min((1089623688), (((/* implicit */int) (signed char)-31)))) + (44)))));
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(signed char)1])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) : (((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) arr_4 [i_1]))))));
        var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((-1089623689), (-771063388)))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((unsigned short) var_6))))), (((/* implicit */int) (!(((1089623666) != (((/* implicit */int) (unsigned short)3984)))))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_7), (((/* implicit */long long int) arr_4 [i_1]))))) ? (((((/* implicit */_Bool) ((unsigned short) 1089623688))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (max((15U), (((/* implicit */unsigned int) -1089623688)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_16 |= ((/* implicit */unsigned long long int) arr_0 [i_2 - 1] [i_2 - 1]);
        arr_9 [i_2] = ((/* implicit */int) (~(min((var_7), (-2LL)))));
    }
    var_17 = ((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned long long int) min((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) min((var_10), (((/* implicit */unsigned short) var_3))))))))));
    var_18 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) var_0)));
}

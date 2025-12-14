/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200020
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
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) (+(((unsigned long long int) ((((/* implicit */unsigned int) 805306368)) - (arr_1 [22ULL]))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) arr_1 [i_0]))), (((((/* implicit */int) var_10)) | (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((((/* implicit */_Bool) (unsigned short)45001)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_6))) << (((((/* implicit */int) arr_0 [i_0 - 2])) - (4631)))))));
        var_12 = ((/* implicit */unsigned short) ((unsigned char) ((long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)18323))))));
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_13 = ((arr_4 [i_1]) ? (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (74817170U)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_7)) : (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3))))))))));
        var_14 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_3 [i_1] [i_1]))))));
    }
    var_15 = ((/* implicit */short) ((unsigned char) (+(((((/* implicit */unsigned long long int) var_3)) ^ (var_6))))));
}

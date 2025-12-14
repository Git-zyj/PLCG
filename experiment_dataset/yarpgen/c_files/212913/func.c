/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212913
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
    var_18 = ((/* implicit */unsigned short) var_17);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned short) var_5)))) - (((arr_2 [i_0 - 1]) + (arr_2 [i_0 + 1])))));
        arr_5 [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        arr_6 [i_0] [i_0] = ((signed char) ((((arr_2 [i_0 + 1]) - (((/* implicit */unsigned long long int) var_17)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_1))))))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) || (var_16)))) - (((/* implicit */int) ((_Bool) var_17)))))) - (((((((/* implicit */long long int) arr_8 [i_1])) - (arr_7 [(_Bool)1]))) - (max((arr_7 [i_1]), (((/* implicit */long long int) var_11))))))));
        arr_10 [i_1] = ((/* implicit */short) ((unsigned short) ((long long int) min((arr_7 [i_1]), (var_17)))));
        arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */int) (signed char)-43)) | (((/* implicit */int) (unsigned short)2040))));
    }
}

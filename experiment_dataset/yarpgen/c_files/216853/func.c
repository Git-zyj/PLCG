/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216853
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
    var_11 = ((/* implicit */_Bool) max((((max((((/* implicit */long long int) var_3)), (var_6))) - (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_3)))))), (var_10)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) min((max((((/* implicit */unsigned int) 1974921634)), (min((var_3), (((/* implicit */unsigned int) 1436121844)))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -1974921634)) == (arr_2 [i_0]))))));
        var_13 = ((/* implicit */long long int) ((max((((/* implicit */int) (unsigned char)255)), (1436121817))) - (((/* implicit */int) ((var_9) != (arr_1 [i_0] [i_0]))))));
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((var_9) >> (((arr_4 [i_1]) - (14353545004663730535ULL)))))) ^ (min((((/* implicit */unsigned long long int) var_7)), (arr_4 [i_1])))));
        var_15 *= max((max((arr_4 [i_1]), (arr_4 [i_1]))), (((/* implicit */unsigned long long int) ((arr_4 [i_1]) == (arr_4 [i_1])))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_6);
}

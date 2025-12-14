/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224848
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((min((max((arr_1 [i_0]), (((/* implicit */int) var_11)))), (max((((/* implicit */int) (signed char)-9)), (var_14))))), ((+(((/* implicit */int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((min((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (var_12)))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_19 = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */int) arr_0 [i_0])), (min((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0]))))));
    }
    var_20 = ((/* implicit */unsigned int) ((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_18)), ((+((-(var_1)))))));
}

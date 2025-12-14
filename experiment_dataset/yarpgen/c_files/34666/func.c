/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34666
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
    var_11 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_6)))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))), (max((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) (unsigned char)10)), (152577895444243230ULL)))))));
    var_12 = max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))), (var_6))), (((/* implicit */unsigned long long int) var_9)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 24; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 1] [i_2])) || (((/* implicit */_Bool) arr_0 [i_0]))))), ((-(((/* implicit */int) var_8))))))), (min((((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) var_9)))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (~(min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
                    arr_10 [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1])) ^ (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))) ? (((/* implicit */int) max((arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_1 + 1] [i_1 - 1] [i_1 + 1])), (arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]))))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */long long int) var_5);
}

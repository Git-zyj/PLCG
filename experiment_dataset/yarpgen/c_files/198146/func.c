/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198146
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
    var_10 *= ((/* implicit */short) min((((((/* implicit */_Bool) (~(var_7)))) ? (2011506047U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2011506055U)) ? (var_7) : (var_7)))))), (((/* implicit */unsigned int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (2011506036U) : (((/* implicit */unsigned int) arr_5 [i_0] [i_1])))))));
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))) >= (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)21))))) - (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (1399515563U) : (arr_2 [i_1]))))))))));
                var_13 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((int) arr_5 [i_1] [i_1]))))) ? ((-(((unsigned int) 16884138518082140115ULL)))) : (max(((((_Bool)1) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))))), ((+(3441430381U)))))));
            }
        } 
    } 
}

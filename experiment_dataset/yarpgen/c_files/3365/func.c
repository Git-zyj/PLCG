/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3365
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
    var_10 = ((/* implicit */unsigned int) (~(var_8)));
    var_11 = ((/* implicit */int) min((2735205204U), (((/* implicit */unsigned int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) var_7);
        var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_1) > (var_1))))) <= (((((/* implicit */_Bool) 1220091900U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3014995918U)))))), (var_3)));
    }
    for (int i_1 = 4; i_1 < 16; i_1 += 3) 
    {
        var_14 = ((max((arr_4 [i_1] [i_1]), (((unsigned int) var_2)))) * (((/* implicit */unsigned int) min(((~(((/* implicit */int) (_Bool)1)))), (((int) arr_3 [i_1]))))));
        var_15 = arr_2 [i_1 - 2] [i_1 - 2];
        var_16 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (arr_2 [i_1] [i_1 + 1]))))) <= (((((/* implicit */_Bool) ((((/* implicit */unsigned int) -825359205)) | (arr_4 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) - (var_6)))))));
    }
}

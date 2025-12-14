/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54351
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
    var_19 += ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [12U] = ((/* implicit */unsigned short) ((int) min((((/* implicit */long long int) ((((/* implicit */int) var_9)) | (arr_0 [i_0])))), (((var_18) % (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
        var_20 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((max((((/* implicit */unsigned int) var_5)), (132120576U))) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))))) <= (((/* implicit */unsigned int) arr_0 [i_1])))))));
        var_22 = ((((/* implicit */_Bool) arr_3 [i_1])) ? (max(((~(4162846719U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))))))) : (((max((((/* implicit */unsigned int) arr_0 [i_1])), (4162846721U))) + (((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (arr_1 [i_1])))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (4083508093U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((arr_0 [i_1]) + (((/* implicit */int) arr_3 [i_1])))))))) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) arr_1 [i_1]))));
    }
}

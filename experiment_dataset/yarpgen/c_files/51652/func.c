/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51652
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
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) var_17)), (var_9)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) 393536468U));
                var_19 = ((/* implicit */unsigned int) arr_1 [i_1 - 3] [i_1 - 3]);
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((arr_0 [i_2]) << (((((/* implicit */int) arr_3 [i_1])) - (37506)))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [i_0] [i_2 - 2] [i_1 - 1])), (arr_0 [i_1])))) ? (((/* implicit */long long int) min((((((/* implicit */int) var_7)) - (((/* implicit */int) var_12)))), (min((((/* implicit */int) (unsigned char)0)), (var_1)))))) : (min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (arr_0 [i_1])))), (min((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0])), (arr_5 [i_0] [i_0] [i_0])))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0]);
                }
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_1 + 1] [i_1 - 3])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (((((/* implicit */_Bool) (unsigned char)110)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_22 = var_11;
    var_23 = ((/* implicit */unsigned long long int) var_4);
}

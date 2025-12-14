/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206233
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max((arr_2 [i_1 - 1]), (arr_2 [i_0 + 1])))), (min((var_15), (arr_3 [i_0 - 2] [i_0 - 2] [i_0])))));
                var_18 = (~(((((/* implicit */_Bool) min((arr_3 [i_0] [i_0 - 3] [i_0]), (var_10)))) ? (-550351703) : (-550351696))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */int) (short)8446)) >= (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (arr_6 [i_1 + 1] [i_2]))))))), (((var_16) / (((/* implicit */long long int) max((((/* implicit */int) var_13)), (var_12)))))))))));
                    arr_7 [i_0] [i_1 + 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (max((arr_3 [i_1 + 1] [i_0 - 3] [i_0]), (arr_3 [i_1 - 1] [i_0 - 3] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-77))))))));
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1]))) : (var_11))))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_9), (((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)64)) : (550351702)))) && (((/* implicit */_Bool) var_13)))))));
}

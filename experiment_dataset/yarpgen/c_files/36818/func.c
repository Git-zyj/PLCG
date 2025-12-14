/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36818
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((((/* implicit */int) min((max((arr_4 [8] [i_0]), (((/* implicit */short) arr_1 [i_0])))), (((/* implicit */short) min((((/* implicit */unsigned char) var_2)), ((unsigned char)246))))))), (((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1]))))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) (short)0)))))) ? (((/* implicit */unsigned long long int) ((arr_2 [i_1 + 1]) ? (((/* implicit */int) var_17)) : (((((/* implicit */int) var_2)) % (((/* implicit */int) (unsigned char)246))))))) : (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (short)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (_Bool)1);
}

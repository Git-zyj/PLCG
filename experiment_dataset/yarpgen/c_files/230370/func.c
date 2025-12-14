/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230370
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
    var_12 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))))) ? (((/* implicit */int) arr_0 [i_1] [i_0])) : (((/* implicit */int) min((var_7), (min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)25))))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_9))))));
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) var_7)) ? (1925045037U) : (536854528U))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (arr_1 [i_0] [(unsigned char)13])))))), (max(((+(var_2))), (((/* implicit */unsigned int) ((arr_1 [i_0] [(_Bool)1]) - (((/* implicit */int) arr_2 [i_1])))))))));
            }
        } 
    } 
}

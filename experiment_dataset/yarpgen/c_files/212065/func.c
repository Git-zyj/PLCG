/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212065
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) ((short) var_19))), (var_12)));
    var_21 = ((int) var_19);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_14)))))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (((((/* implicit */_Bool) var_3)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_2 [i_0])))))))));
                var_23 = ((/* implicit */unsigned short) max((max(((-(arr_5 [i_0] [i_1 + 1]))), (arr_5 [i_1] [i_1 + 1]))), (((/* implicit */unsigned long long int) ((min((var_11), (3208595406U))) > (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1 - 1]))))))))));
            }
        } 
    } 
}

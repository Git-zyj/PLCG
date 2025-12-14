/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212822
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_8))));
    var_20 = ((/* implicit */short) var_18);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 891204355)) || (((/* implicit */_Bool) 15720505601751414972ULL)))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_1]))))) - ((+(arr_1 [i_0] [i_0])))))));
                var_22 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) & (arr_3 [i_0 + 1] [i_0] [i_0 - 1])))) ? (((/* implicit */int) ((max((((/* implicit */unsigned int) (_Bool)1)), (1788057955U))) <= (((/* implicit */unsigned int) (+(891204345))))))) : (((/* implicit */int) var_10))));
            }
        } 
    } 
}

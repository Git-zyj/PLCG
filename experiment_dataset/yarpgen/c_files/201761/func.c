/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201761
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) arr_2 [(short)13] [i_0] [i_1]))))) >> (((min((((arr_1 [i_1]) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (signed char)-108)))), (((/* implicit */int) arr_0 [i_1])))) + (110)))));
                var_11 = ((/* implicit */unsigned char) min((((/* implicit */int) ((arr_1 [i_1]) && (((/* implicit */_Bool) var_6))))), (((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_0)))) + (((/* implicit */int) arr_4 [i_1]))))));
                arr_6 [10ULL] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-108)), (arr_3 [i_1])))) ? (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_2))))) : (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_4 [i_1])))))) * (min(((+(((/* implicit */int) (signed char)-108)))), (((/* implicit */int) (signed char)121))))));
                var_12 ^= (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)84)) - (((/* implicit */int) (unsigned short)13386))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30975)) > ((-(((/* implicit */int) var_1))))));
}

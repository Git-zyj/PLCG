/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53494
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_13);
        arr_3 [i_0] = var_0;
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_7)))))));
    }
    for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) var_6);
        arr_8 [i_1] [i_1 - 1] = ((long long int) max((((/* implicit */unsigned int) arr_5 [i_1 + 1] [i_1 + 1])), (arr_0 [i_1 - 1] [i_1 - 1])));
    }
    for (signed char i_2 = 1; i_2 < 15; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_2]))))) ? (((/* implicit */int) min((arr_1 [i_2]), (arr_5 [i_2] [i_2])))) : ((+(((/* implicit */int) var_2))))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-1))));
    }
    var_19 = ((/* implicit */signed char) min((var_19), ((signed char)0)));
    var_20 |= ((/* implicit */long long int) min(((short)32755), (((/* implicit */short) (_Bool)1))));
    var_21 = ((/* implicit */short) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) ^ ((+(((/* implicit */int) var_17)))))), (((/* implicit */int) var_2))));
}

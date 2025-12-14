/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35354
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
    var_13 = ((/* implicit */unsigned long long int) var_11);
    var_14 = ((/* implicit */int) (~((~(((((/* implicit */_Bool) (unsigned char)253)) ? (var_8) : (var_10)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned int) var_3)), (var_5))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0])), (var_12)))))))));
        var_15 &= ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
    }
    for (short i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) max((arr_4 [i_1] [i_1]), (((/* implicit */long long int) var_1))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) (short)0)))), (((/* implicit */int) ((unsigned char) var_6)))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)14992)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)15571))))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (unsigned char)0))))))));
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) + (((/* implicit */int) ((signed char) (-2147483647 - 1))))));
        arr_10 [i_1] [i_1] = ((/* implicit */short) arr_5 [i_1 + 2]);
    }
}

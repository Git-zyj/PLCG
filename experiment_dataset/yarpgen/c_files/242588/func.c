/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242588
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
    var_20 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1107)) * (((/* implicit */int) var_8))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-88))) / (arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1])) << (((((/* implicit */int) arr_6 [i_1])) - (42)))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) >= (((/* implicit */int) arr_5 [i_1])))))) - (var_4)));
        arr_8 [i_1] [i_1] &= ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)97))))) <= (((/* implicit */int) arr_5 [i_1])));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (short)11327))));
    }
    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) (unsigned char)75)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))))));
}

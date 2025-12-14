/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19218
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((max((arr_2 [i_0 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) -2078000288)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1409571228U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : ((+(arr_0 [i_0]))))))));
        var_19 = ((/* implicit */unsigned short) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : ((+(((/* implicit */int) arr_1 [i_0 - 1]))))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_0), (((/* implicit */unsigned char) var_13))));
    var_21 = ((/* implicit */unsigned int) min((var_15), (((long long int) ((long long int) var_6)))));
}

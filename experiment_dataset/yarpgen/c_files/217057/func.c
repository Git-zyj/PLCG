/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217057
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
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? ((+(var_16))) : (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = (+(((unsigned int) arr_0 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_6)), ((+(arr_2 [i_0] [i_0])))));
    }
}

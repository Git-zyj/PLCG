/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32265
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
    var_11 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((unsigned long long int) var_0)) << (((((var_1) >> (((((/* implicit */int) var_7)) - (50849))))) - (1192463))))))));
    var_12 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_10), (var_8)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (var_5)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)87)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */long long int) ((arr_0 [i_0]) < (arr_0 [i_0])));
            var_14 = ((/* implicit */unsigned char) arr_1 [i_0]);
        }
    }
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210345
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) ^ (arr_3 [i_0])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned char) ((arr_1 [i_0] [i_1]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13177)))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0] [i_1])));
        }
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) <= (((int) ((signed char) var_6)))));
}
